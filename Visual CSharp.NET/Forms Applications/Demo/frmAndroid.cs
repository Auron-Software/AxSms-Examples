using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Diagnostics;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Demo
{
  public partial class frmAndroid : Form
  {
    private AxSms.Android objAndroid;

    public frmAndroid()
    {
      objAndroid = new AxSms.Android();
      InitializeComponent();      
    }

    private void btnConnect_Click(object sender, EventArgs e)
    {
      Cursor.Current = Cursors.WaitCursor;

      if (objAndroid.IsConnected)
      {
        objAndroid.Disconnect();
      }
      else
      {
        int nPort = 0;
        if (int.TryParse(txtPort.Text, out nPort) == false)
        {
          MessageBox.Show("The value in 'port' needs to be an integer", "Format error",
              MessageBoxButtons.OK, MessageBoxIcon.Warning);

          return;
        }

        objAndroid.Connect(txtIP.Text, nPort);
        if (UpdateResult(objAndroid.LastError) != 0) return;
      }

      UpdateControls();
    }

    private int UpdateResult(int nErrorCode)
    {
      txtResult.Text = nErrorCode.ToString() + ": " + objAndroid.GetErrorDescription(nErrorCode);
      return nErrorCode;
    }

    private void UpdateControls()
    {
      if (!objAndroid.IsConnected)
      {
        btnConnect.Text = "Connect";
        btnSend.Enabled = false;
      }
      else
      {
        btnConnect.Text = "Disconnect";
        btnSend.Enabled = true;
      }
    }

    private void tmrCheckReceive_Tick(object sender, EventArgs e)
    {
      AxSms.Message oMessage = objAndroid.ReceiveSms();
      while (objAndroid.LastError == 0)
      {
        ListViewItem item = new ListViewItem(new String[] { oMessage.FromAddress, oMessage.ReceiveTime, oMessage.Body });
        lvReceivedMessages.Items.Insert(0, item);

        oMessage = objAndroid.ReceiveSms();
      }

      UpdateControls();
    }

    private void btnSend_Click(object sender, EventArgs e)
    {
      Cursor.Current = Cursors.WaitCursor;

      AxSms.Message oMessage = new AxSms.Message();
      oMessage.Body = txtBody.Text;
      oMessage.ToAddress = txtToAddress.Text;

      objAndroid.SendSms(oMessage);
      if (UpdateResult(objAndroid.LastError) == 0)
      {
        ListViewItem item = new ListViewItem(new String[] { oMessage.ToAddress, DateTime.Now.ToString(), oMessage.Body });
        lvSentMessages.Items.Insert(0, item);
      }
    }
    private void frmAndroid_Load(object sender, EventArgs e)
    {
      // Setup the form controls
      setupListboxes();
      txtLogFile.Text = Path.GetTempPath() + "Android.log";
      txtLogFile.ReadOnly = true;

      objAndroid.LogFile = txtLogFile.Text;

      // The default port
      txtPort.Text = "7770";
      txtPort.ReadOnly = true;
      txtIP.Text = "";

      // Set default message properties
      lblInfo.Text = String.Format("Auron SMS Component {0}; Build: {1}; Module: {2}", objAndroid.Version, objAndroid.Build, objAndroid.Module);
      txtBody.Text = "Hello World!";

      // Update control states according to the default settingss
      UpdateControls();

      // Enable the receive timer. This timer will be used to check the Android object to
      // see if any new message have been received.
      this.tmrCheckReceive.Enabled = true;
      this.tmrCheckReceive.Interval = 500;
    }

    private void setupListboxes()
    {
      lvSentMessages.Columns.Clear();
      lvSentMessages.Columns.Add("Recipient", 115, HorizontalAlignment.Left);
      lvSentMessages.Columns.Add("Time", 115, HorizontalAlignment.Left);
      lvSentMessages.Columns.Add("Message", lvSentMessages.Width - 235, HorizontalAlignment.Left);

      lvReceivedMessages.Columns.Clear();
      lvReceivedMessages.Columns.Add("Sender", 115, HorizontalAlignment.Left);
      lvReceivedMessages.Columns.Add("Time", 115, HorizontalAlignment.Left);
      lvReceivedMessages.Columns.Add("Message", lvReceivedMessages.Width - 235, HorizontalAlignment.Left);
    }

    private void btnView_Click(object sender, EventArgs e)
    {
      if (File.Exists(txtLogFile.Text))
      {
        Process.Start(txtLogFile.Text);
      }
    }

    private void lnkAuronSMSAgentForAndroid_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
    {
      Process.Start("http://www.auronsoftware.com/products/auron-sms-agent-for-android");
    }
  }
}
