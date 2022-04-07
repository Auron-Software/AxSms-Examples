// ********************************************************************
//
//  Receive messages through an SMPP connection.
//
//  This script will listen for incoming messages for one minute.
//	 Auron SMS Component
//
// (c) Copyright 2011 by Auron Software - www.auronsoftware.com
//
// ********************************************************************


// Declare Objects
var objSmpp, objMessage, objSmsConstants, fso, objDemoAccount
var strServer, nPort, nTimeout, strUsername, strPassword, strPhoneNumber, i

// Create Objects
objSmpp                   = new ActiveXObject ( "AxSms.Smpp" )
objSmsConstants           = new ActiveXObject ( "AxSms.Constants" )
objDemoAccount            = new ActiveXObject ( "AxSms.DemoAccount" )

// A license key is required to unlock this component after the trial period has expired.
// Assign the LicenseKey property every time a new instance of this component is created (see code below). 
// Alternatively, the LicenseKey property can be automatically. This requires the license key to be stored in the registry.
// For details, see manual, chapter "Product Activation".
// objSmpp.LicenseKey = "XXXXX-XXXXX-XXXXX"

// Component info
WScript.Echo("Auron SMS Component " + objSmpp.Version)
WScript.Echo("Build: " + objSmpp.Build + "\r\n" + "Module: " + objSmpp.Module)
WScript.Echo("License Status: " + objSmpp.LicenseStatus + "\r\n" + "License Key: " + objSmpp.LicenseKey + "\r\n")

// Logfile
fso                       = new ActiveXObject("Scripting.FileSystemObject")
objSmpp.LogFile           = fso.GetSpecialFolder(2) + "\Smpp.log"
WScript.Echo("Log file: " + objSmpp.LogFile)

//Get username && password for Auron SMPP Demo account
strServer                     = "gateway.auronsoftware.com"
nPort                         = 2775
strPhoneNumber                = "S" + "" // Add your phone number in the empty quotes
nTimeout = 2000

// Connect to smpp provider. Starts a background thread to handle communication with the server && send/receive messages.
objSmpp.Connect(strServer, nPort, nTimeout, false)
WScript.Echo("Connect, result: " + objSmpp.LastError + " (" + objSmpp.GetErrorDescription(objSmpp.LastError) + ")")
if (objSmpp.LastError != 0)  
{ 
  WScript.Sleep(3000)
  WScript.Quit()
} 

objSmpp.Bind(objSmsConstants.SMPP_BIND_TRANSCEIVER, objDemoAccount.SystemId, objDemoAccount.Password, "", objSmsConstants.SMPP_VERSION_34, 0, 0, strPhoneNumber, nTimeout)
WScript.Echo("Bind, result: " + objSmpp.LastError + " (" + objSmpp.GetErrorDescription(objSmpp.LastError) + ")")
if (objSmpp.LastError != 0)  
{
  WScript.Sleep(3000)
  WScript.Quit()
}

WScript.Echo("\r\nNOTE: For this sample to work you will have to edit this script and input your phone number!\r\n")
WScript.Echo("Connected to provider" + "\r\n" + "\r\n" + "Send an SMS message to the SMPP gateway (Mobile number: +12015834722) && click OK" + "\r\n" + "This demo will check for new messages during 60 seconds.")
for (i = 0;i < 60; i++)
{
    objMessage = objSmpp.ReceiveMessage()
    WScript.Echo("ReceiveMessage, result: " + objSmpp.LastError + " (" + objSmpp.GetErrorDescription(objSmpp.LastError) + ")")
    while (objSmpp.LastError == 0)
    {
      WScript.Echo("Received FromAddress: " + objMessage.FromAddress)
      WScript.Echo("Body: " + objMessage.Body)
      objMessage = objSmpp.ReceiveMessage()  
      WScript.Echo("ReceiveMessage, result: " + objSmpp.LastError + " (" + objSmpp.GetErrorDescription(objSmpp.LastError) + ")")
    }  
  WScript.Sleep( 1000 )
}

// Disconnection automatically //unbinds// if the connection is still bound.
objSmpp.Disconnect()
WScript.Echo("Disconnected.")

WScript.Echo("Ready.")
WScript.Sleep(3000)