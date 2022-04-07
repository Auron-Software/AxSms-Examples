' ********************************************************************
'
' Auron SMS Component
'
' Host a simple SMS API web page.
'
' (c) Copyright Auron Software - www.auronsoftware.com
'
' This is an example of an API endpoint used to receive incoming SMS
' messages from your HTTP provider.
' 
' Simulate an incoming SMS delivery using this URL:
' http://localhost:8002/API/receivesms.json?from=0031122334455&text=Hello+World
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
objHttpServer.AddUrl "http://localhost:8002/API/"
WScript.Echo "AddUrl, result: " & objHttpServer.LastError & " (" & objHttpServer.GetErrorDescription(objHttpServer.LastError) & ")"

' Start your default browser in the background and simulate an SMS delivery
objShell.Run "http://localhost:8002/API/receivesms.json?from=0031122334455&text=Hello+World", 1, 0

' Listen and server pages
While objHttpServer.IsStarted
  ' Test for an existing request or wait a maximum of 100 milliseconds to fetch a new one
  objHttpServer.WaitForRequest(100)
  
  If objHttpServer.LastError = 0 Then
    ' Incoming request received; Print some information about the request
    WScript.Echo "Received request for: [" & objHttpServer.RequestUrl & "]"
    
    ' test to see if they are querying the right URL
    objHttpServer.ClearResponse    
    If InStr(1, objHttpServer.RequestUrlPath, "/API/receivesms.json", 1) = 1 Then 
      ' gather URL parameters
      sFromAddress = GetQueryParameter(objHttpServer.RequestUrlQueryString, "from")
      sText = GetQueryParameter(objHttpServer.RequestUrlQueryString, "text")
      
      If sFromAddress = "" Or sText = "" Then
        ' They forgot one or more parameters
        objHttpServer.ResponseCode = 400
        objHttpServer.ResponseReason = "Invalid Request"
        objHttpServer.ResponseBodyString = "<h1>400 - Invalid request!</h1>" & _
          "<p>(use: http://localhost:8002/API/receivesms.json?to=0031122334455&text=Hello+World)</p>"      
      Else
        ' Everything is in order we've received an SMS message!
        objHttpServer.ResponseCode = 200
        objHttpServer.ResponseReason = "OK"
        objHttpServer.SetResponseHeader "Content-Type", "text/json"
        objHttpServer.ResponseBodyString = "{""resultCode"": ""0"", ""resultText"": ""received ok""}"
        
        WScript.Echo "Received incoming SMS from: " & sFromAddress & "; text: " & sText 
      End If          
    Else
      ' Invalid path; send a 404
      objHttpServer.ResponseCode = 404
      objHttpServer.ResponseReason = "Not Found"
      objHttpServer.ResponseBodyString = "<h1>404 - Resource not found!</h1>" & _
        "<p>(use: http://localhost:8002/API/receivesms.json?to=0031122334455&text=Hello+World)</p>"
    End If            
    
    objHttpServer.SendResponse
    If objHttpServer.LastError <> 0 Then 
      WScript.Echo "Send reponse error: [" & _
        objHttpServer.GetErrorDescription(objHttpServer.LastError) & "]"
      WScript.Quit 1
    End If
  End If
WEnd

objHttpServer.Shutdown

Function GetQueryParameter(sQueryString, sParameter)
  GetQueryParameter = ""

  Set re = New RegExp
  re.Pattern = sParameter & "=([^&]*)"
  Re.IgnoreCase = True
  Set oMatches = Re.Execute(sQueryString)
  If oMatches.Count > 0 Then 
    Set oMatch = oMatches(0)
    If oMatch.SubMatches.Count > 0 Then       
      GetQueryParameter = oMatch.SubMatches(0)      
    End If    
  End If
End Function