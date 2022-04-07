' ********************************************************************
'
' Auron SMS Component
'
' The local SMPP Server
' There are 3 ways this script (server) will react.
' 1: Client connects as Transmitter. Server will only receive one message
' 2: Client connects as Transceiver. Server will send a DeliveryReport when the Tranceiver send a SMS Message
'    Server will also send an new SMS Message back to the transceiver
' 3: Client connects as Receiver. Server will only send one SMS Message to the receiver
'
' (c) Copyright Auron Software - www.auronsoftware.com
'
' ********************************************************************

Option Explicit

Dim objSmppServer, objSmppSession, objConstants, objMessage, objFso
Dim nPort

Set objSmppServer = CreateObject("AxSms.SmppServer")   ' Create the SMPP server object
Set objConstants = CreateObject("AxSms.Constants")  ' Create the SMS constants object

' A license key is required to unlock this component after the trial period has expired.
' Assign the LicenseKey property every time a new instance of this component is created (see code below). 
' Alternatively, the LicenseKey property can be set automatically. This requires the license key to be stored in the registry.
' For details, see manual, chapter "Product Activation".
' objSmppServer.LicenseKey = "XXXXX-XXXXX-XXXXX"

' Component info
Wscript.Echo "Auron SMS Component " & objSmppServer.Version
Wscript.Echo "Build: " & objSmppServer.Build & vbCrLf & "Module: " & objSmppServer.Module
Wscript.Echo "License Status: " & objSmppServer.LicenseStatus & vbCrLf & "License Key: " & objSmppServer.LicenseKey & vbCrLf

' Set Logfile
Set objFso                             = CreateObject("Scripting.FileSystemObject")
objSmppServer.LogFile               = objFso.GetSpecialFolder(2) & "\SmppServer.log"
WScript.Echo "Log file: " & objSmppServer.LogFile

nPort = ReadInput("Enter port number of SMPP server", 2775)
objSmppServer.Start nPort
If objSmppServer.LastError <> 0 Then
  WScript.Echo "Error while starting SMPP server: " & _
    objSmppServer.GetErrorDescription(objSmppServer.LastError)
  WScript.Quit 1
End If

WScript.Echo "SMPP server started..."

' Keep iterating through all the sessions while the server is running
While objSmppServer.IsStarted
  
  ' Loop through the sessions until all sessions has been handled
  Set objSmppSession = objSmppServer.GetFirstSession  
  While objSmppServer.LastError = 0
    ' Accept all sessions that request a bind
    If objSmppSession.ConnectionState = objConstants.SMPP_SESSIONSTATE_BINDING Then
      WScript.Echo ""
      WScript.Echo "New connection!"
      WScript.Echo "Client IP: " & objSmppSession.Ip & " Port: " & objSmppSession.Port
      WScript.Echo "SystemId: " & objSmppSession.SystemId
      WScript.Echo "AddressRange: " & objSmppSession.AddressRange
      objSmppSession.LogFile = objSmppSession.SystemId & ".log"
      WScript.Echo "Log file can be found here: " & objSmppSession.LogFile
            
      ' Always accept the client bind request
      objSmppSession.RespondToBind objConstants.SMPP_ESME_ROK
    End If    
    
    If objSmppSession.ConnectionState = objConstants.SMPP_SESSIONSTATE_BOUND_TRX Then
      ' Client is transceiver, retrieve message and send a message back to the client
      If ReceiveMessages(True) Then
        SendMessage
      End If
    ElseIf objSmppSession.ConnectionState = objConstants.SMPP_SESSIONSTATE_BOUND_TX Then
      ' Client is transmitter, retrieving message from the client
      ReceiveMessages(False)
    ElseIf objSmppSession.ConnectionState = objConstants.SMPP_SESSIONSTATE_BOUND_RX Then
      ' Client is receiver, sending a message to the client
      SendMessage
    End If
    
    Set objSmppSession = objSmppServer.GetNextSession
  WEnd
  
  ' Check for closed sessions, if there are any check if they have any pending messages.
  Set objSmppSession = objSmppServer.GetClosedSession()
  While objSmppServer.LastError = 0
	WScript.Echo "Connection closed" 
    WScript.Echo "Client IP: " & objSmppSession.Ip & " Port: " & objSmppSession.Port
    WScript.Echo "SystemId: " & objSmppSession.SystemId
    
    Wscript.Echo "Not responded: "
    Set objMessage = objSmppSession.FetchNotResponded
    While objSmppSession.LastError = 0
      Wscript.Echo "Usertag: " & objMessage.Usertag & "; SequenceNumber: " & objMessage.SmppSequenceNumber
      Set objMessage = objSmppSession.FetchNotResponded
    Wend
    
    WScript.Echo "Not delivered (seq = 0): "
    set objMessage = objSmppSession.FetchNotDelivered
    While objSmppSession.LastError = 0
      WScript.Echo "Usertag: " & objMessage.Usertag & "; SequenceNumber: " & objMessage.SmppSequenceNumber
      set objMessage = objSmppSession.FetchNotDelivered
    Wend
    
	Set objSmppSession = objSmppServer.GetClosedSession()
  WEnd
  
  objSmppServer.Sleep 500 
WEnd

objSmppServer.Stop
 
' ***************************************************************************
' Function ReceiveMessages
' Retrieves SMS messages from client.
' ***************************************************************************
Function ReceiveMessages(bSendDeliveryReport)
  ' Receive incoming messages
  ReceiveMessages = False
  
  Set objMessage = objSmppSession.ReceiveSubmitSms
  While objSmppSession.LastError = 0
    ReceiveMessages = True

    ' Add new message to Session to start assembling it
    objSmppSession.AssembleSms objMessage
      
    ' Accept the incoming message with the suggested message reference
    objSmppSession.RespondToSubmitSms objMessage
    If objSmppSession.LastError <> 0 Then
      WScript.Echo "Error while responding: " & _
        objSmppSession.GetErrorDescription(objSmppSession.LastError)
      WScript.Quit 1
    End If
    
    ' Send a successful delivery report for the incoming message
    ' This sample uses the helper method 'DeliverReport'. Create your
    ' own delivery report by sending an SMS message with 'IsDeliveryReport'
    ' set to true.
    If bSendDeliveryReport And objMessage.RequestDeliveryReport Then
      objMessage.SmppStatus = objConstants.SMPP_MESSAGESTATE_DELIVERED
      WScript.Echo "Sending a delivery report"
      objSmppSession.DeliverReport objMessage
      If objSmppSession.LastError <> 0 Then
        WScript.Echo "Error while sending delivery report: " & _
          objSmppSession.GetErrorDescription(objSmppSession.LastError)
        WScript.Quit 1
      End If
    End If
    
    Set objMessage = objSmppSession.ReceiveSubmitSms
  WEnd
  
  'Check if there are any fully assembled Sms Messages at this point.
  Set objMessage = objSmppSession.GetAssembledSms(false)
  While objSmppSession.LastError = 0
    WScript.Echo "Receive sms from: " & objSmppSession.SystemId & "; to: " & _
      objMessage.ToAddress & "; suggested reference: " & objMessage.Reference &_
      "; body: " & objMessage.Body
    Set objMessage = objSmppSession.GetAssembledSms(false)
  Wend
  
End Function

' ***************************************************************************
' Function SendMessage
' Sends a new SMS Message to the client.
' ***************************************************************************
Function SendMessage
  ' Create a new message   
  Dim objMessageToSend, objResponseMessage
  
  Set objMessageToSend = CreateObject("AxSms.Message")
  
  objMessageToSend.ToAddress = objSmppSession.SystemId
  objMessageToSend.Body = "Hello from the Auron Gateway !"
  objMessageToSend.UserTag = 1 ' To identify this message when the client responds  
  
  ' Send the new message to the client
  WScript.Echo "Deliver Message: '" & objMessageToSend.Body & "' To: " & objMessageToSend.ToAddress & ""
  objSmppSession.DeliverSms objMessageToSend
  If objSmppSession.LastError <> 0 Then
    WScript.Echo "Error while delivering: " & _
      objSmppSession.GetErrorDescription(objSmppSession.LastError)
    WScript.Quit 1
  End If          
  
  ' Allow a little time before checking if client accepted any messages.
  objSmppServer.Sleep 100
  
  ' Check if the client accepted any messages
  Set objResponseMessage = objSmppSession.ReceiveDeliverResponse
  While objSmppSession.LastError = 0
    WScript.Echo "Response: " & objResponseMessage.SmppCommandStatus & _
      " for UserTag: " & objResponseMessage.UserTag 
    Set objResponseMessage = objSmppSession.ReceiveDeliverResponse
  WEnd
End Function
  
' ***************************************************************************
' Function ReadInput
' ***************************************************************************
Function ReadInput(ByVal strTitle, ByVal strDefault)
  Dim strInput

  strInput = inputbox(strTitle, "Enter value", strDefault)
  If strInput = "" Then
    WScript.Echo "User cancelled !"
    WScript.Quit 1
  End If
  
  ReadInput = strInput   
End Function