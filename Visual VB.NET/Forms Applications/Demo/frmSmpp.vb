Imports AxSms
'-----------------------------------------------------------------------
' <copyright file="frmSmpp.vb" company="Auron">
'     Copyright (c) Auron Software - www.auronsoftware.com
' </copyright>
' <author>Dennis van de Giessen</author>
'-----------------------------------------------------------------------
Imports Microsoft.Win32
Imports System.IO
Imports System.Threading

Public Class frmSmpp

  Const NLS_BASE = 1000

  Private objFrmSendAdvanced As frmSmppSendAdvanced
  Private objFrmSmppAdvanced As frmSmppAdvanced
  Private objSmpp As AxSms.Smpp
  Private objSmsMessage As AxSms.Message
  Private objSmsConstants As AxSms.Constants

  Private bInfoMessageShowed As Boolean
  Private nLastUserTag As Integer

  Public Sub New(ByVal strSystemID As String, ByVal strPassword As String, ByVal strServer As String)
    InitializeComponent()

    objFrmSendAdvanced = New frmSmppSendAdvanced()
    objFrmSmppAdvanced = New frmSmppAdvanced()

    objSmpp = New AxSms.Smpp()
    objSmsMessage = New AxSms.Message()
    objSmsConstants = New AxSms.Constants()

    txtSystemID.Text = strSystemID
    txtSystemPassword.Text = strPassword
    txtServer.Text = strServer

    nLastUserTag = 0
  End Sub

  Private Sub frmSmpp_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
    ' Setup the form controls
    fillComboBoxes()
    setupListboxes()
    txtLogFile.Text = Path.GetTempPath() & "Smpp.log"

    ' Set default connection properties
    cbxBindType.SelectedIndex = objSmsConstants.SMPP_BIND_TRANSCEIVER
    cbxDataCoding.SelectedIndex = objSmsConstants.DATACODING_DEFAULT

    ' Set default message properties
    lblInfo.Text = [String].Format("Auron SMS Component {0}; Build: {1}; Module: {2}", objSmpp.Version, objSmpp.Build, objSmpp.[Module])
    txtBody.Text = "Hello World!"

    ' Update control states according to the default settingss
    UpdateControls()

    ' Enable the receive timer. This timer will be used to check the SMPP object to
    ' see if any new message have been received.
    Me.TmrCheckReceive.Enabled = True
    Me.TmrCheckReceive.Interval = 500

    ' Enable the update timer. This timer will be used to check the SMPP object to 
    ' if there any update for sent message.
    Me.TmrCheckUpdate.Enabled = True
    Me.TmrCheckUpdate.Interval = 500
  End Sub

  Private Sub btnConnect_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnConnect.Click
    ' Validate the input.
    Dim nPort As Integer = 0
    If Integer.TryParse(txtServerPort.Text.ToString(), nPort) = False Then
      MessageBox.Show("The value in 'Server port' needs to be an integer", "Format error", MessageBoxButtons.OK, MessageBoxIcon.Warning)

      Return
    End If

    ' Set a wait cursor before connecting and binding. Binding could take a second.
    Cursor.Current = Cursors.WaitCursor

    ' Generate a logfile by setting the logfile property to the specified filename.
    ' Open a connection to the remote server. 

    ' If a connection is established the Smpp component will continue to communicate 
    ' with the remote server in the background. This way sending / receiving SMS messages 
    ' happens asynchronous which greatly improves the possible throughput.
    objSmpp.LogFile = txtLogFile.Text
    objSmpp.UseGsmEncoding = objSmsConstants.SMPP_USEGSMENCODING_INOUTCHARS ' required for national language shift tables to work
    objSmpp.Connect(txtServer.Text, nPort, objFrmSmppAdvanced.ConnectTimeout, cbSecure.Checked)
    If UpdateResult(objSmpp.LastError) <> 0 Then
      ' Failed to connect to server.
      Return
    End If

    ' Create a bind on the server. This is very much like a login. The login-credentials are supplied
    ' together with additional information concerning your SMPP account with the provider.
    objSmpp.Bind(CInt(cbxBindType.SelectedValue), txtSystemID.Text, txtSystemPassword.Text, objFrmSmppAdvanced.SystemType, objFrmSmppAdvanced.InterfaceVersion, objFrmSmppAdvanced.AddressTon,
     objFrmSmppAdvanced.AddressNpi, objFrmSmppAdvanced.AddressRange, objFrmSmppAdvanced.BindTimeout)
    If UpdateResult(objSmpp.LastError) <> 0 Then
      ' There was a problem while binding to the server.
      objSmpp.Disconnect()
      Return
    End If

    ' Reset the cursor. This way we're not stuck with a 'wait-cursor' when displaying an info dialog.
    Cursor.Current = Cursors.[Default]

    ' If the demo gatways is specified, show some additional information to the user.
    If Not bInfoMessageShowed AndAlso txtServer.Text = "gateway.auronsoftware.com" Then
      MessageBox.Show("The gateway.auronsoftware.com server allows you to send out only a few SMS messages, " & "to any destination in the world." & vbLf & "If you need more credits, please apply for it using the following " & "URL: www.auronsoftware.com/support/smscredits", Me.Text, MessageBoxButtons.OK, MessageBoxIcon.Information)
      bInfoMessageShowed = True
    End If

    UpdateControls()
  End Sub

  Private Sub btnDisconnect_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnDisconnect.Click
    ' Set a wait cursor, disconnect could take a second if client needs to unbind first.
    Cursor.Current = Cursors.WaitCursor

    ' If we are still bound on the server, exit gracefully by issuing an 'unbind' first.
    ' Since we are going to disconnect anyway it's not necessary to display the last error.
    If objSmpp.IsBound Then
      objSmpp.Unbind()
    End If

    ' If we are still connected to the server, disconnect.
    If objSmpp.IsConnected Then
      objSmpp.Disconnect()
    End If

    UpdateControls()
  End Sub

  Private Sub btnSend_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnSend.Click
    ' Set the SMS properties from this form. Since we are re-using
    ' the same Message object we can call .clear() to clear all existing
    ' settings.
    objSmsMessage.Clear()

    Dim lDcs As Integer
    lDcs = CInt(cbxDataCoding.SelectedValue)
    If lDcs >= NLS_BASE Then
      lDcs = lDcs - NLS_BASE
      objSmsMessage.DataCoding = 0
      objSmsMessage.LanguageLockingShift = lDcs
      objSmsMessage.LanguageSingleShift = lDcs
    Else
      objSmsMessage.DataCoding = lDcs
    End If

    objSmsMessage.ToAddress = txtToAddress.Text
    objSmsMessage.Body = txtBody.Text

    ' Set the SMS properties from the advanced dialog            
    objSmsMessage.BodyFormat = objFrmSendAdvanced.BodyFormat

    objSmsMessage.FromAddress = objFrmSendAdvanced.FromAddress
    objSmsMessage.FromAddressTON = objFrmSendAdvanced.FromTon
    objSmsMessage.FromAddressNPI = objFrmSendAdvanced.FromNpi
    objSmsMessage.ToAddressTON = objFrmSendAdvanced.ToTon
    objSmsMessage.ToAddressNPI = objFrmSendAdvanced.ToNpi

    objSmsMessage.RequestDeliveryReport = objFrmSendAdvanced.RequestDeliveryReport
    objSmsMessage.HasUdh = objFrmSendAdvanced.HasUdh

    ' Add TLV's to this message
    For Each objTlvInfo As TlvInfo In objFrmSendAdvanced.TlvInfo
      objSmsMessage.SmppAddTlv(objTlvInfo.Tlv)
    Next

    ' Set the 'UserTag'. This property identifies an SMS before the SMS message
    ' has received a message reference. A message reference is a unique identifier
    ' that will be received from the remote server after it accepts the SMS message
    ' to be able to know which messagse the server is referring to when it hands
    ' us the message reference we need to set the usertag property to something that
    ' uniquely identifies the SMS in the scope of this connection. Usually this
    ' can be a database id.
    objSmsMessage.UserTag = System.Threading.Interlocked.Increment(nLastUserTag)

    ' Now lets submit the SMS to the Smpp component. The message will be 
    ' send out to the remote server immediately. The SubmitSms function
    ' does not wait for the response from the server. The response from
    ' the server will be received by the Smpp client in the background at 
    ' some time in the future. The 'TmrCheckUpdate_Tick' function below checks
    ' the Smpp client for updates from the server to see if the message was
    ' delivered.
    objSmpp.SubmitSms(objSmsMessage, objSmsConstants.MULTIPART_ACCEPT)
    If UpdateResult(objSmpp.LastError) <> 0 Then
      ' There was a problem with submitting the SMS message. Return
      ' early so it's not added to the list.
      Return
    End If

    ' Add the new message to the listview. We tag the listview item with the usertag
    ' so we can reference this item again when we have a status update.
    Dim item As New ListViewItem(New [String]() {"<unknown>", objSmsMessage.ToAddress, "<unknown>"})
    item.Tag = objSmsMessage.UserTag
    lvSentMessages.Items.Insert(0, item)
  End Sub

  Private Sub TmrCheckUpdate_Tick(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles TmrCheckUpdate.Tick
    UpdateControls()

    Dim objMessage As AxSms.Message

    ' The FetchSmsUpdate function is used to retrieve updates about SMS
    ' messages that the Smpp component may have received in the background. 
    ' An update can only be fetched once. Calling 'FetchSmsUpdate' removes
    ' the update from the Smpp component. 
    '
    ' The objSms message returned is the orginal SMS message that was submitted
    ' in SubmitSms. As such, if the 'UserTag' property was set, this property 
    ' will still be set to the same value. This way it's easy to match up 
    ' message updates with submitted messages.
    objMessage = objSmpp.FetchSmsUpdate()
    While objSmpp.LastError = 0
      ' For every update, check if we can find the message in the listbox. 
      ' If we can then we need to update the status for this message.
      For Each li As ListViewItem In lvSentMessages.Items
        If CInt(li.Tag) = objMessage.UserTag Then
          ' We've found the SMS message in the listbox. Let's update the status according
          ' to the 'SmppCommandStatus' property. The command status is the most important
          ' indicator returned by the remote SMPP server. If the command status is anything
          ' other than 0 (SMPP_ESME_ROK) this means the SMPP server rejected the SMS message
          ' and it will never arrive at the destination. If the SmppCommandStatus is set to 0 
          ' this means that the SMPP provider will try to deliver the SMS.
          ' 
          ' This is also the first place where the SMS message reference becomes available.
          ' The SMS message reference is issued by the remote SMPP server and will be used
          ' in delivery reports to refer to this message.
          Dim strStatus As [String] = objSmsConstants.SmppEsmeToString(objMessage.SmppCommandStatus)
          li.SubItems(0).Text = objMessage.Reference
          li.SubItems(2).Text = strStatus
        End If
      Next

      objMessage = objSmpp.FetchSmsUpdate()
    End While
  End Sub

  Private Sub TmrCheckReceive_Tick(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles TmrCheckReceive.Tick
    UpdateControls()

    Dim objMessage As AxSms.Message

    ' The receive message fetches message that have been received by the Smpp component in the
    ' background. Once a message is received it's removed from the internal buffer in the Smpp
    ' component.
    '
    ' Deliver reports are received this way as well. Delivery reports are normal SMS messages
    ' that are differently formatted. They have the 'objSmsMessage.SmppIsDeliveryReport' property
    ' set to 'True'.
    objMessage = objSmpp.ReceiveMessage()
    While objSmpp.LastError = 0
      Dim item As New ListViewItem(New String() {objMessage.FromAddress, objMessage.ReceiveTime, objMessage.Body})
      lvReceivedMessages.Items.Insert(0, item)

      ' This is a delivery report. A delivery report should contain the message reference
      ' of the concerning message as well as a status indication. 
      '
      ' Normally the message body of a delivery report should contain this information but
      ' there are no strict rules about the way this body is formatted. Usually the body
      ' will look something like this:
      '
      ' "id:IIIIIIIIII sub:SSS dlvrd:DDD submit date:YYMMDDhhmm done
      '  date:YYMMDDhhmm stat:DDDDDDD err:E Text: . . . . . . . . ."
      '
      ' In addition, most SMPP providers will also include TLV values that contain the message
      ' reference and status. These are: objSmsConstants.SMPP_TLV_RECEIPTED_MESSAGE_ID (String)
      ' and objSmsConstants.SMPP_TLV_MESSAGE_STATE (byte).
      '
      ' For example:
      ' AxSms.Tlv objTlv = objMessage.SmppGetTlv(objSmsConstants.SMPP_TLV_RECEIPTED_MESSAGE_ID);
      ' if (objTlv.ValueAsString == strMessageReference)
      ' {
      '    AxSms.Tlv objState = objMessage.SmppGetTlv(objSmsConstants.SMPP_TLV_MESSAGE_STATE);
      '    String strState = objSmsConstants.SmppMessageStateToString(objState.ValueAsInt8);
      '    Console.WriteLine("Status: " + strState);
      ' }
      '
      ' In this sample delivery reports just show up as received message.
      If objMessage.SmppIsDeliveryReport Then
      End If

      objMessage = objSmpp.ReceiveMessage()
    End While
  End Sub

  Private Sub frmSmpp_FormClosing(ByVal sender As System.Object, ByVal e As System.Windows.Forms.FormClosingEventArgs) Handles MyBase.FormClosing
    ' Set a wait cursor, disconnect could take a second if client needs to unbind first.
    Cursor.Current = Cursors.WaitCursor

    ' If we are still bound on the server, exit gracefully by issuing an 'unbind' first.
    ' Since we are going to disconnect anyway it's not necessary to display the last error.
    If objSmpp.IsBound Then
      objSmpp.Unbind()
    End If

    ' If we are still connected to the server, disconnect.
    If objSmpp.IsConnected Then
      objSmpp.Disconnect()
    End If
  End Sub

  Private Sub btnSendOptions_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnSendOptions.Click
    objFrmSendAdvanced.ShowDialog()
  End Sub

  Private Sub UpdateControls()
    Dim iSystemMode As Integer = CInt(cbxBindType.SelectedValue)
    Dim bSender As Boolean = (iSystemMode = objSmsConstants.SMPP_BIND_TRANSMITTER OrElse iSystemMode = objSmsConstants.SMPP_BIND_TRANSCEIVER)
    Dim bReceiver As Boolean = (iSystemMode = objSmsConstants.SMPP_BIND_RECEIVER OrElse iSystemMode = objSmsConstants.SMPP_BIND_TRANSCEIVER)

    txtServer.Enabled = Not objSmpp.IsConnected
    txtServerPort.Enabled = Not objSmpp.IsConnected
    txtSystemID.Enabled = Not objSmpp.IsConnected
    txtSystemPassword.Enabled = Not objSmpp.IsConnected
    cbxBindType.Enabled = Not objSmpp.IsConnected
    btnAdvancedProviderSettings.Enabled = Not objSmpp.IsConnected

    btnConnect.Enabled = Not objSmpp.IsConnected
    btnDisconnect.Enabled = objSmpp.IsConnected
    txtToAddress.Enabled = objSmpp.IsConnected AndAlso bSender
    txtBody.Enabled = objSmpp.IsConnected AndAlso bSender
    cbxDataCoding.Enabled = objSmpp.IsConnected AndAlso bSender
    btnSend.Enabled = objSmpp.IsConnected AndAlso bSender
    btnSendOptions.Enabled = objSmpp.IsConnected AndAlso bSender
    lvSentMessages.Enabled = objSmpp.IsConnected AndAlso bSender
    btnClearSent.Enabled = objSmpp.IsConnected AndAlso bSender
    lvReceivedMessages.Enabled = objSmpp.IsConnected AndAlso bReceiver
    btnClearReceived.Enabled = objSmpp.IsConnected AndAlso bReceiver

    If txtServer.Text = "gateway.auronsoftware.com" AndAlso objSmpp.IsConnected AndAlso bReceiver Then
      llblUrlNotReceived.Show()
    Else
      llblUrlNotReceived.Hide()
    End If
  End Sub

  Private Function UpdateResult(ByVal nErrorCode As Integer) As Integer
    txtResult.Text = nErrorCode.ToString() & ": " & objSmpp.GetErrorDescription(nErrorCode)
    Return nErrorCode
  End Function

  Private Sub fillComboBoxes()
    Dim dctBindTypes = New Dictionary(Of [String], Integer)()
    dctBindTypes.Add("Transmitter", objSmsConstants.SMPP_BIND_TRANSMITTER)
    dctBindTypes.Add("Receiver", objSmsConstants.SMPP_BIND_RECEIVER)
    dctBindTypes.Add("Transceiver", objSmsConstants.SMPP_BIND_TRANSCEIVER)

    cbxBindType.DisplayMember = "Key"
    cbxBindType.ValueMember = "Value"
    cbxBindType.DataSource = New BindingSource(dctBindTypes, Nothing)

    Dim dctDataCoding = New Dictionary(Of [String], Integer)()
    dctDataCoding.Add("Text", objSmsConstants.DATACODING_DEFAULT)
    dctDataCoding.Add("Unicode", objSmsConstants.DATACODING_UNICODE)
    dctDataCoding.Add("Data", objSmsConstants.DATACODING_8BIT_DATA)
    dctDataCoding.Add("Flash", objSmsConstants.DATACODING_FLASH)
    dctDataCoding.Add("Flash Unicode", objSmsConstants.DATACODING_FLASH Or objSmsConstants.DATACODING_UNICODE)
    dctDataCoding.Add("(NLS) Turkish", NLS_BASE + objSmsConstants.LANGUAGE_SINGLESHIFT_TURKISH)
    dctDataCoding.Add("(NLS) Portuguese", NLS_BASE + objSmsConstants.LANGUAGE_SINGLESHIFT_SPANISH)
    dctDataCoding.Add("(NLS) Spanish", NLS_BASE + objSmsConstants.LANGUAGE_SINGLESHIFT_PORTUGUESE)
    dctDataCoding.Add("(NLS) Bengali", NLS_BASE + objSmsConstants.LANGUAGE_SINGLESHIFT_BENGALI)
    dctDataCoding.Add("(NLS) Gujarati", NLS_BASE + objSmsConstants.LANGUAGE_SINGLESHIFT_GUJARATI)
    dctDataCoding.Add("(NLS) Hindi", NLS_BASE + objSmsConstants.LANGUAGE_SINGLESHIFT_HINDI)
    dctDataCoding.Add("(NLS) Kannada", NLS_BASE + objSmsConstants.LANGUAGE_SINGLESHIFT_KANNADA)
    dctDataCoding.Add("(NLS) Malayalam", NLS_BASE + objSmsConstants.LANGUAGE_SINGLESHIFT_MALAYALAM)
    dctDataCoding.Add("(NLS) Oriya", NLS_BASE + objSmsConstants.LANGUAGE_SINGLESHIFT_ORIYA)
    dctDataCoding.Add("(NLS) Punjabi", NLS_BASE + objSmsConstants.LANGUAGE_SINGLESHIFT_PUNJABI)
    dctDataCoding.Add("(NLS) Tamil", NLS_BASE + objSmsConstants.LANGUAGE_SINGLESHIFT_TAMIL)
    dctDataCoding.Add("(NLS) Telugu", NLS_BASE + objSmsConstants.LANGUAGE_SINGLESHIFT_TELUGU)
    dctDataCoding.Add("(NLS) Urdu", NLS_BASE + objSmsConstants.LANGUAGE_SINGLESHIFT_URDU)

    cbxDataCoding.DisplayMember = "Key"
    cbxDataCoding.ValueMember = "Value"
    cbxDataCoding.DataSource = New BindingSource(dctDataCoding, Nothing)
  End Sub

  Private Sub setupListboxes()
    lvSentMessages.Columns.Clear()
    lvSentMessages.Columns.Add("Reference", 115, HorizontalAlignment.Left)
    lvSentMessages.Columns.Add("Recipient", 115, HorizontalAlignment.Left)
    lvSentMessages.Columns.Add("Status", lvSentMessages.Width - 235, HorizontalAlignment.Left)

    lvReceivedMessages.Columns.Clear()
    lvReceivedMessages.Columns.Add("Sender", 115, HorizontalAlignment.Left)
    lvReceivedMessages.Columns.Add("Time", 115, HorizontalAlignment.Left)
    lvReceivedMessages.Columns.Add("Message", lvReceivedMessages.Width - 235, HorizontalAlignment.Left)
  End Sub

  Private Sub btnClearSent_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnClearSent.Click
    lvSentMessages.Clear()
  End Sub

  Private Sub btnClearReceived_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnClearReceived.Click
    lvReceivedMessages.Clear()
  End Sub

  Private Sub btnView_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnView.Click
    If (File.Exists(txtLogFile.Text)) Then
      Process.Start(txtLogFile.Text)
    End If
  End Sub

  Private Sub btnAdvancedProviderSettings_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnAdvancedProviderSettings.Click
    objFrmSmppAdvanced.ShowDialog()
  End Sub

  Private Sub llblUrlRecipientFormat_LinkClicked(ByVal sender As System.Object, ByVal e As System.Windows.Forms.LinkLabelLinkClickedEventArgs) Handles llblUrlRecipientFormat.LinkClicked
    Process.Start("https://www.auronsoftware.com/knowledge-base/#sms-component")
  End Sub

  Private Sub llblUrlSmppProviders_LinkClicked(ByVal sender As System.Object, ByVal e As System.Windows.Forms.LinkLabelLinkClickedEventArgs) Handles llblUrlSmppProviders.LinkClicked
    Process.Start("https://www.auronsoftware.com/products/smpp-providers/?p=ax008")
  End Sub

  Private Sub llblUrlNotReceived_LinkClicked(ByVal sender As System.Object, ByVal e As System.Windows.Forms.LinkLabelLinkClickedEventArgs) Handles llblUrlNotReceived.LinkClicked
    Process.Start("https://www.auronsoftware.com/knowledge-base/#sms-component")
  End Sub
End Class