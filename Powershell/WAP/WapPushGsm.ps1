# ********************************************************************************************
#
# Auron SMS Component
#
# Send an SMS Wap Push message (Service Indication through a connected GSM phone or modem.
# The GSM phone or modem must be connected to your computer.
#
# (c Copyright Auron Software - www.auronsoftware.com
#
# ***************************************************************************

# ***************************************************************************
# Function AskDevice
# ***************************************************************************
Function AskDevice ( $objGsm )
{
  $strMessage = "Connected devices:`r`n"
  $strMessage += $objGsm.FindFirstDevice()
  
  While ($objGsm.LastError -eq 0)
  {     
     $strMessage += "`r`n" + $objGsm.FindNextDevice() 
  }
  
  $arrPorts = [System.IO.Ports.SerialPort]::getportnames()
  
  For ($i = 0; $i -lt $arrPorts.Length; $i++)
  {
   $strMessage += $arrPorts[$i] + "`r`n"
  } 
  

  # Remove trailing `r`n
  $strMessage = $strMessage.SubString(0,$strMessage.Length -1)
  
  $strDefaultDevice = $objGsm.FindFirstDevice()
  
  If ($objGsm.LastError -ne 0 -and $arrPorts.Length -gt 0)
  {
    $strDefaultDevice = $arrPorts[0]
  } 
  
  # Display Devices
  write-host $strMessage
  write-host $Empty
  $strSelectedDevice = ReadInput "Select Device:" $strDefaultDevice $False
  return $strSelectedDevice 
}

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
$objGsm                   = new-object -comobject AxSms.Gsm 
$objMessage               = new-object -comobject AxSms.Message     
$objSmsConstants          = new-object -comobject AxSms.Constants   

# Display SMS Component Version
write-host "Auron SMS Component " $objGsm.Version
write-host "Build: " $objGsm.Build "`nModule: "  $objGsm.Module
Write-Host "License Status: " $objGsm.LicenseStatus "`nLicense Key: " $objGsm.LicenseKey "`n"

# Logfile
$objGsm.Logfile = $env:temp + "\Gsm.log"
write-host "Log file used: " $objGsm.Logfile "`n"

# Select Device
$strDevice = AskDevice( $objGsm )

# Open connection to the device
$objGsm.Open($strDevice)

$strResult = "Open, result: " + $objGsm.LastError + " (" + $objGsm.GetErrorDescription($objGsm.LastError) + ")"
write-host $strResult
If ($objGsm.LastError -eq 36101) #36101 means: modem requires pin code, see also: www.auronsoftware.com/kb/api-error-codes/
{
  # Enter PinCode 
  $strPin = ReadInput "Enter PIN code" "" $False
  $objGsm.Open($strDevice, $strPin)
  $strResult = "Open, result: " + $objGsm.LastError + " (" + $objGsm.GetErrorDescription($objGsm.LastError) + ")"
  write-host $strResult
}

If ($objGsm.LastError -ne 0)
{ 
  $objGsm.Close()
  write-host "Ready."  
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
  $objGsm.Close()
  write-host "Ready."
  exit
}

$objMessage.DataCoding = $objSmsConstants.DATACODING_8BIT_DATA
$objMessage.BodyFormat = $objSmsConstants.BODYFORMAT_HEX
$objMessage.HasUDH     = $True
$objMessage.Body       = $objWapPush.Data

# Send the message
$objGsm.SendSms($objMessage)
$strResult = "SendSms, result: " + $objGsm.LastError + " (" + $objGsm.GetErrorDescription($objGsm.LastError) + ")"
write-host $strResult 

If ($objGsm.LastError -eq 0)
{
  $objGsm.Close()
  write-host "Ready."
  exit
}

# Show the Message Reference
write-host "Message Reference (can be used with status reports):" $objMessage.Reference

$objGsm.Close()
write-host "Ready."
exit

  
