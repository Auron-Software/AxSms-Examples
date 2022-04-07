// ' ********************************************************************
// '
// ' Auron SMS Component
// '
// ' Host a simple SMS API web page.
// '
// ' (c) Copyright Auron Software - www.auronsoftware.com
// '
// ' This is an example of an API endpoint used to receive incoming SMS
// ' messages from your HTTP provider.
// ' 
// ' Simulate an incoming SMS delivery using this URL:
// ' http://localhost:8002/API/receivesms.json?from=0031122334455&text=Hello+World
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
objHttpServer.AddUrl("http://localhost:8002/API/")
WScript.Echo("AddUrl, result: " + objHttpServer.LastError + " (" + objHttpServer.GetErrorDescription(objHttpServer.LastError) + ")")

// ' Start your default browser in the background and simulate an SMS delivery
objShell.Run("http://localhost:8002/API/receivesms.json?from=0031122334455&text=Hello+World", 1, 0)

// ' Listen and server pages
while (objHttpServer.IsStarted)
{
  // ' Test for an existing request or wait a maximum of 100 milliseconds to fetch a new one
  objHttpServer.WaitForRequest(100)
  
  if (objHttpServer.LastError == 0)
  {    
    // ' Incoming request received; Print some information about the request
    WScript.Echo("Received request for: [" + objHttpServer.RequestUrl + "]")
    
    // ' test to see if they are querying the right URL
    objHttpServer.ClearResponse()
    if (objHttpServer.RequestUrlPath.substring(0, "/API/receivesms.json".length) === "/API/receivesms.json")
    {      
      // ' gather URL parameters
      sFromAddress = GetQueryParameter(objHttpServer.RequestUrlQueryString, "from")
      sText = GetQueryParameter(objHttpServer.RequestUrlQueryString, "text")
      
      if (sFromAddress == "" || sText == "")
      {
        // ' They forgot one or more parameters
        objHttpServer.ResponseCode = 400
        objHttpServer.ResponseReason = "Invalid Request"
        objHttpServer.ResponseBodyString = "<h1>400 - Invalid request!</h1>" + 
          "<p>(use: http://localhost:8002/API/receivesms.json?to=0031122334455&text=Hello+World)</p>"      
      }
      else
      {
        // ' Everything is in order we// 've received an SMS message!
        objHttpServer.ResponseCode = 200
        objHttpServer.ResponseReason = "OK"
        objHttpServer.SetResponseHeader("Content-Type", "text/json")
        objHttpServer.ResponseBodyString = "{\"resultCode\": \"0\", \"resultText\": \"received ok\"}"
        
        WScript.Echo("Received incoming SMS from: " + sFromAddress + "; text: " + sText)
      }      
    } else
    {
      // ' Invalid path; send a 404
      objHttpServer.ResponseCode = 404
      objHttpServer.ResponseReason = "Not Found"
      objHttpServer.ResponseBodyString = "<h1>404 - Resource not found!</h1>" + 
        "<p>(use: http://localhost:8002/API/receivesms.json?to=0031122334455&text=Hello+World)</p>"
    }
    
    objHttpServer.SendResponse()
    if (objHttpServer.LastError != 0)
    {      
      WScript.Echo("Send reponse error: [" + 
        objHttpServer.GetErrorDescription(objHttpServer.LastError) + "]")
      WScript.Quit(1)
    }
  }
}

function GetQueryParameter(sQueryString, sParameter)
{ 
  sResult = ""
  re = new RegExp(sParameter + "=([^&]*)")
   
  oMatch = re.exec(sQueryString)
  if (oMatch.length > 0)
    sResult = oMatch[1]
  
  return sResult;
}