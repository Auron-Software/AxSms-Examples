// ********************************************************************
//
// Auron SMS Component
//
// Sends an single SMS message through an SMS/HTTP connection.
//
// (c) Copyright Auron Software - www.auronsoftware.com
//
// ********************************************************************


// Declare objects
var objHttp, objMessage, objSmsConstants, objFso
var strUsername, strPassword
var objDemoAccount

// Create Objects
objHttp                   = new ActiveXObject( "AxSms.Http" )
objMessage                = new ActiveXObject( "AxSms.Message" )
objSmsConstants           = new ActiveXObject( "AxSms.Constants" )
objDemoAccount            = new ActiveXObject("AxSms.DemoAccount")

// A license key is required to unlock this component after the trial period has expired.
// Assign the LicenseKey property every time a new instance of this component is created (see code below). 
// Alternatively, the LicenseKey property can be automatically. This requires the license key to be stored in the registry.
// For details, see manual, chapter "Product Activation".
// objHttp.LicenseKey = "XXXXX-XXXXX-XXXXX"

// Component info
WScript.Echo("Auron SMS Component " + objHttp.Version)
WScript.Echo("Build: " + objHttp.Build + "\r\n" + "Module: " + objHttp.Module)
WScript.Echo("License Status: " + objHttp.LicenseStatus + "\r\n" + "License Key: " + objHttp.LicenseKey + "\r\n")

// Logfile
objFso                  = new ActiveXObject("Scripting.FileSystemObject")
objHttp.LogFile         = objFso.GetSpecialFolder(2) + "\Gsm.log"
WScript.Echo("Log file: " + objHttp.LogFile)

// provider URL template. The placeholders are replace on SendSms.
objHttp.Url = "https://gateway.auronsoftware.com:8181/sendsms/default.asp?" + 
	"username="+ objDemoAccount.SystemId  +"+password=" + objDemoAccount.Password + "+text=" + 
    objSmsConstants.HTTP_PLACEHOLDER_BODY + "+to=" + objSmsConstants.HTTP_PLACEHOLDER_TOADDRESS   

// SMS Message Properties
objMessage.ToAddress          = ""    // Type your phone number between the quotes
objMessage.Body               = "Hello from Auron!"

WScript.Echo(objHttp.SendSms ( objMessage ))
WScript.Echo("SendSms, result: " + objHttp.LastError + " (" + objHttp.GetErrorDescription ( objHttp.LastError ) + ")")
WScript.Echo("Response: " + objHttp.LastResponseCode)

WScript.Echo("Ready")
WScript.Sleep(3000)



