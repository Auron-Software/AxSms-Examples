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
var objHttp, objMessage, objSmsConstants, objFso, strResponse
var xmlDoc,xmlRoot, xmlCredentials, xmltings, xmlMessage, xmlBody
var strSystemID, strPassword, strUrl
var objDemoAccount

// Create Objects
objHttp                   = new ActiveXObject( "AxSms.Http" )
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
objFso                    = new ActiveXObject("Scripting.FileSystemObject")
objHttp.LogFile           = objFso.GetSpecialFolder(2) + "\Gsm.log"
WScript.Echo("Log file: " + objHttp.LogFile)

strUrl = "https://gateway.auronsoftware.com:8181/sendsms/sendsmsHttpXML.asp"

xmlDoc = new ActiveXObject("Microsoft.XMLDOM")
xmlDoc.async = false

xmlRoot                   = xmlDoc.createElement("httpmessage")
xmlCredentials            = xmlDoc.createElement("credentials")
xmltings                  = xmlDoc.createElement("tings")
xmlMessage                = xmlDoc.createElement("message")
xmlBody                   = xmlDoc.createElement("body")

xmlCredentials.setAttribute("systemid", objDemoAccount.SystemId)
xmlCredentials.setAttribute("password", objDemoAccount.Password)
xmlRoot.appendChild(xmlCredentials)

xmltings.setAttribute("bodyformat", "0")
xmltings.setAttribute("requestdeliveryreport", "True")
xmltings.setAttribute("datacoding", "0")
xmltings.setAttribute("deliveryreporturl", "https://www.auronsoftware.com")
xmlRoot.appendChild(xmltings)

xmlMessage.setAttribute("toaddress", "")   // type your phone number in the empty quotes

xmlBody.text = objHttp.Base64Encode("Hello from Auron SMS Component!")
xmlMessage.appendChild(xmlBody)
xmlRoot.appendChild(xmlMessage)
xmlDoc.appendChild(xmlRoot)

WScript.Echo("Posting" + "\r\n" + xmlDoc.Xml)
strResponse = objHttp.Post(strUrl, xmlDoc.Xml)
WScript.Echo("Post, result: " + objHttp.LastError + " (" + objHttp.GetErrorDescription ( objHttp.LastError ) + ")")
WScript.Echo("Response: " + strResponse)

WScript.Echo("Ready.")
WScript.Sleep(3000)




