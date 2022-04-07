# ********************************************************************
#
# Auron SMS Component
#
# Host a simple SMS API web page.
#
# (c) Copyright Auron Software - www.auronsoftware.com
#
# This is an example of an API endpoint used to receive incoming SMS
# messages from your HTTP provider.
# 
# Simulate an incoming SMS delivery using this URL:
# http://localhost:8002/API/receivesms.json?from=0031122334455&text=Hello+World
#
# ********************************************************************

function GetQueryParameter($sQueryString, $sParameter)
{
  $sResult = ""
  
  if ($sQueryString -match $sParameter + "=([^&]*)")
  {
    $sResult = $matches.1
  }

  $sResult
}

$objHttpServer = new-object -comobject AxSms.HttpServer
$objShell = new-object -comobject WScript.Shell

# A license key is required to unlock this component after the trial period has expired.
# Assign the LicenseKey property every time a new instance of this component is created (see code below). 
# Alternatively, the LicenseKey property can be set automatically. This requires the license key to be stored in the registry.
# For details, see manual, chapter "Product Activation".
# $objHttp.LicenseKey = "XXXXX-XXXXX-XXXXX"

# Component info
write-host "Auron SMS Component " $objHttpServer.Version
write-host "Build: " $objHttpServer.Build "`n" "Module: " $objHttpServer.Module
write-host "License Status: " $objHttpServer.LicenseStatus "`n" "License Key: " $objHttpServer.LicenseKey "`n"

# Set Logfile
$objHttpServer.LogFile = "\HttpServer.log"
write-host "Log file: " $objHttpServer.LogFile

# Startup HTTP Server
$objHttpServer.Startup()
write-host "Startup, result: " $objHttpServer.LastError " (" $objHttpServer.GetErrorDescription($objHttpServer.LastError) ")"
if ($objHttpServer.LastError -ne 0)
{
  exit
}

# Add a URL to listen to
$objHttpServer.AddUrl("http://localhost:8002/API/")
write-host "AddUrl, result: " $objHttpServer.LastError " (" $objHttpServer.GetErrorDescription($objHttpServer.LastError) ")"

# Start your default browser in the background and simulate an SMS delivery
$objShell.Run("http://localhost:8002/API/receivesms.json?from=0031122334455&text=Hello+World", 1, 0)

# Listen and server pages
while ($objHttpServer.IsStarted)
{
  # Test for an existing request or wait a maximum of 100 milliseconds to fetch a new one
  $objHttpServer.WaitForRequest(100)
  
  if ($objHttpServer.LastError -eq 0)
  {
    # Incoming request received; Print some information about the request
    write-host "Received request for: [" $objHttpServer.RequestUrl "]"
    
    # test to see if they are querying the right URL
    $objHttpServer.ClearResponse()
    if ($objHttpServer.RequestUrlPath -like "/API/receivesms.json*")
    {
      # gather URL parameters
      $sFromAddress = GetQueryParameter $objHttpServer.RequestUrlQueryString "from"
      $sText = GetQueryParameter $objHttpServer.RequestUrlQueryString "text"
     
      if ($sFromAddress -eq "" -or $sText -eq "")
      {
        # They forgot one or more parameters
        $objHttpServer.ResponseCode = 400
        $objHttpServer.ResponseReason = "Invalid Request"
        $objHttpServer.ResponseBodyString = "<h1>400 - Invalid request!</h1>"
      } else {
        # Everything is in order we#ve received an SMS message!
        $objHttpServer.ResponseCode = 200
        $objHttpServer.ResponseReason = "OK"
        $objHttpServer.SetResponseHeader("Content-Type", "text/json")
        $objHttpServer.ResponseBodyString = "{""resultCode"": ""0"", ""resultText"": ""received ok""}"
        
        write-host "Received incoming SMS from: " $sFromAddress "; text: " $sText 
      }
    }
    else
    {
      # Invalid path; send a 404
      $objHttpServer.ResponseCode = 404
      $objHttpServer.ResponseReason = "Not Found"
      $objHttpServer.ResponseBodyString = "<h1>404 - Resource not found!</h1>"
    }       
    
    $objHttpServer.SendResponse()
    if ($objHttpServer.LastError -ne 0)
    {      
      write-host "Send reponse error: [" $objHttpServer.GetErrorDescription($objHttpServer.LastError) "]"
      exit
    }
  }
}

$objHttpServer.Shutdown()
