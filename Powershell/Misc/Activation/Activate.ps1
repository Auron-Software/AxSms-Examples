# ********************************************************************
#
# Auron SMS Component
#
# Use the "Activate" function to activate the product
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

# Create Object
$objGsm = new-object -comobject  AxSms.Gsm

# Display SMS Component Version
write-host "Auron SMS Component " $objGsm.Version
write-host "Build: " $objGsm.Build "`nModule: "  $objGsm.Module
Write-Host "License Status: " $objGsm.LicenseStatus "`nLicense Key: " $objGsm.LicenseKey "`n"

$strKey = ReadInput "Please enter your license key below:" "" $False

# Activate SMS Component
$objGsm.LicenseKey = $strKey
$objGsm.SaveLicenseKey()

$strResult = "SaveLicenseKey, result: " + $objGsm.LastError + " (" + $objGsm.GetErrorDescription($objGsm.LastError) + ")"
write-host $strResult 

write-host "Ready."