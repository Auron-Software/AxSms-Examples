'-----------------------------------------------------------------------
' <copyright file="UssdProgram.vb" company="Auron">
'     Copyright (c) Auron Software - www.auronsoftware.com
' </copyright>
'-----------------------------------------------------------------------

Imports AxSms
Imports System.Threading
Imports System.IO

Module UssdProgram

    Sub Main()
        Dim objGsm As AxSms.Gsm = New AxSms.Gsm()
        Dim objSmsConstants As AxSms.Constants = New AxSms.Constants()
        Dim strDevice As String = String.Empty

        ' A license key is required to unlock this component after the trial period has expired.
        ' Assign the LicenseKey property every time a new instance of this component is created (see code below). 
        ' Alternatively, the LicenseKey property can be set automatically. This requires the license key to be stored in the registry.
        ' For details, see manual, chapter "Product Activation".
        ' objGsm.LicenseKey = "XXXXX-XXXXX-XXXXX"

        ' Component info
        Console.WriteLine("Auron SMS Component {0}{1}Build: {2}{3}Module: {4}{5}License Status: {6}{7}License Key: {8}{9}", _
                          objGsm.Version, Environment.NewLine, objGsm.Build, Environment.NewLine, objGsm.Module, Environment.NewLine, _
                          objGsm.LicenseStatus, Environment.NewLine, objGsm.LicenseKey, Environment.NewLine)

        ' Set Logfile (optional, for debugging purposes)
        objGsm.LogFile = Path.GetTempPath() + "Smpp.log"
        Console.WriteLine("Log file used: {0}{1}", objGsm.LogFile, Environment.NewLine)

        strDevice = InputDeviceName(objGsm)
        If (strDevice = String.Empty) Then
            Console.WriteLine("Press <ENTER> to continue.")
            Console.ReadLine()
            Exit Sub
        End If

        objGsm.Open(strDevice, String.Empty, 0)
        Console.WriteLine("Open, result: " & objGsm.LastError.ToString() & " (" & objGsm.GetErrorDescription(objGsm.LastError) & ")")
        If (objGsm.LastError = 36101) Then ' 36101 means: modem requires pin code, see also: www.auronsoftware.com/kb/api-error-codes/
            objGsm.Open(strDevice, ReadInput("Enter PIN code", False), 0)
            Console.WriteLine("Open, result: " & objGsm.LastError.ToString & " (" & objGsm.GetErrorDescription(objGsm.LastError) & ")")
        End If

        If (objGsm.LastError <> 0) Then
            Console.WriteLine("Press <ENTER> to continue.")
            Console.ReadLine()
            Exit Sub
        End If

        Dim strReponse As String = String.Empty
        Dim strCommand As String = String.Empty
        Dim strFields As String()

        strCommand = ReadInput("Enter the command you want to send out", False)
        strCommand = String.Format("AT+CUSD=1," & Chr(34) & "{0}" & Chr(34) & ",15", strCommand)

        objGsm.SendCommand(strCommand)
        Console.WriteLine("SendCommand, result: " & objGsm.LastError.ToString & " (" & objGsm.GetErrorDescription(objGsm.LastError) & ")")

        strReponse = objGsm.ReadResponse(10000)
        Console.WriteLine("ReadResponse, result: " & objGsm.LastError.ToString & " (" & objGsm.GetErrorDescription(objGsm.LastError) & ")")

        If (strReponse.Contains("OK")) Then 'Response should be OK
            objGsm.SendCommand(String.Empty)
            strReponse = objGsm.ReadResponse(10000)
            Console.WriteLine("ReadResponse, result: " & objGsm.LastError.ToString & " (" & objGsm.GetErrorDescription(objGsm.LastError) & ")")

            If (strReponse.Contains("+CUSD:")) Then

                strFields = strReponse.Split(Char.Parse(Chr(34)))

                If (strFields.Length > 1) Then
                    strReponse = strFields(1)
                Else
                    strReponse = strFields(0)
                End If
            End If
        End If

        If (objGsm.LastError <> 0) Then
            Console.WriteLine("Response: N/A")
        Else
            Console.WriteLine("Response: {0}", strReponse)
        End If

        Console.WriteLine("Ready.")
        Console.WriteLine("Press <ENTER> to continue.")
        Console.ReadLine()
        objGsm.Close() ' Make sure the port gets closed
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

    Function InputDeviceName(ByVal objGsm As Gsm)
        Dim strInput As String = String.Empty
        Dim strDevice As String = String.Empty
        Dim strPort As String = String.Empty
        Dim strMessage As String = String.Empty
        Dim strDevices As String = String.Empty
        Dim strSelectedDevice As String = String.Empty
        Dim i As Integer = 0
        Dim lsDeviceNames As List(Of String) = New List(Of String)

        strMessage = "Select a device: "

        strDevice = objGsm.FindFirstDevice()

        While (objGsm.LastError = 0)
            strDevices = strDevices & vbCrLf & "  " & i.ToString() & ": " + strDevice
            lsDeviceNames.Add(strDevice)
            strDevice = objGsm.FindNextDevice()
            i = i + 1
        End While

        strPort = objGsm.FindFirstPort()
        While (objGsm.LastError = 0)
            strDevices = strDevices & vbCrLf & "  " & i.ToString() & ": " + strPort
            lsDeviceNames.Add(strPort)
            strPort = objGsm.FindNextPort()
            i = i + 1
        End While

        If (strDevices = String.Empty) Then
            Console.WriteLine("No devices or COM ports where found.")
        Else
            Console.WriteLine(strMessage & strDevices)
            While (strSelectedDevice = String.Empty)

                Console.Write("  > ")
                strInput = Console.ReadLine()

                Dim iDevice As Integer

                If (Not Integer.TryParse(strInput, iDevice)) Then
                    iDevice = 0
                End If

                If (iDevice > lsDeviceNames.Count - 1) Then
                    iDevice = 0
                End If
                strSelectedDevice = lsDeviceNames(iDevice)
            End While
            Console.WriteLine("  Selected device: " & strSelectedDevice & vbCrLf)
        End If
        Return strSelectedDevice
    End Function
End Module
