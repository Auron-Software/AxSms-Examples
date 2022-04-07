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
Dim objWapPush, objGsm, objSmsConstants, objMessage, strDevice, strPin, bSearchDeliveryReport, objDeliveryReport, objFso

' Declare variables
Dim strReference

' Create objects
Set objWapPush                = CreateObject( "AxSms.TemplateWapPush" )
Set objGsm                    = CreateObject( "AxSms.Gsm" )
Set objMessage                = CreateObject( "AxSms.Message"     )
Set objSmsConstants           = CreateObject( "AxSms.Constants"   )

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

If (objGsm.LastError = 36101) Then '36101 means: modem requires pin code, see also: www.auronsoftware.com/kb/api-error-codes/
  strPin                      = ReadInput( "Enter PIN code (leave blank for no PIN code)", "", False )
  objGsm.Open strDevice, strPin
End If

WScript.Echo "Opening Device: " & strDevice & vbCrLf & "Result: " & objGsm.GetErrorDescription(objGsm.LastError)

If (objGsm.LastError <> 0) Then
  WScript.Echo "Ready."  
  WScript.Quit  
End If

objMessage.ToAddress          = ReadInput ( "Enter recipient address", "+", False )
objWapPush.Url                = ReadInput ( "Enter an URL to push", "https://www.auronsoftware.com", False )
objWapPush.Description        = ReadInput ( "Enter a description for the URL", "Innovators in Communication", False )
objWapPush.SignalAction       =  objSmsConstants.WAPPUSH_SIGNAL_MEDIUM
objWapPush.Encode

If ( objWapPush.LastError <> 0 ) Then
   WScript.Echo "Encoding WAP Push message failed, error = #" & objWapPush.LastError & " ( " & objWapPush.GetErrorDescription ( objWapPush.LastError ) & " )"
   WScript.Sleep 3000
   WScript.Quit
End If

objMessage.DataCoding         = objSmsConstants.DATACODING_8BIT_DATA
objMessage.BodyFormat         = objSmsConstants.BODYFORMAT_HEX
objMessage.HasUDH             = True
objMessage.Body               = objWapPush.Data

' Send the message
WScript.Echo "Sending Message..."

objGsm.SendSms ( objMessage )
WScript.Echo "Send, result: " & objGsm.LastError & " ( " & objGsm.GetErrorDescription ( objGsm.LastError ) & " )"
If ( objGsm.LastError <> 0 ) Then
   WScript.Sleep 3000
   objGsm.Close
   WScript.Quit
End If

WScript.Echo "Ready."

objGsm.Close
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

  
