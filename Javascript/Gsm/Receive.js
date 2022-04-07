// ********************************************************************
//
// Auron SMS Component
//
// Receive SMS message(s) through connected GSM phone or modem.
// The GSM phone or modem must be connected to your computer
//
// (c) Copyright Auron Software - www.auronsoftware.com
//
// ********************************************************************


// Declare Objects
var objGsm, objFso, objSmsMessage, objSmsConstants

// Declare Variables
var strPin, strDevice

// Create Objects
objGsm                    = new ActiveXObject ( "AxSms.Gsm" )
objSmsConstants           = new ActiveXObject ( "AxSms.Constants" )

// A license key is required to unlock this component after the trial period has expired.
// Assign the LicenseKey property every time a new instance of this component is created (see code below). 
// Alternatively, the LicenseKey property can be automatically. This requires the license key to be stored in the registry.
// For details, see manual, chapter "Product Activation".
// objGsm.LicenseKey = "XXXXX-XXXXX-XXXXX"

// Component info
WScript.Echo("Auron SMS Component " + objGsm.Version)
WScript.Echo("Build: " + objGsm.Build + "\r\n" + "Module: " + objGsm.Module)
WScript.Echo("License Status: " + objGsm.LicenseStatus + "\r\n" + "License Key: " + objGsm.LicenseKey + "\r\n")

// Logfile
objFso                    = new ActiveXObject("Scripting.FileSystemObject")
objGsm.LogFile            = objFso.GetSpecialFolder(2) + "\Gsm.log"
WScript.Echo("Log file: " + objGsm.LogFile)

// Select Device
strDevice                 = objGsm.FindFirstPort()
strPin                    = ""

// Open connection to the device
objGsm.Open(strDevice, strPin)
WScript.Echo("Open, result: " + objGsm.GetErrorDescription(objGsm.LastError))
if (objGsm.LastError != 0)  
{
  WScript.Echo("Ready.")
  WScript.Quit()
}

// Receive messages; Retrieve SMS and Status reports from the GSM device
WScript.Echo("Receiving messages... ")
WScript.Echo("Receiving from all storages, messages may be shown twice.")
objGsm.Receive(objSmsConstants.GSM_MESSAGESTATE_ALL, False, objSmsConstants.GSM_STORAGETYPE_ALL)
WScript.Echo("Receive, result: " + objGsm.LastError + " (" + objGsm.GetErrorDescription( objGsm.LastError ) + ")")
if (objGsm.LastError != 0)
{ 
  objGsm.Close()
  WScript.Sleep(3000)
  WScript.Quit()
}

// Retrieve SMS messages from the GSM component.
objSmsMessage = objGsm.GetFirstSms
WScript.Echo("GetFirstSms, result: " + objGsm.LastError + " (" + objGsm.GetErrorDescription( objGsm.LastError ) + ")")
while (objGsm.LastError == 0) 
{  WScript.Echo("  Message from: " + objSmsMessage.FromAddress)
  WScript.Echo("  Message body: " + objSmsMessage.Body)
  objSmsMessage = objGsm.GetNextSms()
  WScript.Echo("GetNextSms, result: " + objGsm.LastError + " (" + objGsm.GetErrorDescription( objGsm.LastError ) + ")"  )
}

// Ready
objGsm.Close()
WScript.Echo("Ready.")
WScript.Sleep(3000)
