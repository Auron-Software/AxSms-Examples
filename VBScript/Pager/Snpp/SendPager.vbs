' ********************************************************************
'
' Auron SMS Component
'
' Send an alphanumeric pager message through an SNPP connection.
'
' (c) Copyright Auron Software - www.auronsoftware.com
'
' ********************************************************************

Option Explicit

' Declare objects
Dim objSnpp, objFso, strRecipient, strMessage

' Create objects
Set objSnpp 	                = CreateObject ( "AxSms.Snpp" )

' A license key is required to unlock this component after the trial period has expired.
' Assign the LicenseKey property every time a new instance of this component is created (see code below). 
' Alternatively, the LicenseKey property can be set automatically. This requires the license key to be stored in the registry.
' For details, see manual, chapter "Product Activation".
' objSnpp.LicenseKey = "XXXXX-XXXXX-XXXXX"

' Component info
Wscript.Echo "Auron SMS Component " & objSnpp.Version
Wscript.Echo "Build: " & objSnpp.Build & vbCrLf & "Module: " & objSnpp.Module
Wscript.Echo "License Status: " & objSnpp.LicenseStatus & vbCrLf & "License Key: " & objSnpp.LicenseKey & vbCrLf

' Set Logfile
Set objFso = CreateObject("Scripting.FileSystemObject")
objSnpp.LogFile = objFso.GetSpecialFolder(2) & "\Snpp.log"
WScript.Echo "Log file: " & objSnpp.LogFile

objSnpp.Server                = ReadInput ( "Enter the SNPP server hostname or ip", "snpp.pageallcom.com", False )
objSnpp.ServerPort            = ReadInput ( "Enter the SNPP server port", "444", False )
strRecipient                  = ReadInput ( "Enter the pager code or recipient address", "5551234", False )
strMessage                    = ReadInput ( "Enter the textmessage", "Hello World !!!", False )
objSnpp.ServerTimeout         =  2500

' Send the message
WScript.Echo "Sending the message..."
objSnpp.Send strRecipient, strMessage
WScript.Echo "Send, result: " & objSnpp.LastError & " (" & objSnpp.GetErrorDescription( objSnpp.LastError ) & ")"  
If ( objSnpp.LastError = 0 ) Then
	WScript.Echo "Last response: " & objSnpp.ProviderResponse
End If

WScript.Echo "Ready."
Wscript.Sleep 3000

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