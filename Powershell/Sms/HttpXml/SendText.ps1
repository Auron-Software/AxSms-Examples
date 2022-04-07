# ********************************************************************
#
# Auron SMS Component
# Sends an single SMS message through an SMS/HTTP connection.
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

$objHttp = new-object -comobject AxSms.Http
$objSmsConstants = new-object -comobject AxSms.Constants
$objDemoAccount = new-object -comobject AxSms.DemoAccount

# Display SMS Component Version
write-host "Auron SMS Component " $objHttp.Version
write-host "Build: " $objHttp.Build "`nModule: "  $objHttp.Module
Write-Host "License Status: " $objHttp.LicenseStatus "`nLicense Key: " $objHttp.LicenseKey "`n"

# Logfile
$objHttp.Logfile = $env:temp + "\Http.log"
write-host "Log file used: " $objHttp.Logfile "`n"

$strUrl = "https://gateway.auronsoftware.com:8181/sendsms/sendsmsHttpXML.asp"

$xmlDoc = new-object -comobject Microsoft.XMLDOM
$xmlDoc.async = $False

$xmlRoot        = $xmlDoc.CreateElement("httpmessage")
$xmlCredentials = $xmlDoc.CreateElement("credentials")
$xmlSettings    = $xmlDoc.CreateElement("settings")
$xmlMessage     = $xmlDoc.CreateElement("message")
$xmlBody        = $xmlDoc.CreateElement("body")

$xmlCredentials.SetAttribute("systemid", $objDemoAccount.SystemId)
$xmlCredentials.SetAttribute("password", $objDemoAccount.Password)
$Dummy = $xmlRoot.AppendChild($xmlCredentials)

$xmlSettings.SetAttribute("bodyformat", "0")
$xmlSettings.SetAttribute("datacoding", "0")
$Dummy = $xmlRoot.AppendChild($xmlSettings)

$strInput = ReadInput "Enter recipient address" "" $False
$xmlMessage.SetAttribute("toaddress", $strInput )

$strInput = ReadInput "Enter the message text you want to send to the recipient" "Hello, world!" $False
$xmlBody.Text = $objHttp.Base64Encode($strInput)

$Dummy = $xmlMessage.AppendChild($xmlBody)
$Dummy = $xmlRoot.AppendChild($xmlMessage)
$Dummy = $xmlDoc.Appendchild($xmlRoot)

write-host "Posting"
write-host $xmlDoc.Xml
$strResponse = $objHttp.Post($strUrl, $xmlDoc.Xml)
$strResult = "Post, result: " + $objHttp.LastError + " (" + $objHttp.GetErrorDescription($objHttp.LastError) + ")"
write-host $strResult
write-host " "
write-host "Response"
write-host $strResponse


write-host "Ready."
