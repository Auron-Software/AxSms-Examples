# ***************************************************************************
#
# Auron SMS Component
#
# Send a text SMS message through a SMPP provider.
#
# (c) Copyright Auron Software - www.auronsoftware.com
#
# ***************************************************************************



# ***************************************************************************
# Function ReadInput
# ***************************************************************************
Function ReadInput($strPrompt, $strDefaultValue, $bAllowEmpty)
{ 
  $strReturn = ""  
  If ($strDefaultValue -ne "")
  {
     $strPrompt += " leave empty for " + $strDefaultValue
  }
  
  Do 
  {       
    write-host $strPrompt
    $strReturn = read-host
    
    If ($strReturn -eq "" -and $strDefaultValue -ne "")
    {
      $strReturn = $strDefaultValue
      write-host $strReturn
    }
    elseif ($strReturn -eq "" -and $bAllowEmpty -eq $True)
    {
      break
    }   
  } While ($strReturn -eq "") 
  
  write-host ""
  return $strReturn
}


# ***************************************************************************
# MAIN SCRIPT 
# ***************************************************************************
cls

$objSmpp = new-object -comobject AxSms.Smpp
$objMessage = new-object -comobject AxSms.Message
$objSmsConstants = new-object -comobject AxSms.Constants
$objDemoAccount = new-object -comobject AxSms.DemoAccount

# Display SMS Component Version
write-host "Auron SMS Component " $objSmpp.Version
write-host "Build: " $objSmpp.Build "`nModule: "  $objSmpp.Module
Write-Host "License Status: " $objSmpp.LicenseStatus "`nLicense Key: " $objSmpp.LicenseKey "`n"

# Logfile
$objSmpp.Logfile = $env:temp + "\Smpp.log"
write-host "Log file used: " $objSmpp.Logfile "`n"

$strServer    = ReadInput "Enter hostname of SMPP server" "gateway.auronsoftware.com" $False
$nPort        = ReadInput "Enter portnumber of SMPP server" "2775" $False
$strUsername  = ReadInput "Enter account systemID" $objDemoAccount.SystemID $False 
$strPassword  = ReadInput "Enter account password" $objDemoAccount.Password $False

# Connect to SMPP provider
$objSmpp.Connect($strServer, $nPort, 5000, $False)
$strResult = "Connect, result: " + $objSmpp.LastError + " (" + $objSmpp.GetErrorDescription($objSmpp.LastError) + ")"
write-host $strResult

If ($objSmpp.LastError -ne 0)
{
  exit
}

$objSmpp.Bind($objSmsConstants.SMPP_BIND_TRANSCEIVER, $objDemoAccount.SystemId, $objDemoAccount.Password, "", $objSmsConstants.SMPP_VERSION_34, 0, 0, "", 0)
$strResult = "Bind, result: " + $objSmpp.LastError + " (" + $objSmpp.GetErrorDescription($objSmpp.LastError) + ")"
write-host $strResult

If ($objSmpp.LastError -ne 0)
{
  $objSmpp.Disconnect
  exit
}

# Message: set all properties
$objMessage.Clear()
$objMessage.ToAddress             = ReadInput "Enter Recipient" "" $False
$objMessage.Body                  = ReadInput "Enter the message text you want to send to the recipient" "Hello, world!" $False
$objMessage.RequestDeliveryReport = $True

# Send the message
write-host "Sending the message..."

$objSmpp.SubmitSms($objMessage)
$strResult = "SubmitSms, result: " + $objSmpp.LastError + " (" + $objSmpp.GetErrorDescription($objSmpp.LastError) + ")"
write-host $strResult

If ($objSmpp.LastError -ne 0)
{
  $objSmpp.Unbind()
  $objSmpp.Disconnect()
  exit
}

# Synchronize with the server, wait for an update on the message we just send.
While ($objSmpp.WaitForSmsUpdate(3000) -eq $True)
{
  $objMessage = $objSmpp.FetchSmsUpdate()
  $strResult = "FetchSmsUpdate, result: " + $objSmpp.LastError + " (" + $objSmpp.GetErrorDescription($objSmpp.LastError) + ")"
  write-host $strResult
  
  if ($objSmpp.LastError -eq 0)
  {
    break;
  }  
}

# SMPP command status codes are provider specific. The Auron SMPP Demo Gateway uses command status 1025
# to communicate there are no more credits left for this account on the Auron SMPP Demo Gateway.
If ($objMessage.SmppCommandStatus -ne 0)
{
    # 1025 = nocredits            
    If ($objMessage.SmppCommandStatus -eq 1025 -and $strServer -eq "gateway.auronsoftware.com")
    {
        write-host "Message not sent. Reason: No credits left.";
    }
    Else
    {
        write-host "Message not sent. Reason: unspecified error [" + $objMessage.SmppCommandStatus + "].";
    }
    
    $objSmpp.Unbind()
    $objSmpp.Disconnect()
    exit
}

$strReference = $objMessage.Reference

# Show the result
If ($objSmpp.LastError -ne 0)
{
  $objSmpp.Unbind()
  $objSmpp.Disconnect()
  exit
}

# Show the Message Reference
write-host "Message successfully submitted" 
write-host "Message reference :"$strReference

$bGo = $True
While ($bGo)
{
  $objMessage = $objSmpp.ReceiveMessage()
  $strResult = "ReceiveMessage, result: " + $objSmpp.LastError + " (" + $objSmpp.GetErrorDescription($objSmpp.LastError) + ")"
  write-host $strResult
  
  While ($objSmpp.lastError -eq 0)
  {
    If ($objMessage.SmppIsDeliveryReport -eq $True)
    {
      write-host "Delivery rpt for:" $objMessage.Body.SubString($objMessage.Body.IndexOf("id:") + 3,8)
      write-host "State:" $objMessage.Body.SubString($objMessage.Body.IndexOf("stat:") + 5,7)
      $bGo = $False
      break
    }
    else
    {
      write-host " Message to:" $objMessage.ToAddress
      write-host " Message body:" $objMessage.Body
    }
    
    $objMessage = $objSmpp.ReceiveMessage()
    $strResult = "ReceiveMessage, result: " + $objSmpp.LastError + " (" + $objSmpp.GetErrorDescription($objSmpp.LastError) + ")"
    write-host $strResult
  }
   
  If ($bGo)
  {
    write-host "No delivery report received yet."
    sleep 3
  }
}

$objSmpp.Unbind()
$objSmpp.Disconnect()

write-host "Disconnected"
write-host "Ready."