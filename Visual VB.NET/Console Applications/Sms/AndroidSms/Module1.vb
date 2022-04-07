Imports System.IO
Imports System.Threading

Module Module1

  Sub Main()
    Dim objAndroid As AxSms.Android = New AxSms.Android()
    Dim objSmsMessage As AxSms.Message = New AxSms.Message()
    Console.WriteLine("Auron SMS Component {0}" & vbLf & "Build: {1}" & vbLf & "Module: {2}" & vbLf & "License Status: {3}" & vbLf & "License Key: {4}" & vbLf, objAndroid.Version, objAndroid.Build, objAndroid.[Module], objAndroid.LicenseStatus, objAndroid.LicenseKey)
    objAndroid.LogFile = Path.GetTempPath() & "Android.Log"
    Console.WriteLine("Log file used: {0}" & vbLf, objAndroid.LogFile)
    Dim strIp As String = ReadInput("Enter Android SMS Agent IP:", False)

    If strIp = String.Empty Then
      Console.WriteLine("Press <ENTER> to continue.")
      Console.ReadLine()
      Return
    End If

    objAndroid.Connect(strIp, 7770)
    Console.WriteLine("Connect, result: " & objAndroid.LastError & " (" + objAndroid.GetErrorDescription(objAndroid.LastError) & ")")

    If objAndroid.LastError <> 0 Then
      Console.WriteLine("Press <ENTER> to continue.")
      Console.ReadLine()
      Return
    End If

    objSmsMessage.ToAddress = ReadInput("Enter recipient: ", False)
    objSmsMessage.Body = ReadInput("Enter message body: ", False)
    objAndroid.SendSms(objSmsMessage)
    Console.WriteLine("SendSms, result: " & objAndroid.LastError & " (" + objAndroid.GetErrorDescription(objAndroid.LastError) & ")")
    Console.WriteLine("Waiting for incoming SMS messages...")
    Console.WriteLine("(Press any key to quit)")

    While objAndroid.IsConnected AndAlso Not Console.KeyAvailable
      objSmsMessage = objAndroid.ReceiveSms()

      While objAndroid.LastError = 0
        Console.WriteLine("Receive SMS from: " & objSmsMessage.FromAddress)
        Console.WriteLine("Body: " & objSmsMessage.Body)
        objSmsMessage = objAndroid.ReceiveSms()
      End While

      Thread.Sleep(10)
    End While

    objAndroid.Disconnect()
    Console.WriteLine("Ready.")
    Console.WriteLine("Press <ENTER> to continue.")
    Console.ReadLine()
  End Sub

  Private Function ReadInput(ByVal strTitle As String, ByVal bAllowEmpty As Boolean) As String
    Dim strInput As String, strReturn As String = String.Empty
    Console.WriteLine(strTitle)

    Do
      Console.Write("  > ")
      strInput = Console.ReadLine()
      If strInput.Length > 1 Then strReturn = strInput
    Loop While strReturn = String.Empty AndAlso Not bAllowEmpty

    Return strReturn
  End Function

End Module
