# ********************************************************************************************
#
# Auron SMS Component
# Send an SMS Wap Push message (Service Indication) through SMPP
# (c Copyright Auron Software - www.auronsoftware.com
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

# Create objects
$objWapPush               = new-object -comobject AxSms.TemplateWapPush 
$objSmpp                  = new-object -comobject AxSms.Smpp 
$objMessage               = new-object -comobject AxSms.Message     
$objSmsConstants          = new-object -comobject AxSms.Constants  
$objDemoAccount           = new-object -comobject AxSms.DemoAccount

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
$objSmpp.Connect($strServer, $nPort, 0)
$strResult = "Connect, result: " + $objSmpp.LastError + " (" + $objSmpp.GetErrorDescription($objSmpp.LastError) + ")"
write-host $strResult

If ($objSmpp.LastError -ne 0)
{
  exit
}

$objSmpp.Bind($objSmsConstants.SMPP_BIND_TRANSCEIVER, $strUsername, $strpassword, "", $objSmsConstants.SMPP_VERSION_34, 0, 0, "", 0)
$strResult = "Bind, result: " + $objSmpp.LastError + " (" + $objSmpp.GetErrorDescription($objSmpp.LastError) + ")"
write-host $strResult

If ($objSmpp.LastError -ne 0)
{
  $objSmpp.Disconnect
  exit
}

# Set Recipient
$objMessage.ToAddress   = ReadInput "Enter recipient address" "" $False
 
# Set Url
$objWapPush.Url         = ReadInput "Enter an URL to push" "https://www.auronsoftware.com" $False

# Set Description
$objWapPush.Description = ReadInput "Enter a description for the URL" "Innovators in Communication" $False

# Set WAP Push Signal Action
$objWapPush.SignalAction = $objSmsConstants.WAPPUSH_SIGNAL_MEDIUM

$objWapPush.Encode()
$strResult = "Encode, result: " + $objWapPush.LastError + " (" + $objWapPush.GetErrorDescription($objWapPush.LastError) + ")"
write-host $strResult 

If ($objWapPush.LastError -ne 0)
{
  $objSmpp.Close()
  write-host "Ready."
  exit
}

$objMessage.DataCoding = $objSmsConstants.DATACODING_8BIT_DATA
$objMessage.BodyFormat = $objSmsConstants.BODYFORMAT_HEX
$objMessage.HasUDH     = $True
$objMessage.Body       = $objWapPush.Data

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

# Show the result
If ($objSmpp.LastError -ne 0)
{
  $objSmpp.Unbind()
  $objSmpp.Disconnect()
  exit
}

# Show the Message Reference
write-host "Message successfully submitted" 
write-host "Message reference : " $objMessage.Reference

$objSmpp.Unbind()
$objSmpp.Disconnect()

write-host "Disconnected"
write-host "Ready."
