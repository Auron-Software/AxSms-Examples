'-----------------------------------------------------------------------
' <copyright file="frmussd.aspx.vb" company="Auron">
'     Copyright (c) Auron Software - www.auronsoftware.com
' </copyright>
' <author>Dennis van de Giessen</author>
'-----------------------------------------------------------------------
Imports AxSms
Imports System.IO

Partial Public Class frmussd
	Inherits System.Web.UI.Page

    Dim objGsm As AxSms.Gsm = New AxSms.Gsm
    Dim objSmsConstants As AxSms.Constants = New AxSms.Constants

	Protected Sub Page_Load(ByVal sender As Object, ByVal e As System.EventArgs) Handles Me.Load
		If (Not IsPostBack) Then

            Dim strDevice As String = String.Empty
            Dim strPort As String = String.Empty

            lblInfo.Text = "Module [" & objGsm.Module & "]; Build [" & objGsm.Build & "]"

            objGsm.LogFile = Path.GetTempPath() + "Ussd.log"
            txtLogfile.Text = objGsm.LogFile
			ddlDevices.Items.Clear()

			strDevice = objGsm.FindFirstDevice()

			While (objGsm.LastError = 0)
				ddlDevices.Items.Add(strDevice)
				strDevice = objGsm.FindNextDevice()
			End While

            ' Add COM ports.
            ' Gets first COM port.
            strPort = objGsm.FindFirstPort()
            While (objGsm.LastError = 0)
                ddlDevices.Items.Add(strPort)
                'Gets next COM port.
                strPort = objGsm.FindNextPort()
            End While

            If (ddlDevices.Items.Count > 0) Then
                ddlDevices.SelectedIndex = 0
            End If

			ddlDeviceSpeed.Items.Clear()
			ddlDeviceSpeed.Items.Add("Default")
			ddlDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_110.ToString())
			ddlDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_300.ToString())
			ddlDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_600.ToString())
			ddlDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_1200.ToString())
			ddlDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_2400.ToString())
			ddlDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_4800.ToString())
			ddlDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_9600.ToString())
			ddlDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_14400.ToString())
			ddlDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_19200.ToString())
			ddlDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_38400.ToString())
			ddlDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_56000.ToString())
			ddlDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_57600.ToString())
			ddlDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_64000.ToString())
			ddlDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_115200.ToString())
			ddlDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_128000.ToString())
			ddlDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_230400.ToString())
			ddlDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_256000.ToString())
			ddlDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_460800.ToString())
			ddlDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_921600.ToString())
			ddlDeviceSpeed.SelectedIndex = 0
		End If
	End Sub

	Protected Sub btnSend_Click(ByVal sender As Object, ByVal e As EventArgs) Handles btnSend.Click
		Dim strResponse As String = String.Empty
		Dim strCommand As String = String.Empty
		Dim strFields() As String

		strCommand = String.Format("AT+CUSD=1,""{0}"",15", txtCommand.Text)

		Dim strName As String = ddlDevices.Text
        Dim strPincode As String = txtPincode.Text
        Dim iDeviceSpeed As Integer

		If (Not Integer.TryParse(ddlDeviceSpeed.Text, iDeviceSpeed)) Then
			iDeviceSpeed = 0
		End If

        objGsm.Open(strName, strPincode, iDeviceSpeed)

        If (objGsm.LastError <> 0) Then
            UpdateResult(objGsm.LastError)
            Return
        End If

        objGsm.SendCommand(strCommand)

        If (objGsm.LastError <> 0) Then
            UpdateResult(objGsm.LastError)
            Return
        End If

        strResponse = objGsm.ReadResponse(10000)

        If (objGsm.LastError <> 0) Then
            UpdateResult(objGsm.LastError)
            Return
        End If

        If (strResponse.Contains("OK")) Then 'Responce should be OK

            objGsm.SendCommand("")
            strResponse = objGsm.ReadResponse(10000)

            If (strResponse.Contains("+CUSD:")) Then

                strFields = strResponse.Split(Chr(34))

                If (strFields.Length > 1) Then

                    strResponse = strFields(1)

                Else

                    strResponse = strFields(0)
                End If
            End If
        End If

        If (objGsm.LastError <> 0) Then
            txtResponse.Text = objGsm.GetErrorDescription(objGsm.LastError)
        Else
            txtResponse.Text = strResponse
        End If

        objGsm.Close()
        UpdateResult(objGsm.LastError)
    End Sub

	Sub UpdateResult(ByVal nResult As Integer)
		txtResult.Text = String.Format("{0}: {1}", nResult, objGsm.GetErrorDescription(objGsm.LastError))
	End Sub
End Class