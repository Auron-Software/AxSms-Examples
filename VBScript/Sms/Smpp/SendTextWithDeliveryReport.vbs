' ********************************************************************
'
' Auron SMS Component
'
' Send a text SMS message through a SMPP provider.
'
' (c) Copyright Auron Software - www.auronsoftware.com
'
' ********************************************************************


Option Explicit

' Declare objects
Dim objSmpp, objMessage, objSmsConstants, objDeliveryStatus, objFso

' Declare Variables
Dim strServer, nPort, nTimeout, strUsername, strPassword, strReference

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

'Get username and password for Auron SMPP Demo account
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
  objSmpp.Disconnect
  WScript.Sleep 3000
  WScript.Quit
End If

' Message: set all properties
objMessage.Clear
objMessage.ToAddress          = ReadInput( "Enter Recipient", "+", False )
objMessage.Body               = ReadInput ( "Enter the message text you want to send to the recipient", "Hello from the Auron SMS Component!", False )
objMessage.RequestDeliveryReport = True

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

Do While objSmpp.WaitForSmsUpdate(1000)
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
  ' 1025 = nocredits            
  If (objMessage.SmppCommandStatus = 1025 And strServer = "gateway.auronsoftware.com") Then
      WScript.Echo "Message not sent. Reason: No credits left."
  Else
      WScript.Echo "Message not sent. Reason: unspecified error [ " & objMessage.SmppCommandStatus & "]."
  End If

  objSmpp.Unbind
  objSmpp.Disconnect
  WScript.Sleep 3000
  WScript.Quit
End If

strReference = objMessage.Reference

' Show the result
If( objSmpp.LastError <> 0 ) Then
  objSmpp.Unbind
  objSmpp.Disconnect
  WScript.Sleep 3000
  WScript.Quit
End If	 

' Show the Message Reference
WScript.Echo "Message successfully submitted" & vbCrLf & "Message reference : " & strReference

Dim bGo
bGo = True

While bGo 'Keeps going until Delivery report was found
  Set objMessage = objSmpp.ReceiveMessage
  WScript.Echo "ReceiveMessage, result: " & objSmpp.LastError & " (" & objSmpp.GetErrorDescription( objSmpp.LastError ) & ")"
  While objSmpp.LastError = 0   

    If objMessage.SmppIsDeliveryReport Then
      WScript.Echo "Delivery rpt for: " & Left(objMessage.Body, InStr(objMessage.Body, " ")) & _
        "State: " & Mid(objMessage.Body, InStr(objMessage.Body, "stat:")+5, 7)  
        bGo = False
    Else
      WScript.Echo "  Message to: " & objMessage.ToAddress
      WScript.Echo "  Message body: " & objMessage.Body      
    End If
    Set objMessage = objSmpp.ReceiveMessage
    WScript.Echo "ReceiveMessage, result: " & objSmpp.LastError & " (" & objSmpp.GetErrorDescription( objSmpp.LastError ) & ")"
  Wend
  objSmpp.Sleep 3000
    
  If( bGo ) Then
    Wscript.Echo "No delivery report received yet."
  End If
Wend

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


  
