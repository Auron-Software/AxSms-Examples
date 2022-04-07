using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Text;
using System.Windows.Forms;

namespace Demo
{
    public partial class frmGsmAdvanced : Form
    {
        private AxSms.Constants objConstants;
        private bool bRequestDeliveryReport = true;
        private bool bHasUdh = false;
        private int nToTon = 0;
        private int nToNpi = 0;
        private int nBodyFormat = 0;

        #region Properties
        public bool RequestDeliveryReport
        {
            get { return bRequestDeliveryReport; }
        }
        public bool HasUdh
        {
            get { return bHasUdh; }
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

        public frmGsmAdvanced()
        {
            InitializeComponent();

            objConstants = new AxSms.Constants();

            nToTon = objConstants.TON_UNKNOWN;
            nToNpi = objConstants.NPI_UNKNOWN;
            bHasUdh = false;
            bRequestDeliveryReport = true;
        }

        private void btnOK_Click(object sender, EventArgs e)
        {
            DialogResult = DialogResult.OK;
            this.Close();
        }

        private void btnCancel_Click(object sender, EventArgs e)
        {
            DialogResult = DialogResult.Cancel;
            this.Close();
        }

        private void frmGsmAdvanced_Load(object sender, EventArgs e)
        {
            fillComboBoxes();

            cbxToTon.SelectedValue = nToTon;
            cbxToNpi.SelectedValue = nToNpi;
            cbRequestDeliveryReport.Checked = bRequestDeliveryReport;
            cbHasUdh.Checked = bHasUdh;
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
    }
}
