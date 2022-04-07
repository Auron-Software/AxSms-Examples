'-----------------------------------------------------------------------
' <copyright file="frmSendOptions.vb" company="Auron">
'     Copyright (c) Auron Software - www.auronsoftware.com
' </copyright>
' <author>Dennis van de Giessen</author>
'-----------------------------------------------------------------------
Imports AxSms

Public Class frmGsmAdvanced

    Private objConstants As AxSms.Constants
    Private bRequestDeliveryReport As Boolean = True
    Private bHasUdh As Boolean = False
    Private nToTon As Integer = 0
    Private nToNpi As Integer = 0
    Private nBodyFormat As Integer = 0

#Region "Properties"
    Public ReadOnly Property RequestDeliveryReport() As Boolean
        Get
            Return bRequestDeliveryReport
        End Get
    End Property
    Public ReadOnly Property HasUdh() As Boolean
        Get
            Return bHasUdh
        End Get
    End Property
    Public ReadOnly Property ToTon() As Integer
        Get
            Return nToTon
        End Get
    End Property
    Public ReadOnly Property ToNpi() As Integer
        Get
            Return nToNpi
        End Get
    End Property
    Public ReadOnly Property BodyFormat() As Integer
        Get
            Return nBodyFormat
        End Get
    End Property
#End Region

    Public Sub New()
        InitializeComponent()

        objConstants = New AxSms.Constants()

        nToTon = objConstants.TON_UNKNOWN
        nToNpi = objConstants.NPI_UNKNOWN
        bHasUdh = False
        bRequestDeliveryReport = True
    End Sub

    Private Sub btnOK_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnOK.Click
        DialogResult = Windows.Forms.DialogResult.OK
        Close()
    End Sub

    Private Sub btnCancel_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnCancel.Click
        DialogResult = Windows.Forms.DialogResult.Cancel
        Close()
    End Sub

    Private Sub frmGsmAdvanced_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        fillComboBoxes()

        cbxToTon.SelectedValue = nToTon
        cbxToNpi.SelectedValue = nToNpi
        cbRequestDeliveryReport.Checked = bRequestDeliveryReport
        cbHasUdh.Checked = bHasUdh
    End Sub

    Private Sub fillComboBoxes()
        Dim dctTon = New Dictionary(Of [String], Integer)()
        dctTon.Add("Unknown", objConstants.TON_UNKNOWN)
        dctTon.Add("International Number", objConstants.TON_INTERNATIONAL)
        dctTon.Add("National Number", objConstants.TON_NATIONAL)
        dctTon.Add("Network Specific Number", objConstants.TON_NETWORK_SPECIFIC)
        dctTon.Add("Subscriber Number", objConstants.TON_SUBSCRIBER_NUMBER)
        dctTon.Add("Alphanumeric Number", objConstants.TON_ALPHANUMERIC)

        cbxToTon.DisplayMember = "Key"
        cbxToTon.ValueMember = "Value"
        cbxToTon.DataSource = New BindingSource(dctTon, Nothing)

        Dim dctNpi = New Dictionary(Of [String], Integer)()
        dctNpi.Add("Unknown", objConstants.NPI_UNKNOWN)
        dctNpi.Add("ISDN / Telephone", objConstants.NPI_ISDN)
        dctNpi.Add("Data", objConstants.NPI_DATA)
        dctNpi.Add("Telex", objConstants.NPI_TELEX)
        dctNpi.Add("Land Mobile", objConstants.NPI_LAND_MOBILE)
        dctNpi.Add("National", objConstants.NPI_NATIONAL)
        dctNpi.Add("Ermes", objConstants.NPI_ERMES)

        cbxToNpi.DisplayMember = "Key"
        cbxToNpi.ValueMember = "Value"
        cbxToNpi.DataSource = New BindingSource(dctNpi, Nothing)

        Dim dctBodyFormat = New Dictionary(Of [String], Integer)()
        dctBodyFormat.Add("Text", objConstants.BODYFORMAT_TEXT)
        dctBodyFormat.Add("Hex", objConstants.BODYFORMAT_HEX)

        cbxBodyFormat.DisplayMember = "Key"
        cbxBodyFormat.ValueMember = "Value"
        cbxBodyFormat.DataSource = New BindingSource(dctBodyFormat, Nothing)
    End Sub
End Class