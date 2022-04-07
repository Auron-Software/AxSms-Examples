// ' ********************************************************************
// '
// ' Auron SMS Component
// '
// ' Host a simple 'Hello, World' web page.
// '
// ' (c) Copyright Auron Software - www.auronsoftware.com
// '
// ' ********************************************************************

objHttpServer = new ActiveXObject("AxSms.HttpServer")
objShell = new ActiveXObject("WScript.Shell")

// ' A license key is required to unlock this component after the trial period has expired.
// ' Assign the LicenseKey property every time a new instance of this component is created (see code below). 
// ' Alternatively, the LicenseKey property can be set automatically. This requires the license key to be stored in the registry.
// ' For details, see manual, chapter "Product Activation".
// ' objHttp.LicenseKey = "XXXXX-XXXXX-XXXXX"

// ' Component info
WScript.Echo("Auron SMS Component " + objHttpServer.Version)
WScript.Echo("Build: " + objHttpServer.Build + "\r\n" + "Module: " + objHttpServer.Module)
WScript.Echo("License Status: " + objHttpServer.LicenseStatus + "\r\n" + "License Key: " + objHttpServer.LicenseKey + "\r\n")

// ' Set Logfile
objFso = new ActiveXObject("Scripting.FileSystemObject")
objHttpServer.LogFile = objFso.GetSpecialFolder(2) + "\HttpServer.log"
WScript.Echo("Log file: " + objHttpServer.LogFile)

// ' Startup HTTP Server
objHttpServer.Startup()
WScript.Echo("Startup, result: " + objHttpServer.LastError + " (" + objHttpServer.GetErrorDescription(objHttpServer.LastError) + ")")
if (objHttpServer.LastError != 0)
  WScript.Quit(1)

// ' Add a URL to listen to
objHttpServer.AddUrl("http://localhost:8002/Hello/")
WScript.Echo("AddUrl, result: " + objHttpServer.LastError + " (" + objHttpServer.GetErrorDescription(objHttpServer.LastError) + ")")

// ' Start your default browser in the background and open this // 'Hello, World!// ' page.
objShell.Run("http://localhost:8002/Hello/", 1, 0)

// ' Listen and server pages
while(objHttpServer.IsStarted)
{
  // ' Test for an existing request or wait a maximum of 100 milliseconds to fetch a new one
  objHttpServer.WaitForRequest(100)
  
  if (objHttpServer.LastError == 0)
  {  
    // ' Incoming request received; Print some information about the request
    WScript.Echo("Recieve request for: [" + objHttpServer.RequestUrl + "]")
    WScript.Echo("From: [" + objHttpServer.RequestIP + "]: Port: [" + objHttpServer.RequestPort + "]")
    WScript.Echo("Request Path: [" + objHttpServer.RequestUrlPath + "]")
    WScript.Echo("Request Host: [" + objHttpServer.RequestUrlHost + "]")
    WScript.Echo("Request Query: [" + objHttpServer.RequestUrlQueryString + "]")
    WScript.Echo("Request Verb: [" + objHttpServer.RequestVerb + "]")
    WScript.Echo("Request BodyString: [" + objHttpServer.RequestBodyString + "]")
    WScript.Echo("Request BodyBase64: [" + objHttpServer.RequestBodyBase64 + "]")
    WScript.Echo("Request Headers: [" + objHttpServer.RequestHeaders + "]")
    WScript.Echo("Request Connection: [" + objHttpServer.GetRequestHeader("Connection") + "]")
    WScript.Echo()
    
    // ' Respond with a // 'Hello, World!// ' web page
    objHttpServer.ClearResponse()
    objHttpServer.ResponseCode = 200
    objHttpServer.ResponseReason = "OK"
    objHttpServer.SetResponseHeader("Content-Type", "text/html")
    objHttpServer.ResponseBodyString = "<h1>Hello, World!</h1>"
    objHttpServer.SendResponse()
    if (objHttpServer.LastError != 0) 
    {      
      WScript.Echo("Send reponse error: [" + 
        objHttpServer.GetErrorDescription(objHttpServer.LastError) + "]")
      WScript.Quit(1)
    }
  }
}

objHttpServer.Shutdown()