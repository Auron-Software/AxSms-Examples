'-----------------------------------------------------------------------
' <copyright file="frmSnpp.vb" company="Auron">
'     Copyright (c) Auron Software - www.auronsoftware.com
' </copyright>
' <author>Dennis van de Giessen</author>
'-----------------------------------------------------------------------
Imports AxSms
Imports System.IO

Public Class frmsnpp

    Dim objSnpp As Snpp = New Snpp

    Private Sub frmsnpp_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load

        txtLogFile.Text = Path.GetTempPath() + "Snpp.log"
        objSnpp.LogFile = txtLogFile.Text

        'Display SMS Component Info
        lblInfo.Text = String.Format("SMS Component {0}; Build: {1}; Module: {2}", objSnpp.Version, objSnpp.Build, objSnpp.Module)
       
        cbxServers.Items.Clear()
        cbxServers.Items.Add("snpp.myairmail.com")
        cbxServers.Items.Add("snpp.pageallcom.com")
        cbxServers.Items.Add("snpp.americanmessaging.net")
        cbxServers.Items.Add("snpp.attws.net")
        cbxServers.Items.Add("pmcl.net")
        cbxServers.Items.Add("page.contactwireless.com")
        cbxServers.Items.Add("www.webpager.us")
        cbxServers.Items.Add("epage.graylink.com")
        cbxServers.Items.Add("alphapage.cc")
        cbxServers.Items.Add("mail2.illinoissignal.net")
        cbxServers.Items.Add("ipnpaging.com")
        cbxServers.Items.Add("snpp.lauttamus.com")
        cbxServers.Items.Add("snpp.mobilcom.net")
        cbxServers.Items.Add("pecos.nextel.com")
        cbxServers.Items.Add("snpp.nextel.com")
        cbxServers.Items.Add("snpp.ucom.com")
        cbxServers.Items.Add("mail.pagerpeople.com")
        cbxServers.Items.Add("snpp.sbc.com")
        cbxServers.Items.Add("snpp.acswireless.com")
        cbxServers.SelectedIndex = 1

        txtPort.Text = "444"

        txtMessage.Text = "Hello World!"
    End Sub

    Private Sub btnSend_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnSend.Click

        Dim nPort As Integer = 0

        Dim strRecipient As String = txtPagerID.Text
        Dim strMessage As String = txtMessage.Text

        objSnpp.Server = cbxServers.Text

        If Integer.TryParse(txtPort.Text.ToString(), nPort) Then
            objSnpp.ServerPort = nPort
        Else
            objSnpp.ServerPort = 444
        End If

        objSnpp.ServerTimeout = 2000

        ' Set Cursor
        Cursor.Current = Cursors.WaitCursor

        ' Sends the Pagermessage thrugh SNPP
        objSnpp.Send(strRecipient, strMessage)
        UpdateResult(objSnpp.LastError, objSnpp.ProviderResponse)

        ' Reset Cursor
        Cursor.Current = Cursors.Default
    End Sub

    Sub UpdateResult(ByVal nResult As Integer, ByVal strLastResponse As String)
        txtResult.Text = nResult.ToString() + ": " + objSnpp.GetErrorDescription(nResult)
        txtLastResponse.Text = strLastResponse
    End Sub

    Private Sub btnView_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnView.Click
        If (File.Exists(txtLogFile.Text)) Then
            Process.Start(txtLogFile.Text)
        End If
    End Sub

    Private Sub llblUrlSnppProviders_LinkClicked(ByVal sender As System.Object, ByVal e As System.Windows.Forms.LinkLabelLinkClickedEventArgs) Handles llblUrlSnppProviders.LinkClicked
        Process.Start("https://www.auronsoftware.com/knowledge-base")
    End Sub
End Class