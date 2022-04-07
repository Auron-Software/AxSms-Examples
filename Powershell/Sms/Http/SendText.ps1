# ***************************************************************************
#
# Auron SMS Component
# Sends an single SMS message through an SMS/HTTP connection.
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

$objHttp = new-object -comobject AxSms.Http
$objMessage = new-object -comobject AxSms.Message
$objSmsConstants = new-object -comobject AxSms.Constants
$objDemoAccount = new-object -comobject AxSms.DemoAccount

# Display SMS Component Version
write-host "Auron SMS Component " $objHttp.Version
write-host "Build: " $objHttp.Build "`nModule: "  $objHttp.Module
Write-Host "License Status: " $objHttp.LicenseStatus "`nLicense Key: " $objHttp.LicenseKey "`n"

# Logfile
$objHttp.Logfile = $env:temp + "\Http.log"
write-host "Log file used: " $objHttp.Logfile "`n"

$objHttp.Url = "https://gateway.auronsoftware.com:8181/sendsms/default.asp?username=" + $objDemoAccount.SystemId + "&password=" + $objDemoAccount.Password + "&text=" + $objSmsConstants.HTTP_PLACEHOLDER_BODY + "&to=" + $objSmsConstants.HTTP_PLACEHOLDER_TOADDRESS

$objMessage.ToAddress =  ReadInput "Enter recipient address" "" $False
$objMessage.Body = ReadInput "Enter the message text you want to send to the recipient" "Hello, world!" $False

$strResult = $objHttp.SendSms($objMessage)
write-host $strResult
$strResult = "SendSms, result: " + $objHttp.LastError + " (" + $objHttp.GetErrorDescription($objHttp.LastError) + ")"
write-host $strResult
write-host "Response:"$objHttp.LastResponseCode

write-host "Ready."
