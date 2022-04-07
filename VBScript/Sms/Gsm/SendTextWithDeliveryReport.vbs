' ********************************************************************
'
' Auron SMS Component
'
' Send a text SMS message through a connected GSM phone or modem.
' The GSM phone or modem must be connected to your computer.
'
' (c) Copyright Auron Software - www.auronsoftware.com
'
' ********************************************************************

Option Explicit

Dim objGsm, objSmsMessage, objSmsConstants, objDeliveryReport, objFso
Dim strPin, strReference, strDevice
Dim bSearchDeliveryReport


Set objGsm          	        = CreateObject ( "AxSms.Gsm" )
Set objSmsMessage             = CreateObject ( "AxSms.Message" )
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

' Open connection to the device
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

' Message: set all properties
objSmsMessage.Clear
objSmsMessage.ToAddress       = ReadInput( "Enter Recipient", "+", False )
objSmsMessage.Body            = ReadInput( "Enter the message text you want to send to the recipient", "Hello, world!", False )

If( MsgBox( "Do you want a Delivery report after submitting the message (please note: it can take minutes or even hours before a Delivery report is received)?", vbYesNo, "Delivery report" ) = vbYes ) Then
  objSmsMessage.RequestDeliveryReport = True
  bSearchDeliveryReport = True
Else
  objSmsMessage.RequestDeliveryReport = False
  bSearchDeliveryReport = False
End If

' Send the message 
WScript.Echo "Sending the message..."
objGsm.SendSms( objSmsMessage )	
WScript.Echo "SendSms, result: " & objGsm.LastError & " (" & objGsm.GetErrorDescription(objGsm.LastError) & ")"

strReference = objSmsMessage.Reference
If( objGsm.LastError <> 0 ) Then
  objGsm.Close
  WScript.Sleep 3000
  WScript.Quit
End If	 

' Show the Message Reference
WScript.Echo "Message Reference (can be used with Delivery reports): " & strReference

' Wait for Delivery report
Do While bSearchDeliveryReport
  Wscript.Echo "Receiving Delivery report..."
  objGsm.Receive objSmsConstants.GSM_MESSAGESTATE_ALL, False, objSmsConstants.GSM_STORAGETYPE_ALL, 25000
  WScript.Echo "Receive, result: " & objGsm.LastError & " (" & objGsm.GetErrorDescription(objGsm.LastError) & ")"
  If objGsm.LastError <> 0 Then
    Exit Do
  End If

  Set objDeliveryReport = objGsm.GetFirstReport()
  Do While objGsm.LastError = 0
    If objDeliveryReport.Reference = strReference Then
      bSearchDeliveryReport = False
      WScript.Echo "Delivery Report " & objDeliveryReport.Reference & " received!"
      WScript.Echo "Delivery status: "  & objSmsConstants.GsmStatusToString(objDeliveryReport.Status)
      objGsm.DeleteReport objDeliveryReport
      WScript.Echo "DeleteReport, result: " & objGsm.LastError & " (" & objGsm.GetErrorDescription(objGsm.LastError) & ")"
      Exit Do
    Else
      Set objDeliveryReport = objGsm.GetNextReport()
    End If
  Loop
  If( bSearchDeliveryReport ) Then
    WScript.Echo "Not found yet."
    WScript.Sleep 3000
  End If
Loop

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

  
