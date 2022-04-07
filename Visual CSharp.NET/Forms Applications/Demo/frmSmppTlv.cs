using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Text;
using System.Windows.Forms;

namespace Demo
{
    public partial class frmSmppTlv : Form
    {
        public enum EFrmType { ADD, EDIT }
        private const int CUSTOM_TAG = -1;

        private EFrmType m_eFrmType;
        private TlvInfo objTlvInfo;
        private String strValue;

        private Dictionary<String, int> dctTags;

        #region Properties
        public TlvInfo TlvInfo
        {
            set { objTlvInfo = value; }
            get { return objTlvInfo; }
        }
        public String TlvValue
        {
            get { return strValue; }
        }
        #endregion

        public frmSmppTlv(EFrmType eFrmType)
        {
            InitializeComponent();

            m_eFrmType = eFrmType;
            switch (m_eFrmType)
            {
                case EFrmType.ADD:
                    Text = "Create new Tlv";
                    break;
                case EFrmType.EDIT:
                    Text = "Edit Tlv";
                    break;
            }

            objTlvInfo = new TlvInfo();
        }

        private void btOk_Click(object sender, EventArgs e)
        {
            // Set the tag number, either from the combobox or from the text field.
            int nTagNumber = (int)cbxTag.SelectedValue;
            if (nTagNumber == CUSTOM_TAG)
            {
                if (int.TryParse(txtTag.Text, out nTagNumber) == false)
                {
                    MessageBox.Show("The tag number should be a positive integer.", "Format error",
                        MessageBoxButtons.OK, MessageBoxIcon.Warning);
                    return;
                }
            }

            TlvInfo.Tlv.Tag = nTagNumber;
            strValue = txtValue.Text;
            TlvInfo.TlvType = (TlvInfo.TlvTypes)cbxType.SelectedValue;
            try
            {
                switch (TlvInfo.TlvType)
                {
                    case TlvInfo.TlvTypes.HEX:
                        TlvInfo.Tlv.ValueAsHexString = txtValue.Text;
                        break;
                    case TlvInfo.TlvTypes.STRING:
                        TlvInfo.Tlv.ValueAsString = txtValue.Text;
                        break;
                    case TlvInfo.TlvTypes.INT32:
                        TlvInfo.Tlv.ValueAsInt32 = int.Parse(txtValue.Text);
                        break;
                    case TlvInfo.TlvTypes.INT16:
                        TlvInfo.Tlv.ValueAsInt16 = int.Parse(txtValue.Text);
                        break;
                    case TlvInfo.TlvTypes.INT8:
                        TlvInfo.Tlv.ValueAsInt8 = int.Parse(txtValue.Text);
                        break;
                }
            }
            catch
            {
                MessageBox.Show("If either 'Int32', 'Int16' or 'Int8' the tag number should be an integer.", "Format error",
                    MessageBoxButtons.OK, MessageBoxIcon.Warning);
                return;
            }

            DialogResult = DialogResult.OK;
            this.Close();
        }

        private void btCancel_Click(object sender, EventArgs e)
        {
            DialogResult = DialogResult.Cancel;
            this.Close();
        }

        private void frmSmppTlv_Load(object sender, EventArgs e)
        {
            fillComboBoxes();

            if (dctTags.ContainsValue(objTlvInfo.Tlv.Tag))
                cbxTag.SelectedValue = objTlvInfo.Tlv.Tag;
            else
                cbxTag.SelectedValue = CUSTOM_TAG;

            cbxType.SelectedValue = objTlvInfo.TlvType;

            switch (objTlvInfo.TlvType)
            {
                case TlvInfo.TlvTypes.HEX:
                    txtValue.Text = TlvInfo.Tlv.ValueAsHexString;
                    break;
                case TlvInfo.TlvTypes.STRING:
                    txtValue.Text = TlvInfo.Tlv.ValueAsString;
                    break;
                case TlvInfo.TlvTypes.INT32:
                    txtValue.Text = Convert.ToString(TlvInfo.Tlv.ValueAsInt32);
                    break;
                case TlvInfo.TlvTypes.INT16:
                    txtValue.Text = Convert.ToString(TlvInfo.Tlv.ValueAsInt16);
                    break;
                case TlvInfo.TlvTypes.INT8:
                    txtValue.Text = Convert.ToString(TlvInfo.Tlv.ValueAsInt8);
                    break;
            }

            UpdateControls();
        }

        private void fillComboBoxes()
        {
            AxSms.Constants objConstants = new AxSms.Constants();
            
            dctTags = new Dictionary<String, int>();
            dctTags.Add("<Custom Tag>", CUSTOM_TAG);
            dctTags.Add("SMPP_TLV_DEST_ADDR_SUBUNIT", objConstants.SMPP_TLV_DEST_ADDR_SUBUNIT);
            dctTags.Add("SMPP_TLV_DEST_NETWORK_TYPE", objConstants.SMPP_TLV_DEST_NETWORK_TYPE);
            dctTags.Add("SMPP_TLV_DEST_BEARER_TYPE", objConstants.SMPP_TLV_DEST_BEARER_TYPE);
            dctTags.Add("SMPP_TLV_DEST_TELEMATICS_ID", objConstants.SMPP_TLV_DEST_TELEMATICS_ID);
            dctTags.Add("SMPP_TLV_SOURCE_ADDR_SUBUNIT", objConstants.SMPP_TLV_SOURCE_ADDR_SUBUNIT);
            dctTags.Add("SMPP_TLV_SOURCE_NETWORK_TYPE", objConstants.SMPP_TLV_SOURCE_NETWORK_TYPE);
            dctTags.Add("SMPP_TLV_SOURCE_BEARER_TYPE", objConstants.SMPP_TLV_SOURCE_BEARER_TYPE);
            dctTags.Add("SMPP_TLV_SOURCE_TELEMATICS_ID", objConstants.SMPP_TLV_SOURCE_TELEMATICS_ID);
            dctTags.Add("SMPP_TLV_QOS_TIME_TO_LIVE", objConstants.SMPP_TLV_QOS_TIME_TO_LIVE);
            dctTags.Add("SMPP_TLV_PAYLOAD_TYPE", objConstants.SMPP_TLV_PAYLOAD_TYPE);
            dctTags.Add("SMPP_TLV_ADDITIONAL_STATUS_INFO_TEXT", objConstants.SMPP_TLV_ADDITIONAL_STATUS_INFO_TEXT);
            dctTags.Add("SMPP_TLV_RECEIPTED_MESSAGE_ID", objConstants.SMPP_TLV_RECEIPTED_MESSAGE_ID);
            dctTags.Add("SMPP_TLV_MS_MSG_WAIT_FACILITIES", objConstants.SMPP_TLV_MS_MSG_WAIT_FACILITIES);
            dctTags.Add("SMPP_TLV_PRIVACY_INDICATOR", objConstants.SMPP_TLV_PRIVACY_INDICATOR);
            dctTags.Add("SMPP_TLV_SOURCE_SUBADDRESS", objConstants.SMPP_TLV_SOURCE_SUBADDRESS);
            dctTags.Add("SMPP_TLV_DEST_SUBADDRESS", objConstants.SMPP_TLV_DEST_SUBADDRESS);
            dctTags.Add("SMPP_TLV_USER_MESSAGE_REFERENCE", objConstants.SMPP_TLV_USER_MESSAGE_REFERENCE);
            dctTags.Add("SMPP_TLV_USER_RESPONSE_CODE", objConstants.SMPP_TLV_USER_RESPONSE_CODE);
            dctTags.Add("SMPP_TLV_SOURCE_PORT", objConstants.SMPP_TLV_SOURCE_PORT);
            dctTags.Add("SMPP_TLV_DESTINATION_PORT", objConstants.SMPP_TLV_DESTINATION_PORT);
            dctTags.Add("SMPP_TLV_SAR_MSG_REF_NUM", objConstants.SMPP_TLV_SAR_MSG_REF_NUM);
            dctTags.Add("SMPP_TLV_LANGUAGE_INDICATOR", objConstants.SMPP_TLV_LANGUAGE_INDICATOR);
            dctTags.Add("SMPP_TLV_SAR_TOTAL_SEGMENTS", objConstants.SMPP_TLV_SAR_TOTAL_SEGMENTS);
            dctTags.Add("SMPP_TLV_SAR_SEGMENT_SEQNUM", objConstants.SMPP_TLV_SAR_SEGMENT_SEQNUM);
            dctTags.Add("SMPP_TLV_SC_INTERFACE_VERSION", objConstants.SMPP_TLV_SC_INTERFACE_VERSION);
            dctTags.Add("SMPP_TLV_CALLBACK_NUM_PRES_IND", objConstants.SMPP_TLV_CALLBACK_NUM_PRES_IND);
            dctTags.Add("SMPP_TLV_CALLBACK_NUM_ATAG", objConstants.SMPP_TLV_CALLBACK_NUM_ATAG);
            dctTags.Add("SMPP_TLV_NUMBER_OF_MESSAGES", objConstants.SMPP_TLV_NUMBER_OF_MESSAGES);
            dctTags.Add("SMPP_TLV_CALLBACK_NUM", objConstants.SMPP_TLV_CALLBACK_NUM);
            dctTags.Add("SMPP_TLV_DPF_RESULT", objConstants.SMPP_TLV_DPF_RESULT);
            dctTags.Add("SMPP_TLV_SET_DPF", objConstants.SMPP_TLV_SET_DPF);
            dctTags.Add("SMPP_TLV_MS_AVAILABILITY_STATUS", objConstants.SMPP_TLV_MS_AVAILABILITY_STATUS);
            dctTags.Add("SMPP_TLV_NETWORK_ERROR_CODE", objConstants.SMPP_TLV_NETWORK_ERROR_CODE);
            dctTags.Add("SMPP_TLV_MESSAGE_PAYLOAD", objConstants.SMPP_TLV_MESSAGE_PAYLOAD);
            dctTags.Add("SMPP_TLV_DELIVERY_FAILURE_REASON", objConstants.SMPP_TLV_DELIVERY_FAILURE_REASON);
            dctTags.Add("SMPP_TLV_MORE_MESSAGES_TO_SEND", objConstants.SMPP_TLV_MORE_MESSAGES_TO_SEND);
            dctTags.Add("SMPP_TLV_MESSAGE_STATE", objConstants.SMPP_TLV_MESSAGE_STATE);
            dctTags.Add("SMPP_TLV_CONGESTION_STATE", objConstants.SMPP_TLV_CONGESTION_STATE);
            dctTags.Add("SMPP_TLV_USSD_SERVICE_OP", objConstants.SMPP_TLV_USSD_SERVICE_OP);
            dctTags.Add("SMPP_TLV_DISPLAY_TIME", objConstants.SMPP_TLV_DISPLAY_TIME);
            dctTags.Add("SMPP_TLV_SMS_SIGNAL", objConstants.SMPP_TLV_SMS_SIGNAL);
            dctTags.Add("SMPP_TLV_MS_VALIDITY", objConstants.SMPP_TLV_MS_VALIDITY);
            dctTags.Add("SMPP_TLV_ALERT_ON_MESSAGE_DELIVERY", objConstants.SMPP_TLV_ALERT_ON_MESSAGE_DELIVERY);
            dctTags.Add("SMPP_TLV_ITS_REPLY_TYPE", objConstants.SMPP_TLV_ITS_REPLY_TYPE);
            dctTags.Add("SMPP_TLV_ITS_SESSION_INFO", objConstants.SMPP_TLV_ITS_SESSION_INFO);

            cbxTag.DisplayMember = "Key";
            cbxTag.ValueMember = "Value";
            cbxTag.DataSource = new BindingSource(dctTags, null);

            var dctTypes = new Dictionary<String, TlvInfo.TlvTypes>();
            dctTypes.Add("Hex", TlvInfo.TlvTypes.HEX);
            dctTypes.Add("String", TlvInfo.TlvTypes.STRING);
            dctTypes.Add("Int32", TlvInfo.TlvTypes.INT32);
            dctTypes.Add("Int16", TlvInfo.TlvTypes.INT16);
            dctTypes.Add("Int8", TlvInfo.TlvTypes.INT8);

            cbxType.DisplayMember = "Key";
            cbxType.ValueMember = "Value";
            cbxType.DataSource = new BindingSource(dctTypes, null);
        }

        private void UpdateControls()
        {
            cbxTag.Enabled = m_eFrmType != EFrmType.EDIT;
            txtTag.Enabled = m_eFrmType != EFrmType.EDIT && (int)cbxTag.SelectedValue == CUSTOM_TAG;

            if ((int)cbxTag.SelectedValue != CUSTOM_TAG)
                txtTag.Text = Convert.ToString((int)cbxTag.SelectedValue);
        }

        private void cbxTag_SelectedIndexChanged(object sender, EventArgs e)
        {
            UpdateControls();
        }
    }

    public class TlvInfo
    {
        public enum TlvTypes { STRING, HEX, INT32, INT16, INT8 }

        public AxSms.Tlv Tlv;
        public TlvTypes TlvType;

        #region Properties
        public String TagTypeString
        {
            get { return TlvType.ToString(); }
        }

        public String TagNumberString
        {
            get { return (new AxSms.Constants()).SmppTlvToString(Tlv.Tag); }
        }
        #endregion;

        public TlvInfo()
        {
            Tlv = new AxSms.Tlv();
            TlvType = TlvTypes.STRING;
        }

        public TlvInfo(TlvInfo other)
        {
            Tlv = new AxSms.Tlv();
            Tlv.Tag = other.Tlv.Tag;
            Tlv.ValueAsHexString = other.Tlv.ValueAsHexString;
            TlvType = other.TlvType;
        }
    }
}
