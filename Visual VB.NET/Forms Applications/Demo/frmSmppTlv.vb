Imports System.Windows.Forms

Public Class frmSmppTlv

    Public Enum EFrmType
        ADD
        EDIT
    End Enum
    Private Const CUSTOM_TAG As Integer = -1

    Private m_eFrmType As EFrmType
    Private objTlvInfo As TlvInfo
    Private strValue As [String]

    Private dctTags As Dictionary(Of [String], Integer)

#Region "Properties"
    Public Property TlvInfo() As TlvInfo
        Get
            Return objTlvInfo
        End Get
        Set(ByVal value As TlvInfo)
            objTlvInfo = value
        End Set
    End Property
    Public ReadOnly Property TlvValue() As [String]
        Get
            Return strValue
        End Get
    End Property
#End Region

    Public Sub New(ByVal eFrmType As EFrmType)
        InitializeComponent()

        m_eFrmType = eFrmType
        Select Case m_eFrmType
            Case EFrmType.ADD
                Text = "Create new Tlv"
                Exit Select
            Case EFrmType.EDIT
                Text = "Edit Tlv"
                Exit Select
        End Select

        objTlvInfo = New TlvInfo()
    End Sub

    Private Sub OK_Button_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles OK_Button.Click
        ' Set the tag number, either from the combobox or from the text field.
        Dim nTagNumber As Integer = CInt(cbxTag.SelectedValue)
        If nTagNumber = CUSTOM_TAG Then
            If Integer.TryParse(txtTag.Text, nTagNumber) = False Then
                MessageBox.Show("The tag number should be a positive integer.", "Format error", MessageBoxButtons.OK, MessageBoxIcon.Warning)
                Return
            End If
        End If

        TlvInfo.Tlv.Tag = nTagNumber
        strValue = txtValue.Text
        TlvInfo.TlvType = DirectCast(cbxType.SelectedValue, TlvInfo.TlvTypes)
        Try
            Select Case TlvInfo.TlvType
                Case TlvInfo.TlvTypes.HEX
                    TlvInfo.Tlv.ValueAsHexString = txtValue.Text
                    Exit Select
                Case TlvInfo.TlvTypes.[STRING]
                    TlvInfo.Tlv.ValueAsString = txtValue.Text
                    Exit Select
                Case TlvInfo.TlvTypes.INT32
                    TlvInfo.Tlv.ValueAsInt32 = Integer.Parse(txtValue.Text)
                    Exit Select
                Case TlvInfo.TlvTypes.INT16
                    TlvInfo.Tlv.ValueAsInt16 = Integer.Parse(txtValue.Text)
                    Exit Select
                Case TlvInfo.TlvTypes.INT8
                    TlvInfo.Tlv.ValueAsInt8 = Integer.Parse(txtValue.Text)
                    Exit Select
            End Select
        Catch
            MessageBox.Show("If either 'Int32', 'Int16' or 'Int8' the tag number should be an integer.", "Format error", MessageBoxButtons.OK, MessageBoxIcon.Warning)
            Return
        End Try

        Me.DialogResult = System.Windows.Forms.DialogResult.OK
        Me.Close()
    End Sub

    Private Sub Cancel_Button_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Cancel_Button.Click
        Me.DialogResult = System.Windows.Forms.DialogResult.Cancel
        Me.Close()
    End Sub

    Private Sub frmSmppTlv_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        fillComboBoxes()

        If dctTags.ContainsValue(objTlvInfo.Tlv.Tag) Then
            cbxTag.SelectedValue = objTlvInfo.Tlv.Tag
        Else
            cbxTag.SelectedValue = CUSTOM_TAG
        End If

        cbxType.SelectedValue = objTlvInfo.TlvType

        Select Case objTlvInfo.TlvType
            Case TlvInfo.TlvTypes.HEX
                txtValue.Text = TlvInfo.Tlv.ValueAsHexString
                Exit Select
            Case TlvInfo.TlvTypes.[STRING]
                txtValue.Text = TlvInfo.Tlv.ValueAsString
                Exit Select
            Case TlvInfo.TlvTypes.INT32
                txtValue.Text = Convert.ToString(TlvInfo.Tlv.ValueAsInt32)
                Exit Select
            Case TlvInfo.TlvTypes.INT16
                txtValue.Text = Convert.ToString(TlvInfo.Tlv.ValueAsInt16)
                Exit Select
            Case TlvInfo.TlvTypes.INT8
                txtValue.Text = Convert.ToString(TlvInfo.Tlv.ValueAsInt8)
                Exit Select
        End Select

        UpdateControls()
    End Sub

    Private Sub fillComboBoxes()
        Dim objConstants As New AxSms.Constants()

        dctTags = New Dictionary(Of [String], Integer)()
        dctTags.Add("<Custom Tag>", CUSTOM_TAG)
        dctTags.Add("SMPP_TLV_DEST_ADDR_SUBUNIT", objConstants.SMPP_TLV_DEST_ADDR_SUBUNIT)
        dctTags.Add("SMPP_TLV_DEST_NETWORK_TYPE", objConstants.SMPP_TLV_DEST_NETWORK_TYPE)
        dctTags.Add("SMPP_TLV_DEST_BEARER_TYPE", objConstants.SMPP_TLV_DEST_BEARER_TYPE)
        dctTags.Add("SMPP_TLV_DEST_TELEMATICS_ID", objConstants.SMPP_TLV_DEST_TELEMATICS_ID)
        dctTags.Add("SMPP_TLV_SOURCE_ADDR_SUBUNIT", objConstants.SMPP_TLV_SOURCE_ADDR_SUBUNIT)
        dctTags.Add("SMPP_TLV_SOURCE_NETWORK_TYPE", objConstants.SMPP_TLV_SOURCE_NETWORK_TYPE)
        dctTags.Add("SMPP_TLV_SOURCE_BEARER_TYPE", objConstants.SMPP_TLV_SOURCE_BEARER_TYPE)
        dctTags.Add("SMPP_TLV_SOURCE_TELEMATICS_ID", objConstants.SMPP_TLV_SOURCE_TELEMATICS_ID)
        dctTags.Add("SMPP_TLV_QOS_TIME_TO_LIVE", objConstants.SMPP_TLV_QOS_TIME_TO_LIVE)
        dctTags.Add("SMPP_TLV_PAYLOAD_TYPE", objConstants.SMPP_TLV_PAYLOAD_TYPE)
        dctTags.Add("SMPP_TLV_ADDITIONAL_STATUS_INFO_TEXT", objConstants.SMPP_TLV_ADDITIONAL_STATUS_INFO_TEXT)
        dctTags.Add("SMPP_TLV_RECEIPTED_MESSAGE_ID", objConstants.SMPP_TLV_RECEIPTED_MESSAGE_ID)
        dctTags.Add("SMPP_TLV_MS_MSG_WAIT_FACILITIES", objConstants.SMPP_TLV_MS_MSG_WAIT_FACILITIES)
        dctTags.Add("SMPP_TLV_PRIVACY_INDICATOR", objConstants.SMPP_TLV_PRIVACY_INDICATOR)
        dctTags.Add("SMPP_TLV_SOURCE_SUBADDRESS", objConstants.SMPP_TLV_SOURCE_SUBADDRESS)
        dctTags.Add("SMPP_TLV_DEST_SUBADDRESS", objConstants.SMPP_TLV_DEST_SUBADDRESS)
        dctTags.Add("SMPP_TLV_USER_MESSAGE_REFERENCE", objConstants.SMPP_TLV_USER_MESSAGE_REFERENCE)
        dctTags.Add("SMPP_TLV_USER_RESPONSE_CODE", objConstants.SMPP_TLV_USER_RESPONSE_CODE)
        dctTags.Add("SMPP_TLV_SOURCE_PORT", objConstants.SMPP_TLV_SOURCE_PORT)
        dctTags.Add("SMPP_TLV_DESTINATION_PORT", objConstants.SMPP_TLV_DESTINATION_PORT)
        dctTags.Add("SMPP_TLV_SAR_MSG_REF_NUM", objConstants.SMPP_TLV_SAR_MSG_REF_NUM)
        dctTags.Add("SMPP_TLV_LANGUAGE_INDICATOR", objConstants.SMPP_TLV_LANGUAGE_INDICATOR)
        dctTags.Add("SMPP_TLV_SAR_TOTAL_SEGMENTS", objConstants.SMPP_TLV_SAR_TOTAL_SEGMENTS)
        dctTags.Add("SMPP_TLV_SAR_SEGMENT_SEQNUM", objConstants.SMPP_TLV_SAR_SEGMENT_SEQNUM)
        dctTags.Add("SMPP_TLV_SC_INTERFACE_VERSION", objConstants.SMPP_TLV_SC_INTERFACE_VERSION)
        dctTags.Add("SMPP_TLV_CALLBACK_NUM_PRES_IND", objConstants.SMPP_TLV_CALLBACK_NUM_PRES_IND)
        dctTags.Add("SMPP_TLV_CALLBACK_NUM_ATAG", objConstants.SMPP_TLV_CALLBACK_NUM_ATAG)
        dctTags.Add("SMPP_TLV_NUMBER_OF_MESSAGES", objConstants.SMPP_TLV_NUMBER_OF_MESSAGES)
        dctTags.Add("SMPP_TLV_CALLBACK_NUM", objConstants.SMPP_TLV_CALLBACK_NUM)
        dctTags.Add("SMPP_TLV_DPF_RESULT", objConstants.SMPP_TLV_DPF_RESULT)
        dctTags.Add("SMPP_TLV_SET_DPF", objConstants.SMPP_TLV_SET_DPF)
        dctTags.Add("SMPP_TLV_MS_AVAILABILITY_STATUS", objConstants.SMPP_TLV_MS_AVAILABILITY_STATUS)
        dctTags.Add("SMPP_TLV_NETWORK_ERROR_CODE", objConstants.SMPP_TLV_NETWORK_ERROR_CODE)
        dctTags.Add("SMPP_TLV_MESSAGE_PAYLOAD", objConstants.SMPP_TLV_MESSAGE_PAYLOAD)
        dctTags.Add("SMPP_TLV_DELIVERY_FAILURE_REASON", objConstants.SMPP_TLV_DELIVERY_FAILURE_REASON)
        dctTags.Add("SMPP_TLV_MORE_MESSAGES_TO_SEND", objConstants.SMPP_TLV_MORE_MESSAGES_TO_SEND)
        dctTags.Add("SMPP_TLV_MESSAGE_STATE", objConstants.SMPP_TLV_MESSAGE_STATE)
        dctTags.Add("SMPP_TLV_CONGESTION_STATE", objConstants.SMPP_TLV_CONGESTION_STATE)
        dctTags.Add("SMPP_TLV_USSD_SERVICE_OP", objConstants.SMPP_TLV_USSD_SERVICE_OP)
        dctTags.Add("SMPP_TLV_DISPLAY_TIME", objConstants.SMPP_TLV_DISPLAY_TIME)
        dctTags.Add("SMPP_TLV_SMS_SIGNAL", objConstants.SMPP_TLV_SMS_SIGNAL)
        dctTags.Add("SMPP_TLV_MS_VALIDITY", objConstants.SMPP_TLV_MS_VALIDITY)
        dctTags.Add("SMPP_TLV_ALERT_ON_MESSAGE_DELIVERY", objConstants.SMPP_TLV_ALERT_ON_MESSAGE_DELIVERY)
        dctTags.Add("SMPP_TLV_ITS_REPLY_TYPE", objConstants.SMPP_TLV_ITS_REPLY_TYPE)
        dctTags.Add("SMPP_TLV_ITS_SESSION_INFO", objConstants.SMPP_TLV_ITS_SESSION_INFO)

        cbxTag.DisplayMember = "Key"
        cbxTag.ValueMember = "Value"
        cbxTag.DataSource = New BindingSource(dctTags, Nothing)

        Dim dctTypes = New Dictionary(Of [String], TlvInfo.TlvTypes)()
        dctTypes.Add("Hex", TlvInfo.TlvTypes.HEX)
        dctTypes.Add("String", TlvInfo.TlvTypes.[STRING])
        dctTypes.Add("Int32", TlvInfo.TlvTypes.INT32)
        dctTypes.Add("Int16", TlvInfo.TlvTypes.INT16)
        dctTypes.Add("Int8", TlvInfo.TlvTypes.INT8)

        cbxType.DisplayMember = "Key"
        cbxType.ValueMember = "Value"
        cbxType.DataSource = New BindingSource(dctTypes, Nothing)
    End Sub

    Private Sub UpdateControls()
        cbxTag.Enabled = m_eFrmType <> EFrmType.EDIT
        txtTag.Enabled = m_eFrmType <> EFrmType.EDIT AndAlso CInt(cbxTag.SelectedValue) = CUSTOM_TAG

        If CInt(cbxTag.SelectedValue) <> CUSTOM_TAG Then
            txtTag.Text = Convert.ToString(CInt(cbxTag.SelectedValue))
        End If
    End Sub

    Private Sub cbxTag_SelectedIndexChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles cbxTag.SelectedIndexChanged
        UpdateControls()
    End Sub
End Class

Public Class TlvInfo
    Public Enum TlvTypes
        [STRING]
        HEX
        INT32
        INT16
        INT8
    End Enum

    Public Tlv As AxSms.Tlv
    Public TlvType As TlvTypes

#Region "Properties"
    Public ReadOnly Property TagTypeString() As [String]
        Get
            Return TlvType.ToString()
        End Get
    End Property

    Public ReadOnly Property TagNumberString() As [String]
        Get
            Return (New AxSms.Constants()).SmppTlvToString(Tlv.Tag)
        End Get
    End Property
#End Region

    Public Sub New()
        Tlv = New AxSms.Tlv()
        TlvType = TlvTypes.[STRING]
    End Sub

    Public Sub New(ByVal other As TlvInfo)
        Tlv = New AxSms.Tlv()
        Tlv.Tag = other.Tlv.Tag
        Tlv.ValueAsHexString = other.Tlv.ValueAsHexString
        TlvType = other.TlvType
    End Sub
End Class