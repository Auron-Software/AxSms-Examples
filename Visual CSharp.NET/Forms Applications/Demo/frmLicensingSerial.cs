//-----------------------------------------------------------------------
// <copyright file="frmLicensingSerial.cs" company="Auron">
//     Copyright (c) Auron Software - www.auronsoftware.com
// </copyright>
// <author>Dennis van de Giessen</author>
//-----------------------------------------------------------------------
namespace Demo
{
    using System;
    using System.Windows.Forms;

    public partial class frmLicensingSerial : Form
    {
        private string strSerialKey;

        #region Properties
        public string SerialKey
        {
            get { return strSerialKey; }
            set { strSerialKey = value; }
        }
        #endregion

        public frmLicensingSerial()
        {
            InitializeComponent();
        }

        private void btnOK_Click(object sender, EventArgs e)
        {
            strSerialKey = txtSerialKey.Text;
            DialogResult = DialogResult.OK;
            this.Close();
        }

        private void btnCancel_Click(object sender, EventArgs e)
        {
            this.DialogResult = DialogResult.Cancel;
            this.Close();
        }

        private void frmLicensingSerial_Load(object sender, EventArgs e)
        {
            txtSerialKey.Text = strSerialKey;
        }
    }
}
