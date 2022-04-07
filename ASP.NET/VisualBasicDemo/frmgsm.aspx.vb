'-----------------------------------------------------------------------
' <copyright file="frmgsm.aspx.vb" company="Auron">
'     Copyright (c) Auron Software - www.auronsoftware.com
' </copyright>
' <author>Dennis van de Giessen</author>
'-----------------------------------------------------------------------
Imports AxSms
Imports System.IO

Partial Public Class frmGsm
	Inherits System.Web.UI.Page

	Private objGsm As Gsm = New Gsm()
    Private objSmsConstants As AxSms.Constants = New AxSms.Constants()

	Protected Sub Page_Load(ByVal sender As Object, ByVal e As System.EventArgs) Handles Me.Load
        If (Not IsPostBack) Then

            Dim strDevice As String = String.Empty
            Dim strPort As String = String.Empty
            Dim i As Integer = 0
            Dim nComPorts As Integer = 20

            objGsm.LogFile = Path.GetTempPath() + "Gms.log"
            txtLogfile.Text = objGsm.LogFile

            lblInfo.Text = "Module [" & objGsm.Module & "]; Build [" & objGsm.Build & "]"

            ddlDevices.Items.Clear()

            strDevice = objGsm.FindFirstDevice()

            While (objGsm.LastError = 0)

                ddlDevices.Items.Add(strDevice)
                strDevice = objGsm.FindNextDevice()
            End While

            strPort = objGsm.FindFirstPort()
            While (objGsm.LastError = 0)
                ddlDevices.Items.Add(strPort)
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

	Protected Sub btnSendMessage_Click(ByVal sender As Object, ByVal e As EventArgs) Handles btnSendMessage.Click
		Dim strMessageReference As String
        Dim objSmsMessage As AxSms.Message = New AxSms.Message()
		Dim strName As String = ddlDevices.Text
        Dim strPincode As String = String.Empty
		Dim iDeviceSpeed As Integer

		If (Not Integer.TryParse(ddlDeviceSpeed.Text, iDeviceSpeed)) Then
			iDeviceSpeed = 0
		End If

        objGsm.Clear()
        objGsm.Open(strName, strPincode, iDeviceSpeed)

		If (objGsm.LastError <> 0) Then
			UpdateResult(objGsm.LastError)
			Exit Sub
		End If

		'Message Settings
		objSmsMessage.Clear()
		objSmsMessage.ToAddress = txtToAddress.Text
		objSmsMessage.Body = txtBody.Text

        objSmsMessage.BodyFormat = objSmsConstants.BODYFORMAT_TEXT

        If (cbxUnicode.Checked) Then
            objSmsMessage.DataCoding = objSmsConstants.DATACODING_UNICODE
        End If

		' Send the message !
        objGsm.SendSms(objSmsMessage, objSmsConstants.MULTIPART_ACCEPT, 10000)

		strMessageReference = objSmsMessage.Reference

		UpdateResult(objGsm.LastError)

		objGsm.Close()
	End Sub

	Sub UpdateResult(ByVal nResult As Integer)
		txtResult.Text = String.Format("{0}: {1}", nResult, objGsm.GetErrorDescription(objGsm.LastError))
	End Sub
End Class