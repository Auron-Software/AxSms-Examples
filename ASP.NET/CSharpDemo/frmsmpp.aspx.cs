//-----------------------------------------------------------------------
// <copyright file="frmsmpp.aspx.cs" company="Auron">
//     Copyright (c) Auron Software - www.auronsoftware.com
// </copyright>
// <author>Dennis van de Giessen</author>
//-----------------------------------------------------------------------
namespace CScharpDemo
{
    using System;
    using System.IO;
    using System.Threading;
    using AxSms;
    using Microsoft.Win32;

	public partial class frmsmpp : System.Web.UI.Page
	{
        private AxSms.Smpp objSmpp = new AxSms.Smpp();
        private AxSms.Message objSmsMessage = new AxSms.Message();
        private AxSms.Constants objSmsConstants = new AxSms.Constants();
		
		protected void Page_Load(object sender, EventArgs e)
		{
            if (IsPostBack) return;

            lblInfo.Text = "Module [" + objSmpp.Module + "]; Build [" + objSmpp.Build + "]";
			
			string strSystemID = string.Empty;
			string strPassword = string.Empty;
			
			objSmpp.LogFile = Path.GetTempPath() + "Smpp.log";
            txtLogFile.Text = objSmpp.LogFile;
			//Windows default: 'C:\Users\%USERNAME%\AppData\Local\Temp\Auron.Smpp.log'

            AxSms.DemoAccount objDemoAccount = new AxSms.DemoAccount();
            txtSystemID.Text = objDemoAccount.SystemId;
            txtPassword.Text = objDemoAccount.Password;
		}	

        protected void btnSend_Click(object sender, EventArgs e)
        {
            objSmpp.Connect(txtServer.Text, Convert.ToInt32(txtServerPort.Text), 5000, false);
            if (objSmpp.LastError != 0)
            {
                UpdateResult(objSmpp.LastError);
                return;
            }

            int iSystemMode = objSmsConstants.SMPP_BIND_TRANSCEIVER;
            int iVersion = objSmsConstants.SMPP_VERSION_34;
            objSmpp.Bind(iSystemMode, txtSystemID.Text, txtPassword.Text, txtSystemType.Text, iVersion, 0, 0, string.Empty, 5000);

            if (objSmpp.LastError != 0)
            {
                UpdateResult(objSmpp.LastError);
                return;
            }

            objSmsMessage.Clear();
            objSmsMessage.ToAddress = txtToAddress.Text;
            objSmsMessage.Body = txtMessage.Text;

            if (cbxUnicode.Checked)
                objSmsMessage.DataCoding = objSmsConstants.DATACODING_UNICODE;
           
            objSmpp.SubmitSms(objSmsMessage, objSmsConstants.MULTIPART_ACCEPT);
            UpdateResult(objSmpp.LastError);
            if (objSmpp.LastError != 0) return;

            objSmpp.WaitForSmsUpdate(3000);
            objSmsMessage = objSmpp.FetchSmsUpdate();
            if (objSmpp.LastError != 0)
            {
                UpdateResult(objSmpp.LastError);
                return;
            }

            // SMPP command status codes are provider specific. The Auron SMPP Demo Gateway uses command status 1025
            // to communicate there are no more credits left for this account on the Auron SMPP Demo Gateway.
            if (objSmsMessage.SmppCommandStatus != 0)
            {
                if (objSmsMessage.SmppCommandStatus == 1025 && txtServer.Text == "gateway.auronsoftware.com")
                    txtResult.Text = "Message not sent. Reason: No credits left.";
                else
                    txtResult.Text = "Message not sent. Reason: unspecified error [" + objSmsMessage.SmppCommandStatus + "].";
            }
        }
		
		private void UpdateResult(int nResult)
		{
			txtResult.Text = nResult.ToString() + ": " + objSmpp.GetErrorDescription(nResult);
		}
	}
}
