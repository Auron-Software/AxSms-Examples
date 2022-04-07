//-----------------------------------------------------------------------
// <copyright file="frmLicensing.cs" company="Auron">
//     Copyright (c) Auron Software - www.auronsoftware.com
// </copyright>
// <author>Dennis van de Giessen</author>
//-----------------------------------------------------------------------
namespace Demo
{
    using System;
    using System.Diagnostics;
    using System.Windows.Forms;
    using AxSms;
    using Microsoft.Win32;

    public partial class frmLicensing : Form
    {
        private frmLicensingSerial objFrmLicensingSerial;
        private Gsm objGsm;

        public frmLicensing()
        {
            InitializeComponent();

            objFrmLicensingSerial = new frmLicensingSerial();
            objGsm = new Gsm();
        }

        private void llblUrlSupport_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
            Process.Start("https://www.auronsoftware.com/knowledge-base/#sms-component");
        }

        private void llblMailSupport_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
            Process.Start("mailto:support@auronsoftware.com");
        }

        private void llblUrlOrder_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
            Process.Start("https://www.auronsoftware.com/sales/order#ProductCode=AX004");
        }

        private void llblUrlSales_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
            Process.Start("https://www.auronsoftware.com/sales");
        }

        private void btnClose_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void btnRegister_Click(object sender, EventArgs e)
        {
            string strBuffer = string.Empty;

            objFrmLicensingSerial.SerialKey = objGsm.LicenseKey;

            if (objFrmLicensingSerial.ShowDialog() == DialogResult.OK)
            {
                string strOldKey = objGsm.LicenseKey;

                objGsm.LicenseKey = objFrmLicensingSerial.SerialKey;
                objGsm.SaveLicenseKey();
                if (objGsm.LastError != 0)
                {
                    MessageBox.Show(string.Format("SaveLicenseKey failed, error {0} ({1}).", objGsm.LastError.ToString(), objGsm.GetErrorDescription(objGsm.LastError)), this.Text, MessageBoxButtons.OK, MessageBoxIcon.Error);
                    objGsm.LicenseKey = strOldKey;
                }

                UpdateLicensingInfo();
            }
        }

        private void frmLicensing_Load(object sender, EventArgs e)
        {
            lblVersion.Text = string.Format("{0}; Build {1}; Module {2}", objGsm.Version, objGsm.Build, objGsm.Module);
            UpdateLicensingInfo();
        }

        private void UpdateLicensingInfo()
        {
            txtLicense.Text = string.Format("{0} ({1})", objGsm.LicenseStatus, objGsm.LicenseKey != "" ? objGsm.LicenseKey : "no license key");
        }
    }
}
