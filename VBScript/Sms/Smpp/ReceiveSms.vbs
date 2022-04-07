' ********************************************************************
'
'  Receive messages through an SMPP connection.
'
'  This script will listen for incoming messages for one minute.
'	 Auron SMS Component
'
' (c) Copyright 2011 by Auron Software - www.auronsoftware.com
'
' ********************************************************************

Option Explicit

' Declare Objects
Dim objSmpp, objMessage, objSmsConstants, fso

' Declare Variables
Dim strServer, nPort, nTimeout, strUsername, strPassword, strPhoneNumber, i

' Create Objects
Set objSmpp                   = CreateObject ( "AxSms.Smpp" )
Set objSmsConstants           = CreateObject ( "AxSms.Constants"    )

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
Set fso                       = CreateObject("Scripting.FileSystemObject")
objSmpp.LogFile               = fso.GetSpecialFolder(2) & "\Smpp.log"
WScript.Echo "Log file: " & objSmpp.LogFile

'Get username and password for Auron SMPP Demo account
GetSMSDemoAccountInfo strUsername, strPassword

strServer                     = ReadInput ( "Enter hostname of SMPP server", "gateway.auronsoftware.com", False )
nPort                         = ReadInput ( "Enter portnumber of SMPP server", 2775, False )
strUsername                   = ReadInput ( "Enter account systemID", strUsername, False )
strPassword                   = ReadInput ( "Enter account password", strPassword, False )
strPhoneNumber                = "S" & ReadInput ( "Enter your PhoneNumber you are going to use to send the SMS Message", "+", False )
nTimeout = 2000

' Connect to smpp provider. Starts a background thread to handle communication with the server and send/receive messages.
objSmpp.Connect strServer, nPort, nTimeout
WScript.Echo "Connect, result: " & objSmpp.LastError & " (" & objSmpp.GetErrorDescription(objSmpp.LastError) & ")"
If ( objSmpp.LastError <> 0 ) Then 
  WScript.Sleep 3000
  WScript.Quit
End If 

objSmpp.Bind objSmsConstants.SMPP_BIND_TRANSCEIVER, strUsername, strPassword, "", objSmsConstants.SMPP_VERSION_34, 0, 0, strPhoneNumber, nTimeout
Wscript.Echo "Bind, result: " & objSmpp.LastError & " (" & objSmpp.GetErrorDescription(objSmpp.LastError) & ")"
If ( objSmpp.LastError <> 0 ) Then
  WScript.Sleep 3000
  WScript.Quit
End If


WScript.Echo "Connected to provider" & vbCrLf & vbCrLf & "Send an SMS message to the SMPP gateway (Mobile number: +12015834722) and click OK" & vbCrLf & "This demo will check for new messages during 60 seconds."
  
For i = 1 To 60
    Set objMessage = objSmpp.ReceiveMessage()
    Wscript.Echo "ReceiveMessage, result: " & objSmpp.LastError & " (" & objSmpp.GetErrorDescription(objSmpp.LastError) & ")"
    While objSmpp.LastError = 0
      WScript.Echo "Received FromAddress: " & objMessage.FromAddress
      WScript.Echo "Body: " & objMessage.Body
      Set objMessage = objSmpp.ReceiveMessage()  
      Wscript.Echo "ReceiveMessage, result: " & objSmpp.LastError & " (" & objSmpp.GetErrorDescription(objSmpp.LastError) & ")"    
    WEnd  
  WScript.Sleep( 1000 )
Next

' Disconnection automatically 'unbinds' if the connection is still bound.
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