Imports System.IO
Imports System.Text.RegularExpressions

Module Module1

  Sub Main()
    Dim objHttpServer As AxSms.HttpServer = New AxSms.HttpServer()
    Console.WriteLine("Auron SMS Component {0}" & vbLf & "Build: {1}" & vbLf & "Module: {2}" & vbLf & "License Status: {3}" & vbLf & "License Key: {4}" & vbLf, objHttpServer.Version, objHttpServer.Build, objHttpServer.[Module], objHttpServer.LicenseStatus, objHttpServer.LicenseKey)
    objHttpServer.LogFile = Path.GetTempPath() & "HttpServer.Log"
    Console.WriteLine("Log file used: {0}" & vbLf, objHttpServer.LogFile)
    objHttpServer.Startup()
    Console.WriteLine("Startup, result: " & objHttpServer.LastError & " (" + objHttpServer.GetErrorDescription(objHttpServer.LastError) & ")")

    If objHttpServer.LastError <> 0 Then
      Console.WriteLine("Press <ENTER> to continue.")
      Console.ReadLine()
      Return
    End If

    objHttpServer.AddUrl("http://localhost:8002/API/")
    Console.WriteLine("AddUrl, result: " & objHttpServer.LastError & " (" + objHttpServer.GetErrorDescription(objHttpServer.LastError) & ")")

    If objHttpServer.LastError <> 0 Then
      Console.WriteLine("Press <ENTER> to continue.")
      Console.ReadLine()
      Return
    End If

    System.Diagnostics.Process.Start("http://localhost:8002/API/receivesms.json?from=0031122334455&text=Hello+World")
    Console.WriteLine("Press any key to stop...")

    While objHttpServer.IsStarted AndAlso Not Console.KeyAvailable
      objHttpServer.WaitForRequest(100)

      If objHttpServer.LastError = 0 Then
        Console.WriteLine("Received request for: [" & objHttpServer.RequestUrl & "]")
        objHttpServer.ClearResponse()

        If objHttpServer.RequestUrlPath.StartsWith("/API/receivesms.json") Then
          Dim sFromAddress As String = GetQueryParameter(objHttpServer.RequestUrlQueryString, "from")
          Dim sText As String = GetQueryParameter(objHttpServer.RequestUrlQueryString, "text")

          If sFromAddress = "" OrElse sText = "" Then
            objHttpServer.ResponseCode = 400
            objHttpServer.ResponseReason = "Invalid Request"
            objHttpServer.ResponseBodyString = "<h1>400 - Invalid request!</h1>"
          Else
            objHttpServer.ResponseCode = 200
            objHttpServer.ResponseReason = "OK"
            objHttpServer.SetResponseHeader("Content-Type", "text/json")
            objHttpServer.ResponseBodyString = "{""resultCode"": ""0"", ""resultText"": ""received ok""}"
            Console.WriteLine("Received incoming SMS from: " & sFromAddress & "; text: " & sText)
          End If
        Else
          objHttpServer.ResponseCode = 404
          objHttpServer.ResponseReason = "Not Found"
          objHttpServer.ResponseBodyString = "<h1>404 - Resource not found!</h1>"
        End If

        objHttpServer.SendResponse()

        If objHttpServer.LastError <> 0 Then
          Console.WriteLine("Send reponse error: [" & objHttpServer.GetErrorDescription(objHttpServer.LastError) & "]")
        End If
      End If
    End While

    objHttpServer.Shutdown()
  End Sub

  Private Function GetQueryParameter(ByVal sQueryString As String, ByVal sName As String) As String
    Dim r As Regex = New Regex(sName & "=([^&]*)", RegexOptions.IgnoreCase)
    Dim m = r.Match(sQueryString)

    If m.Success AndAlso m.Groups.Count > 0 Then
      Return m.Groups(1).Value
    Else
      Return ""
    End If
  End Function

End Module
