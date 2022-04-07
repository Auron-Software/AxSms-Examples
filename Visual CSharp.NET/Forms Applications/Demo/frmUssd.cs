//-----------------------------------------------------------------------
// <copyright file="frmUssd.cs" company="Auron">
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

    public partial class frmUssd : Form
    {
        private AxSms.Gsm objGsm;
        private AxSms.Constants objSmsConstants;

        public frmUssd()
        {
            InitializeComponent();

            objGsm = new AxSms.Gsm();
            objSmsConstants = new AxSms.Constants();
            txtLogFile.Text = Path.GetTempPath() + "Ussd.log";
            objGsm.LogFile = txtLogFile.Text; 
        }

        private void frmUssd_Load(object sender, EventArgs e)
        {
            string strDevice, strPort;
            
            //Display SMS Component Info
            lblInfo.Text = String.Format("Auron SMS Component {0}; Build: {1}; Module: {2}", objGsm.Version, objGsm.Build, objGsm.Module);

            // Fill devices Combo
            cbxDevices.Items.Clear();

            // Gets first TAPI device
            strDevice = objGsm.FindFirstDevice();
            while (objGsm.LastError == 0)
            {
                cbxDevices.Items.Add(strDevice);
                // Gets next TAPI device.
                strDevice = objGsm.FindNextDevice();
            }

            // Add COM ports.
            // Gets first COM port            
            strPort = objGsm.FindFirstPort();
            while (objGsm.LastError == 0)
            {
                cbxDevices.Items.Add(strPort);
                // Gets next COM port
                strPort = objGsm.FindNextPort();
            }

            if (cbxDevices.Items.Count > 0)
            {
                cbxDevices.SelectedIndex = 0;
            }
            else
            {
                // Remove previous text from cbx (happens when a user reopens this forms 
                // and removed all devices and COM ports)
                cbxDevices.Text = string.Empty;
            }

            //Fill deviceSpeed combo
            cbxDeviceSpeed.Items.Clear();
            cbxDeviceSpeed.Items.Add("Default");
            cbxDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_110);
            cbxDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_300);
            cbxDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_600);
            cbxDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_1200);
            cbxDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_2400);
            cbxDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_4800);
            cbxDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_9600);
            cbxDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_14400);
            cbxDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_19200);
            cbxDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_38400);
            cbxDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_56000);
            cbxDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_57600);
            cbxDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_64000);
            cbxDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_115200);
            cbxDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_128000);
            cbxDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_230400);
            cbxDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_256000);
            cbxDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_460800);
            cbxDeviceSpeed.Items.Add(objSmsConstants.GSM_BAUDRATE_921600);
            cbxDeviceSpeed.SelectedIndex = 0;                       
        }

        private void btnView_Click(object sender, EventArgs e)
        {
            if (File.Exists(txtLogFile.Text))
            {
                Process.Start(txtLogFile.Text);
            }
        }       

        private void UpdateResult(int nResult)
        {
            txtResult.Text = string.Format("{0}: {1}", nResult, objGsm.GetErrorDescription(objGsm.LastError));
        }

        private void btnSend_Click(object sender, EventArgs e)
        {
            string strResponse = string.Empty;
            string strCommand = string.Empty;
            string[] strFields;

            this.Cursor = Cursors.WaitCursor;

            strCommand = string.Format("AT+CUSD=1,\"{0}\",15", txtCommand.Text);

            string strName = cbxDevices.Text;

            int iDeviceSpeed;
            if (!int.TryParse(cbxDeviceSpeed.Text, out iDeviceSpeed))
            {
                iDeviceSpeed = 0;
            }

            objGsm.Open(strName, txtPincode.Text, iDeviceSpeed);
            UpdateResult(objGsm.LastError);
            if (objGsm.LastError == 36101)
            {
                MessageBox.Show("PIN Required.", this.Text, MessageBoxButtons.OK, MessageBoxIcon.Error);
            }

            // Sends the USSD Command though the selected GSM Modem
            if (objGsm.LastError == 0)
            {
                objGsm.SendCommand(strCommand);
            }

            // Reads the response from the GSM Modem
            if (objGsm.LastError == 0)
            {
                strResponse = objGsm.ReadResponse(10000);
            }

            if (objGsm.LastError == 0)
            {
                if (strResponse.Contains("OK")) //Response should be OK
                {
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
            }

            txtResponse.Text = strResponse;
            UpdateResult(objGsm.LastError);
            objGsm.Close();            
            this.Cursor = Cursors.Default;
        }
    }
}