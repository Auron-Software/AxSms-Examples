Imports AxSms
Imports System.IO
Imports System.Threading

Public Class frmSmppServer

  Private objServer As AxSms.SmppServer
  Private objSmsConstants As AxSms.Constants
  Private objFrmSendAdvanced As frmSmppSendAdvanced
  Private objFrmSmppClient As frmSmpp

  Private dctSystemIds As Dictionary(Of Integer, [String])

  Private nClientsCount As Integer = 0
  Private nLastUserTag As Integer = 0

  Public Sub New()
    InitializeComponent()
    objServer = New AxSms.SmppServer()
    objSmsConstants = New AxSms.Constants()
    objFrmSendAdvanced = New frmSmppSendAdvanced()
    dctSystemIds = New Dictionary(Of Integer, [String])()
  End Sub

  Private Sub frmSmppServer_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
    fillComboboxes()
    setupListboxes()

    lblInfo.Text = [String].Format("Auron SMS Component {0}; Build: {1}; Module: {2}", objServer.Version, objServer.Build, objServer.[Module])

    txtPort.Text = "2775"
    txtLogFile.Text = System.IO.Path.GetTempPath() & "SmppServer.log"
    cbxDataCoding.SelectedValue = objSmsConstants.DATACODING_DEFAULT
    cbxIpVersion.SelectedValue = objSmsConstants.SMPP_IPVERSION_BOTH
  End Sub

  Private Sub btnStartServer_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnStartServer.Click
    ' Set a wait cursor. This should not take much more than a second though.
    Cursor.Current = Cursors.WaitCursor

    Dim nPort As Integer = 0

    ' Validate the port number
    Try
      nPort = Integer.Parse(txtPort.Text)
    Catch generatedExceptionName As FormatException
      MessageBox.Show("The port number should be an integer.", "Format Error", MessageBoxButtons.OK, MessageBoxIcon.Warning)
      Return
    End Try

    ' Set the log file; This will contain the entire communication log
    objServer.LogFile = txtLogFile.Text

    ' The Smpp server can generate message references automatically. This is a simple 8 character numerical reference, starting
    ' at 0 and incremented by 1 for every message. When using the automatically generated references set the start offset here
    ' to be sure that clients are not receiving duplicate message references.
    objServer.LastReference = 0

    ' Start the SMPP server. This starts a background thread which listens on the specified port for incoming connections.
    ' It's possible to start the server to listen to either IPv4, IPv6 or both. The 'Both' option is a so called 'dual stack'
    ' implementation. It opens 2 sockets and listens on both.
    objServer.Start(nPort, CInt(cbxIpVersion.SelectedValue), CStr(cbxCertificate.SelectedValue))

    ' Check if the starting the Smpp server was successfull. If not, set the message in the
    ' bottom of the dialog.
    UpdateResult(objServer.LastError)

    UpdateControls()
  End Sub

  Private Sub tmrHandleSessions_Tick(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles tmrHandleSessions.Tick
    ' If the server is not started then there's nothing to do here.
    If objServer.IsStarted = False Then
      Return
    End If

    ' To manage the server we need to continuously iterate over all 
    ' connected sessions. Each session represents a connected SMPP client.
    Dim objSession As AxSms.SmppSession = objServer.GetFirstSession()
    While objServer.LastError = 0
      ' First, make sure that the session is listed in the session listview.
      ' If it's not listed, add it.
      If Not lvSessions.Items.ContainsKey(objSession.Id.ToString()) Then
        RegisterSession(objSession)
      End If

      ' This session is currently trying to bind to the server. This is where
      ' the credentials should be checked.
      If objSession.ConnectionState = objSmsConstants.SMPP_SESSIONSTATE_BINDING Then
        ' In the sample we're going to grant access to all session. In your own
        ' application you will likely want to check to see if this is a trusted
        ' client. All of the bind properties can be access and reviewed.
        'objSession.SystemId;
        'objSession.Password;
        'objSession.SystemType;
        'objSession.AddressRange;
        'etc..
        ' If RespondToBind is called with anything other than 0 the SMPP server
        ' will disconnect immediately after sending the response code.

        ' also set default character encoding to be GSM character set. This way
        ' national language shift tables are supported as well.
        objSession.UseGsmEncoding = objSmsConstants.SMPP_USEGSMENCODING_INOUTCHARS
        objSession.RespondToBind(objSmsConstants.SMPP_ESME_ROK)
      End If

      ' See if this session has tried to submit any SMS messages. For all
      ' SMS messages the server needs to respond on whether the message will
      ' be accepted.
      Dim objMessage As AxSms.Message = objSession.ReceiveSubmitSms()
      While objSession.LastError = 0
        ' For the demonstration purposes we're going to allow any and all
        ' messages without checking them.
        objMessage.SmppCommandStatus = objSmsConstants.SMPP_ESME_ROK

        ' The message reference does not need to be set explicity since
        ' the server automatically generates a message reference and sets
        ' it in the objMessage.Reference property.
        '
        ' To generate a custom message reference set it here:
        ' objMessage.Reference = ".."

        objSession.RespondToSubmitSms(objMessage)

        ' If a message requests a delivery report the server should try
        ' to report when there's information about the SMS delivery status.
        If objMessage.RequestDeliveryReport Then
          ' For the demonstration we use the build-in method 'DeliverReport'
          ' This is convenience function to quickly generate a deliver report.
          ' out of an existing SMS message. It's also possible to construct
          ' an SMS message and use the objSession.DeliverSms message for
          ' more flexibilty. Make sure objMessage.SmppIsDeliveryReport
          ' is set on a custom delivery report message.
          objMessage.SmppStatus = objSmsConstants.SMPP_MESSAGESTATE_DELIVERED
          objSession.DeliverReport(objMessage)
        End If

        ' Pass the message through the internal SMS assembler. This assembles multipart message if neccisary.
        objSession.AssembleSms(objMessage)

        objMessage = objSession.ReceiveSubmitSms()
      End While

      ' Get complete messages. These are the messages that are entered through the previous 'AssembleSms' call.
      objMessage = objSession.GetAssembledSms(False)
      While objSession.LastError = 0
        Dim lvi As New ListViewItem(New [String]() {"In", objSession.SystemId, objMessage.ToAddress, objMessage.Reference, "Received", objMessage.Body})
        lvMessages.Items.Add(lvi)
        objMessage = objSession.GetAssembledSms(False)
      End While

      ' The session could query the status of a specific SMS message. This functionality
      ' can be used on servers that need to be backwards compatible with SMPP 3.3 systems.
      ' For the demonstration we don't allow QuerySms commands.
      objMessage = objSession.ReceiveQuerySms()
      While objSession.LastError = 0
        objMessage.SmppCommandStatus = objSmsConstants.SMPP_ESME_RINVCMDID
        objSession.RespondToQuerySms(objMessage)
        objMessage = objSession.ReceiveQuerySms()
      End While

      ' We need to check all responses the Session has had on our message deliveries
      objMessage = objSession.ReceiveDeliverResponse()
      While objSession.LastError = 0
        ' For this example we assume the client is able to accept all messages
        ' we send. The client could recject a message with a reponse code like
        ' SMPP_ESME_RMSGQFUL, which requires us to re-send until the validity
        ' period expires.
        objMessage = objSession.ReceiveDeliverResponse()
      End While

      objSession = objServer.GetNextSession()
    End While

    ' Remove the closed sessions from the list view
    objSession = objServer.GetClosedSession()
    While objServer.LastError = 0
      lvSessions.Items.RemoveByKey(objSession.Id.ToString())
      objSession = objServer.GetClosedSession()
    End While

    UpdateControls()
  End Sub

  Private Sub btnDeliver_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnDeliver.Click
    ' Don't do anything if there are no sessions connected
    If cbxSystemID.Items.Count <= 0 Then
      Return
    End If

    Dim objSms As New AxSms.Message()

    ' Set properties
    objSms.ToAddress = txtToAddress.Text
    objSms.DataCoding = CInt(cbxDataCoding.SelectedValue)
    objSms.Body = txtBody.Text

    ' Set the SMS properties from the advanced dialog            
    objSms.BodyFormat = objFrmSendAdvanced.BodyFormat

    objSms.FromAddress = objFrmSendAdvanced.FromAddress
    objSms.FromAddressTON = objFrmSendAdvanced.FromTon
    objSms.FromAddressNPI = objFrmSendAdvanced.FromNpi
    objSms.ToAddressTON = objFrmSendAdvanced.ToTon
    objSms.ToAddressNPI = objFrmSendAdvanced.ToNpi

    objSms.RequestDeliveryReport = objFrmSendAdvanced.RequestDeliveryReport
    objSms.HasUdh = objFrmSendAdvanced.HasUdh

    ' Add TLV's to this message
    For Each objTlvInfo As TlvInfo In objFrmSendAdvanced.TlvInfo
      objSms.SmppAddTlv(objTlvInfo.Tlv)
    Next

    ' Set a usertag for the SMS message. This way, in the tmrHandleSessions function,
    ' where the deliver reponses are checked, we can see if this message was 
    ' accepted by the client session.
    objSms.UserTag = System.Threading.Interlocked.Increment(nLastUserTag)

    ' Get the session object for the selected system id.
    Dim objSession As AxSms.SmppSession = objServer.GetSession(CInt(cbxSystemID.SelectedValue))
    If UpdateResult(objServer.LastError) <> 0 Then
      Return
    End If

    ' This schedules the SMS for immediate delivery on that session. The 
    ' tmrHandleSessions timer function peridically checks the delivery responses
    ' to make sure the session has accepted this message.
    objSession.DeliverSms(objSms)

    ' If there was a problem delivering the message don't add it to the list view
    If UpdateResult(objServer.LastError) <> 0 Then
      Return
    End If

    Dim lvi As New ListViewItem(New [String]() {"Out", objSession.SystemId, objSms.ToAddress, objSms.Reference, "Sent", objSms.Body})
    lvMessages.Items.Add(lvi)
  End Sub

  Private Sub btnStopServer_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnStopServer.Click
    ' Set a wait cursor. This should not take much more than a second though.
    Cursor.Current = Cursors.WaitCursor

    ' This stops the Smpp server. All connected session will be disconnected and
    ' the Smpp component background thread will be stopped.
    objServer.Stop()
    lvSessions.Items.Clear()

    UpdateControls()
  End Sub



  ' Add a new session to the UI
  Private Sub RegisterSession(ByVal objSession As AxSms.SmppSession)
    ' Add the new session to the sessions listbox
    Dim lvi As New ListViewItem(New [String]() {objSession.Ip, Convert.ToString(objSession.Port), objSession.SystemId})
    lvi.Tag = objSession
    lvi.Name = objSession.Id.ToString()
    lvSessions.Items.Add(lvi)

    ' Add the new session to the systemid's combobox
    dctSystemIds.Add(objSession.Id, objSession.SystemId)

    ' Refresh combobox items
    cbxSystemID.DisplayMember = "Value"
    cbxSystemID.ValueMember = "Key"
    cbxSystemID.DataSource = New BindingSource(dctSystemIds, Nothing)
    cbxSystemID.Refresh()
  End Sub

  Private Sub btnAddClient_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnAddClient.Click
    ' Calls the StartNewSmppClient function in a different thread. The StartNewSmppClient
    ' function starts and connects a new Smpp client form to this Smpp server instance.
    Dim thread As New Thread(New ThreadStart(AddressOf StartNewSmppClient))
    thread.Start()
  End Sub

  Private Sub StartNewSmppClient()
    ' The new client will automatically connect to this SMPP. The username and password
    ' does not matter since this sample will not validate any binds.
    nClientsCount += 1
    objFrmSmppClient = New frmSmpp("Client" & nClientsCount, "password", "127.0.0.1")
    objFrmSmppClient.ShowDialog()
  End Sub

  Private Sub frmSmppServer_FormClosing(ByVal sender As System.Object, ByVal e As System.Windows.Forms.FormClosingEventArgs) Handles MyBase.FormClosing
    objServer.Stop()
  End Sub

  Private Sub UpdateControls()
    grpSendMessage.Enabled = objServer.IsStarted

    btnStartServer.Enabled = Not objServer.IsStarted
    txtPort.Enabled = Not objServer.IsStarted
    cbxIpVersion.Enabled = Not objServer.IsStarted
    cbxCertificate.Enabled = Not objServer.IsStarted

    btnStopServer.Enabled = objServer.IsStarted
    grpIncommingMessages.Enabled = objServer.IsStarted
    grpSessions.Enabled = objServer.IsStarted
    tmrHandleSessions.Enabled = objServer.IsStarted
  End Sub

  Private Function UpdateResult(ByVal nErrorCode As Integer) As Integer
    txtResult.Text = nErrorCode.ToString() & ": " & objServer.GetErrorDescription(nErrorCode)
    Return nErrorCode
  End Function

  Private Sub fillComboboxes()
    Dim dctDataCoding = New Dictionary(Of [String], Integer)()
    dctDataCoding.Add("Text", objSmsConstants.DATACODING_DEFAULT)
    dctDataCoding.Add("Unicode", objSmsConstants.DATACODING_UNICODE)
    dctDataCoding.Add("Data", objSmsConstants.DATACODING_8BIT_DATA)
    dctDataCoding.Add("Flash", objSmsConstants.DATACODING_FLASH)
    dctDataCoding.Add("Flash Unicode", objSmsConstants.DATACODING_FLASH Or objSmsConstants.DATACODING_UNICODE)

    cbxDataCoding.DisplayMember = "Key"
    cbxDataCoding.ValueMember = "Value"
    cbxDataCoding.DataSource = New BindingSource(dctDataCoding, Nothing)

    Dim dctIpVersion = New Dictionary(Of [String], Integer)()
    dctIpVersion.Add("IPv6 And IPv4", objSmsConstants.SMPP_IPVERSION_BOTH)
    dctIpVersion.Add("IPv6 Only", objSmsConstants.SMPP_IPVERSION_6)
    dctIpVersion.Add("IPv4 Only", objSmsConstants.SMPP_IPVERSION_4)

    cbxIpVersion.DisplayMember = "Key"
    cbxIpVersion.ValueMember = "Value"
    cbxIpVersion.DataSource = New BindingSource(dctIpVersion, Nothing)

    Dim oSmppServer As AxSms.SmppServer = New AxSms.SmppServer
    Dim dctCertificate = New Dictionary(Of String, String)
    dctCertificate.Add("<< Not Secured >>", "")
    oSmppServer.CertificateStore = objSmsConstants.SMPP_CERTIFICATESTORE_CURRENTUSER
    Dim sCertificate = oSmppServer.FindFirstMyServerCertificate

    While (oSmppServer.LastError = 0)
      dctCertificate.Add(sCertificate, sCertificate)
      sCertificate = oSmppServer.FindNextMyServerCertificate
    End While

    cbxCertificate.DisplayMember = "Key"
    cbxCertificate.ValueMember = "Value"
    cbxCertificate.DataSource = New BindingSource(dctCertificate, Nothing)

  End Sub

  Private Sub setupListboxes()
    lvSessions.Columns.Clear()
    lvSessions.Columns.Add("Client IP", 230, HorizontalAlignment.Left)
    lvSessions.Columns.Add("Port", 115, HorizontalAlignment.Left)
    lvSessions.Columns.Add("SystemId", lvSessions.Width - 350, HorizontalAlignment.Left)

    lvMessages.Columns.Clear()
    lvMessages.Columns.Add("Dir.", 40, HorizontalAlignment.Left)
    lvMessages.Columns.Add("SystemID", 90, HorizontalAlignment.Left)
    lvMessages.Columns.Add("ToAddress", 85, HorizontalAlignment.Left)
    lvMessages.Columns.Add("Reference", 75, HorizontalAlignment.Left)
    lvMessages.Columns.Add("State", 75, HorizontalAlignment.Left)
    lvMessages.Columns.Add("Body", lvMessages.Width - 369, HorizontalAlignment.Left)
  End Sub

  Private Sub btnSendOptions_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnSendOptions.Click
    objFrmSendAdvanced.ShowDialog()
  End Sub

  Private Sub btnView_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnView.Click
    If (File.Exists(txtLogFile.Text)) Then
      Process.Start(txtLogFile.Text)
    End If
  End Sub

  Private Sub llblUrlRecipientFormat_LinkClicked(ByVal sender As System.Object, ByVal e As System.Windows.Forms.LinkLabelLinkClickedEventArgs) Handles llblUrlRecipientFormat.LinkClicked
    Process.Start("https://www.auronsoftware.com/knowledge-base/#sms-component")
  End Sub
End Class