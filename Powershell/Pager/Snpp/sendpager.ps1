# ********************************************************************
#
# Auron SMS Component
#
# Send an alphanumeric pager message through an SNPP connection.
#
# (c) Copyright Auron Software - www.auronsoftware.com
#
# ********************************************************************

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

$objSnpp = new-object -comobject AxSms.Snpp

# Display SMS Component Version
write-host "Auron SMS Component " $objSnpp.Version
write-host "Build: " $objSnpp.Build "`nModule: "  $objSnpp.Module
Write-Host "License Status: " $objSnpp.LicenseStatus "`nLicense Key: " $objSnpp.LicenseKey "`n"

# Set Logfile
$objSnpp.Logfile = $env:temp + "\Snpp.log"
write-host "Log file can be found here:"
write-host $objSnpp.Logfile
write-host ""

$objSnpp.ServerTimeout         = 2500
$objSnpp.Server                = ReadInput "Enter the SNPP server hostname or ip" "snpp.pageallcom.com" $False 
$objSnpp.ServerPort            = ReadInput "Enter the SNPP server port" "444" $False 
$strRecipient         		   = ReadInput "Enter the pager code or recipient address" "5551234" $False 
$strData                       = ReadInput "Enter the textmessage" "Hello, world!" $False 

$objSnpp.Send($strRecipient, $strData)
$strResult = "Send, result: " + $objSnpp.LastError + " (" + $objSnpp.GetErrorDescription($objSnpp.LastError) + ")"
write-host $strResult
If($objSnpp.LastError -eq 0 )
{
	write-host "Last response:" $objSnpp.ProviderResponse
}

write-host "Ready."
