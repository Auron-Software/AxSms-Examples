Public Class frmSmppSendAdvanced

    Private objConstants As AxSms.Constants
    Private bRequestDeliveryReport As Boolean = True
    Private bHasUdh As Boolean = False
    Private strFromAddress As [String]
    Private nFromTon As Integer = 0
    Private nFromNpi As Integer = 0
    Private nToTon As Integer = 0
    Private nToNpi As Integer = 0
    Private nBodyFormat As Integer = 0

    Private lsTlvInfo As List(Of TlvInfo)

#Region "Properties"
    Public ReadOnly Property TlvInfo() As List(Of TlvInfo)
        Get
            Return lsTlvInfo
        End Get
    End Property
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
    Public ReadOnly Property FromAddress() As [String]
        Get
            Return strFromAddress
        End Get
    End Property
    Public ReadOnly Property FromTon() As Integer
        Get
            Return nFromTon
        End Get
    End Property
    Public ReadOnly Property FromNpi() As Integer
        Get
            Return nFromNpi
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

        lsTlvInfo = New List(Of TlvInfo)()
        objConstants = New AxSms.Constants()

        nFromTon = objConstants.TON_UNKNOWN
        nToTon = objConstants.TON_UNKNOWN
        nFromNpi = nToNpi = objConstants.NPI_UNKNOWN
        nFromNpi = nToNpi = objConstants.NPI_UNKNOWN
        bHasUdh = False
        bRequestDeliveryReport = True
    End Sub

    Private Sub frmSmppSendAdvanced_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        fillComboBoxes()
        setupListboxes()

        txtFromAddress.Text = strFromAddress
        cbxFromTon.SelectedValue = nFromTon
        cbxFromNpi.SelectedValue = nFromNpi
        cbxToTon.SelectedValue = nToTon
        cbxToNpi.SelectedValue = nToNpi
        cbRequestDeliveryReport.Checked = bRequestDeliveryReport
        cbHasUdh.Checked = bHasUdh
    End Sub

    Private Sub btnOK_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnOK.Click
        strFromAddress = txtFromAddress.Text
        nFromTon = CInt(cbxFromTon.SelectedValue)
        nFromNpi = CInt(cbxFromNpi.SelectedValue)
        nToTon = CInt(cbxToTon.SelectedValue)
        nToNpi = CInt(cbxToNpi.SelectedValue)
        bRequestDeliveryReport = cbRequestDeliveryReport.Checked
        bHasUdh = cbHasUdh.Checked

        lsTlvInfo.Clear()
        For Each li As ListViewItem In lvTlvs.Items
            Dim objInfo As TlvInfo = DirectCast(li.Tag, TlvInfo)
            lsTlvInfo.Add(New TlvInfo(objInfo))
        Next

        DialogResult = DialogResult.OK
        Me.Close()
    End Sub

    Private Sub btnCancel_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnCancel.Click
        DialogResult = DialogResult.Cancel
        Me.Close()
    End Sub

    Private Sub setupListboxes()
        lvTlvs.Columns.Clear()
        lvTlvs.Columns.Add("Tag", 230, HorizontalAlignment.Left)
        lvTlvs.Columns.Add("Type", 115, HorizontalAlignment.Left)
        lvTlvs.Columns.Add("Value", lvTlvs.Width - 350, HorizontalAlignment.Left)
    End Sub

    Private Sub fillComboBoxes()
        Dim dctTon = New Dictionary(Of [String], Integer)()
        dctTon.Add("Unknown", objConstants.TON_UNKNOWN)
        dctTon.Add("International Number", objConstants.TON_INTERNATIONAL)
        dctTon.Add("National Number", objConstants.TON_NATIONAL)
        dctTon.Add("Network Specific Number", objConstants.TON_NETWORK_SPECIFIC)
        dctTon.Add("Subscriber Number", objConstants.TON_SUBSCRIBER_NUMBER)
        dctTon.Add("Alphanumeric Number", objConstants.TON_ALPHANUMERIC)
        dctTon.Add("Abbreviated Number", objConstants.SMPP_TON_ABBREVIATED)

        cbxFromTon.DisplayMember = "Key"
        cbxFromTon.ValueMember = "Value"
        cbxFromTon.DataSource = New BindingSource(dctTon, Nothing)
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
        dctNpi.Add("Internet", objConstants.SMPP_NPI_INTERNET)

        cbxFromNpi.DisplayMember = "Key"
        cbxFromNpi.ValueMember = "Value"
        cbxFromNpi.DataSource = New BindingSource(dctNpi, Nothing)
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

    Private Sub btAdd_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btAdd.Click
        Dim objFrmTlv As New frmSmppTlv(frmSmppTlv.EFrmType.ADD)
        If objFrmTlv.ShowDialog() = DialogResult.OK Then
            ' The Tag number of a TLV is a unique identifier that corresponds with a specific
            ' type of optional data that's going to be attached to an SMS message. 
            ' As such there can't be two TLV's with the same Tag number attached to a message.
            For Each li As ListViewItem In lvTlvs.Items
                Dim objInfo As TlvInfo = DirectCast(li.Tag, TlvInfo)
                If objInfo.Tlv.Tag = objFrmTlv.TlvInfo.Tlv.Tag Then
                    ' If we find an existing TLV value with the same tag number
                    ' remove it and search no further.
                    lvTlvs.Items.Remove(li)
                End If
            Next

            ' Add the newly created TLV value to the listview
            Dim item As New ListViewItem(New [String]() {objFrmTlv.TlvInfo.TagNumberString, objFrmTlv.TlvInfo.TagTypeString, objFrmTlv.TlvValue})
            item.Tag = New TlvInfo(objFrmTlv.TlvInfo)
            lvTlvs.Items.Insert(0, item)
        End If
    End Sub

    Private Sub btEdit_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btEdit.Click
        ' Exit if nothing is selected
        If lvTlvs.SelectedItems.Count <= 0 Then
            Return
        End If

        ' Copy the values in case cancel is selected            
        Dim objEdittedInfo As TlvInfo = DirectCast(lvTlvs.SelectedItems(0).Tag, TlvInfo)
        Dim objOldValues As New TlvInfo(objEdittedInfo)

        ' Show the edit dialog
        Dim objFrmTlv As New frmSmppTlv(frmSmppTlv.EFrmType.EDIT)
        objFrmTlv.TlvInfo = objEdittedInfo
        If objFrmTlv.ShowDialog() = DialogResult.Cancel Then
            ' Cancel was selected; reset the properties
            objEdittedInfo.Tlv.ValueAsHexString = objOldValues.Tlv.ValueAsHexString
            objEdittedInfo.TlvType = objOldValues.TlvType
        Else
            ' Ok was selected, update the listitem.
            Dim item As ListViewItem = lvTlvs.SelectedItems(0)
            item.SubItems(1).Text = objFrmTlv.TlvInfo.TagTypeString
            item.SubItems(2).Text = objFrmTlv.TlvValue
        End If
    End Sub

    Private Sub btRemove_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btRemove.Click
        If lvTlvs.SelectedItems.Count <= 0 Then
            Return
        End If

        lvTlvs.Items.Remove(lvTlvs.SelectedItems(0))
    End Sub
End Class