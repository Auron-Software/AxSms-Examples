' ********************************************************************
'
' Auron SMS Component
'
' The 'LicenseKey' property always returns the license key as it is 
' applied. Set this property to your license key to be able to use the
' SMS Component. Use the 'SaveLicenseKey' function to store the license
' key into the registry.
'
' (c) Copyright Auron Software - www.auronsoftware.com
'
' ********************************************************************

Option Explicit

' Declare Variables
Dim objGsm, strKey

' All protocol implementation objects (Gsm, Smpp, SmppServer, Snpp, etc..) can be used for this.
Set objGsm = CreateObject( "AxSms.Gsm" )

' Component info
Wscript.Echo "Auron SMS Component " & objGsm.Version
Wscript.Echo "Build: " & objGsm.Build & vbCrLf & "Module: " & objGsm.Module
Wscript.Echo "License Status: " & objGsm.LicenseStatus & vbCrLf & "License Key: " & objGsm.LicenseKey & vbCrLf

Do
  strKey = InputBox( "Please enter your license key below:" & vbCrLF )
Loop until strKey <> ""

objGsm.LicenseKey = strKey
objGsm.SaveLicenseKey 

WScript.Echo "SaveLicenseKey, result: " & objGsm.LastError & " (" & objGsm.GetErrorDescription( objGsm.LastError ) & ")" 

WScript.Echo "Ready."
