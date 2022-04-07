//-----------------------------------------------------------------------
// <copyright file="frmSmpp.cs" company="Auron">
//     Copyright (c) Auron Software - www.auronsoftware.com
// </copyright>
// <author>Dennis van de Giessen</author>
//-----------------------------------------------------------------------
namespace Demo
{
    using System;
    using System.Diagnostics;
    using System.IO;
    using System.Threading;
    using System.Windows.Forms;
    using System.Collections.Generic;
    using Microsoft.Win32;
    using System.Text;

    public partial class frmSmpp : Form
    {      
        private static int NLS_BASE = 1000;

        private frmSmppSendAdvanced objFrmSendAdvanced;
        private frmSmppAdvanced objFrmSmppAdvanced;
        private AxSms.Smpp objSmpp;
        private AxSms.Message objSmsMessage;
        private AxSms.Constants objSmsConstants;

        private bool bInfoMessageShowed;
        private int nLastUserTag;

        public frmSmpp(string strSystemID, string strPassword, string strServer)
        {
            InitializeComponent();

            objFrmSendAdvanced = new frmSmppSendAdvanced();
            objFrmSmppAdvanced = new frmSmppAdvanced();

            objSmpp = new AxSms.Smpp();
            objSmsMessage = new AxSms.Message();
            objSmsConstants = new AxSms.Constants();

            txtSystemID.Text = strSystemID;
            txtSystemPassword.Text = strPassword;
            txtServer.Text = strServer;

            nLastUserTag = 0;
        }

        private void frmSmpp_Load(object sender, EventArgs e)
        {
            // Setup the form controls
            fillComboBoxes();
            setupListboxes();
            txtLogFile.Text = Path.GetTempPath() + "Smpp.log";

            // Set default connection properties
            cbxBindType.SelectedIndex = objSmsConstants.SMPP_BIND_TRANSCEIVER;
            cbxDataCoding.SelectedIndex = objSmsConstants.DATACODING_DEFAULT;            

            // Set default message properties
            lblInfo.Text = String.Format("Auron SMS Component {0}; Build: {1}; Module: {2}", objSmpp.Version, objSmpp.Build, objSmpp.Module);
            txtBody.Text = "Hello World!";
            
            // Update control states according to the default settingss
            UpdateControls();

            // Enable the receive timer. This timer will be used to check the SMPP object to
            // see if any new message have been received.
            this.TmrCheckReceive.Enabled = true;
            this.TmrCheckReceive.Interval = 500;
            
            // Enable the update timer. This timer will be used to check the SMPP object to 
            // if there any update for sent message.
            this.TmrCheckUpdate.Enabled = true;
            this.TmrCheckUpdate.Interval = 500;
        }

        private void btnConnect_Click(object sender, EventArgs e)
        {
            // Validate the input.
            int nPort = 0;
            if (int.TryParse(txtServerPort.Text.ToString(), out nPort) == false)
            {
                MessageBox.Show("The value in 'Server port' needs to be an integer", "Format error",
                    MessageBoxButtons.OK, MessageBoxIcon.Warning);

                return;
            }

            // Set a wait cursor before connecting and binding. Binding could take a second.
            Cursor.Current = Cursors.WaitCursor;

            // Generate a logfile by setting the logfile property to the specified filename.
            // Open a connection to the remote server. 
            
            // If a connection is established the Smpp component will continue to communicate 
            // with the remote server in the background. This way sending / receiving SMS messages 
            // happens asynchronous which greatly improves the possible throughput.
            objSmpp.LogFile = txtLogFile.Text;
            objSmpp.UseGsmEncoding = objSmsConstants.SMPP_USEGSMENCODING_INOUTCHARS; // required for national language shift tables to work
            objSmpp.Connect(txtServer.Text, nPort, objFrmSmppAdvanced.ConnectTimeout, cbSecure.Checked);
            if (UpdateResult(objSmpp.LastError) != 0)
            {   // Failed to connect to server.
                return;
            }

            // Create a bind on the server. This is very much like a login. The login-credentials are supplied
            // together with additional information concerning your SMPP account with the provider.
            objSmpp.Bind((int)cbxBindType.SelectedValue, txtSystemID.Text, txtSystemPassword.Text, 
                objFrmSmppAdvanced.SystemType, objFrmSmppAdvanced.InterfaceVersion, objFrmSmppAdvanced.AddressTon, 
                objFrmSmppAdvanced.AddressNpi, objFrmSmppAdvanced.AddressRange, objFrmSmppAdvanced.BindTimeout);
            if (UpdateResult(objSmpp.LastError) != 0)
            {   // There was a problem while binding to the server.
                objSmpp.Disconnect();
                return;
            }
            
            // Reset the cursor. This way we're not stuck with a 'wait-cursor' when displaying an info dialog.
            Cursor.Current = Cursors.Default;

            // If the demo gatways is specified, show some additional information to the user.
            if (!bInfoMessageShowed && txtServer.Text == "gateway.auronsoftware.com")
            {
                MessageBox.Show("The gateway.auronsoftware.com server is meant to test this software. It allows you to send out only a few SMS messages, " +
                    "to any destination in the world.\nIf you need more credits, please apply for it by sending an e-mail to " +
                    "support@auronsoftware.com", this.Text, MessageBoxButtons.OK, MessageBoxIcon.Information);
                bInfoMessageShowed = true;
            }

            UpdateControls();
        }

        private void btnDisconnect_Click(object sender, EventArgs e)
        {
            // Set a wait cursor, disconnect could take a second if client needs to unbind first.
            Cursor.Current = Cursors.WaitCursor;

            // If we are still bound on the server, exit gracefully by issuing an 'unbind' first.
            // Since we are going to disconnect anyway it's not necessary to display the last error.
            if (objSmpp.IsBound)
                objSmpp.Unbind();

            // If we are still connected to the server, disconnect.
            if (objSmpp.IsConnected)
                objSmpp.Disconnect();

            UpdateControls();
        }

        private void btnSend_Click(object sender, EventArgs e)
        {
            // Set the SMS properties from this form. Since we are re-using
            // the same Message object we can call .clear() to clear all existing
            // settings.
            objSmsMessage.Clear();

            int lDcs = (int)cbxDataCoding.SelectedValue;
            if (lDcs >= NLS_BASE)
            { // This is actually an instruction to use the national language shift tables with datacoding on 0
              lDcs -= NLS_BASE;
              objSmsMessage.DataCoding = 0;
              objSmsMessage.LanguageLockingShift = lDcs;
              objSmsMessage.LanguageSingleShift = lDcs;
            } else
            { // Set the datacoding directly.
              objSmsMessage.DataCoding = lDcs;
            }

            objSmsMessage.ToAddress = txtToAddress.Text;            
            objSmsMessage.Body = txtBody.Text;

            // Set the SMS properties from the advanced dialog            
            objSmsMessage.BodyFormat = objFrmSendAdvanced.BodyFormat;
            
            objSmsMessage.FromAddress = objFrmSendAdvanced.FromAddress;
            objSmsMessage.FromAddressTON = objFrmSendAdvanced.FromTon;
            objSmsMessage.FromAddressNPI = objFrmSendAdvanced.FromNpi;
            objSmsMessage.ToAddressTON = objFrmSendAdvanced.ToTon;
            objSmsMessage.ToAddressNPI = objFrmSendAdvanced.ToNpi;

            objSmsMessage.RequestDeliveryReport = objFrmSendAdvanced.RequestDeliveryReport;
            objSmsMessage.HasUdh = objFrmSendAdvanced.HasUdh;

            // Add TLV's to this message
            foreach (TlvInfo objTlvInfo in objFrmSendAdvanced.TlvInfo)
                objSmsMessage.SmppAddTlv(objTlvInfo.Tlv);

            // Set the 'UserTag'. This property identifies an SMS before the SMS message
            // has received a message reference. A message reference is a unique identifier
            // that will be received from the remote server after it accepts the SMS message
            // to be able to know which messagse the server is referring to when it hands
            // us the message reference we need to set the usertag property to something that
            // uniquely identifies the SMS in the scope of this connection. Usually this
            // can be a database id.
            objSmsMessage.UserTag = ++nLastUserTag;

            // Now lets submit the SMS to the Smpp component. The message will be 
            // send out to the remote server immediately. The SubmitSms function
            // does not wait for the response from the server. The response from
            // the server will be received by the Smpp client in the background at 
            // some time in the future. The 'TmrCheckUpdate_Tick' function below checks
            // the Smpp client for updates from the server to see if the message was
            // delivered.
            objSmpp.SubmitSms(objSmsMessage, objSmsConstants.MULTIPART_ACCEPT);
            if (UpdateResult(objSmpp.LastError) != 0)
            {   // There was a problem with submitting the SMS message. Return
                // early so it's not added to the list.
                return;
            }

            // Add the new message to the listview. We tag the listview item with the usertag
            // so we can reference this item again when we have a status update.
            ListViewItem item = new ListViewItem(new String[] { "<unknown>", objSmsMessage.ToAddress, "<unknown>" });
            item.Tag = objSmsMessage.UserTag;
            lvSentMessages.Items.Insert(0, item);
        }

        private void TmrCheckUpdate_Tick(object sender, EventArgs e)
        {
            UpdateControls();

            AxSms.Message objMessage;

            // The FetchSmsUpdate function is used to retrieve updates about SMS
            // messages that the Smpp component may have received in the background. 
            // An update can only be fetched once. Calling 'FetchSmsUpdate' removes
            // the update from the Smpp component. 
            //
            // The objSms message returned is the orginal SMS message that was submitted
            // in SubmitSms. As such, if the 'UserTag' property was set, this property 
            // will still be set to the same value. This way it's easy to match up 
            // message updates with submitted messages.
            objMessage = objSmpp.FetchSmsUpdate();
            while (objSmpp.LastError == 0)
            {   // For every update, check if we can find the message in the listbox. 
                // If we can then we need to update the status for this message.
                foreach (ListViewItem li in lvSentMessages.Items)
                {
                    if ((int)li.Tag == objMessage.UserTag)
                    {   // We've found the SMS message in the listbox. Let's update the status according
                        // to the 'SmppCommandStatus' property. The command status is the most important
                        // indicator returned by the remote SMPP server. If the command status is anything
                        // other than 0 (SMPP_ESME_ROK) this means the SMPP server rejected the SMS message
                        // and it will never arrive at the destination. If the SmppCommandStatus is set to 0 
                        // this means that the SMPP provider will try to deliver the SMS.
                        // 
                        // This is also the first place where the SMS message reference becomes available.
                        // The SMS message reference is issued by the remote SMPP server and will be used
                        // in delivery reports to refer to this message.
                        String strStatus = objSmsConstants.SmppEsmeToString(objMessage.SmppCommandStatus);
                        li.SubItems[0].Text = objMessage.Reference;
                        li.SubItems[2].Text = strStatus;
                    }
                }

                objMessage = objSmpp.FetchSmsUpdate();
            }
        }

        private void TmrCheckReceive_Tick(object sender, EventArgs e)
        {
            UpdateControls();

            AxSms.Message objMessage;

            // The receive message fetches message that have been received by the Smpp component in the
            // background. Once a message is received it's removed from the internal buffer in the Smpp
            // component.
            //
            // Deliver reports are received this way as well. Delivery reports are normal SMS messages
            // that are differently formatted. They have the 'objSmsMessage.SmppIsDeliveryReport' property
            // set to 'True'.
            objMessage = objSmpp.ReceiveMessage();
            while (objSmpp.LastError == 0)
            {
                ListViewItem item = new ListViewItem(new string[] { 
                    objMessage.FromAddress, objMessage.ReceiveTime, objMessage.Body });
                lvReceivedMessages.Items.Insert(0, item);

                if (objMessage.SmppIsDeliveryReport)
                {   // This is a delivery report. A delivery report should contain the message reference
                    // of the concerning message as well as a status indication. 
                    //
                    // Normally the message body of a delivery report should contain this information but
                    // there are no strict rules about the way this body is formatted. Usually the body
                    // will look something like this:
                    //
                    // "id:IIIIIIIIII sub:SSS dlvrd:DDD submit date:YYMMDDhhmm done
                    //  date:YYMMDDhhmm stat:DDDDDDD err:E Text: . . . . . . . . ."
                    //
                    // In addition, most SMPP providers will also include TLV values that contain the message
                    // reference and status. These are: objSmsConstants.SMPP_TLV_RECEIPTED_MESSAGE_ID (String)
                    // and objSmsConstants.SMPP_TLV_MESSAGE_STATE (byte).
                    //
                    // For example:
                    // AxSms.Tlv objTlv = objMessage.SmppGetTlv(objSmsConstants.SMPP_TLV_RECEIPTED_MESSAGE_ID);
                    // if (objTlv.ValueAsString == strMessageReference)
                    // {
                    //    AxSms.Tlv objState = objMessage.SmppGetTlv(objSmsConstants.SMPP_TLV_MESSAGE_STATE);
                    //    String strState = objSmsConstants.SmppMessageStateToString(objState.ValueAsInt8);
                    //    Console.WriteLine("Status: " + strState);
                    // }
                    //
                    // In this sample delivery reports just show up as received message.
                }

                objMessage = objSmpp.ReceiveMessage();
            }
        }

        private void frmSmpp_FormClosing(object sender, FormClosingEventArgs e)
        {
            // Set a wait cursor, disconnect could take a second if client needs to unbind first.
            Cursor.Current = Cursors.WaitCursor;

            // If we are still bound on the server, exit gracefully by issuing an 'unbind' first.
            // Since we are going to disconnect anyway it's not necessary to display the last error.
            if (objSmpp.IsBound)
                objSmpp.Unbind();

            // If we are still connected to the server, disconnect.
            if (objSmpp.IsConnected)
                objSmpp.Disconnect();
        }

        private void btnSendOptions_Click(object sender, EventArgs e)
        {
            objFrmSendAdvanced.ShowDialog();
        }

        private void UpdateControls()
        {
            int iSystemMode = (int)cbxBindType.SelectedValue;
            bool bSender = (iSystemMode == objSmsConstants.SMPP_BIND_TRANSMITTER ||
                       iSystemMode == objSmsConstants.SMPP_BIND_TRANSCEIVER);
            bool bReceiver = (iSystemMode == objSmsConstants.SMPP_BIND_RECEIVER ||
                         iSystemMode == objSmsConstants.SMPP_BIND_TRANSCEIVER);

            txtServer.Enabled = !objSmpp.IsConnected;
            txtServerPort.Enabled = !objSmpp.IsConnected;
            txtSystemID.Enabled = !objSmpp.IsConnected;
            txtSystemPassword.Enabled = !objSmpp.IsConnected;
            cbxBindType.Enabled = !objSmpp.IsConnected;
            btnAdvancedProviderSettings.Enabled = !objSmpp.IsConnected;

            btnConnect.Enabled = !objSmpp.IsConnected;
            btnDisconnect.Enabled = objSmpp.IsConnected;
            txtToAddress.Enabled = objSmpp.IsConnected && bSender;
            txtBody.Enabled = objSmpp.IsConnected && bSender;
            cbxDataCoding.Enabled = objSmpp.IsConnected && bSender;
            btnSend.Enabled = objSmpp.IsConnected && bSender;
            btnSendOptions.Enabled = objSmpp.IsConnected && bSender;
            lvSentMessages.Enabled = objSmpp.IsConnected && bSender;
            btnClearSent.Enabled = objSmpp.IsConnected && bSender;
            lvReceivedMessages.Enabled = objSmpp.IsConnected && bReceiver;
            btnClearReceived.Enabled = objSmpp.IsConnected && bReceiver;

            if (txtServer.Text == "gateway.auronsoftware.com" && objSmpp.IsConnected && bReceiver)
            {
                llblUrlNotReceived.Show();
            }
            else
            {
                llblUrlNotReceived.Hide();
            }
        }

        private int UpdateResult(int nErrorCode)
        {
            txtResult.Text = nErrorCode.ToString() + ": " + objSmpp.GetErrorDescription(nErrorCode);
            return nErrorCode;
        }

        private void fillComboBoxes()
        {
            var dctBindTypes = new Dictionary<String, int>();
            dctBindTypes.Add("Transmitter", objSmsConstants.SMPP_BIND_TRANSMITTER);
            dctBindTypes.Add("Receiver", objSmsConstants.SMPP_BIND_RECEIVER);
            dctBindTypes.Add("Transceiver", objSmsConstants.SMPP_BIND_TRANSCEIVER);

            cbxBindType.DisplayMember = "Key";
            cbxBindType.ValueMember = "Value";
            cbxBindType.DataSource = new BindingSource(dctBindTypes, null);

            var dctDataCoding = new Dictionary<String, int>();
            dctDataCoding.Add("Text"            , objSmsConstants.DATACODING_DEFAULT);
            dctDataCoding.Add("Unicode"         , objSmsConstants.DATACODING_UNICODE);
            dctDataCoding.Add("Data"            , objSmsConstants.DATACODING_8BIT_DATA);
            dctDataCoding.Add("Flash"           , objSmsConstants.DATACODING_FLASH);
            dctDataCoding.Add("Flash Unicode"   , objSmsConstants.DATACODING_FLASH | objSmsConstants.DATACODING_UNICODE);
            dctDataCoding.Add("(NLS) Turkish"   , NLS_BASE + objSmsConstants.LANGUAGE_SINGLESHIFT_TURKISH);
            dctDataCoding.Add("(NLS) Portuguese", NLS_BASE + objSmsConstants.LANGUAGE_SINGLESHIFT_SPANISH);
            dctDataCoding.Add("(NLS) Spanish"   , NLS_BASE + objSmsConstants.LANGUAGE_SINGLESHIFT_PORTUGUESE);
            dctDataCoding.Add("(NLS) Bengali"   , NLS_BASE + objSmsConstants.LANGUAGE_SINGLESHIFT_BENGALI);
            dctDataCoding.Add("(NLS) Gujarati"  , NLS_BASE + objSmsConstants.LANGUAGE_SINGLESHIFT_GUJARATI);
            dctDataCoding.Add("(NLS) Hindi"     , NLS_BASE + objSmsConstants.LANGUAGE_SINGLESHIFT_HINDI);
            dctDataCoding.Add("(NLS) Kannada"   , NLS_BASE + objSmsConstants.LANGUAGE_SINGLESHIFT_KANNADA);
            dctDataCoding.Add("(NLS) Malayalam" , NLS_BASE + objSmsConstants.LANGUAGE_SINGLESHIFT_MALAYALAM);
            dctDataCoding.Add("(NLS) Oriya"     , NLS_BASE + objSmsConstants.LANGUAGE_SINGLESHIFT_ORIYA);
            dctDataCoding.Add("(NLS) Punjabi"   , NLS_BASE + objSmsConstants.LANGUAGE_SINGLESHIFT_PUNJABI);
            dctDataCoding.Add("(NLS) Tamil"     , NLS_BASE + objSmsConstants.LANGUAGE_SINGLESHIFT_TAMIL);
            dctDataCoding.Add("(NLS) Telugu"    , NLS_BASE + objSmsConstants.LANGUAGE_SINGLESHIFT_TELUGU);
            dctDataCoding.Add("(NLS) Urdu"      , NLS_BASE + objSmsConstants.LANGUAGE_SINGLESHIFT_URDU);

            cbxDataCoding.DisplayMember = "Key";
            cbxDataCoding.ValueMember = "Value";
            cbxDataCoding.DataSource = new BindingSource(dctDataCoding, null);
        }

        private void setupListboxes()
        {
            lvSentMessages.Columns.Clear();
            lvSentMessages.Columns.Add("Reference", 115, HorizontalAlignment.Left);
            lvSentMessages.Columns.Add("Recipient", 115, HorizontalAlignment.Left);
            lvSentMessages.Columns.Add("Status", lvSentMessages.Width - 235, HorizontalAlignment.Left);

            lvReceivedMessages.Columns.Clear();
            lvReceivedMessages.Columns.Add("Sender", 115, HorizontalAlignment.Left);
            lvReceivedMessages.Columns.Add("Time", 115, HorizontalAlignment.Left);
            lvReceivedMessages.Columns.Add("Message", lvReceivedMessages.Width - 235, HorizontalAlignment.Left);
        }

        private void btnClearSent_Click(object sender, EventArgs e)
        {
            lvSentMessages.Items.Clear();
        }

        private void btnClearReceived_Click(object sender, EventArgs e)
        {
            lvReceivedMessages.Items.Clear();
        }

        private void btnView_Click(object sender, EventArgs e)
        {
            if (File.Exists(txtLogFile.Text))
            {
                Process.Start(txtLogFile.Text);
            }
        }

        private void btnAdvancedProviderSettings_Click(object sender, EventArgs e)
        {
            objFrmSmppAdvanced.ShowDialog();
        }

        private void llblUrlSmppProviders_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
            Process.Start("https://www.auronsoftware.com/knowledge-base/#sms-component");
        }

        private void ctlUrlRecipientFormat_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
            Process.Start("https://www.auronsoftware.com/knowledge-base/#sms-component");
        }

        private void ctlUrlNotReceived_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
            Process.Start("https://www.auronsoftware.com/knowledge-base/#sms-component");
        }
    }
}
