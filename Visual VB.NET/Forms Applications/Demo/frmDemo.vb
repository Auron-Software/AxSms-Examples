Imports Microsoft.Win32
Imports System.IO
Imports AxSms

'-----------------------------------------------------------------------
' <copyright file="frmDemo.vb" company="Auron">
'     Copyright (c) Auron Software - www.auronsoftware.com
' </copyright>
' <author>Dennis van de Giessen</author>
'-----------------------------------------------------------------------
Public Class frmDemo

  Private objFrmGsm As frmGsm = New frmGsm
  Private objFrmSmpp As frmSmpp
  Private objFrmHttp As frmHttp = New frmHttp
  Private objFrmHttpXml As frmHttpXml = New frmHttpXml
  Private objFrmLicensing As frmLicensing = New frmLicensing
  Private objFrmUssd As frmUssd = New frmUssd
  Private objFrmSnpp As frmsnpp = New frmsnpp
  Private objFrmSmppServer As frmSmppServer = New frmSmppServer
  Private objFrmAndroid As frmAndroid = New frmAndroid
  Private objFrmHttpServer As frmHttpServer = New frmHttpServer

  Public Sub New()
    InitializeComponent()

    Dim objDemoAccount As AxSms.DemoAccount = New AxSms.DemoAccount()
    Dim objGsm As AxSms.Gsm = New AxSms.Gsm()

    objFrmSmpp = New frmSmpp(objDemoAccount.SystemId, objDemoAccount.Password, "gateway.auronsoftware.com")

    txtVersion.Text = String.Format("{0}; Build {1}; Module {2}", objGsm.Version, objGsm.Build, objGsm.Module)

  End Sub

  Private Sub btnGsm_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnGsm.Click
    objFrmGsm.ShowDialog()
  End Sub

  Private Sub llblUrlSmsToolkit_LinkClicked(ByVal sender As System.Object, ByVal e As System.Windows.Forms.LinkLabelLinkClickedEventArgs) Handles llblUrlSmsToolkit.LinkClicked
    Process.Start("https://www.auronsoftware.com/products/sms-component/")
  End Sub

  Private Sub btnSmpp_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnSmpp.Click
    objFrmSmpp.ShowDialog()
  End Sub

  Private Sub btnUssd_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnUssd.Click
    objFrmUssd.ShowDialog()
  End Sub

  Private Sub btnSnpp_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnSnpp.Click
    objFrmSnpp.ShowDialog()
  End Sub

  Private Sub btnHttpXml_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnHttpXml.Click
    objFrmHttpXml.ShowDialog()
  End Sub

  Private Sub btnHttp_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnHttp.Click
    objFrmHttp.ShowDialog()
  End Sub

  Private Sub btnLicensing_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnLicensing.Click
    objFrmLicensing.ShowDialog()
  End Sub

  Private Sub btnSmppServer_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnSmppServer.Click
    objFrmSmppServer.ShowDialog()
  End Sub

  Private Sub frmDemo_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load

  End Sub

  Private Sub btnAndroid_Click(sender As Object, e As EventArgs) Handles btnAndroid.Click
    frmAndroid.ShowDialog()
  End Sub

  Private Sub btnHttpServer_Click(sender As Object, e As EventArgs) Handles btnHttpServer.Click
    objFrmHttpServer.ShowDialog()
  End Sub
End Class
