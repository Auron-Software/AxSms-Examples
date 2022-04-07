//-----------------------------------------------------------------------
// <copyright file="frmgsm.aspx.cs" company="Auron">
//     Copyright (c) Auron Software - www.auronsoftware.com
// </copyright>
// <author>Dennis van de Giessen</author>
//-----------------------------------------------------------------------
namespace CScharpDemo
{
    using System;
    using System.IO;
    using AxSms;

	public partial class frmgsm : System.Web.UI.Page
	{
        private AxSms.Gsm objGsm = new AxSms.Gsm();
        private AxSms.Constants objSmsConstants = new AxSms.Constants();		   

		protected void Page_Load(object sender, EventArgs e)
		{
            if (IsPostBack) return;

			string strDevice = string.Empty;
            string strPort = string.Empty;
            lblInfo.Text = "Module [" + objGsm.Module + "]; Build [" + objGsm.Build + "]";
			
			objGsm.LogFile = Path.GetTempPath() + "Gsm.log";
            txtLogFile.Text = objGsm.LogFile;
			//Windows default: 'C:\Users\%USERNAME%\AppData\Local\Temp\Auron.Gsm.log'
			
			ddlDevices.Items.Clear();
			strDevice = objGsm.FindFirstDevice();
			
			while (objGsm.LastError == 0)
			{
				ddlDevices.Items.Add(strDevice);
				strDevice = objGsm.FindNextDevice();
			}

            strPort = objGsm.FindFirstPort();
            while (objGsm.LastError == 0)
            {
                ddlDevices.Items.Add(strPort);
                strPort = objGsm.FindNextPort();
            }

            if (ddlDevices.Items.Count > 0)
            {
                ddlDevices.SelectedIndex = 0;
            }
			
			ddlDeviceSpeed.Items.Clear();
			ddlDeviceSpeed.Items.Add("Default");
			ddlDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_110.ToString());
			ddlDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_300.ToString());
			ddlDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_600.ToString());
			ddlDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_1200.ToString());
			ddlDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_2400.ToString());
			ddlDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_4800.ToString());
			ddlDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_9600.ToString());
			ddlDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_14400.ToString());
			ddlDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_19200.ToString());
			ddlDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_38400.ToString());
			ddlDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_56000.ToString());
			ddlDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_57600.ToString());
			ddlDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_64000.ToString());
			ddlDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_115200.ToString());
			ddlDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_128000.ToString());
			ddlDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_230400.ToString());
			ddlDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_256000.ToString());
			ddlDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_460800.ToString());
			ddlDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_921600.ToString());
			ddlDeviceSpeed.SelectedIndex = 0;
		}

		protected void btnSendMessage_Click(object sender, EventArgs e)
		{
			string strMessageReference;
			AxSms.Message objSmsMessage = new AxSms.Message();
			
			string strName = ddlDevices.Text;
			string strPincode = txtPincode.Text;
			
			int iDeviceSpeed;
			if (!int.TryParse(ddlDeviceSpeed.Text, out iDeviceSpeed))
                iDeviceSpeed = objSmsConstants.GSM_BAUDRATE_DEFAULT;
			
			objGsm.Clear();
			objGsm.LogFile = txtResult.Text;
			objGsm.Open(strName, strPincode, iDeviceSpeed);
			
			if (objGsm.LastError != 0)
			{
				UpdateResult(objGsm.LastError);
				objGsm.Close();
				return;
			}
			
			//Message Settings
			objSmsMessage.Clear();
			objSmsMessage.ToAddress = txtToAddress.Text;
			objSmsMessage.Body = txtBody.Text;
			
			if (cbxUnicode.Checked)
				objSmsMessage.DataCoding = objSmsConstants.DATACODING_UNICODE;
			
			// Send the message !			
			objGsm.SendSms(objSmsMessage, objSmsConstants.MULTIPART_ACCEPT, 10000);			
			strMessageReference = objSmsMessage.Reference;
			
			UpdateResult(objGsm.LastError);
			
			objGsm.Close();
		}
		
		private void UpdateResult(int nResult)
		{
			txtResult.Text = string.Format("{0}: {1}", nResult, objGsm.GetErrorDescription(objGsm.LastError));
		}
		
	}
}
