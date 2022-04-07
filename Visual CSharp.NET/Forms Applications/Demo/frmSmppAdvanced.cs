//-----------------------------------------------------------------------
// <copyright file="frmSmppAdvanced.cs" company="Auron">
//     Copyright (c) Auron Software - www.auronsoftware.com
// </copyright>
// <author>Dennis van de Giessen</author>
//-----------------------------------------------------------------------
namespace Demo
{
    using System;
    using System.Windows.Forms;
    using System.Diagnostics;
    using System.Collections.Generic;

    public partial class frmSmppAdvanced : Form
    {
        private string strSystemType, strAddressRange;
        private int nInterfaceVersion, nAddressTon, nAddressNpi;
        private int nConnectTimeout, nBindTimeout, nEnquireInterval;
        private AxSms.Constants objSmsConstants = new AxSms.Constants();

        #region Properties       

        public string AddressRange
        {
            set { strAddressRange = value; }
            get { return strAddressRange; }
        }

        public string SystemType
        {
            get { return strSystemType; }
        }

        public int AddressNpi
        {
            get { return nAddressNpi; }
        }

        public int AddressTon
        {
            get { return nAddressTon; }
        }

        public int EnquireInterval
        {
            get { return nEnquireInterval; }
        }

        public int ConnectTimeout
        {
            get { return nConnectTimeout; }
        }

        public int BindTimeout
        {
            get { return nBindTimeout; }
        }

        public int InterfaceVersion
        {
            get { return nInterfaceVersion; }
        }
        #endregion        

        public frmSmppAdvanced()
        {
            InitializeComponent();

            objSmsConstants = new AxSms.Constants();
            nAddressNpi = objSmsConstants.NPI_UNKNOWN;
            nAddressTon = objSmsConstants.TON_UNKNOWN;
            nEnquireInterval = 30000;
            nConnectTimeout = 2000;
            nBindTimeout = 5000;
            nInterfaceVersion = objSmsConstants.SMPP_VERSION_34;

            String strDemoGateway = "Auron Demo Gateway";
            lblInfo.Links.Add(lblInfo.Text.IndexOf(strDemoGateway), strDemoGateway.Length, "https://www.auronsoftware.com/sms-messaging-server/gateway/");
        }

        private void frmSmppAdvanced_Load(object sender, EventArgs e)
        {
            fillComboBoxes();

            cbxInterfaceVersion.SelectedValue = nInterfaceVersion;
            txtConnectTimeout.Text = nConnectTimeout.ToString();
            txtBindTimeout.Text = nBindTimeout.ToString();
            txtEnquireInterval.Text = nEnquireInterval.ToString();
            txtSystemType.Text = strSystemType;
            txtAddressRange.Text = strAddressRange;
            cbxAddressTon.SelectedValue = nAddressTon;
            cbxAddressNpi.SelectedValue = nAddressNpi;
        }

        private void btnOK_Click(object sender, EventArgs evt)
        {
            if (int.TryParse(txtConnectTimeout.Text, out nConnectTimeout) == false ||
                int.TryParse(txtBindTimeout.Text, out nBindTimeout) == false ||
                int.TryParse(txtEnquireInterval.Text, out nEnquireInterval) == false)
            {
                MessageBox.Show("The values in 'Connect timeout', 'Bind timeout' and" +
                    "'Enquire interval' need to be integers", "Format error", 
                    MessageBoxButtons.OK, MessageBoxIcon.Warning);

                return;
            }

            nInterfaceVersion = (int)cbxInterfaceVersion.SelectedValue;
            strSystemType = txtSystemType.Text;
            strAddressRange = txtAddressRange.Text;
            nAddressTon = (int)cbxAddressTon.SelectedValue;
            nAddressNpi = (int)cbxAddressNpi.SelectedValue;

            DialogResult = DialogResult.OK;
            this.Close();
        }

        private void btnCancel_Click(object sender, EventArgs e)
        {
            DialogResult = DialogResult.Cancel;
            this.Close();
        }

        private void lblInfo_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
            Process.Start(e.Link.LinkData.ToString());
        }

        private void fillComboBoxes()
        {
            AxSms.Constants objConstants = new AxSms.Constants();

            var dctInterfaceVersion = new Dictionary<String, int>();
            dctInterfaceVersion.Add("3.3", objConstants.SMPP_VERSION_33);
            dctInterfaceVersion.Add("3.4", objConstants.SMPP_VERSION_34);
            dctInterfaceVersion.Add("5.0", objConstants.SMPP_VERSION_50);

            cbxInterfaceVersion.DisplayMember = "Key";
            cbxInterfaceVersion.ValueMember = "Value";
            cbxInterfaceVersion.DataSource = new BindingSource(dctInterfaceVersion, null);

            var dctAddressTon = new Dictionary<String, int>();
            dctAddressTon.Add("Unknown", objConstants.TON_UNKNOWN);
            dctAddressTon.Add("International Number", objConstants.TON_INTERNATIONAL);
            dctAddressTon.Add("National Number", objConstants.TON_NATIONAL);
            dctAddressTon.Add("Network Specific Number", objConstants.TON_NETWORK_SPECIFIC);
            dctAddressTon.Add("Subscriber Number", objConstants.TON_SUBSCRIBER_NUMBER);
            dctAddressTon.Add("Alphanumeric Number", objConstants.TON_ALPHANUMERIC);
            dctAddressTon.Add("Abbreviated Number", objConstants.SMPP_TON_ABBREVIATED);

            cbxAddressTon.DisplayMember = "Key";
            cbxAddressTon.ValueMember = "Value";
            cbxAddressTon.DataSource = new BindingSource(dctAddressTon, null);

            var dctAddressNpi = new Dictionary<String, int>();
            dctAddressNpi.Add("Unknown", objConstants.NPI_UNKNOWN);
            dctAddressNpi.Add("ISDN / Telephone", objConstants.NPI_ISDN);
            dctAddressNpi.Add("Data", objConstants.NPI_DATA);
            dctAddressNpi.Add("Telex", objConstants.NPI_TELEX);
            dctAddressNpi.Add("Land Mobile", objConstants.NPI_LAND_MOBILE);
            dctAddressNpi.Add("National", objConstants.NPI_NATIONAL);
            dctAddressNpi.Add("Ermes", objConstants.NPI_ERMES);
            dctAddressNpi.Add("Internet", objConstants.SMPP_NPI_INTERNET);

            cbxAddressNpi.DisplayMember = "Key";
            cbxAddressNpi.ValueMember = "Value";
            cbxAddressNpi.DataSource = new BindingSource(dctAddressNpi, null);
        }
    }
}
