# ********************************************************************
#
# Auron SMS Component
#
# Host a simple 'Hello, World' web page.
#
# (c) Copyright Auron Software - www.auronsoftware.com
#
# ********************************************************************

$objHttpServer = new-object -comobject AxSms.HttpServer
$objShell = new-object -comobject WScript.Shell

# A license key is required to unlock this component after the trial period has expired.
# Assign the LicenseKey property every time a new instance of this component is created (see code below). 
# Alternatively, the LicenseKey property can be set automatically. This requires the license key to be stored in the registry.
# For details, see manual, chapter "Product Activation".
# objHttp.LicenseKey = "XXXXX-XXXXX-XXXXX"

# Component info
write-host "Auron SMS Component " $objHttpServer.Version
write-host "Build: " $objHttpServer.Build "`n" "Module: " $objHttpServer.Module
write-host "License Status: " $objHttpServer.LicenseStatus "`n" "License Key: " $objHttpServer.LicenseKey "`n"

# Set Logfile
$objHttpServer.LogFile = "HttpServer.log"
write-host "Log file: " $objHttpServer.LogFile

# Startup HTTP Server
$objHttpServer.Startup()
write-host "Startup, result: " $objHttpServer.LastError " (" $objHttpServer.GetErrorDescription($objHttpServer.LastError) ")"
if ($objHttpServer.LastError -ne 0)
{ 
  exit
}

# Add a URL to listen to
$objHttpServer.AddUrl("http://localhost:8002/Hello/")
write-host "AddUrl, result: " $objHttpServer.LastError " (" $objHttpServer.GetErrorDescription($objHttpServer.LastError) ")"

# Start your default browser in the background and open this #Hello, World!# page.
$objShell.Run("http://localhost:8002/Hello/", 1, 0)

# Listen and server pages
while ($objHttpServer.IsStarted)
{  

  # Test for an existing request or wait a maximum of 100 milliseconds to fetch a new one
  $objHttpServer.WaitForRequest(100)
  
  if ($objHttpServer.LastError -eq 0)
  {
    # Incoming request received; Print some information about the request
    write-host "Recieve request for: [" $objHttpServer.RequestUrl "]"
    write-host "From: [" $objHttpServer.RequestIP "]: Port: [" $objHttpServer.RequestPort "]"
    write-host "Request Path: [" $objHttpServer.RequestUrlPath "]"
    write-host "Request Host: [" $objHttpServer.RequestUrlHost "]"
    write-host "Request Query: [" $objHttpServer.RequestUrlQueryString "]"
    write-host "Request Verb: [" $objHttpServer.RequestVerb "]"
    write-host "Request BodyString: [" $objHttpServer.RequestBodyString "]"
    write-host "Request BodyBase64: [" $objHttpServer.RequestBodyBase64 "]"
    write-host "Request Headers: [" $objHttpServer.RequestHeaders "]"
    write-host "Request Connection: [" $objHttpServer.GetRequestHeader("Connection") "]"
    write-host 
    
    # Respond with a #Hello, World!# web page
    $objHttpServer.ClearResponse()
    $objHttpServer.ResponseCode = 200
    $objHttpServer.ResponseReason = "OK"
    $objHttpServer.SetResponseHeader("Content-Type", "text/html")
    $objHttpServer.ResponseBodyString = "<h1>Hello, World!</h1>"
    $objHttpServer.SendResponse()
    if ($objHttpServer.LastError -ne 0)
    {      
      write-host "Send reponse error: [" $objHttpServer.GetErrorDescription($objHttpServer.LastError) "]"
      exit
    }
  }
}

$objHttpServer.Shutdown()