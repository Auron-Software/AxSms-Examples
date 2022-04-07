'-----------------------------------------------------------------------
' <copyright file="frmSmppAdvanced.vb" company="Auron">
'     Copyright (c) Auron Software - www.auronsoftware.com
' </copyright>
' <author>Dennis van de Giessen</author>
'-----------------------------------------------------------------------
Imports AxSms

Public Class frmSmppAdvanced

    Private strSystemType As String, strAddressRange As String
    Private nInterfaceVersion As Integer, nAddressTon As Integer, nAddressNpi As Integer
    Private nConnectTimeout As Integer, nBindTimeout As Integer, nEnquireInterval As Integer
    Private objSmsConstants As New AxSms.Constants()

#Region "Properties"

    Public Property AddressRange() As String
        Get
            Return strAddressRange
        End Get
        Set(ByVal value As String)
            strAddressRange = value
        End Set
    End Property

    Public ReadOnly Property SystemType() As String
        Get
            Return strSystemType
        End Get
    End Property

    Public ReadOnly Property AddressNpi() As Integer
        Get
            Return nAddressNpi
        End Get
    End Property

    Public ReadOnly Property AddressTon() As Integer
        Get
            Return nAddressTon
        End Get
    End Property

    Public ReadOnly Property EnquireInterval() As Integer
        Get
            Return nEnquireInterval
        End Get
    End Property

    Public ReadOnly Property ConnectTimeout() As Integer
        Get
            Return nConnectTimeout
        End Get
    End Property

    Public ReadOnly Property BindTimeout() As Integer
        Get
            Return nBindTimeout
        End Get
    End Property

    Public ReadOnly Property InterfaceVersion() As Integer
        Get
            Return nInterfaceVersion
        End Get
    End Property
#End Region

    Public Sub New()
        InitializeComponent()

        objSmsConstants = New AxSms.Constants()
        nAddressNpi = objSmsConstants.NPI_UNKNOWN
        nAddressTon = objSmsConstants.TON_UNKNOWN
        nEnquireInterval = 30000
        nConnectTimeout = 2000
        nBindTimeout = 5000
        nInterfaceVersion = objSmsConstants.SMPP_VERSION_34

        Dim strDemoGateway As [String] = "Auron Demo Gateway"
        lblInfo.Links.Add(lblInfo.Text.IndexOf(strDemoGateway), strDemoGateway.Length, "https://www.auronsoftware.com/knowledge-base")
    End Sub


    Private Sub frmSmppAdvanced_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        fillComboBoxes()

        cbxInterfaceVersion.SelectedValue = nInterfaceVersion
        txtConnectTimeout.Text = nConnectTimeout.ToString()
        txtBindTimeout.Text = nBindTimeout.ToString()
        txtEnquireInterval.Text = nEnquireInterval.ToString()
        txtSystemType.Text = strSystemType
        txtAddressRange.Text = strAddressRange
        cbxAddressTon.SelectedValue = nAddressTon
        cbxAddressNpi.SelectedValue = nAddressNpi
    End Sub

    Private Sub btnOK_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnOK.Click
        If Integer.TryParse(txtConnectTimeout.Text, nConnectTimeout) = False OrElse _
           Integer.TryParse(txtBindTimeout.Text, nBindTimeout) = False OrElse _
           Integer.TryParse(txtEnquireInterval.Text, nEnquireInterval) = False Then
            MessageBox.Show("The values in 'Connect timeout', 'Bind timeout' and" & "'Enquire interval' need to be integers", "Format error", _
                            MessageBoxButtons.OK, MessageBoxIcon.Warning)
            Return
        End If

        nInterfaceVersion = CInt(cbxInterfaceVersion.SelectedValue)
        strSystemType = txtSystemType.Text
        strAddressRange = txtAddressRange.Text
        nAddressTon = CInt(cbxAddressTon.SelectedValue)
        nAddressNpi = CInt(cbxAddressNpi.SelectedValue)

        DialogResult = DialogResult.OK
        Me.Close()
    End Sub

    Private Sub btnCancel_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnCancel.Click
        DialogResult = DialogResult.Cancel
        Me.Close()
    End Sub

    Private Sub fillComboBoxes()
        Dim objConstants As New AxSms.Constants()

        Dim dctInterfaceVersion = New Dictionary(Of [String], Integer)()
        dctInterfaceVersion.Add("3.3", objConstants.SMPP_VERSION_33)
        dctInterfaceVersion.Add("3.4", objConstants.SMPP_VERSION_34)
        dctInterfaceVersion.Add("5.0", objConstants.SMPP_VERSION_50)

        cbxInterfaceVersion.DisplayMember = "Key"
        cbxInterfaceVersion.ValueMember = "Value"
        cbxInterfaceVersion.DataSource = New BindingSource(dctInterfaceVersion, Nothing)

        Dim dctAddressTon = New Dictionary(Of [String], Integer)()
        dctAddressTon.Add("Unknown", objConstants.TON_UNKNOWN)
        dctAddressTon.Add("International Number", objConstants.TON_INTERNATIONAL)
        dctAddressTon.Add("National Number", objConstants.TON_NATIONAL)
        dctAddressTon.Add("Network Specific Number", objConstants.TON_NETWORK_SPECIFIC)
        dctAddressTon.Add("Subscriber Number", objConstants.TON_SUBSCRIBER_NUMBER)
        dctAddressTon.Add("Alphanumeric Number", objConstants.TON_ALPHANUMERIC)
        dctAddressTon.Add("Abbreviated Number", objConstants.SMPP_TON_ABBREVIATED)

        cbxAddressTon.DisplayMember = "Key"
        cbxAddressTon.ValueMember = "Value"
        cbxAddressTon.DataSource = New BindingSource(dctAddressTon, Nothing)

        Dim dctAddressNpi = New Dictionary(Of [String], Integer)()
        dctAddressNpi.Add("Unknown", objConstants.NPI_UNKNOWN)
        dctAddressNpi.Add("ISDN / Telephone", objConstants.NPI_ISDN)
        dctAddressNpi.Add("Data", objConstants.NPI_DATA)
        dctAddressNpi.Add("Telex", objConstants.NPI_TELEX)
        dctAddressNpi.Add("Land Mobile", objConstants.NPI_LAND_MOBILE)
        dctAddressNpi.Add("National", objConstants.NPI_NATIONAL)
        dctAddressNpi.Add("Ermes", objConstants.NPI_ERMES)
        dctAddressNpi.Add("Internet", objConstants.SMPP_NPI_INTERNET)

        cbxAddressNpi.DisplayMember = "Key"
        cbxAddressNpi.ValueMember = "Value"
        cbxAddressNpi.DataSource = New BindingSource(dctAddressNpi, Nothing)
    End Sub
End Class