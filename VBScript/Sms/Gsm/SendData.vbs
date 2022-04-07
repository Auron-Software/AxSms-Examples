' ********************************************************************
'
' Auron SMS Component
'
' Send raw 8 bit data using SMS (max 140 bytes).
' The GSM phone or modem must be connected to your computer
'
' (c) Copyright Auron Software - www.auronsoftware.com
'
' ********************************************************************

Option Explicit

'Declare Objects
Dim objGsm, objSmsMessage, objSmsConstants, objWapPush, objFso
Dim strPin, strDevice

'Create Objects
Set objGsm                    = CreateObject ( "AxSms.Gsm" )
Set objSmsMessage             = CreateObject ( "AxSms.Message" )
Set objWapPush                = CreateObject ( "AxSms.TemplateWapPush" )
Set objSmsConstants           = CreateObject ( "AxSms.Constants" )

' A license key is required to unlock this component after the trial period has expired.
' Assign the LicenseKey property every time a new instance of this component is created (see code below). 
' Alternatively, the LicenseKey property can be set automatically. This requires the license key to be stored in the registry.
' For details, see manual, chapter "Product Activation".
' objGsm.LicenseKey = "XXXXX-XXXXX-XXXXX"

' Component info
Wscript.Echo "Auron SMS Component " & objGsm.Version
Wscript.Echo "Build: " & objGsm.Build & vbCrLf & "Module: " & objGsm.Module
Wscript.Echo "License Status: " & objGsm.LicenseStatus & vbCrLf & "License Key: " & objGsm.LicenseKey & vbCrLf

' Set Logfile
Set objFso                   = CreateObject("Scripting.FileSystemObject")
objGsm.LogFile               = objFso.GetSpecialFolder(2) & "\Gsm.log"
WScript.Echo "Log file: " & objGsm.LogFile

' Select Device
strDevice                     = AskDevice ( objGsm )

If (strDevice = "") Then
  WScript.Echo "No devices or COM ports where found."
  WScript.Echo "Ready."  
  WScript.Quit
End If

objGsm.Open strDevice
WScript.Echo "Open, result: " & objGsm.LastError & " (" & objGsm.GetErrorDescription(objGsm.LastError) & ")"
If (objGsm.LastError = 36101) Then '36101 means: modem requires pin code, see also: www.auronsoftware.com/kb/api-error-codes/
  strPin                      = ReadInput( "Enter PIN code (leave blank for no PIN code)", "", False )
  objGsm.Open strDevice, strPin
  WScript.Echo "Open, result: " & objGsm.LastError & " (" & objGsm.GetErrorDescription(objGsm.LastError) & ")"
End If

If (objGsm.LastError <> 0) Then
  WScript.Echo "Ready."  
  WScript.Quit  
End If

' Create a WAPPush message using the WapPush template
objWapPush.Url = "www.auronsoftware.com"
objWapPush.Description = "Innovators in Communication"
objWapPush.Encode
WScript.Echo "WapPush encode, result: " & objWapPush.LastError & " (" & objWapPush.GetErrorDescription(objWapPush.LastError) & ")"
WScript.Echo "Encoded WAPPush message: " & objWapPush.Data

' Message: set all properties. WAPPush will be HEX formatted, 8bit data including an UDH header.
objSmsMessage.Clear
objSmsMessage.ToAddress       = ReadInput( "Enter Recipient", "+", False )
objSmsMessage.BodyFormat      = objSmsConstants.BODYFORMAT_HEX
objSmsMessage.DataCoding      = objSmsConstants.DATACODING_8BIT_DATA
objSmsMessage.HasUdh          = True
objSmsMessage.Body            = objWapPush.Data

' Send the message 
WScript.Echo "Sending the message..."
objGsm.SendSms( objSmsMessage )
WScript.Echo "SendSms, result: " & objGsm.LastError & " (" & objGsm.GetErrorDescription(objGsm.LastError) & ")"

objGsm.Close
WScript.Echo "Ready."
WScript.Sleep 3000

' ***************************************************************************
' Function AskDevice
' ***************************************************************************
Function AskDevice( objDevice )
  Dim strMessage, strDefaultDevice, strSelectedDevice, strPort, strDevice
  
	strMessage = "Connected devices: " & vbCrLf
	strDevice = objGsm.FindFirstDevice

	While objGsm.LastError = 0
    strMessage = strMessage & strDevice & vbCrLf
		strDevice = objGsm.FindNextDevice()
	WEnd
  
  strPort = objGsm.FindFirstPort()
  While (objGsm.LastError = 0)
      strMessage = strMessage & strPort & vbCrLf
      strPort = objGsm.FindNextPort()
  WEnd

	strDefaultDevice = objGsm.FindFirstDevice

	If (objGsm.LastError <> 0) Then
		strDefaultDevice = objGsm.FindFirstPort()
	End If
  
  ' If strDefaultDevice has no value it means there was no device or port found.  
  If (strDefaultDevice <> "") Then  
    Do
      strSelectedDevice = InputBox( strMessage, "Input", strDefaultDevice )
    Loop Until strSelectedDevice <> ""
  End If

  AskDevice = strSelectedDevice
End Function



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