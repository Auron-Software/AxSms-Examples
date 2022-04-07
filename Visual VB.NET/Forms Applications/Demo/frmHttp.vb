'-----------------------------------------------------------------------
' <copyright file="frmHttp.vb" company="Auron">
'     Copyright (c) Auron Software - www.auronsoftware.com
' </copyright>
' <author>Dennis van de Giessen</author>
'-----------------------------------------------------------------------
Imports AxSms
Imports System.IO
Imports Microsoft.Win32

Public Class frmHttp

    Dim objHttp As Http = New Http
    Dim objSmsMessage As AxSms.Message = New AxSms.Message
    Dim objSmsConstants As AxSms.Constants = New AxSms.Constants

    Private Sub frmHttp_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        Dim objDemoAccount As AxSms.DemoAccount = New AxSms.DemoAccount()
        Dim strUsername As String = objDemoAccount.SystemId
        Dim strPassword As String = objDemoAccount.Password

        txtLogFile.Text = String.Format("{0}{1}", Path.GetTempPath(), "Http.log")
        objHttp.LogFile = txtLogFile.Text

        'Display SMS Component Info
        lblInfo.Text = String.Format("SMS Component {0}; Build: {1}; Module: {2}", objHttp.Version, objHttp.Build, objHttp.Module)

        txtURL.Text = String.Format("gateway.auronsoftware.com:8080/sendsms/default.asp?username={0}&password={1}&text={2}&to={3}", strUsername, strPassword, objSmsConstants.HTTP_PLACEHOLDER_BODY, objSmsConstants.HTTP_PLACEHOLDER_TOADDRESS)
        txtRecipient.Text = String.Empty

        cbxMessageType.Items.Clear()
        cbxMessageType.Items.Add("Text")
        cbxMessageType.Items.Add("Unicode")
        cbxMessageType.SelectedIndex = 0

        txtMessage.Text = "Hello, world!"
    End Sub

    Private Sub btnSend_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnSend.Click
        Cursor.Current = Cursors.WaitCursor

        objSmsMessage.Clear()

        If cbxMessageType.SelectedIndex = 1 Then
            objSmsMessage.DataCoding = objSmsMessage.DataCoding Or objSmsConstants.DATACODING_UNICODE
        End If

        objSmsMessage.Body = txtMessage.Text
        objSmsMessage.ToAddress = txtRecipient.Text

        objHttp.Url = txtURL.Text

        ' Sends the SMS Message through HTTP
        objHttp.SendSms(objSmsMessage, objSmsConstants.MULTIPART_ACCEPT)
        UpdateResult(objHttp.LastError, objHttp.LastResponseCode.ToString())
        Cursor.Current = Cursors.Default
    End Sub

    Sub UpdateResult(ByVal nResult As Integer, ByVal strLastResponse As String)
        txtResult.Text = nResult.ToString() + ": " + objHttp.GetErrorDescription(nResult)
        txtLastResponse.Text = strLastResponse
    End Sub

    Private Sub btnView_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnView.Click
        If File.Exists(txtLogFile.Text) Then
            Process.Start(txtLogFile.Text)
        End If
    End Sub

    Private Sub llblUrlRecipientFormat_LinkClicked(ByVal sender As System.Object, ByVal e As System.Windows.Forms.LinkLabelLinkClickedEventArgs) Handles llblUrlRecipientFormat.LinkClicked
        Process.Start("https://www.auronsoftware.com/knowledge-base/#sms-component")
    End Sub
End Class