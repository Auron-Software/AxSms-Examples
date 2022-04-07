' ********************************************************************************************
'
'    Send an SMS Wap Push message (Service Indication) through a connected GSM phone or modem.
'
' Note:
'
'    The GSM phone or modem must be connected to your PC
'    using an USB or serial datacable, IR or BlueTooth.
'
'	 Auron SMS Component
' (c) Copyright 2011 by Auron Software - www.auronsoftware.com
'
' *********************************************************************************************

Option Explicit

' Declare objects
Dim objWapPush, objSmpp, objSmsConstants, objMessage, objFso, strDevice, strPin
Dim strServer, nPort, nTimeout, strUsername, strPassword

' Declare variables
Dim strReference

' Create objects
Set objWapPush                = CreateObject( "AxSms.TemplateWapPush" )
Set objSmpp                   = CreateObject( "AxSms.Smpp" )
Set objMessage                = CreateObject( "AxSms.Message" )
Set objSmsConstants           = CreateObject( "AxSms.Constants" )


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
Set objFso                       = CreateObject("Scripting.FileSystemObject")
objSmpp.LogFile               = objFso.GetSpecialFolder(2) & "\Smpp.log"
WScript.Echo "Log file: " & objSmpp.LogFile

GetSMSDemoAccountInfo strUsername, strPassword

strServer                     = ReadInput ( "Enter hostname of SMPP server", "gateway.auronsoftware.com", False )
nPort                         = ReadInput ( "Enter portnumber of SMPP server", 2775, False )
strUsername                   = ReadInput ( "Enter account systemID", strUsername, False )
strPassword                   = ReadInput ( "Enter account password", strPassword, False )

nTimeout = 2000

' Connect to smpp provider
objSmpp.Connect strServer, nPort, nTimeout
WScript.Echo "Connect, result: " & objSmpp.LastError & " (" & objSmpp.GetErrorDescription(objSmpp.LastError) & ")"
If ( objSmpp.LastError <> 0 ) Then 
  WScript.Sleep 3000
  WScript.Quit
End If 

objSmpp.Bind objSmsConstants.SMPP_BIND_TRANSCEIVER, strUsername, strPassword, "", objSmsConstants.SMPP_VERSION_34, 0, 0, "", nTimeout
WScript.Echo "Bind, result: " & objSmpp.LastError & " (" & objSmpp.GetErrorDescription(objSmpp.LastError) & ")"
If ( objSmpp.LastError <> 0 ) Then
  WScript.Sleep 3000
  WScript.Quit
End If

objWapPush.Url                = ReadInput ( "Enter an URL to push", "https://www.auronsoftware.com", False )
objWapPush.Description = ReadInput ( "Enter a description for the URL", "Innovators in Communication", False )
objWapPush.SignalAction       =  objSmsConstants.WAPPUSH_SIGNAL_MEDIUM

objWapPush.Encode
WScript.Echo "Encode, result: " & objWapPush.LastError & " (" & objWapPush.GetErrorDescription(objWapPush.LastError) & ")"
If ( objWapPush.LastError <> 0 ) Then
   WScript.Sleep 3000
   WScript.Quit
End If

objMessage.ToAddress          = ReadInput ( "Enter recipient address", "+", False )
objMessage.DataCoding         = objSmsConstants.DATACODING_8BIT_DATA
objMessage.BodyFormat         = objSmsConstants.BODYFORMAT_HEX
objMessage.HasUDH             = True
objMessage.Body               = objWapPush.Data

WScript.Echo "Sending Message..."

objMessage.RequestDeliveryReport = False
objSmpp.SubmitSms ( objMessage )
WScript.Echo "SubmitSms, result: " & objSmpp.LastError & " (" & objSmpp.GetErrorDescription(objSmpp.LastError) & ")"

If( objSmpp.LastError <> 0 ) Then
  objSmpp.Unbind
  objSmpp.Disconnect
  WScript.Sleep 3000
  WScript.Quit  
End If

Do While objSmpp.WaitForSmsUpdate(2000)
  Set objMessage = objSmpp.FetchSmsUpdate
  Wscript.Echo "FetchSmsUpdate, result: " & objSmpp.LastError & " (" & objSmpp.GetErrorDescription(objSmpp.LastError) & ")"
  If objSmpp.LastError = 0 Then
     Exit Do
  End If
  WScript.Sleep 100
Loop

' SMPP command status codes are provider specific. The Auron SMPP Demo Gateway uses command status 1025
' to communicate there are no more credits left for this account on the Auron SMPP Demo Gateway.
If (objMessage.SmppCommandStatus <> 0) Then
  If (objMessage.SmppCommandStatus = 1025 And strServer = "gateway.auronsoftware.com") Then
      WScript.Echo "Message not sent. Reason: No credits left."
  Else
      WScript.Echo "Message not sent. Reason: unspecified error [ " & objMessage.SmppCommandStatus & "]."
  End If
End If

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