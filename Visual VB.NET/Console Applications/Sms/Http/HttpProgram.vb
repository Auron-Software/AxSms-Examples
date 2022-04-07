'-----------------------------------------------------------------------
' <copyright file="HttpProgram.vb" company="Auron">
'     Copyright (c) Auron Software - www.auronsoftware.com
' </copyright>
'-----------------------------------------------------------------------

Imports Microsoft.Win32
Imports System.IO
Imports AxSms

Module HttpProgram

    Sub Main()
        Dim objHttp As AxSms.Http = New AxSms.Http()
        Dim objSmsMessage As AxSms.Message = New AxSms.Message()
        Dim objSmsConstants As AxSms.Constants = New AxSms.Constants()

        Dim strUrl As String = String.Empty

        ' A license key is required to unlock this component after the trial period has expired.
        ' Assign the LicenseKey property every time a new instance of this component is created (see code below). 
        ' Alternatively, the LicenseKey property can be set automatically. This requires the license key to be stored in the registry.
        ' For details, see manual, chapter "Product Activation".
        ' objHttp.LicenseKey = "XXXXX-XXXXX-XXXXX"

        ' Component info
        Console.WriteLine("Auron SMS Component {0}{1}Build: {2}{3}Module: {4}{5}License Status: {6}{7}License Key: {8}{9}", _
                          objHttp.Version, Environment.NewLine, objHttp.Build, Environment.NewLine, objHttp.Module, Environment.NewLine, _
                          objHttp.LicenseStatus, Environment.NewLine, objHttp.LicenseKey, Environment.NewLine)

        ' Set Logfile (optional, for debugging purposes)
        objHttp.LogFile = Path.GetTempPath() + "Http.log"
        Console.WriteLine("Log file used: {0}{1}", objHttp.LogFile, Environment.NewLine)

        ' Prompt user for an HTTP Post URL. By default, the Auron HTTP gateway is used
        strUrl = GetHttpURL(objSmsConstants)

        objSmsMessage.Clear()
        objSmsMessage.ToAddress = ReadInput("Enter recipient (recommended to start with a '+')", False)
        objSmsMessage.BodyFormat = objSmsConstants.BODYFORMAT_TEXT
        objSmsMessage.Body = ReadInput("Enter the message you want to send.", False)

        objHttp.Url = strUrl

        ' Send the message !
        objHttp.SendSms(objSmsMessage, objSmsConstants.MULTIPART_ACCEPT)
        Console.WriteLine("SendSms, result: " & objHttp.LastError.ToString() & " (" & objHttp.GetErrorDescription(objHttp.LastError) & ")")
        Console.WriteLine("Response from provider: " & objHttp.LastResponseCode)
        Console.WriteLine("Ready.")
        Console.WriteLine("Press <ENTER> to continue.")
        Console.ReadLine()
    End Sub

    Function ReadRecipient()
        Dim strInput As String = String.Empty
        Dim strReciepient As String = String.Empty

        Console.WriteLine("Enter recipient (must start with a '+') : ")
        While (strReciepient = String.Empty)

            Console.Write("  > ")
            strInput = Console.ReadLine()

            If (strInput = String.Empty) Then
                Continue While
            End If

            If (strInput.Length > 1 And strInput(0) = "+") Then
                strReciepient = strInput
            End If
        End While
        Console.WriteLine("  Recipient: " & strReciepient & vbCrLf)

        Return strReciepient
    End Function

    Function GetHttpURL(ByVal objSmsConstants As AxSms.Constants)

        Dim strUrl As String
        Dim objDemoAccount As AxSms.DemoAccount = New AxSms.DemoAccount()

        Console.WriteLine("Enter HTTP Post provider URL." & vbCrLf & "Type <ENTER> to use the free Auron SMS gateway: ")
        Console.Write("  > ")
        strUrl = Console.ReadLine()

        ' The URL is a template. The placeholders are filled by the SendSms function with properties from the SMS object.
        If (strUrl = String.Empty) Then
            Dim strUsername As String = objDemoAccount.SystemId
            Dim strPassword As String = objDemoAccount.Password
            strUrl = String.Format("gateway.auronsoftware.com:8080/sendsms/default.asp?username={0}&password={1}&text={2}&to={3}", _
                strUsername, strPassword, objSmsConstants.HTTP_PLACEHOLDER_BODY, objSmsConstants.HTTP_PLACEHOLDER_TOADDRESS)
            Console.WriteLine(strUrl)
        End If

        Console.WriteLine(String.Empty)
        Return strUrl

    End Function

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
