'-----------------------------------------------------------------------
' <copyright file="SmppProgram.vb" company="Auron">
'     Copyright (c) Auron Software - www.auronsoftware.com
' </copyright>
'-----------------------------------------------------------------------

Imports Microsoft.Win32
Imports System.IO
Imports AxSms
Imports System.Threading

Module SmppProgram

  Sub Main()
    Dim objSmpp As AxSms.Smpp = New AxSms.Smpp()
    Dim objSmsMessage As AxSms.Message = New AxSms.Message()
    Dim objSmsConstants As AxSms.Constants = New AxSms.Constants()

    Dim nServerPort As Integer = 0
    Dim strServer As String = String.Empty, strSystemType As String = String.Empty, strSystemID As String = String.Empty, strSystemPassword As String = String.Empty
    Dim strReference As String = String.Empty

    Dim bResult As Boolean = False, bWaitForDeliveryReport As Boolean = True

    Console.WriteLine("*******************************************************************************" + Environment.NewLine + Environment.NewLine +
        "WARNING: This example will spend all of your assigned demo credits at once !" + Environment.NewLine + Environment.NewLine +
        "To avoid spending credits you can connect to the Auron SMPP simulator" + Environment.NewLine +
        "instead. Download the SMPP Simulator from www.Auron.com/freeware" + Environment.NewLine + Environment.NewLine +
        "*******************************************************************************" + Environment.NewLine)

    ' A license key is required to unlock this component after the trial period has expired.
    ' Assign the LicenseKey property every time a new instance of this component is created (see code below). 
    ' Alternatively, the LicenseKey property can be set automatically. This requires the license key to be stored in the registry.
    ' For details, see manual, chapter "Product Activation".
    ' objSmpp.LicenseKey = "XXXXX-XXXXX-XXXXX"

    ' Component info
    Console.WriteLine("Auron SMS Component {0}{1}Build: {2}{3}Module: {4}{5}License Status: {6}{7}License Key: {8}{9}",
                      objSmpp.Version, Environment.NewLine, objSmpp.Build, Environment.NewLine, objSmpp.Module, Environment.NewLine,
                      objSmpp.LicenseStatus, Environment.NewLine, objSmpp.LicenseKey, Environment.NewLine)

    ' Set Logfile (optional, for debugging purposes)
    objSmpp.LogFile = Path.GetTempPath() + "Smpp.log"
    Console.WriteLine("Log file used: {0}{1}", objSmpp.LogFile, Environment.NewLine)

    ' Prompt user for SMPP server details by default, the Auron SMPP demo is used
    ReadSmppProvider(objSmpp, strServer, nServerPort, strSystemType, strSystemID, strSystemPassword)
    Dim strToAddress As String = ReadInput("Enter receipient: ", False)

    ' Connect to the SMPP server using host/IP-addess, a specific TCP port and a timeout
    objSmpp.Connect(strServer, nServerPort, 10000, False)
    Console.WriteLine("Connect, result: {0} ({1})", objSmpp.LastError.ToString(), objSmpp.GetErrorDescription(objSmpp.LastError))
    If (objSmpp.LastError <> 0) Then
      Console.WriteLine("Press <ENTER> to continue.")
      Console.ReadLine()
      Exit Sub
    End If

    ' Bind to the SMPP server as transceiver using your SystemID(login) and password
    objSmpp.Bind(objSmsConstants.SMPP_BIND_TRANSCEIVER, strSystemID, strSystemPassword, strSystemType, objSmsConstants.SMPP_VERSION_34, 0, 0, String.Empty, 10000)
    Console.WriteLine("Bind, result: {0} ({1})", objSmpp.LastError.ToString, objSmpp.GetErrorDescription(objSmpp.LastError))
    If (objSmpp.LastError <> 0) Then
      objSmpp.Disconnect()    ' This will unbind if bound
      Console.WriteLine("Press <ENTER> to continue.")
      Console.ReadLine()
      Exit Sub
    End If

    ' This is an example for a mainloop in a high-performance bulk-sms application. This applicaiton sends out a pre-determined
    ' number of SMS messages while receiving messages as well. Quit the mainloop by pressing 'q'.
    Dim nSendNumber As Integer = 10
    Console.WriteLine()
    Console.WriteLine("Enter mainloop; press 'q' to quit...")

    While objSmpp.IsBound AndAlso (Not (Console.KeyAvailable AndAlso Console.ReadKey().Key = ConsoleKey.Q))
      Dim objSms As AxSms.Message

      ' This loop will start with sending out a predefined number of SMS messages 
      If nSendNumber > 0 Then
        ' Prepare to send a batch of SMS messages by first checking how many messages can be sent at once.
        ' The Sms submit space is related to the queue size for SMS submissions: objSmpp.MaxSmsSubmissions
        Dim nSubmissions As Integer = objSmpp.CountSmsSubmitSpace()
        If nSubmissions >= nSendNumber Then
          nSubmissions = nSendNumber
        End If
        For i As Integer = 0 To nSubmissions - 1
          objSms = GenerateSms(nSendNumber, strToAddress)
          nSendNumber -= 1

          ' It's possible to accept multipart messages because by calling 'CountSmsSubmitSpace' the
          ' number of messages you can submit is guaranteed, even if they are multipart messages.
          objSmpp.SubmitSms(objSms, objSmsConstants.MULTIPART_ACCEPT)
          Console.WriteLine("SubmitSms, result: {0}, ({1})", objSmpp.LastError, objSmpp.GetErrorDescription(objSmpp.LastError))
        Next
      End If

      ' Process all SMS updates. SMS updates are generated if the SMPP server responds to a submitted SMS message.
      objSms = objSmpp.FetchSmsUpdate()
      While objSmpp.LastError = 0
        ' If the command status is something other than 0 (SMPP_ESME_ROK) the message is rejected
        Console.WriteLine("SMS update, command status: {0}; SMS reference: {1}", objSmsConstants.SmppEsmeToString(objSms.SmppCommandStatus), objSms.Reference)
        If objSms.SmppCommandStatus = objSmsConstants.SMPP_ESME_RTHROTTLED OrElse objSms.SmppCommandStatus = objSmsConstants.SMPP_ESME_RMSGQFUL Then
          ' The server is unable to handle the message right now, it's trying to throttle message volume.
          ' we can try to send it again right away to keep as close to the maximum throughput as possible.
          ' Don't mind the multipart flag here. The message returned by fetchupdate is always a single part.
          Console.WriteLine("Retrying this message")
          objSmpp.SubmitSms(objSms, objSmsConstants.MULTIPART_ACCEPT)
        End If
        objSms = objSmpp.FetchSmsUpdate()
      End While

      ' Receive incoming messages, only receive a set number of messages at once. This is especially important
      ' in high-volume applications. If there is no cap on the number of messages received here this loop can 
      ' take an increasing ammount of time. 
      Dim nMaxReceive As Integer = 10
      objSms = objSmpp.ReceiveMessage()
      While objSmpp.LastError = 0 AndAlso nMaxReceive > 0
        Console.WriteLine("Receive SMS from: {0}" & vbLf & "Body: {1}", objSms.FromAddress, objSms.Body)
        nMaxReceive -= 1
        objSms = objSmpp.ReceiveMessage()
      End While

      Thread.Sleep(1)
    End While

    ' If the server disconnected while we are still sending, display the messages that where either
    ' queued or sent but not acknowledged. This way we can still update our datamodel accordingly.
    Dim objMessage = objSmpp.FetchNotSubmitted()
    While objSmpp.LastError = 0
      Console.WriteLine("This message was queued but never sent: [%d]", objMessage.UserTag)
      objMessage = objSmpp.FetchNotSubmitted()
    End While

    objMessage = objSmpp.FetchNotUpdated()
    While objSmpp.LastError = 0
      Console.WriteLine("This message was sent but never updated: [%d]; sequence: [%d]", objMessage.UserTag, objMessage.SmppSequenceNumber)
      objMessage = objSmpp.FetchNotUpdated()
    End While

    ' Unbind and Disconnect
    objSmpp.Unbind()
    objSmpp.Disconnect()

    Console.WriteLine("Disconnected.")
    Console.WriteLine("Ready.")
    Console.WriteLine("Press <ENTER> to continue.")
    Console.ReadLine()
  End Sub

  Function GenerateSms(ByVal nNumber As Integer, ByVal strTo As String) As AxSms.Message
    Dim objSms As AxSms.Message = New AxSms.Message()

    objSms.ToAddress = strTo
    objSms.Body = String.Format("{0} bottle{1} of beer on the wall, {0} bottle{1} of beer. ", nNumber, IIf(nNumber = 1, "", "s"))
    objSms.Body += "Take one down and pass it around, "
    nNumber = nNumber - 1
    If nNumber <= 0 Then
      objSms.Body += "no more bottles of beer on the wall."
    Else
      objSms.Body += String.Format("{0} bottle{1} of beer on the wall.", nNumber, IIf(nNumber = 1, "", "s"))
    End If

    GenerateSms = objSms
  End Function

  Sub ReadSmppProvider(ByVal objSmpp As Smpp, ByRef strServer As String, ByRef nPort As Integer, ByRef strSystemType As String, ByRef strSystemID As String, ByRef strSystemPassword As String)

    Dim strPort As String

    strServer = ReadInput("Enter SMPP provider. Type <ENTER> to use the free Auron SMPP gateway", True)

    If (strServer = String.Empty) Then
      Dim objDemoAccount As AxSms.DemoAccount = New AxSms.DemoAccount()

      strServer = "gateway.auronsoftware.com"
      nPort = 2775
      strSystemType = "SMPP"

      strSystemID = objDemoAccount.SystemId
      strSystemPassword = objDemoAccount.Password
    Else
      strPort = ReadInput("Enter port. Type <ENTER> to use default port 2775", True)
      If (strPort = String.Empty) Then
        nPort = 2775

      Else
        If (Integer.TryParse(strPort, nPort) = False) Then
          nPort = 2775
        End If
      End If

      strSystemType = ReadInput("Enter SystemType. Type <ENTER> to use default SMPP", True)
      If (strSystemType = String.Empty) Then
        strSystemType = "SMPP"
      End If
      strSystemID = ReadInput("Enter SystemID (account ID to login to the provider)", False)
      strSystemPassword = ReadInput("Enter System Password (password to login to the provider)", True)
    End If

    Console.WriteLine(vbCrLf & "Provider settings: ")
    Console.WriteLine("  Server: " & strServer)
    Console.WriteLine("  ServerPort: " & nPort.ToString)
    Console.WriteLine("  SystemID: " & strSystemID)
    Console.WriteLine("  SystemPassword: " & strSystemPassword)
    Console.WriteLine(String.Empty)
  End Sub

  Function ReadInput(ByVal strTitle As String, ByVal bAllowEmpty As Boolean)

    Dim strInput As String
    Dim strReturn As String = String.Empty

    Console.WriteLine(strTitle)
    Do
      Console.Write("  > ")
      strInput = Console.ReadLine()
      If (strInput.Length > 1) Then
        strReturn = strInput
      End If
    Loop While (strReturn = String.Empty And Not bAllowEmpty)

    Return strReturn
  End Function

End Module
