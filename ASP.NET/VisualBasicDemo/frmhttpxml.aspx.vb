'-----------------------------------------------------------------------
' <copyright file="frmhttpxml.aspx.vb" company="Auron">
'     Copyright (c) Auron Software - www.auronsoftware.com
' </copyright>
' <author>Dennis van de Giessen</author>
'-----------------------------------------------------------------------
Imports AxSms
Imports Microsoft.Win32
Imports System.IO
Imports System.Xml

Partial Public Class frmhttpxml
	Inherits System.Web.UI.Page

    Dim objHttp As AxSms.Http = New AxSms.Http
    Dim objSmsConstants As AxSms.Constants = New AxSms.Constants
    Dim objSmsMessage As AxSms.Message = New AxSms.Message

	Protected Sub Page_Load(ByVal sender As Object, ByVal e As System.EventArgs) Handles Me.Load
		If (Not IsPostBack) Then

			Dim strSystemID As String = String.Empty
			Dim strPassword As String = String.Empty

            objHttp.LogFile = Path.GetTempPath() + "Http.log"
            txtLogfile.Text = objHttp.LogFile

            Dim objDemoAccount As AxSms.DemoAccount = New AxSms.DemoAccount()
            strSystemID = objDemoAccount.SystemId
            strPassword = objDemoAccount.Password

            lblInfo.Text = "Module [" & objHttp.Module & "]; Build [" & objHttp.Build & "]"

            'Create XML document template
            Dim xmlDoc As XmlDocument = New XmlDocument
            Dim xmlDec As XmlDeclaration = xmlDoc.CreateXmlDeclaration("1.0", Nothing, Nothing)
            xmlDoc.AppendChild(xmlDec)

            Dim xmlRoot As XmlElement = xmlDoc.CreateElement("httpmessage")
            xmlDoc.AppendChild(xmlRoot)

            Dim xmlCredentials As XmlElement = xmlDoc.CreateElement("credentials")
            xmlCredentials.SetAttribute("systemid", strSystemID)
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

		End If
    End Sub

    Protected Sub btnSendMessage_Click(ByVal sender As Object, ByVal e As EventArgs) Handles btnSendMessage.Click
        objSmsMessage.Clear()
        objSmsMessage.Body = txtBody.Text
        objSmsMessage.ToAddress = txtToAddress.Text

        objHttp.Clear()
        objHttp.Url = txtHost.Text
        objHttp.PostBody = txtXmlTemplate.Text

        txtServerResponse.Text = objHttp.SendSms(objSmsMessage, objSmsConstants.MULTIPART_ACCEPT)
    End Sub
End Class