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
Dim objHttp, objMessage, objSmsConstants, objFso
Dim strUsername, strPassword

' Create Objects
Set objHttp                   = CreateObject( "AxSms.Http" )
Set objMessage                = CreateObject( "AxSms.Message" )
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
Set objFso                  = CreateObject("Scripting.FileSystemObject")
objHttp.LogFile             = objFso.GetSpecialFolder(2) & "\Http.log"
WScript.Echo "Log file: " & objHttp.LogFile

GetSmsDemoAccountInfo strUsername, strPassword

' Set provider URL template. The placeholders are replace on SendSms.
objHttp.Url = "https://gateway.auronsoftware.com:8181/sendsms/default.asp?" & _
	"username="& strUsername &"&password=" & strPassword & "&text=" & _
    objSmsConstants.HTTP_PLACEHOLDER_BODY & "&to=" & objSmsConstants.HTTP_PLACEHOLDER_TOADDRESS   

' SMS Message Properties
objMessage.ToAddress          = ReadInput ( "Enter recipient address", "+", False )
objMessage.Body               = ReadInput ( "Enter the message", "Hello from Auron SMS Component!", False )

WScript.Echo objHttp.SendSms ( objMessage )
WScript.Echo "SendSms, result: " & objHttp.LastError & " (" & objHttp.GetErrorDescription ( objHttp.LastError ) & ")"
WScript.Echo "Response: " & objHttp.LastResponseCode

WScript.Echo "Ready"
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



