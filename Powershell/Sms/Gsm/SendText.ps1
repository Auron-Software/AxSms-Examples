# ***************************************************************************
#
# Auron SMS Component
# Send a text SMS message through a connected GSM phone or modem.
# The GSM phone or modem must be connected to your computer.
# (c) Copyright Auron Software - www.auronsoftware.com
#
# ***************************************************************************


# ***************************************************************************
# Function AskDevice
# ***************************************************************************
Function AskDevice ( $objGsm )
{  
  $strMessage = "Connected devices:"
  
  $strDevice = $objGsm.FindFirstDevice()
  
  While ($objGsm.LastError -eq 0)
  {     
     $strMessage += "`r`n" + $strDevice
     $strDevice = $objGsm.FindNextDevice()
  }
  
  # Add COM Ports.
  # Get first COM Port.
  $strPort = $objGsm.FindFirstPort()
  
  While ($objGsm.LastError -eq 0)
  {
    $strMessage += "`r`n" + $strPort
    $strPort = $objGsm.FindNextPort()
  }

  $strDefaultDevice = $objGsm.FindFirstDevice()
  
  If ($objGsm.LastError -ne 0)
  {
    $strDefaultDevice = $objGsm.FindFirstPort()
  } 
  
  # Display Devices
  if ($strDefaultDevice -ne $Empty)
  {
    write-host $strMessage
    write-host $Empty
    $strSelectedDevice = ReadInput "Select Device:" $strDefaultDevice $False
  }  

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

$objGsm = new-object -comobject AxSms.Gsm
$objSmsMessage = new-object -comobject AxSms.Message
$objSmsConstants = new-object -comobject AxSms.Constants

# Display SMS Component Version
write-host "Auron SMS Component " $objGsm.Version
write-host "Build: " $objGsm.Build "`nModule: "  $objGsm.Module
Write-Host "License Status: " $objGsm.LicenseStatus "`nLicense Key: " $objGsm.LicenseKey "`n"

# Logfile
$objGsm.Logfile = $env:temp + "\Gsm.log"
write-host "Log file used: " $objGsm.Logfile "`n"

# Select Device
$strDevice = AskDevice( $objGsm )

If ($strDevice -eq $Empty)
{
  write-host "No devices or COM ports where found."
  write-host "Ready."
  exit  
}

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

# Message: set all properties
$objSmsMessage.Clear()
$objSmsMessage.ToAddress       = ReadInput "Enter Recipient" "" $False
$objSmsMessage.Body            = ReadInput "Enter the message text you want to send to the recipient:" "Hello, world!" $False

# Send the Message
write-host "Sending the Message..."
$objGsm.SendSms($objSmsMessage)
$strResult = "SendSms, result: " + $objGsm.LastError + " (" + $objGsm.GetErrorDescription($objGsm.LastError) + ")"
write-host $strResult
write-host "Message Reference (can be used with status reports): " $objSmsMessage.Reference

$objGsm.Close()
write-host "Ready."
start-sleep 3
exit


