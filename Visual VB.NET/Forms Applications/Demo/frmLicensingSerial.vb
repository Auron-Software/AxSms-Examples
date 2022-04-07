'-----------------------------------------------------------------------
' <copyright file="frmLicensingSerial.vb" company="Auron">
'     Copyright (c) Auron Software - www.auronsoftware.com
' </copyright>
' <author>Dennis van de Giessen</author>
'-----------------------------------------------------------------------
Public Class frmLicensingSerial

    Private strSerialKey As String

#Region "Properties"
    Public Property SerialKey()
        Get
            Return strSerialKey
        End Get
        Set(ByVal value)
            strSerialKey = value
        End Set
    End Property
#End Region


    Private Sub frmLicensingSerial_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        txtSerialKey.Text = strSerialKey
    End Sub

    Private Sub btnCancel_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnCancel.Click
        DialogResult = DialogResult.Cancel
        Close()
    End Sub

    Private Sub btnOK_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnOK.Click
        strSerialKey = txtSerialKey.Text
        DialogResult = DialogResult.OK
        Close()
    End Sub
End Class