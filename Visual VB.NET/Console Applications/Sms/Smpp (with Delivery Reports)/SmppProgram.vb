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

    Dim bResult As Boolean = False

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

    ' Connect to the SMPP server. This starts a background thread which maintains the communication with the SMPP server.
    objSmpp.Connect(strServer, nServerPort, 10000, False)
    Console.WriteLine("Connect, result: {0} ({1})", objSmpp.LastError.ToString(), objSmpp.GetErrorDescription(objSmpp.LastError))
    If (objSmpp.LastError <> 0) Then
      Shutdown(objSmpp)
    End If

    ' Bind to the SMPP server as transceiver using your SystemID(login) and password
    objSmpp.Bind(objSmsConstants.SMPP_BIND_TRANSCEIVER, strSystemID, strSystemPassword, strSystemType, objSmsConstants.SMPP_VERSION_34, 0, 0, String.Empty, 10000)
    Console.WriteLine("Bind, result: {0} ({1})", objSmpp.LastError.ToString, objSmpp.GetErrorDescription(objSmpp.LastError))
    If (objSmpp.LastError <> 0) Then
      Shutdown(objSmpp)
    End If

    objSmsMessage.Clear()
    objSmsMessage.ToAddress = ReadInput("Enter recipient (recommended to start with a '+')", False)
    objSmsMessage.Body = ReadInput("Type SMS text", False)
    objSmsMessage.RequestDeliveryReport = True

    ' Submit the SMS message. This submits the SMS to the background thread which sends it to the SMPP server. 
    ' This sample does not work with multipart messages because the message reference would be a comma seperated
    ' string of multiple message references, one for each generated part.
    objSmpp.SubmitSms(objSmsMessage, objSmsConstants.MULTIPART_REJECT)
    Console.WriteLine("SubmitSms, result: " & objSmpp.LastError.ToString & " (" & objSmpp.GetErrorDescription(objSmpp.LastError) & ")")
    If (objSmpp.LastError <> 0) Then
      Shutdown(objSmpp)
    End If

    ' Wait for the server to reply to the SMS message. The server can either accept it or reject it with an error status.
    ' Error status codes are partly provider specific. When using the Auron demo gateway, status 1025 represents
    ' 'No more credits'
    bResult = objSmpp.WaitForSmsUpdate(5000)
    Console.WriteLine("WaitForSmsUpdate completed.")
    If bResult = True Then
      ' The server has an update available, let's see if our SMS was accepted.
      objSmsMessage = objSmpp.FetchSmsUpdate()
      If objSmsMessage.SmppCommandStatus = 0 Then
        Console.WriteLine("Sms sent !")
      Else
        Console.WriteLine("Sms rejected: {0}", objSmsConstants.SmppEsmeToString(objSmsMessage.SmppCommandStatus))
        Shutdown(objSmpp)
      End If
    End If

    ' Get the message reference, that will be matched against a delivery report (still to be received) later on
    strReference = objSmsMessage.Reference
    Console.WriteLine("Message Reference (can be used with status reports):" & strReference)

    Dim bWaitForDeliveryReport As Boolean = True
    While (bWaitForDeliveryReport)
      Dim objMessage As AxSms.Message

      ' Delivery Reports are incoming SMS messages with property SmppIsDeliveryReport set to true!
      objMessage = objSmpp.ReceiveMessage()
      Console.WriteLine("ReceiveMessage: " & objSmpp.LastError.ToString & " (" & objSmpp.GetErrorDescription(objSmpp.LastError) & ")")

      If (objSmpp.LastError = 0) Then
        If (objMessage.SmppIsDeliveryReport) Then
          Console.WriteLine("Delivery Report found.")
          Console.WriteLine("Status ({0}): {1}", strReference, objMessage.Body.Substring(objMessage.Body.IndexOf("stat:") + 5, 7))
          bWaitForDeliveryReport = False
        Else
          Console.WriteLine("  Message to: " & objMessage.ToAddress)
          Console.WriteLine("  Message body: " & objMessage.Body)
        End If
      End If

      If (bWaitForDeliveryReport) Then
        Console.WriteLine("No delivery report received yet.")
        Thread.Sleep(3000)
      End If
    End While

    ' Unbind and Disconnect
    objSmpp.Unbind()
    objSmpp.Disconnect()

    Console.WriteLine("Disconnected.")
    Console.WriteLine("Ready.")
    Console.WriteLine("Press <ENTER> to continue.")
    Console.ReadLine()
  End Sub

  Sub Shutdown(ByVal objSmpp As AxSms.Smpp)
    ' Disconnect can be called at any time. If the connection is bound it will call 'Unbind' first.
    objSmpp.Disconnect()
    Console.WriteLine("Press <ENTER> to continue.")
    Console.ReadLine()
    Environment.Exit(1)
  End Sub

  Sub ReadSmppProvider(ByVal objSmpp As AxSms.Smpp, ByRef strServer As String, ByRef nPort As Integer, ByRef strSystemType As String, ByRef strSystemID As String, ByRef strSystemPassword As String)

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
