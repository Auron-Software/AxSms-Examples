'-----------------------------------------------------------------------
' <copyright file="frmhttp.aspx.vb" company="Auron">
'     Copyright (c) Auron Software - www.auronsoftware.com
' </copyright>
' <author>Dennis van de Giessen</author>
'-----------------------------------------------------------------------
Imports AxSms
Imports Microsoft.Win32
Imports System.IO

Partial Public Class frmhttp
	Inherits System.Web.UI.Page

	Dim objHttp As Http = New Http
    Dim objSmsConstants As AxSms.Constants = New AxSms.Constants
    Dim objSmsMessage As AxSms.Message = New AxSms.Message

	Protected Sub Page_Load(ByVal sender As Object, ByVal e As System.EventArgs) Handles Me.Load
		If (Not IsPostBack) Then

			Dim strUsername As String = String.Empty
			Dim strPassword As String = String.Empty

            objHttp.LogFile = Path.GetTempPath() + "Http.log"
            txtLogfile.Text = objHttp.LogFile

            Dim objDemoAccount As DemoAccount = New DemoAccount()
            strUsername = objDemoAccount.SystemId
            strPassword = objDemoAccount.Password

            txtUrl.Text = String.Format("https://gateway.auronsoftware.com:8181/sendsms/default.asp?username={0}&password={1}&text={2}&to={3}", strUsername, strPassword, objSmsConstants.HTTP_PLACEHOLDER_BODY, objSmsConstants.HTTP_PLACEHOLDER_TOADDRESS)

            lblInfo.Text = "Module [" & objHttp.Module & "]; Build [" & objHttp.Build & "]"

		End If
	End Sub

	Protected Sub btnSend_Click(ByVal sender As Object, ByVal e As EventArgs) Handles btnSend.Click

		objSmsMessage.Clear()

		objSmsMessage.BodyFormat = objSmsConstants.BODYFORMAT_TEXT
		objSmsMessage.Body = txtBody.Text
		objSmsMessage.ToAddress = txtToAddress.Text

		objHttp.Clear()
		objHttp.Url = txtUrl.Text

		objHttp.SendSms(objSmsMessage, objSmsConstants.MULTIPART_ACCEPT)
		UpdateResult(objHttp.LastError, objHttp.LastResponseCode.ToString())
	End Sub

	Sub UpdateResult(ByVal nResult As Integer, ByVal strLastResponse As String)
		txtResult.Text = nResult.ToString() + ": " + objHttp.GetErrorDescription(nResult)
		txtLastResponse.Text = strLastResponse
    End Sub
End Class