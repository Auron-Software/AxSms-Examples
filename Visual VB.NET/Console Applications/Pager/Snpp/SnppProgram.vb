'-----------------------------------------------------------------------
' <copyright file="SnppProgram.vb" company="Auron">
'     Copyright (c) Auron Software - www.auronsoftware.com
' </copyright>
'-----------------------------------------------------------------------

Imports AxSms
Imports System.IO

Module SnppProgram

    Sub Main()
        Dim objSnpp As AxSms.Snpp = New AxSms.Snpp
        Dim nServerPort As Integer = 0, nServerTimeout As Integer = 0
        Dim strServer As String = String.Empty, strRecipient As String = String.Empty, strMessage As String = String.Empty

        ' A license key is required to unlock this component after the trial period has expired.
        ' Assign the LicenseKey property every time a new instance of this component is created (see code below). 
        ' Alternatively, the LicenseKey property can be set automatically. This requires the license key to be stored in the registry.
        ' For details, see manual, chapter "Product Activation".
        ' objSnpp.LicenseKey = "XXXXX-XXXXX-XXXXX"

        ' Component info
        Console.WriteLine("Auron SMS Component {0}{1}Build: {2}{3}Module: {4}{5}License Status: {6}{7}License Key: {8}{9}", _
                          objSnpp.Version, Environment.NewLine, objSnpp.Build, Environment.NewLine, objSnpp.Module, Environment.NewLine, _
                          objSnpp.LicenseStatus, Environment.NewLine, objSnpp.LicenseKey, Environment.NewLine)

        ' Set Logfile (optional, for debugging purposes)
        objSnpp.LogFile = Path.GetTempPath() + "Smpp.log"
        Console.WriteLine("Log file used: {0}{1}", objSnpp.LogFile, Environment.NewLine)

        ' Prompt user for SNPP provider
        ReadSnppProvider(strServer, nServerPort, nServerTimeout)

        objSnpp.Server = strServer
        objSnpp.ServerPort = nServerPort
        objSnpp.ServerTimeout = nServerTimeout

        strRecipient = ReadInput("Enter recipient NOTE: Most providers require a 10 digit pager number.", False)
        strMessage = ReadInput("Type Pager text", False)

        ' Send
        objSnpp.Send(strRecipient, strMessage)
        Console.WriteLine("Send, result: " & objSnpp.LastError.ToString() & " (" & objSnpp.GetErrorDescription(objSnpp.LastError) & ")")
        If (objSnpp.LastError = 0) Then
            Console.WriteLine("Last response of SNPP provider: " & objSnpp.ProviderResponse)
        End If

        Console.WriteLine("Ready.")
        Console.WriteLine("Press <ENTER> to continue.")
        Console.ReadLine()
    End Sub

    Sub ReadSnppProvider(ByRef strServer As String, ByRef nServerPort As String, ByRef nServerTimeout As Integer)

        Dim strInput As String
        strInput = ReadInput("Enter SNPP provider. See also: https://www.auronsoftware.com/xmstoolkit/snpplist\nType <ENTER> to use default SNPP provider snpp.pageallcom.com: ", True)

        If (strInput = String.Empty) Then
            strServer = "snpp.pageallcom.com"
        Else
            strServer = strInput
        End If

        strInput = ReadInput("Enter port. Type <ENTER> to use default port 444", True)

        If (strInput = String.Empty) Then
            nServerPort = 444
        Else
            If (Integer.TryParse(strInput, nServerPort) = False) Then
                nServerPort = 444
            End If
        End If

        strInput = ReadInput("Enter timeout in milliseconds. Type <ENTER> to use default timeout of 25000 msecs", True)

        If (strInput = String.Empty) Then
            nServerTimeout = 2500
        Else
            If (Integer.TryParse(strInput, nServerTimeout) = False) Then
                nServerTimeout = 2500
            End If
        End If
        Console.WriteLine(String.Empty)
        Console.WriteLine("  Provider settings: ")
        Console.WriteLine("  Server: " & strServer)
        Console.WriteLine("  ServerPort: " & nServerPort)
        Console.WriteLine("  ServerTimeout: " & nServerTimeout)
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

