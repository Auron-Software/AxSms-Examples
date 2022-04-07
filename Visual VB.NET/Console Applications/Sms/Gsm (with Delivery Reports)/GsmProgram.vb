'-----------------------------------------------------------------------
' <copyright file="GsmProgram.vb" company="Auron">
'     Copyright (c) Auron Software - www.auronsoftware.com
' </copyright>
'-----------------------------------------------------------------------

Imports AxSms
Imports System.IO
Imports System.Threading

Module GsmProgram

    Sub Main()
        Dim objGsm As AxSms.Gsm = New AxSms.Gsm()
        Dim objSmsMessage As AxSms.Message = New AxSms.Message()
        Dim objSmsConstants As AxSms.Constants = New AxSms.Constants()
        Dim objStatusReport As AxSms.GsmDeliveryReport = Nothing
        Dim strDevice As String, strReference As String

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
        objGsm.LogFile = Path.GetTempPath() + "Gsm.log"
        Console.WriteLine("Log file used: {0}{1}", objGsm.LogFile, Environment.NewLine)

        strDevice = ReadDevice(objGsm)
        If (strDevice = String.Empty) Then
            Console.WriteLine("Press <ENTER> to continue.")
            Console.ReadLine()
            Exit Sub
        End If

        objGsm.Open(strDevice, String.Empty, 0)
        Console.WriteLine("Open, result: " & objGsm.LastError.ToString() & " (" & objGsm.GetErrorDescription(objGsm.LastError) & ")")
        If (objGsm.LastError = 36101) Then ' 36101 means: modem requires pin code, see also: www.auronsoftware.com/kb/api-error-codes/
            objGsm.Open(strDevice, ReadInput("Enter PIN code", False), 0)
            Console.WriteLine("Open, result: " & objGsm.LastError.ToString() & " (" & objGsm.GetErrorDescription(objGsm.LastError) & ")")
        End If

        If (objGsm.LastError <> 0) Then
            Console.WriteLine("Press <ENTER> to continue.")
            Console.ReadLine()
            Exit Sub
        End If

        ' Message settings
        objSmsMessage.ToAddress = ReadInput("Enter recipient: ", False)
        objSmsMessage.Body = ReadInput("Enter message body: ", False)
        objSmsMessage.RequestDeliveryReport = True

        ' Send the message; This sample does not work with multipart messages because the message reference would be a comma seperated
        ' string of multiple message references, one for each generated part.
        objGsm.SendSms(objSmsMessage, objSmsConstants.MULTIPART_REJECT, 0)
        Console.WriteLine("SendSms, result: " & objGsm.LastError.ToString() & " (" & objGsm.GetErrorDescription(objGsm.LastError) & ")")
        If (objGsm.LastError <> 0) Then
            objGsm.Close()
            Console.WriteLine("Press <ENTER> to continue.")
            Console.ReadLine()
            Exit Sub
        End If

        ' The message reference was set by the sendsms function on success
        strReference = objSmsMessage.Reference
        Console.WriteLine("Message Reference: " & strReference)

        ' Status Report
        Dim bSearchStatusReport As Boolean
        bSearchStatusReport = True
        Do While (bSearchStatusReport)
            objGsm.Receive(objSmsConstants.GSM_MESSAGESTATE_ALL, False, objSmsConstants.GSM_STORAGETYPE_ALL, 25000)
            Console.WriteLine("Receive, result: " & objGsm.LastError.ToString() & " (" & objGsm.GetErrorDescription(objGsm.LastError) & ")")

            If (objGsm.LastError <> 0) Then
                Exit Do
            End If

            objStatusReport = objGsm.GetFirstReport()

            Do While (objGsm.LastError = 0)
                If (objStatusReport.Reference = strReference) Then
                    bSearchStatusReport = False
                    Console.WriteLine("Status Report {0} received!", objStatusReport.Reference)
                    objGsm.DeleteReport(objStatusReport)
                    Console.WriteLine("DeleteReport, result: " & objGsm.LastError.ToString() & " (" & objGsm.GetErrorDescription(objGsm.LastError) & ")")
                    Exit Do
                Else
                    objStatusReport = objGsm.GetNextReport()
                End If
            Loop

            If (bSearchStatusReport) Then
                Console.WriteLine("Status report not found yet.")
                Thread.Sleep(3000)
            End If
        Loop

        objGsm.Close() ' Make sure the port gets closed

        Console.WriteLine("Ready.")
        Console.WriteLine("Press <ENTER> to continue.")
        Console.ReadLine()

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

    Function ReadDevice(ByVal objGsm As Gsm)
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
