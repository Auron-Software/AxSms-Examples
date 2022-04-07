' ********************************************************************
'
' Auron SMS Component
'
' Sends an single SMS message through an SMS/HTTP connection.
'
' (c) Copyright Auron Software - www.auronsoftware.com
'
' ********************************************************************


Option Explicit

' Declare objects
Dim objHttp, objMessage, objSmsConstants, objFso, strResponse
Dim xmlDoc,xmlRoot, xmlCredentials, xmlSettings, xmlMessage, xmlBody
Dim strSystemID, strPassword, strUrl

' Create Objects
Set objHttp                   = CreateObject( "AxSms.Http" )
Set objSmsConstants           = CreateObject( "AxSms.Constants" )

' A license key is required to unlock this component after the trial period has expired.
' Assign the LicenseKey property every time a new instance of this component is created (see code below). 
' Alternatively, the LicenseKey property can be set automatically. This requires the license key to be stored in the registry.
' For details, see manual, chapter "Product Activation".
' objHttp.LicenseKey = "XXXXX-XXXXX-XXXXX"

' Component info
Wscript.Echo "Auron SMS Component " & objHttp.Version
Wscript.Echo "Build: " & objHttp.Build & vbCrLf & "Module: " & objHttp.Module
Wscript.Echo "License Status: " & objHttp.LicenseStatus & vbCrLf & "License Key: " & objHttp.LicenseKey & vbCrLf

' Set Logfile
Set objFso                    = CreateObject("Scripting.FileSystemObject")
objHttp.LogFile               = objFso.GetSpecialFolder(2) & "\Gsm.log"
WScript.Echo "Log file: " & objHttp.LogFile

strUrl = "https://gateway.auronsoftware.com:8181/sendsms/sendsmsHttpXML.asp"

GetSmsDemoAccountInfo strSystemID, strPassword

Set xmlDoc = CreateObject("Microsoft.XMLDOM")
xmlDoc.async = False

Set xmlRoot                   = xmlDoc.CreateElement("httpmessage")
Set xmlCredentials            = xmlDoc.CreateElement("credentials")
Set xmlSettings               = xmlDoc.CreateElement("settings")
Set xmlMessage                = xmlDoc.CreateElement("message")
Set xmlBody                   = xmlDoc.CreateElement("body")

xmlCredentials.SetAttribute "systemid", strSystemID
xmlCredentials.SetAttribute "password", strPassword
xmlRoot.AppendChild(xmlCredentials)

xmlSettings.SetAttribute "bodyformat", "0"
xmlSettings.SetAttribute "requestdeliveryreport", "True"
xmlSettings.SetAttribute "datacoding", "0"
xmlSettings.SetAttribute "deliveryreporturl", "https://www.auronsoftware.com"
xmlRoot.AppendChild(xmlSettings)

xmlMessage.SetAttribute "toaddress", ReadInput ( "Enter recipient address", "+", False )

xmlBody.Text = objHttp.Base64Encode(ReadInput ( "Enter the message", "Hello from Auron SMS Component!", False ))
xmlMessage.AppendChild(xmlBody)
xmlRoot.AppendChild(xmlMessage)
xmlDoc.Appendchild(xmlRoot)

WScript.Echo "Posting" & vbCrLf & xmlDoc.Xml
strResponse = objHttp.Post(strUrl, xmlDoc.Xml)
WScript.Echo "Post, result: " & objHttp.LastError & " (" & objHttp.GetErrorDescription ( objHttp.LastError ) & ")"
WScript.Echo "Response: " & strResponse

WScript.Echo "Ready."
WScript.Sleep 3000

' ***************************************************************************
' Function ReadInput
' ***************************************************************************
Function ReadInput( ByVal strTitle, ByVal strDefault, ByVal bAllowEmpty )

  Dim strInput, strReturn

  Do
     strInput = inputbox( strTitle, "Enter value", strDefault )
     If ( strInput <> "" ) Then
          strReturn = strInput
     End If
  Loop until strReturn <> "" Or bAllowEmpty

  ReadInput = strReturn
End Function

Function GetSmsDemoAccountInfo(BYREF strSystemID, BYREF strPassword)
  Dim objDemoAccount
  Set objDemoAccount        = CreateObject("AxSms.DemoAccount")
  strSystemID               = objDemoAccount.SystemId 
  strPassword               = objDemoAccount.Password
End Function




