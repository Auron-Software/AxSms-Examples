'-----------------------------------------------------------------------
' <copyright file="frmLicensing.vb" company="Auron">
'     Copyright (c) Auron Software - www.auronsoftware.com
' </copyright>
' <author>Dennis van de Giessen</author>
'-----------------------------------------------------------------------
Imports AxSms
Imports Microsoft.Win32

Public Class frmLicensing

    Dim objFrmLicensingSerial As frmLicensingSerial = New frmLicensingSerial
    Dim objGsm As AxSms.Gsm = New AxSms.Gsm

    Private Sub frmLicensing_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        lblVersion.Text = String.Format("{0} build {1}", objGsm.Version, objGsm.Build)
        UpdateLicensingInfo()
    End Sub

    Private Sub llblUrlSupport_LinkClicked(ByVal sender As System.Object, ByVal e As System.Windows.Forms.LinkLabelLinkClickedEventArgs) Handles llblUrlSupport.LinkClicked
        Process.Start("https://www.auronsoftware.com/knowledge-base/#sms-component")
    End Sub

    Private Sub llblUrlSales_LinkClicked(ByVal sender As System.Object, ByVal e As System.Windows.Forms.LinkLabelLinkClickedEventArgs) Handles llblUrlSales.LinkClicked
        Process.Start("https://www.auronsoftware.com/sales")
    End Sub

    Private Sub llblUrlOrder_LinkClicked(ByVal sender As System.Object, ByVal e As System.Windows.Forms.LinkLabelLinkClickedEventArgs) Handles llblUrlOrder.LinkClicked
        Process.Start("https://www.auronsoftware.com/sales/order#ProductCode=AX004")
    End Sub

    Private Sub llblMailSupport_LinkClicked(ByVal sender As System.Object, ByVal e As System.Windows.Forms.LinkLabelLinkClickedEventArgs) Handles llblMailSupport.LinkClicked
        Process.Start("mailto:support@auronsoftware.com")
    End Sub

    Private Sub btnClose_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnClose.Click
        Close()
    End Sub

    Private Sub btnRegister_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnRegister.Click
        Dim strBuffer As String = String.Empty

        objFrmLicensingSerial.SerialKey = objGsm.LicenseKey

        If (objFrmLicensingSerial.ShowDialog() = DialogResult.OK) Then
            Dim strOldKey As String = objGsm.LicenseKey

            objGsm.LicenseKey = objFrmLicensingSerial.SerialKey
            objGsm.SaveLicenseKey()
            If (objGsm.LastError <> 0) Then
                MessageBox.Show(String.Format("SaveLicenseKey failed, error {0} ({1}).", objGsm.LastError.ToString(), objGsm.GetErrorDescription(objGsm.LastError)), "License", MessageBoxButtons.OK, MessageBoxIcon.Error)
                objGsm.LicenseKey = strOldKey
            End If

            UpdateLicensingInfo()
        End If
    End Sub



    Sub UpdateLicensingInfo()
        Dim strLicenseKey As String = ""

        If (objGsm.LicenseKey <> "") Then
            strLicenseKey = objGsm.LicenseKey
        Else
            strLicenseKey = "no license key"
        End If
        txtLicense.Text = String.Format("{0} ({1})", objGsm.LicenseStatus, strLicenseKey)
    End Sub

End Class