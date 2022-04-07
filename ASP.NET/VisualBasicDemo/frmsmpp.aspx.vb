'-----------------------------------------------------------------------
' <copyright file="frmsmpp.aspx.vb" company="Auron">
'     Copyright (c) Auron Software - www.auronsoftware.com
' </copyright>
' <author>Dennis van de Giessen</author>
'-----------------------------------------------------------------------
Imports System.Threading
Imports System.IO
Imports Microsoft.Win32
Imports AxSms

Partial Public Class frmSmpp
	Inherits System.Web.UI.Page

    Dim objSmpp As AxSms.Smpp = New AxSms.Smpp
    Dim objSmsMessage As AxSms.Message = New AxSms.Message
    Dim objSmsConstants As AxSms.Constants = New AxSms.Constants

	Protected Sub Page_Load(ByVal sender As Object, ByVal e As System.EventArgs) Handles Me.Load
        If (Not IsPostBack) Then

            Dim strSystemID As String = String.Empty
            Dim strPassword As String = String.Empty

            lblInfo.Text = "Module [" & objSmpp.Module & "]; Build [" & objSmpp.Build & "]"

            objSmpp.LogFile = Path.GetTempPath() + "Smpp.log"
            txtLogfile.Text = objSmpp.LogFile


            Dim objDemoAccount As AxSms.DemoAccount = New AxSms.DemoAccount()
            txtSystemID.Text = objDemoAccount.SystemId
            txtPassword.Text = objDemoAccount.Password
        End If
    End Sub
	
	Protected Sub btnSend_Click(ByVal sender As Object, ByVal e As EventArgs) Handles btnSend.Click
       objSmpp.Connect(txtServer.Text, Convert.ToInt32(txtServerPort.Text), 5000, False)
       If objSmpp.LastError <> 0 Then
            UpdateResult(objSmpp.LastError)
            Return
        End If

        Dim iSystemMode As Integer = objSmsConstants.SMPP_BIND_TRANSCEIVER
        Dim iVersion As Integer = objSmsConstants.SMPP_VERSION_34
        objSmpp.Bind(iSystemMode, txtSystemID.Text, txtPassword.Text, txtSystemType.Text, iVersion, 0, _
         0, String.Empty, 5000)

        If objSmpp.LastError <> 0 Then
            UpdateResult(objSmpp.LastError)
            Return
        End If

        objSmsMessage.Clear()
        objSmsMessage.ToAddress = txtToAddress.Text
        objSmsMessage.Body = txtMessage.Text

        If cbxUnicode.Checked Then
            objSmsMessage.DataCoding = objSmsConstants.DATACODING_UNICODE
        End If

        objSmpp.SubmitSms(objSmsMessage, objSmsConstants.MULTIPART_ACCEPT)
        UpdateResult(objSmpp.LastError)
        If objSmpp.LastError <> 0 Then
            Return
        End If

        objSmpp.WaitForSmsUpdate(3000)
        objSmsMessage = objSmpp.FetchSmsUpdate()
        If objSmpp.LastError <> 0 Then
            UpdateResult(objSmpp.LastError)
            Return
        End If

        ' SMPP command status codes are provider specific. The Auron SMPP Demo Gateway uses command status 1025
        ' to communicate there are no more credits left for this account on the Auron SMPP Demo Gateway.
        If objSmsMessage.SmppCommandStatus <> 0 Then
            If objSmsMessage.SmppCommandStatus = 1025 AndAlso txtServer.Text = "gateway.auronsoftware.com" Then
                txtResult.Text = "Message not sent. Reason: No credits left."
            Else
                txtResult.Text = "Message not sent. Reason: unspecified error [" + objSmsMessage.SmppCommandStatus & "]."
            End If
        End If
  End Sub

	Sub UpdateResult(ByVal nResult As Integer)
		txtResult.Text = nResult.ToString() + ": " + objSmpp.GetErrorDescription(nResult)
	End Sub

End Class