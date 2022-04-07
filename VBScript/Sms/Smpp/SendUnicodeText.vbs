' ********************************************************************
'
' Auron SMS Component
'
' Send a Unicode text SMS message through a SMPP provider.
'
' (c) Copyright Auron Software - www.auronsoftware.com
'
' ********************************************************************


Option Explicit

' Declare variables
Dim objSmpp, objMessage, objSmsConstants, objDeliveryStatus, objFso
Dim strServer, nPort, nTimeout, strUsername, strPassword

'Get username and password for Auron SMPP Demo account
GetSMSDemoAccountInfo strUsername, strPassword

' Create objects
Set objSmpp                   = CreateObject ( "AxSms.Smpp" )
Set objMessage                = CreateObject ( "AxSms.Message" )
Set objSmsConstants           = CreateObject ( "AxSms.Constants" )

' A license key is required to unlock this component after the trial period has expired.
' Assign the LicenseKey property every time a new instance of this component is created (see code below). 
' Alternatively, the LicenseKey property can be set automatically. This requires the license key to be stored in the registry.
' For details, see manual, chapter "Product Activation".
' objSmpp.LicenseKey = "XXXXX-XXXXX-XXXXX"

' Component info
Wscript.Echo "Auron SMS Component " & objSmpp.Version
Wscript.Echo "Build: " & objSmpp.Build & vbCrLf & "Module: " & objSmpp.Module
Wscript.Echo "License Status: " & objSmpp.LicenseStatus & vbCrLf & "License Key: " & objSmpp.LicenseKey & vbCrLf

' Set Logfile
Set objFso                    = CreateObject("Scripting.FileSystemObject")
objSmpp.LogFile               = objFso.GetSpecialFolder(2) & "\Smpp.log"
WScript.Echo "Log file: " & objSmpp.LogFile

strServer                     = ReadInput ( "Enter hostname of SMPP server", "gateway.auronsoftware.com", False )
nPort                         = ReadInput ( "Enter portnumber of SMPP server", 2775, False )
strUsername                   = ReadInput ( "Enter account systemID", strUsername, False )
strPassword                   = ReadInput ( "Enter account password", strPassword, False )
nTimeout = 2000

' Connect to smpp provider
objSmpp.Connect strServer, nPort, nTimeout
Wscript.Echo "Connect, result: " & objSmpp.LastError & " (" & objSmpp.GetErrorDescription(objSmpp.LastError) & ")"
If ( objSmpp.LastError <> 0 ) Then 
  WScript.Sleep 3000
  WScript.Quit
End If 

objSmpp.Bind objSmsConstants.SMPP_BIND_TRANSCEIVER, strUsername, strPassword, "", objSmsConstants.SMPP_VERSION_34, 0, 0, "", nTimeout
Wscript.Echo "Bind, result: " & objSmpp.LastError & " (" & objSmpp.GetErrorDescription(objSmpp.LastError) & ")"
If ( objSmpp.LastError <> 0 ) Then
  objSmpp.Disconnect
  WScript.Sleep 3000
  WScript.Quit
End If

' Message: set all properties
objMessage.Clear
objMessage.ToAddress          = ReadInput( "Enter Recipient", "+", False )
objMessage.Body               = ReadInput ( "Enter the message text you want to send to the recipient", "Hello, World", False )
objMessage.DataCoding         = objSmsConstants.DATACODING_UNICODE   

' Send the message 
WScript.Echo "Sending the message..."
objSmpp.SubmitSms ( objMessage )
Wscript.Echo "SubmitSms, result: " & objSmpp.LastError & " (" & objSmpp.GetErrorDescription(objSmpp.LastError) & ")"
If( objSmpp.LastError <> 0 ) Then
  objSmpp.Unbind
  objSmpp.Disconnect
  WScript.Sleep 3000
  WScript.Quit  
End If

' Wait for the message to be sent in the background. 5000msecs means: timeout after 5000msecs.
objSmpp.WaitForSmsUpdate(5000)

objSmpp.Unbind
objSmpp.Disconnect

WScript.Echo "Disconnected."
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

' ***************************************************************************
' Function GetSMSDemoAccountInfo
' ***************************************************************************
Function GetSmsDemoAccountInfo(BYREF strSystemID, BYREF strPassword)
  Dim objDemoAccount
  Set objDemoAccount        = CreateObject("AxSms.DemoAccount")
  strSystemID               = objDemoAccount.SystemId 
  strPassword               = objDemoAccount.Password
End Function
  
