//-----------------------------------------------------------------------
// <copyright file="frmussd.aspx.cs" company="Auron">
//     Copyright (c) Auron Software - www.auronsoftware.com
// </copyright>
// <author>Dennis van de Giessen</author>
//-----------------------------------------------------------------------
namespace CScharpDemo
{
    using System;
    using System.IO;
    using AxSms;

	public partial class frmussd : System.Web.UI.Page
	{
        private AxSms.Gsm objGsm = new AxSms.Gsm();
        private AxSms.Constants objSmsConstants = new AxSms.Constants();   
		
		protected void Page_Load(object sender, EventArgs e)
		{
			if (!IsPostBack)
			{
				string strDevice = string.Empty;
                string strPort = string.Empty;
				
                lblInfo.Text = "Module [" + objGsm.Module + "]; Build [" + objGsm.Build + "]";
				
				objGsm.LogFile = Path.GetTempPath() + "Ussd.log";
                txtLogFile.Text = objGsm.LogFile;
				// Windows default: 'C:\Users\%USERNAME%\AppData\Local\Temp\Auron.Ussd.log'
				
				ddlDevices.Items.Clear();
				strDevice = objGsm.FindFirstDevice();
				
				while (objGsm.LastError == 0)
				{
					ddlDevices.Items.Add(strDevice);
					strDevice = objGsm.FindNextDevice();
				}

                // Add COM ports.
                // Gets first COM port            
                strPort = objGsm.FindFirstPort();
                while (objGsm.LastError == 0)
                {
                    ddlDevices.Items.Add(strPort);
                    // Gets next COM port
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
		}
		
		protected void btnSend_Click(object sender, EventArgs e)
		{
			string strResponse = string.Empty;
			string strCommand = string.Empty;
			string[] strFields;
			
			strCommand = string.Format("AT+CUSD=1,\"{0}\",15", txtCommand.Text);
			
			string strName = ddlDevices.Text;
			string strPincode = txtPincode.Text;	
			
			int iDeviceSpeed;
			if (!int.TryParse(ddlDeviceSpeed.Text, out iDeviceSpeed))
			{
				iDeviceSpeed = 0;
			}
			
			objGsm.Open(strName, strPincode, iDeviceSpeed);

            if (objGsm.LastError != 0)
            {
                UpdateResult(objGsm.LastError);
                return;
            }
			
			objGsm.SendCommand(strCommand);

            if (objGsm.LastError != 0)
            {
                UpdateResult(objGsm.LastError);
                return;
            }
			
			strResponse = objGsm.ReadResponse(10000);

            if (objGsm.LastError != 0)
            {
                UpdateResult(objGsm.LastError);
                return;
            }
			
			if (strResponse.Contains("OK")) // Response should be OK
			{
				objGsm.SendCommand(string.Empty);
				strResponse = objGsm.ReadResponse(10000);
				
				if (strResponse.Contains("+CUSD:"))
				{
					strFields = strResponse.Split(char.Parse("\""));
					
					if (strFields.Length > 1)
					{
						strResponse = strFields[1];
					}
					else
					{
						strResponse = strFields[0];
					}
				}
			}
			
			if (objGsm.LastError != 0)
			{
				txtResponse.Text = objGsm.GetErrorDescription(objGsm.LastError);
			}
			else
			{
				txtResponse.Text = strResponse;
			}
			
			objGsm.Close();
			UpdateResult(objGsm.LastError);
		}
		
		private void UpdateResult(int nResult)
		{
			txtResult.Text = string.Format("{0}: {1}", nResult, objGsm.GetErrorDescription(objGsm.LastError));
		}
	}
}
