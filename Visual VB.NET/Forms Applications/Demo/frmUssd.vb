'-----------------------------------------------------------------------
' <copyright file="frmUssd.vb" company="Auron">
'     Copyright (c) Auron Software - www.auronsoftware.com
' </copyright>
' <author>Dennis van de Giessen</author>
'-----------------------------------------------------------------------
Imports AxSms
Imports System.IO

Public Class frmUssd

    Dim objGsm As Gsm = New Gsm
    Dim objSmsConstants As AxSms.Constants = New AxSms.Constants

    Private Sub frmUssd_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        Dim strDevice As String
        Dim strPort As String

        txtLogFile.Text = Path.GetTempPath() + "Ussd.log"
        objGsm.LogFile = txtLogFile.Text

        'Display SMS Component Info
        lblInfo.Text = String.Format("SMS Component {0}; Build: {1}; Module: {2}", objGsm.Version, objGsm.Build, objGsm.Module)

        ' Fill devices Combo
        cbxDevices.Items.Clear()

        ' Gets first TAPI device
        strDevice = objGsm.FindFirstDevice()

        While (objGsm.LastError = 0)
            cbxDevices.Items.Add(strDevice)
            ' Gets next TAPI device.
            strDevice = objGsm.FindNextDevice()
        End While

        ' Add COM ports.
        ' Gets first COM port.
        strPort = objGsm.FindFirstPort()
        While (objGsm.LastError = 0)
            cbxDevices.Items.Add(strPort)
            'Gets next COM port.
            strPort = objGsm.FindNextPort()
        End While

        If (cbxDevices.Items.Count > 0) Then
            cbxDevices.SelectedIndex = 0
        Else
            ' Remove previous text from cbx (happens when a user reopens this forms 
            ' and removed all devices and COM ports)
            cbxDevices.Text = String.Empty
        End If

        'Fill deviceSpeed combo
        cbxDeviceSpeed.Items.Clear()
        cbxDeviceSpeed.Items.Add("Default")
        cbxDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_110)
        cbxDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_300)
        cbxDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_600)
        cbxDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_1200)
        cbxDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_2400)
        cbxDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_4800)
        cbxDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_9600)
        cbxDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_14400)
        cbxDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_19200)
        cbxDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_38400)
        cbxDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_56000)
        cbxDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_57600)
        cbxDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_64000)
        cbxDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_115200)
        cbxDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_128000)
        cbxDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_230400)
        cbxDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_256000)
        cbxDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_460800)
        cbxDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_921600)
        cbxDeviceSpeed.SelectedIndex = 0
    End Sub

    Sub UpdateResult(ByVal nResult As Integer)
        txtResult.Text = String.Format("{0}: {1}", nResult, objGsm.GetErrorDescription(objGsm.LastError))
    End Sub

    Private Sub btnSend_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnSend.Click
        Dim strResponse As String = String.Empty
        Dim strCommand As String = String.Empty
        Dim strFields As String()

        Cursor = Cursors.WaitCursor

        strCommand = String.Format("AT+CUSD=1," & Chr(34) & "{0}" & Chr(34) & ",15", txtCommand.Text)

        Dim strName As String = cbxDevices.Text

        Dim iDeviceSpeed As Integer
        If (Not Integer.TryParse(cbxDeviceSpeed.Text, iDeviceSpeed)) Then
            iDeviceSpeed = 0
        End If

        objGsm.Open(strName, txtPincode.Text, iDeviceSpeed)

        If (objGsm.LastError <> 0) Then
            If (objGsm.LastError = 36101) Then
                MessageBox.Show("PIN Required", Text, MessageBoxButtons.OK, MessageBoxIcon.Error)
            End If
        End If

        ' Sends the USSD Command though the selected GSM Modem

        If (objGsm.LastError = 0) Then
            objGsm.SendCommand(strCommand)
        End If

        ' Reads the response from the GSM Modem
        If (objGsm.LastError = 0) Then
            strResponse = objGsm.ReadResponse(10000)
        End If

        If (objGsm.LastError = 0) Then
            If (strResponse.Contains("OK")) Then ' Response should be OK
                objGsm.SendCommand(String.Empty)
                strResponse = objGsm.ReadResponse(10000)

                If (objGsm.LastError <> 0) Then
                    UpdateResult(objGsm.LastError)
                    Return
                End If

                If (strResponse.Contains("+CUSD:")) Then

                    strFields = strResponse.Split(Char.Parse(Chr(34)))

                    If (strFields.Length > 1) Then
                        strResponse = strFields(1)
                    Else
                        strResponse = strFields(0)
                    End If
                End If
            End If
        End If
        
        txtResponse.Text = strResponse

        UpdateResult(objGsm.LastError)
        objGsm.Close()
        Cursor = Cursors.Default
    End Sub

    Private Sub btnView_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnView.Click
        If (File.Exists(txtLogFile.Text)) Then
            Process.Start(txtLogFile.Text)
        End If
    End Sub
End Class