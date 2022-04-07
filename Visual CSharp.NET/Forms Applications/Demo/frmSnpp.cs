//-----------------------------------------------------------------------
// <copyright file="frmSnpp.cs" company="Auron">
//     Copyright (c) Auron Software - www.auronsoftware.com
// </copyright>
// <author>Dennis van de Giessen</author>
//-----------------------------------------------------------------------
namespace Demo
{
    using System;
    using System.Diagnostics;
    using System.IO;
    using System.Windows.Forms;
    using AxSms;

    public partial class frmSnpp : Form
    {
        private AxSms.Snpp objSnpp;

        public frmSnpp()
        {
            InitializeComponent();

            objSnpp = new AxSms.Snpp();
            txtLogFile.Text = Path.GetTempPath() + "Snpp.log";
            objSnpp.LogFile = txtLogFile.Text;
        }

        private void llblUrlSnppProviders_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
            Process.Start("https://www.auronsoftware.com/products/sms-component/snpplist/");
        }

        private void frmSnpp_Load(object sender, EventArgs e)
        {
            cbxServers.Items.Clear();
            cbxServers.Items.Add("snpp.myairmail.com");
            cbxServers.Items.Add("snpp.pageallcom.com");
            cbxServers.Items.Add("snpp.americanmessaging.net");
            cbxServers.Items.Add("snpp.attws.net");
            cbxServers.Items.Add("pmcl.net");
            cbxServers.Items.Add("page.contactwireless.com");
            cbxServers.Items.Add("www.webpager.us");
            cbxServers.Items.Add("epage.graylink.com");
            cbxServers.Items.Add("alphapage.cc");
            cbxServers.Items.Add("mail2.illinoissignal.net");
            cbxServers.Items.Add("ipnpaging.com");
            cbxServers.Items.Add("snpp.lauttamus.com");
            cbxServers.Items.Add("snpp.mobilcom.net");
            cbxServers.Items.Add("pecos.nextel.com");
            cbxServers.Items.Add("snpp.nextel.com");
            cbxServers.Items.Add("snpp.ucom.com");
            cbxServers.Items.Add("mail.pagerpeople.com");
            cbxServers.Items.Add("snpp.sbc.com");
            cbxServers.Items.Add("snpp.acswireless.com");
            cbxServers.SelectedIndex = 1;

            //Display SMS Component Info
            lblInfo.Text = String.Format("Auron SMS Component {0}; Build: {1}; Module: {2}", objSnpp.Version, objSnpp.Build, objSnpp.Module);
            txtPort.Text = "444";
 
            txtMessage.Text = "Hello World!";
        }

        private void btnSend_Click(object sender, EventArgs e)
        {
            int nPort = 0;

            objSnpp.Server = cbxServers.Text;

            objSnpp.ServerPort = int.TryParse( txtPort.Text.ToString(), out nPort ) ? nPort : 444;
            objSnpp.ServerTimeout = 2000;

            // Set Cursor
            Cursor.Current = Cursors.WaitCursor;

      
            // Sends the Pagermessage thrugh SNPP
            objSnpp.Send(txtPagerID.Text, txtMessage.Text);
            UpdateResult(objSnpp.LastError, objSnpp.ProviderResponse);

            // Reset Cursor
            Cursor.Current = Cursors.Default;
        }

        private void UpdateResult(int nResult, string strLastResponse)
        {
            txtResult.Text = nResult.ToString() + ": " + objSnpp.GetErrorDescription(nResult);
            txtLastResponse.Text = strLastResponse;
        }

        private void btnView_Click(object sender, EventArgs e)
        {
            if (File.Exists(txtLogFile.Text))
            {
                Process.Start(txtLogFile.Text);
            }
        }
    }
}