//-----------------------------------------------------------------------
// <copyright file="frmGsm.cs" company="Auron">
//     Copyright (c) Auron Software - www.auronsoftware.com
// </copyright>
// <author>Dennis van de Giessen</author>
//-----------------------------------------------------------------------
namespace Demo
{
    using System;
    using System.Collections.Generic;
    using System.Diagnostics;
    using System.IO;
    using System.Windows.Forms;
    using AxSms;

    public partial class frmGsm : Form
    {
        private AxSms.Gsm objGsm;
        private AxSms.Constants objSmsConstants;

        private frmGsmAdvanced objFrmSendAdvanced;
        private frmGsmReceiveOptions objFrmGsmReceiveOptions;

        public frmGsm()
        {
            InitializeComponent();

            objGsm = new AxSms.Gsm();
            objSmsConstants = new AxSms.Constants();

            // Display SMS Component Info
            lblInfo.Text = String.Format("Auron SMS Component {0}; Build: {1}; Module: {2}", 
                objGsm.Version, objGsm.Build, objGsm.Module);

            objFrmGsmReceiveOptions = new frmGsmReceiveOptions();
            objFrmSendAdvanced = new frmGsmAdvanced();
        }

        private void frmGsm_Load(object sender, EventArgs e)
        {
            fillComboBoxes();
            setupListBoxes();

            if (cbxDevices.Items.Count > 0)
                cbxDevices.SelectedIndex = 0;
            cbxDeviceSpeed.SelectedValue = objSmsConstants.GSM_BAUDRATE_DEFAULT;
            cbxDataCoding.SelectedValue = objSmsConstants.DATACODING_DEFAULT;

            txtLogFile.Text = Path.GetTempPath() + "Gsm.log";
            txtBody.Text = "Hello World!";
        }

        private void btnSend_Click(object sender, EventArgs e)
        {
            // Set the wait cursor. Sending an SMS message can take a couple of seconds depending
            // on the provider and the GSM device used.
            Cursor.Current = Cursors.WaitCursor;

            // Set the log file to a file path. This will generate a logfile which contains all
            // communication with the GSM modem. This is very useful for troubleshooting.
            objGsm.LogFile = txtLogFile.Text;

            // Open the GSM device. This can take a couple of seconds. When the device is opened
            // the AxSms.Gsm component will enter the PIN and do some basic initialization. By
            // default the component will wait until the GSM device is registered on a GSM network.      
            if (txtIP.Text != "")
            {
                if (txtPort.Text == "")
                {
                    MessageBox.Show("Port number required. Should be 2001 on Digi-one SP unless differently configured.", 
                      "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
                    return;
                }                

                // If an IP adress or hostname was entered we assume it's an IP GSM device. Just combine port and IP.
                // In case of an IPv6 IP it needs to be in brackets.
                string sDevice = txtIP.Text.Contains(":") ? "[" + txtIP.Text + "]": txtIP.Text;
                sDevice += ":" + txtPort.Text;
                objGsm.Open(sDevice, txtPincode.Text);
            } else
            {
                objGsm.Open(cbxDevices.SelectedItem.ToString(), txtPincode.Text,
                    (int)(cbxDeviceSpeed.SelectedValue));     
            }

            // If there was a problem opening the GSM device there's no use in trying to continue.
            if (UpdateResult(objGsm.LastError) != 0) return;

            // Create a new SMS message and configure it for sending.
            AxSms.Message objSms = new AxSms.Message();
            objSms.ToAddress = txtToAddress.Text;
            objSms.DataCoding = (int)cbxDataCoding.SelectedValue;
            objSms.Body = txtBody.Text;
           
            // Set the SMS properties from the advanced dialog            
            objSms.BodyFormat = objFrmSendAdvanced.BodyFormat;

            objSms.ToAddressTON = objFrmSendAdvanced.ToTon;
            objSms.ToAddressNPI = objFrmSendAdvanced.ToNpi;

            objSms.RequestDeliveryReport = objFrmSendAdvanced.RequestDeliveryReport;
            objSms.HasUdh = objFrmSendAdvanced.HasUdh;

            // Actually send out the SMS message. Multipart messages will be accepted
            // and the timeout is set to 0 ms. This forces the Gsm component to use the
            // default send timeout which is set to 15000 ms.
            // 
            // This function returns the SMS message reference obtained from the GSM device
            // The message reference is used to match an SMS message with a delivery report
            // if a delivery report was requested.
            String strReference = objGsm.SendSms(objSms, objSmsConstants.MULTIPART_ACCEPT, 0);

            // There was a problem sending the SMS message return early and don't add the 
            // message to the listbox.
            if (UpdateResult(objGsm.LastError) != 0)
            {   // Close the GSM object.
                objGsm.Close();
                return;
            }

            // Create a new listview item and add it to the sent sms messages.
            ListViewItem item = new ListViewItem(new String[]
            {
                "n/a", strReference, objSms.ToAddress, "SENT", objSms.Body
            });

            // Tag the listview item with the message reference, that way we can easily find
            // the message again if we receive a delivery report for it.
            item.Tag = strReference;
            lvSentMessages.Items.Add(item);

            // It's recommended to close and re-open the GSM object between sending or receiving
            // batches of messages. This forces the Gsm component to re-initialize the device.
            // re-initialization may be necessary if the device could have been disconnected or
            // powercycled (e.g. maybe the device was hot-swapped or the SIM was swapped).
            objGsm.Close();
        }

        private void btnReceive_Click(object sender, EventArgs e)
        {
            // Clear the received messages listbox and set a wait cursor.
            // Depending on the device settings and the GSM modem receiving could
            // take a couple of seconds.
            Cursor.Current = Cursors.WaitCursor;
            lvReceivedMessages.Items.Clear();

            // Set the log file to a file path. This will generate a logfile which contains all
            // communication with the GSM modem. This is very useful for troubleshooting.
            objGsm.LogFile = txtLogFile.Text;

            // Open the GSM device. This can take a couple of seconds. When the device is opened
            // the AxSms.Gsm component will enter the PIN and do some basic initialization. By
            // default the component will wait until the GSM device is registered on a GSM network.
            if (txtIP.Text != "")
            {
                if (txtPort.Text == "")
                {
                    MessageBox.Show("Port number required. Should be 2001 on Digi-one SP unless differently configured.", 
                      "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
                    return;
                }                

                // If an IP adress or hostname was entered we assume it's an IP GSM device. Just combine port and IP.
                // In case of an IPv6 IP it needs to be in brackets.
                string sDevice = txtIP.Text.Contains(":") ? "[" + txtIP.Text + "]": txtIP.Text;
                sDevice += ":" + txtPort.Text;
                objGsm.Open(sDevice, txtPincode.Text);
            } else
            {
                string sDevice = txtIP.Text.Contains(":") ? "[" + txtIP.Text + "]": txtIP.Text;
                sDevice += txtPort.Text;
                objGsm.Open(cbxDevices.SelectedItem.ToString(), txtPincode.Text,
                    (int)(cbxDeviceSpeed.SelectedValue));     
            }

            // If there was a problem opening the GSM device there's no using in trying to continue.
            if (UpdateResult(objGsm.LastError) != 0) return;

            // Receive SMS messages as well as delivery reports from the GSM device. This operation could
            // take a couple of seconds. The timeout parameters is set 0 ms. This will enable the default
            // timeout of 15000 ms.
            objGsm.Receive(objFrmGsmReceiveOptions.MessageStatus,
                objFrmGsmReceiveOptions.DeleteAfterReceive, objFrmGsmReceiveOptions.MessageStorage, 0);

            // If there was a problem during receive then it's no use to continue.
            if (UpdateResult(objGsm.LastError) != 0)
            {
                objGsm.Close();
                return;
            }

            // Retrieve all of the SMS message. The SMS messages as well as the delivery reports have already
            // been transported into an internal buffer in the AxSms.Gsm object by calling 'Receive'. With
            // this loop we are retrieving the SMS messages from this internal buffer into our application.
            AxSms.Message objSms = objGsm.GetFirstSms();
            while (objGsm.LastError == 0)
            {   // Create a new listbox item for every received message
                lvReceivedMessages.Items.Add(new ListViewItem(new String[] 
                {
                    objSms.ReceiveTime, objSms.FromAddress, 
                    objSms.GsmMemoryLocation, objSms.Body
                }));
                objSms = objGsm.GetNextSms();
            }

            // Retrieve the delivery reports. If a delivery report can be matches with one of the sent SMS
            // messages we'll update the status for that message.
            AxSms.GsmDeliveryReport objReport = objGsm.GetFirstReport();
            while (objGsm.LastError == 0)
            {   // For every delivery report, iterate over all sent message and test
                // if the message references match.
                foreach (ListViewItem item in lvSentMessages.Items)
                {   // If the message reference match then we know more about the status
                    // of this message, so update it accordingly.
                    if ((String)item.Tag == objReport.Reference)
                    {
                        item.SubItems[3].Text = objSmsConstants.GsmStatusToString(objReport.Status);
                        break;  // Break from the foreach loop since only one SMS message will match.
                    }
                }
                objReport = objGsm.GetNextReport();
            }

            // It's recommended to close and re-open the GSM object between sending or receiving
            // batches of messages. This forces the Gsm component to re-initialize the device.
            // re-initialization may be necessary if the device could have been disconnected or
            // powercycled (e.g. maybe the device was hot-swapped or the SIM was swapped).
            objGsm.Close();
        }

        private void UpdateControls()
        {
            String strDevice = cbxDevices.Items.Count > 0 ? cbxDevices.SelectedItem.ToString(): "";
            bool bUseCOM = strDevice.StartsWith("COM", StringComparison.OrdinalIgnoreCase);            
            bool bUseIp = txtIP.Text != "";

            cbxDeviceSpeed.Enabled = bUseCOM && !bUseIp;
            cbxDevices.Enabled = !bUseIp;
        }

        private void setupListBoxes()
        {
            lvSentMessages.Columns.Clear();
            lvSentMessages.Columns.Add("Time", 60, HorizontalAlignment.Left);
            lvSentMessages.Columns.Add("Reference", 60, HorizontalAlignment.Left);
            lvSentMessages.Columns.Add("To", 90, HorizontalAlignment.Left);
            lvSentMessages.Columns.Add("Status", 100, HorizontalAlignment.Left);
            lvSentMessages.Columns.Add("Message", 200, HorizontalAlignment.Left);

            lvReceivedMessages.Items.Clear();
            lvReceivedMessages.Columns.Clear();
            lvReceivedMessages.Columns.Add("Time", 60, HorizontalAlignment.Left);
            lvReceivedMessages.Columns.Add("From", 90, HorizontalAlignment.Left);
            lvReceivedMessages.Columns.Add("Storage", 50, HorizontalAlignment.Left);
            lvReceivedMessages.Columns.Add("Message", 300, HorizontalAlignment.Left);
        }

        private void fillComboBoxes()
        {
            // Fill the devices combobox by autodetecting them. Adding COM ports
            // and TAPI devices to the same list.
            cbxDevices.Items.Clear();
            String strDevice = objGsm.FindFirstPort();
            while (objGsm.LastError == 0)
            {
                cbxDevices.Items.Add(strDevice);
                strDevice = objGsm.FindNextPort();
            }
            strDevice = objGsm.FindFirstDevice();
            while (objGsm.LastError == 0)
            {
                cbxDevices.Items.Add(strDevice);
                strDevice = objGsm.FindNextDevice();
            }

            var dctDeviceSpeed = new Dictionary<String, int>();
            dctDeviceSpeed.Add("Default", objSmsConstants.GSM_BAUDRATE_DEFAULT);
            dctDeviceSpeed.Add(Convert.ToString(objSmsConstants.GSM_BAUDRATE_110), objSmsConstants.GSM_BAUDRATE_110);
            dctDeviceSpeed.Add(Convert.ToString(objSmsConstants.GSM_BAUDRATE_300), objSmsConstants.GSM_BAUDRATE_300);
            dctDeviceSpeed.Add(Convert.ToString(objSmsConstants.GSM_BAUDRATE_600), objSmsConstants.GSM_BAUDRATE_600);
            dctDeviceSpeed.Add(Convert.ToString(objSmsConstants.GSM_BAUDRATE_1200), objSmsConstants.GSM_BAUDRATE_1200);
            dctDeviceSpeed.Add(Convert.ToString(objSmsConstants.GSM_BAUDRATE_2400), objSmsConstants.GSM_BAUDRATE_2400);
            dctDeviceSpeed.Add(Convert.ToString(objSmsConstants.GSM_BAUDRATE_4800), objSmsConstants.GSM_BAUDRATE_4800);
            dctDeviceSpeed.Add(Convert.ToString(objSmsConstants.GSM_BAUDRATE_9600), objSmsConstants.GSM_BAUDRATE_9600);
            dctDeviceSpeed.Add(Convert.ToString(objSmsConstants.GSM_BAUDRATE_14400), objSmsConstants.GSM_BAUDRATE_14400);
            dctDeviceSpeed.Add(Convert.ToString(objSmsConstants.GSM_BAUDRATE_19200), objSmsConstants.GSM_BAUDRATE_19200);
            dctDeviceSpeed.Add(Convert.ToString(objSmsConstants.GSM_BAUDRATE_38400), objSmsConstants.GSM_BAUDRATE_38400);
            dctDeviceSpeed.Add(Convert.ToString(objSmsConstants.GSM_BAUDRATE_56000), objSmsConstants.GSM_BAUDRATE_56000);
            dctDeviceSpeed.Add(Convert.ToString(objSmsConstants.GSM_BAUDRATE_57600), objSmsConstants.GSM_BAUDRATE_57600);
            dctDeviceSpeed.Add(Convert.ToString(objSmsConstants.GSM_BAUDRATE_64000), objSmsConstants.GSM_BAUDRATE_64000);
            dctDeviceSpeed.Add(Convert.ToString(objSmsConstants.GSM_BAUDRATE_115200), objSmsConstants.GSM_BAUDRATE_115200);
            dctDeviceSpeed.Add(Convert.ToString(objSmsConstants.GSM_BAUDRATE_128000), objSmsConstants.GSM_BAUDRATE_128000);
            dctDeviceSpeed.Add(Convert.ToString(objSmsConstants.GSM_BAUDRATE_230400), objSmsConstants.GSM_BAUDRATE_230400);
            dctDeviceSpeed.Add(Convert.ToString(objSmsConstants.GSM_BAUDRATE_256000), objSmsConstants.GSM_BAUDRATE_256000);
            dctDeviceSpeed.Add(Convert.ToString(objSmsConstants.GSM_BAUDRATE_460800), objSmsConstants.GSM_BAUDRATE_460800);
            dctDeviceSpeed.Add(Convert.ToString(objSmsConstants.GSM_BAUDRATE_921600), objSmsConstants.GSM_BAUDRATE_921600);

            cbxDeviceSpeed.DisplayMember = "Key";
            cbxDeviceSpeed.ValueMember = "Value";
            cbxDeviceSpeed.DataSource = new BindingSource(dctDeviceSpeed, null);

            var dctDataCoding = new Dictionary<String, int>();
            dctDataCoding.Add("Text", objSmsConstants.DATACODING_DEFAULT);
            dctDataCoding.Add("Unicode", objSmsConstants.DATACODING_UNICODE);
            dctDataCoding.Add("Data", objSmsConstants.DATACODING_8BIT_DATA);
            dctDataCoding.Add("Flash", objSmsConstants.DATACODING_FLASH);
            dctDataCoding.Add("Flash Unicode", objSmsConstants.DATACODING_FLASH | objSmsConstants.DATACODING_UNICODE);

            cbxDataCoding.DisplayMember = "Key";
            cbxDataCoding.ValueMember = "Value";
            cbxDataCoding.DataSource = new BindingSource(dctDataCoding, null);
        }

        private void btnSendOptions_Click(object sender, EventArgs e)
        {
            objFrmSendAdvanced.ShowDialog();
        }

        private void btnReceiveOptions_Click(object sender, EventArgs e)
        {
            objFrmGsmReceiveOptions.ShowDialog();
        }

        private int UpdateResult(int nErrorCode)
        {
            txtResult.Text = nErrorCode.ToString() + ": " + objGsm.GetErrorDescription(nErrorCode);
            return nErrorCode;
        }

        private void llblUrlRecipientFormat_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
            Process.Start("https://www.auronsoftware.com/knowledge-base/#sms-component");
        }

        private void btnView_Click(object sender, EventArgs e)
        {
            if (File.Exists(txtLogFile.Text))
                Process.Start(txtLogFile.Text);
        }

        private void cbxDevices_SelectionChangeCommitted(object sender, EventArgs e)
        {
            UpdateControls();
        }

        private void txtIP_TextChanged(object sender, EventArgs e)
        {
          UpdateControls();
        }
  }
}
