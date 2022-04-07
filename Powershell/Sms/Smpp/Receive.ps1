# ***************************************************************************
#
# Auron SMS Component
#
#    Receive messages through an SMPP connection.
#    This script will listen for incoming messages for one minute.
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
# The script itself
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


$strServer      = ReadInput "Enter hostname of SMPP server" "gateway.auronsoftware.com" $False
$nPort          = ReadInput "Enter portnumber of SMPP server" "2775" $False
$strUsername    = ReadInput "Enter account systemID" $objDemoAccount.SystemID $False 
$strPassword    = ReadInput "Enter account password" $objDemoAccount.Password $False
$strPhoneNumber = ReadInput "Enter your PhoneNumber you are going to use to send the SMS Message start with + and your areacode" "" $False
$strPhoneNumber = "S" + $strPhoneNumber

# Connect to SMPP provider
$objSmpp.Connect($strServer, $nPort, 0)
$strResult = "Connect, result: " + $objSmpp.LastError + " (" + $objSmpp.GetErrorDescription($objSmpp.LastError) + ")"
write-host $strResult

If ($objSmpp.LastError -ne 0)
{
  exit
}

$objSmpp.Bind($objSmsConstants.SMPP_BIND_TRANSCEIVER, $strUsername, $strpassword, "", $objSmsConstants.SMPP_VERSION_34, 0, 0, $strPhoneNumber, 0)
$strResult = "Bind, result: " + $objSmpp.LastError + " (" + $objSmpp.GetErrorDescription($objSmpp.LastError) + ")"
write-host $strResult

If ($objSmpp.LastError -ne 0)
{
  $objSmpp.Disconnect
  exit
}

write-host "Connected to provider"
write-host "Send an SMS message to the SMPP gateway (Mobile number: +12015834722) and click OK"
write-host "This demo will check for new messages during 60 seconds."

For ($i = 1; $i -le 12; $i++)
{
  $objMessage = $objSmpp.ReceiveMessage()
  $strResult = "ReceiveMessage, result: " + $objSmpp.LastError + " (" + $objSmpp.GetErrorDescription($objSmpp.LastError) + ")"
  write-host $strResult
  
  If ($objSmpp.LastError -eq 0)
  {
    write-host "Received FromAddress:" $objMessage.FromAddress
    write-host "Body:" $objMessage.Body  
    $i = 12
    break;
  }
  sleep 5
} 

$objSmpp.Unbind()
$objSmpp.Disconnect()

write-host "Disconnected"
write-host "Ready."