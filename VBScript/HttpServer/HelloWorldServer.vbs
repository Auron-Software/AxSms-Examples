' ********************************************************************
'
' Auron SMS Component
'
' Host a simple 'Hello, World' web page.
'
' (c) Copyright Auron Software - www.auronsoftware.com
'
' ********************************************************************

Set objHttpServer = CreateObject("AxSms.HttpServer")
Set objShell = CreateObject("WScript.Shell")

' A license key is required to unlock this component after the trial period has expired.
' Assign the LicenseKey property every time a new instance of this component is created (see code below). 
' Alternatively, the LicenseKey property can be set automatically. This requires the license key to be stored in the registry.
' For details, see manual, chapter "Product Activation".
' objHttp.LicenseKey = "XXXXX-XXXXX-XXXXX"

' Component info
Wscript.Echo "Auron SMS Component " & objHttpServer.Version
Wscript.Echo "Build: " & objHttpServer.Build & vbCrLf & "Module: " & objHttpServer.Module
Wscript.Echo "License Status: " & objHttpServer.LicenseStatus & vbCrLf & "License Key: " & objHttpServer.LicenseKey & vbCrLf

' Set Logfile
Set objFso = CreateObject("Scripting.FileSystemObject")
objHttpServer.LogFile = objFso.GetSpecialFolder(2) & "\HttpServer.log"
WScript.Echo "Log file: " & objHttpServer.LogFile

' Startup HTTP Server
objHttpServer.Startup
WScript.Echo "Startup, result: " & objHttpServer.LastError & " (" & objHttpServer.GetErrorDescription(objHttpServer.LastError) & ")"
If objHttpServer.LastError <> 0 Then
  WScript.Quit 1
End If

' Add a URL to listen to
objHttpServer.AddUrl "http://localhost:8002/Hello/"
WScript.Echo "AddUrl, result: " & objHttpServer.LastError & " (" & objHttpServer.GetErrorDescription(objHttpServer.LastError) & ")"

' Start your default browser in the background and open this 'Hello, World!' page.
objShell.Run "http://localhost:8002/Hello/", 1, 0

' Listen and server pages
While objHttpServer.IsStarted
  ' Test for an existing request or wait a maximum of 100 milliseconds to fetch a new one
  objHttpServer.WaitForRequest(100)
  
  If objHttpServer.LastError = 0 Then
    ' Incoming request received; Print some information about the request
    WScript.Echo "Recieve request for: [" & objHttpServer.RequestUrl & "]"
    WScript.Echo "From: [" & objHttpServer.RequestIP & "]: Port: [" & objHttpServer.RequestPort & "]"
    WScript.Echo "Request Path: [" & objHttpServer.RequestUrlPath & "]"
    WScript.Echo "Request Host: [" & objHttpServer.RequestUrlHost & "]"
    WScript.Echo "Request Query: [" & objHttpServer.RequestUrlQueryString & "]"
    WScript.Echo "Request Verb: [" & objHttpServer.RequestVerb & "]"
    WScript.Echo "Request BodyString: [" & objHttpServer.RequestBodyString & "]"
    WScript.Echo "Request BodyBase64: [" & objHttpServer.RequestBodyBase64 & "]"
    WScript.Echo "Request Headers: [" & objHttpServer.RequestHeaders & "]"
    WScript.Echo "Request Connection: [" & objHttpServer.GetRequestHeader("Connection") & "]"
    WScript.Echo
    
    ' Respond with a 'Hello, World!' web page
    objHttpServer.ClearResponse
    objHttpServer.ResponseCode = 200
    objHttpServer.ResponseReason = "OK"
    objHttpServer.SetResponseHeader "Content-Type", "text/html"
    objHttpServer.ResponseBodyString = "<h1>Hello, World!</h1>"
    objHttpServer.SendResponse
    If objHttpServer.LastError <> 0 Then 
      WScript.Echo "Send reponse error: [" & _
        objHttpServer.GetErrorDescription(objHttpServer.LastError) & "]"
      WScript.Quit 1
    End If
  End If
WEnd

objHttpServer.Shutdown