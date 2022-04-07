'-----------------------------------------------------------------------
' <copyright file="frmHttpXml.vb" company="Auron">
'     Copyright (c) Auron Software - www.auronsoftware.com
' </copyright>
' <author>Dennis van de Giessen</author>
'-----------------------------------------------------------------------
Imports Microsoft.Win32
Imports System.IO
Imports AxSms
Imports System.Xml

Public Class frmHttpXml

    Dim objFrmSendOptions As frmGsmAdvanced = New frmGsmAdvanced
    Dim objHttp As AxSms.Http = New AxSms.Http
    Dim objSmsConstants As AxSms.Constants = New AxSms.Constants

    Private Sub frmHttpXml_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        Dim objDemoAccount As AxSms.DemoAccount = New AxSms.DemoAccount()
        Dim strUsername As String = objDemoAccount.SystemId
        Dim strPassword As String = objDemoAccount.Password

        txtLogFile.Text = String.Format("{0}{1}", Path.GetTempPath(), "Http.log")
        objHttp.LogFile = txtLogFile.Text

        'Display SMS Component Info
        lblInfo.Text = String.Format("SMS Component {0}; Build: {1}; Module: {2}", objHttp.Version, objHttp.Build, objHttp.Module)

        'Create XML document template
        Dim xmlDoc As XmlDocument = New XmlDocument
        Dim xmlDec As XmlDeclaration = xmlDoc.CreateXmlDeclaration("1.0", Nothing, Nothing)

        xmlDoc.AppendChild(xmlDec)

        Dim xmlRoot As XmlElement = xmlDoc.CreateElement("httpmessage")
        xmlDoc.AppendChild(xmlRoot)

        Dim xmlCredentials As XmlElement = xmlDoc.CreateElement("credentials")
        xmlCredentials.SetAttribute("systemid", strUsername)
        xmlCredentials.SetAttribute("password", strPassword)
        xmlRoot.AppendChild(xmlCredentials)

        Dim xmlSettings As XmlElement = xmlDoc.CreateElement("settings")
        xmlSettings.SetAttribute("bodyformat", objSmsConstants.BODYFORMAT_TEXT)
        xmlSettings.SetAttribute("datacoding", objSmsConstants.DATACODING_DEFAULT)
        xmlRoot.AppendChild(xmlSettings)

        Dim xmlMessage As XmlElement = xmlDoc.CreateElement("message")
        xmlMessage.SetAttribute("toaddress", objSmsConstants.HTTP_PLACEHOLDER_TOADDRESS)

        Dim xmlBody As XmlElement = xmlDoc.CreateElement("body")
        xmlBody.InnerText = objSmsConstants.HTTP_PLACEHOLDER_BODY
        xmlMessage.AppendChild(xmlBody)
        xmlRoot.AppendChild(xmlMessage)
        txtXmlTemplate.Text = xmlDoc.OuterXml
    End Sub

    Private Sub btnSendOptions_Click(ByVal sender As System.Object, ByVal e As System.EventArgs)
        objFrmSendOptions.ShowDialog()
    End Sub

    Private Sub btnSend_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnSend.Click
        Dim strBody As String = objHttp.Base64Encode(txtMessage.Text)
        Dim strToAddress As String = txtMessageRecipient.Text
        Dim strXmlToSend As String = txtXmlTemplate.Text

        strXmlToSend = strXmlToSend.Replace(objSmsConstants.HTTP_PLACEHOLDER_TOADDRESS, txtMessageRecipient.Text)
        strXmlToSend = strXmlToSend.Replace(objSmsConstants.HTTP_PLACEHOLDER_BODY, strBody)

        txtResponse.Text = objHttp.Post(txtHost.Text, strXmlToSend)
        UpdateResult(objHttp.LastError, objHttp.LastResponseCode.ToString())
    End Sub

    Sub UpdateResult(ByVal nResult As Integer, ByVal strLastResponse As String)
        txtResult.Text = nResult.ToString() & ": " & objHttp.GetErrorDescription(nResult)
    End Sub

    Private Sub btnClearResponse_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnClearResponse.Click
        txtResponse.Clear()
    End Sub

    Private Sub btnClearSent_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnClearSent.Click
        txtXmlTemplate.Clear()
    End Sub

    Private Sub btnView_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnView.Click
        If (File.Exists(txtLogFile.Text)) Then
            Process.Start(txtLogFile.Text)
        End If
    End Sub

    Private Sub llblUrlRecipientFormat_LinkClicked(ByVal sender As System.Object, ByVal e As System.Windows.Forms.LinkLabelLinkClickedEventArgs) Handles llblUrlRecipientFormat.LinkClicked
        Process.Start("https://www.auronsoftware.com/knowledge-base/#sms-component")
    End Sub
End Class