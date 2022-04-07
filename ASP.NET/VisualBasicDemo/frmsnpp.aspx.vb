'-----------------------------------------------------------------------
' <copyright file="frmsnpp.aspx.vb" company="Auron">
'     Copyright (c) Auron Software - www.auronsoftware.com
' </copyright>
' <author>Dennis van de Giessen</author>
'-----------------------------------------------------------------------
Imports AxSms
Imports System.IO

Partial Public Class frmSnpp
	Inherits System.Web.UI.Page

    Dim objSnpp As AxSms.Snpp = New AxSms.Snpp()

	Protected Sub Page_Load(ByVal sender As Object, ByVal e As System.EventArgs) Handles Me.Load

        lblInfo.Text = "Module [" & objSnpp.Module & "]; Build [" & objSnpp.Build & "]"

        objSnpp.LogFile = Path.GetTempPath() + "Snpp.log"
        txtLogfile.Text = objSnpp.LogFile

		ddlServers.Items.Clear()
		ddlServers.Items.Add("snpp.myairmail.com")
		ddlServers.Items.Add("snpp.pageallcom.com")
		ddlServers.Items.Add("snpp.americanmessaging.net")
		ddlServers.Items.Add("snpp.attws.net")
		ddlServers.Items.Add("pmcl.net")
		ddlServers.Items.Add("page.contactwireless.com")
		ddlServers.Items.Add("www.webpager.us")
		ddlServers.Items.Add("epage.graylink.com")
		ddlServers.Items.Add("alphapage.cc")
		ddlServers.Items.Add("mail2.illinoissignal.net")
		ddlServers.Items.Add("ipnpaging.com")
		ddlServers.Items.Add("snpp.lauttamus.com")
		ddlServers.Items.Add("snpp.mobilcom.net")
		ddlServers.Items.Add("pecos.nextel.com")
		ddlServers.Items.Add("snpp.nextel.com")
		ddlServers.Items.Add("snpp.ucom.com")
		ddlServers.Items.Add("mail.pagerpeople.com")
		ddlServers.Items.Add("snpp.sbc.com")
		ddlServers.Items.Add("snpp.acswireless.com")
		ddlServers.SelectedIndex = 1
	End Sub

	Protected Sub btnSend_Click(ByVal sender As Object, ByVal e As EventArgs) Handles btnSend.Click

		objSnpp.Clear()
		objSnpp.Server = ddlServers.Text
		objSnpp.ServerPort = Convert.ToInt32(txtPort.Text.ToString())
		objSnpp.ServerTimeout = 2000

		'Send
        objSnpp.Send(txtPagerID.Text, txtMessage.Text)
		UpdateResult(objSnpp.LastError, objSnpp.ProviderResponse)
	End Sub

	Sub UpdateResult(ByVal nResult As Integer, ByVal strLastResponse As String)

		txtResult.Text = nResult.ToString() + ": " + objSnpp.GetErrorDescription(nResult)
		txtResponse.Text = strLastResponse
	End Sub
End Class