//-----------------------------------------------------------------------
// <copyright file="frmHttp.cs" company="Auron">
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
    using Microsoft.Win32;

    public partial class frmHttp : Form
    {
        private Http objHttp;
        private AxSms.Message objSmsMessage;
        private AxSms.Constants objSmsConstants;

        public frmHttp()
        {
            InitializeComponent();
            objHttp = new Http();
            objSmsMessage = new AxSms.Message();
            objSmsConstants = new AxSms.Constants();
            txtLogFile.Text = string.Format("{0}{1}", Path.GetTempPath(), "Http.log");
            objHttp.LogFile = txtLogFile.Text;
        }

        private void frmHttp_Load(object sender, EventArgs e)
        {
            AxSms.DemoAccount objDemoAccount = new AxSms.DemoAccount();
            string strUsername = objDemoAccount.SystemId;
            string strPassword = objDemoAccount.Password;

            //Display SMS Component Info
            lblInfo.Text = String.Format("Auron SMS Component {0}; Build: {1}; Module: {2}", objHttp.Version, objHttp.Build, objHttp.Module);            

            txtURL.Text = string.Format("gateway.auronsoftware.com:8080/sendsms/default.asp?username={0}&password={1}&text={2}&to={3}",
                strUsername,
                strPassword,
                objSmsConstants.HTTP_PLACEHOLDER_BODY,
                objSmsConstants.HTTP_PLACEHOLDER_TOADDRESS);

            txtRecipient.Text = string.Empty;

            cbxMessageType.Items.Clear();
            cbxMessageType.Items.Add("Text");
            cbxMessageType.Items.Add("Unicode");
            cbxMessageType.SelectedIndex = 0;

            txtMessage.Text = "Hello, world!";
        }

        private void btnSend_Click(object sender, EventArgs e)
        {
            Cursor.Current = Cursors.WaitCursor;

            objSmsMessage.Clear();

            if (cbxMessageType.SelectedIndex == 1)
            {
            objSmsMessage.DataCoding |= objSmsConstants.DATACODING_UNICODE;
            }

            objSmsMessage.Body = txtMessage.Text;
            objSmsMessage.ToAddress = txtRecipient.Text;

            objHttp.url = txtURL.Text;    

     
            // Sends the SMS Message through HTTP
            objHttp.SendSms(objSmsMessage, objSmsConstants.MULTIPART_ACCEPT);
            UpdateResult(objHttp.LastError, objHttp.LastResponseCode.ToString());
            Cursor.Current = Cursors.Default;
        }

        private void UpdateResult(int nResult, string strLastResponse)
        {
            txtResult.Text = nResult.ToString() + ": " + objHttp.GetErrorDescription(nResult);
            txtLastResponse.Text = strLastResponse;
        }

        private void btnView_Click(object sender, EventArgs e)
        {
            if (File.Exists(txtLogFile.Text))
            {
                Process.Start(txtLogFile.Text);
            }
        }

        private void llblUrlRecipientFormat_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
            Process.Start("https://www.auronsoftware.com/knowledge-base/#sms-component");
        }
    }
}
