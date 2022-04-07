Imports System.IO

Public Class frmAndroid

  Dim objAndroid As AxSms.Android = New AxSms.Android()

  Private Function UpdateResult(ByVal nErrorCode As Integer) As Integer
    txtResult.Text = nErrorCode.ToString() & ": " & objAndroid.GetErrorDescription(nErrorCode)
    Return nErrorCode
  End Function

  Private Sub UpdateControls()
    If Not objAndroid.IsConnected Then
      btnConnect.Text = "Connect"
      btnSend.Enabled = False
    Else
      btnConnect.Text = "Disconnect"
      btnSend.Enabled = True
    End If
  End Sub

  Private Sub tmrCheckReceive_Tick(sender As Object, e As EventArgs) Handles tmrCheckReceive.Tick
    Dim oMessage As AxSms.Message = objAndroid.ReceiveSms()

    While objAndroid.LastError = 0
      Dim item As ListViewItem = New ListViewItem(New String() {oMessage.FromAddress, oMessage.ReceiveTime, oMessage.Body})
      lvReceivedMessages.Items.Insert(0, item)
      oMessage = objAndroid.ReceiveSms()
    End While

    UpdateControls()
  End Sub

  Private Sub btnConnect_Click(sender As Object, e As EventArgs) Handles btnConnect.Click
    Cursor.Current = Cursors.WaitCursor

    If objAndroid.IsConnected Then
      objAndroid.Disconnect()
    Else
      Dim nPort As Integer = 0

      If Integer.TryParse(txtPort.Text, nPort) = False Then
        MessageBox.Show("The value in 'port' needs to be an integer", "Format error", MessageBoxButtons.OK, MessageBoxIcon.Warning)
        Return
      End If

      objAndroid.Connect(txtIP.Text, nPort)
      If UpdateResult(objAndroid.LastError) <> 0 Then Return
    End If

    UpdateControls()

  End Sub

  Private Sub btnSend_Click(sender As Object, e As EventArgs) Handles btnSend.Click
    Cursor.Current = Cursors.WaitCursor
    Dim oMessage As AxSms.Message = New AxSms.Message()
    oMessage.Body = txtBody.Text
    oMessage.ToAddress = txtToAddress.Text
    objAndroid.SendSms(oMessage)

    If UpdateResult(objAndroid.LastError) = 0 Then
      Dim item As ListViewItem = New ListViewItem(New String() {oMessage.ToAddress, DateTime.Now.ToString(), oMessage.Body})
      lvSentMessages.Items.Insert(0, item)
    End If
  End Sub

  Private Sub btnView_Click(sender As Object, e As EventArgs) Handles btnView.Click
    If File.Exists(txtLogFile.Text) Then
      Process.Start(txtLogFile.Text)
    End If
  End Sub

  Private Sub frmAndroid_Load(sender As Object, e As EventArgs) Handles MyBase.Load
    setupListboxes()
    txtLogFile.Text = Path.GetTempPath() & "Android.log"
    txtLogFile.[ReadOnly] = True
    objAndroid.LogFile = txtLogFile.Text
    txtPort.Text = "7770"
    txtPort.[ReadOnly] = True
    txtIP.Text = ""
    lblInfo.Text = String.Format("Auron SMS Component {0}; Build: {1}; Module: {2}", objAndroid.Version, objAndroid.Build, objAndroid.[Module])
    txtBody.Text = "Hello World!"
    UpdateControls()
    Me.tmrCheckReceive.Enabled = True
    Me.tmrCheckReceive.Interval = 500
  End Sub

  Private Sub setupListboxes()
    lvSentMessages.Columns.Clear()
    lvSentMessages.Columns.Add("Recipient", 115, HorizontalAlignment.Left)
    lvSentMessages.Columns.Add("Time", 115, HorizontalAlignment.Left)
    lvSentMessages.Columns.Add("Message", lvSentMessages.Width - 235, HorizontalAlignment.Left)
    lvReceivedMessages.Columns.Clear()
    lvReceivedMessages.Columns.Add("Sender", 115, HorizontalAlignment.Left)
    lvReceivedMessages.Columns.Add("Time", 115, HorizontalAlignment.Left)
    lvReceivedMessages.Columns.Add("Message", lvReceivedMessages.Width - 235, HorizontalAlignment.Left)
  End Sub

  Private Sub lnkAuronSMSAgentForAndroid_LinkClicked_1(sender As Object, e As LinkLabelLinkClickedEventArgs) Handles lnkAuronSMSAgentForAndroid.LinkClicked
    System.Diagnostics.Process.Start("http://www.auronsoftware.com/products/auron-sms-agent-for-android")
  End Sub
End Class