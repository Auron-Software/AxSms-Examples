//-----------------------------------------------------------------------
// <copyright file="frmSendOptions.cs" company="Auron">
//     Copyright (c) Auron Software - www.auronsoftware.com
// </copyright>
// <author>Dennis van de Giessen</author>
//-----------------------------------------------------------------------
namespace Demo
{
    using System;
    using System.Windows.Forms;
    using System.Collections.Generic;

    public partial class frmSmppSendAdvanced : Form
    {
        private AxSms.Constants objConstants;
        private bool bRequestDeliveryReport = true;
        private bool bHasUdh = false;
        private String strFromAddress;
        private int nFromTon = 0;
        private int nFromNpi = 0;
        private int nToTon = 0;
        private int nToNpi = 0;
        private int nBodyFormat = 0;

        private List<TlvInfo> lsTlvInfo;

        #region Properties
        public List<TlvInfo> TlvInfo
        {
            get { return lsTlvInfo; }
        }
        public bool RequestDeliveryReport
        {
            get { return bRequestDeliveryReport; }
        }
        public bool HasUdh
        {
            get { return bHasUdh; }
        }
        public String FromAddress
        {
            get { return strFromAddress; }
        }
        public int FromTon
        {
            get { return nFromTon; }
        }
        public int FromNpi
        {
            get { return nFromNpi; }
        }
        public int ToTon
        {
            get { return nToTon; }
        }
        public int ToNpi
        {
            get { return nToNpi; }
        }
        public int BodyFormat
        {
            get { return nBodyFormat; }
        }
        #endregion

        public frmSmppSendAdvanced()
        {
            InitializeComponent();

            lsTlvInfo = new List<TlvInfo>();
            objConstants = new AxSms.Constants();

            nFromTon = nToTon = objConstants.TON_UNKNOWN;
            nFromNpi = nToNpi = objConstants.NPI_UNKNOWN;
            bHasUdh = false;
            bRequestDeliveryReport = true;
        }

        private void frmSendOptions_Load(object sender, EventArgs e)
        {
            fillComboBoxes();
            setupListboxes();

            txtFromAddress.Text = strFromAddress;
            cbxFromTon.SelectedValue = nFromTon;
            cbxFromNpi.SelectedValue = nFromNpi;
            cbxToTon.SelectedValue = nToTon;
            cbxToNpi.SelectedValue = nToNpi;
            cbRequestDeliveryReport.Checked = bRequestDeliveryReport;
            cbHasUdh.Checked = bHasUdh;
        }

        private void btnOK_Click(object sender, EventArgs e)
        {
            strFromAddress = txtFromAddress.Text;
            nFromTon = (int)cbxFromTon.SelectedValue;
            nFromNpi = (int)cbxFromNpi.SelectedValue;
            nToTon = (int)cbxToTon.SelectedValue;
            nToNpi = (int)cbxToNpi.SelectedValue;
            bRequestDeliveryReport = cbRequestDeliveryReport.Checked;
            bHasUdh = cbHasUdh.Checked;

            lsTlvInfo.Clear();
            foreach (ListViewItem li in lvTlvs.Items)
            {
                TlvInfo objInfo = (TlvInfo)li.Tag;
                lsTlvInfo.Add(new TlvInfo(objInfo));
            }

            DialogResult = DialogResult.OK;
            this.Close();
        }

        private void btnCancel_Click(object sender, EventArgs e)
        {
            DialogResult = DialogResult.Cancel;
            this.Close();
        }

        private void setupListboxes()
        {
            lvTlvs.Columns.Clear();
            lvTlvs.Columns.Add("Tag", 230, HorizontalAlignment.Left);
            lvTlvs.Columns.Add("Type", 115, HorizontalAlignment.Left);
            lvTlvs.Columns.Add("Value", lvTlvs.Width - 350, HorizontalAlignment.Left);
        }

        void fillComboBoxes()
        {
            var dctTon = new Dictionary<String, int>();
            dctTon.Add("Unknown", objConstants.TON_UNKNOWN);
            dctTon.Add("International Number", objConstants.TON_INTERNATIONAL);
            dctTon.Add("National Number", objConstants.TON_NATIONAL);
            dctTon.Add("Network Specific Number", objConstants.TON_NETWORK_SPECIFIC);
            dctTon.Add("Subscriber Number", objConstants.TON_SUBSCRIBER_NUMBER);
            dctTon.Add("Alphanumeric Number", objConstants.TON_ALPHANUMERIC);
            dctTon.Add("Abbreviated Number", objConstants.SMPP_TON_ABBREVIATED);

            cbxFromTon.DisplayMember = "Key";
            cbxFromTon.ValueMember = "Value";
            cbxFromTon.DataSource = new BindingSource(dctTon, null);
            cbxToTon.DisplayMember = "Key";
            cbxToTon.ValueMember = "Value";
            cbxToTon.DataSource = new BindingSource(dctTon, null);

            var dctNpi = new Dictionary<String, int>();
            dctNpi.Add("Unknown", objConstants.NPI_UNKNOWN);
            dctNpi.Add("ISDN / Telephone", objConstants.NPI_ISDN);
            dctNpi.Add("Data", objConstants.NPI_DATA);
            dctNpi.Add("Telex", objConstants.NPI_TELEX);
            dctNpi.Add("Land Mobile", objConstants.NPI_LAND_MOBILE);
            dctNpi.Add("National", objConstants.NPI_NATIONAL);
            dctNpi.Add("Ermes", objConstants.NPI_ERMES);
            dctNpi.Add("Internet", objConstants.SMPP_NPI_INTERNET);

            cbxFromNpi.DisplayMember = "Key";
            cbxFromNpi.ValueMember = "Value";
            cbxFromNpi.DataSource = new BindingSource(dctNpi, null);
            cbxToNpi.DisplayMember = "Key";
            cbxToNpi.ValueMember = "Value";
            cbxToNpi.DataSource = new BindingSource(dctNpi, null);

            var dctBodyFormat = new Dictionary<String, int>();
            dctBodyFormat.Add("Text", objConstants.BODYFORMAT_TEXT);
            dctBodyFormat.Add("Hex", objConstants.BODYFORMAT_HEX);

            cbxBodyFormat.DisplayMember = "Key";
            cbxBodyFormat.ValueMember = "Value";
            cbxBodyFormat.DataSource = new BindingSource(dctBodyFormat, null);
        }

        private void btAdd_Click(object sender, EventArgs e)
        {
            frmSmppTlv objFrmTlv = new frmSmppTlv(frmSmppTlv.EFrmType.ADD);
            if (objFrmTlv.ShowDialog() == DialogResult.OK)
            {
                // The Tag number of a TLV is a unique identifier that corresponds with a specific
                // type of optional data that's going to be attached to an SMS message. 
                // As such there can't be two TLV's with the same Tag number attached to a message.
                foreach (ListViewItem li in lvTlvs.Items)
                {
                    TlvInfo objInfo = (TlvInfo)li.Tag;
                    if (objInfo.Tlv.Tag == objFrmTlv.TlvInfo.Tlv.Tag)
                    {   // If we find an existing TLV value with the same tag number
                        // remove it and search no further.
                        lvTlvs.Items.Remove(li);
                    }
                }

                // Add the newly created TLV value to the listview
                ListViewItem item = new ListViewItem(new String[] {
                    objFrmTlv.TlvInfo.TagNumberString, objFrmTlv.TlvInfo.TagTypeString, objFrmTlv.TlvValue });
                item.Tag = new TlvInfo(objFrmTlv.TlvInfo);
                lvTlvs.Items.Insert(0, item);
            }
        }

        private void btEdit_Click(object sender, EventArgs e)
        {
            // Exit if nothing is selected
            if (lvTlvs.SelectedItems.Count <= 0) return;

            // Copy the values in case cancel is selected            
            TlvInfo objEdittedInfo = (TlvInfo)lvTlvs.SelectedItems[0].Tag;
            TlvInfo objOldValues = new TlvInfo(objEdittedInfo);
            
            // Show the edit dialog
            frmSmppTlv objFrmTlv = new frmSmppTlv(frmSmppTlv.EFrmType.EDIT);
            objFrmTlv.TlvInfo = objEdittedInfo;
            if (objFrmTlv.ShowDialog() == DialogResult.Cancel)
            {   // Cancel was selected; reset the properties
                objEdittedInfo.Tlv.ValueAsHexString = objOldValues.Tlv.ValueAsHexString;
                objEdittedInfo.TlvType = objOldValues.TlvType;
            }
            else
            {   // Ok was selected, update the listitem.
                ListViewItem item = lvTlvs.SelectedItems[0];
                item.SubItems[1].Text = objFrmTlv.TlvInfo.TagTypeString;
                item.SubItems[2].Text = objFrmTlv.TlvValue;
            }
        }

        private void btRemove_Click(object sender, EventArgs e)
        {
            if (lvTlvs.SelectedItems.Count <= 0) return;

            lvTlvs.Items.Remove(lvTlvs.SelectedItems[0]);
        }
    }
}
