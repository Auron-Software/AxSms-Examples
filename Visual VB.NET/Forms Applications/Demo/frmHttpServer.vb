Imports System.IO

Public Class frmHttpServer

  Dim objHttpServer As AxSms.HttpServer = New AxSms.HttpServer()

  Private Sub UpdateControls()
    Dim bIsStarted As Boolean = objHttpServer.IsStarted

    btnStartStop.Text = If(bIsStarted, "Stop", "Start")
    btnBrowse.Enabled = bIsStarted
    txtUrl.Enabled = Not bIsStarted
    lvRequestLog.Enabled = bIsStarted
    txtLastRequestBody.Enabled = bIsStarted
    txtLastRequestHeaders.Enabled = bIsStarted
  End Sub

  Private Sub setupListboxes()
    lvRequestLog.Clear()
    lvRequestLog.Columns.Add("Url", 400)
  End Sub

  Private Function UpdateResult(ByVal nErrorCode As Integer) As Integer
    txtResult.Text = nErrorCode.ToString() & ": " & objHttpServer.GetErrorDescription(nErrorCode)
    Return nErrorCode
  End Function


  Private Sub frmHttpServer_Load(sender As Object, e As EventArgs) Handles MyBase.Load
    setupListboxes()

    txtLogFile.Text = Path.GetTempPath() & "HttpServer.log"
    txtLogFile.[ReadOnly] = True

    objHttpServer.LogFile = txtLogFile.Text
    lblInfo.Text = String.Format("Auron SMS Component {0}; Build: {1}; Module: {2}", objHttpServer.Version, objHttpServer.Build, objHttpServer.[Module])

    UpdateControls()

    Me.tmrCheckReceive.Enabled = True
    Me.tmrCheckReceive.Interval = 100
  End Sub

  Private Sub tmrCheckReceive_Tick(sender As Object, e As EventArgs) Handles tmrCheckReceive.Tick
    If Not objHttpServer.IsStarted Then Return
    objHttpServer.WaitForRequest(0)

    If objHttpServer.LastError <> 0 Then Return

    lvRequestLog.Items.Add(objHttpServer.RequestUrl)
    txtLastRequestHeaders.Text = objHttpServer.RequestHeaders

    If objHttpServer.RequestBodyIsBinary Then
      txtLastRequestBody.Text = "<binary request body>"
    ElseIf objHttpServer.RequestBodyString = "" Then
      txtLastRequestBody.Text = "<empty request body>"
    Else
      txtLastRequestBody.Text = objHttpServer.RequestBodyString
    End If

    objHttpServer.ClearResponse()
    objHttpServer.ResponseCode = 200
    objHttpServer.ResponseReason = "OK"
    objHttpServer.ResponseBodyString = "<html><body><h1>Welcome to the Auron Software HTTP Server API demo</h1>" & "<p>Your request has been logged.</p></body></html>"
    objHttpServer.SendResponse()
  End Sub

  Private Sub btnStartStop_Click(sender As Object, e As EventArgs) Handles btnStartStop.Click
    If objHttpServer.IsStarted Then
      objHttpServer.Shutdown()
      setupListboxes()
      txtLastRequestBody.Text = ""
      txtLastRequestHeaders.Text = ""
      txtResult.Text = ""
      UpdateControls()
      Return
    End If

    objHttpServer.Startup()
    If UpdateResult(objHttpServer.LastError) <> 0 Then Return
    objHttpServer.AddUrl(txtUrl.Text)

    If UpdateResult(objHttpServer.LastError) <> 0 Then
      objHttpServer.Shutdown()
      Return
    End If

    UpdateControls()
  End Sub

  Private Sub btnBrowse_Click(sender As Object, e As EventArgs) Handles btnBrowse.Click
    Process.Start(txtUrl.Text)
  End Sub

  Private Sub btnView_Click(sender As Object, e As EventArgs) Handles btnView.Click
    If File.Exists(txtLogFile.Text) Then
      Process.Start(txtLogFile.Text)
    End If
  End Sub

  Private Sub lnkFindOutMore_LinkClicked(sender As Object, e As LinkLabelLinkClickedEventArgs) Handles lnkFindOutMore.LinkClicked
    Process.Start("https://www.auronsoftware.com/kb/sms-component/api-reference/axsms-httpserver/")
  End Sub
End Class