using System;
using System.Collections.Generic;
using System.Windows.Forms;
using System.Diagnostics;
using System.Threading;
using System.IO;

namespace Demo
{
  public partial class frmSmppServer : Form
  {
    AxSms.SmppServer objServer;
    AxSms.Constants objSmsConstants;
    frmSmppSendAdvanced objFrmSendAdvanced;
    frmSmpp objFrmSmppClient;

    Dictionary<int, String> dctSystemIds;

    int nClientsCount = 0;
    int nLastUserTag = 0;

    public frmSmppServer()
    {
      InitializeComponent();
      objServer = new AxSms.SmppServer();
      objSmsConstants = new AxSms.Constants();
      objFrmSendAdvanced = new frmSmppSendAdvanced();
      dctSystemIds = new Dictionary<int, String>();
    }

    private void frmSmppServer_Load(object sender, EventArgs e)
    {
      fillComboboxes();
      setupListboxes();

      lblInfo.Text = String.Format("Auron SMS Component {0}; Build: {1}; Module: {2}",
          objServer.Version, objServer.Build, objServer.Module);

      txtPort.Text = "2775";
      txtLogFile.Text = System.IO.Path.GetTempPath() + "SmppServer.log";
      cbxDataCoding.SelectedValue = objSmsConstants.DATACODING_DEFAULT;
      cbxIpVersion.SelectedValue = objSmsConstants.SMPP_IPVERSION_BOTH;
    }

    private void btnStartServer_Click(object sender, EventArgs e)
    {
      // Set a wait cursor. This should not take much more than a second though.
      Cursor.Current = Cursors.WaitCursor;

      int nPort = 0;

      // Validate the port number
      try
      {
        nPort = int.Parse(txtPort.Text);
      }
      catch (FormatException)
      {
        MessageBox.Show("The port number should be an integer.", "Format Error",
            MessageBoxButtons.OK, MessageBoxIcon.Warning);
        return;
      }

      // Set the log file; This will contain the entire communication log
      objServer.LogFile = txtLogFile.Text;

      // The Smpp server can generate message references automatically. This is a simple 8 character numerical reference, starting
      // at 0 and incremented by 1 for every message. When using the automatically generated references set the start offset here
      // to be sure that clients are not receiving duplicate message references.
      objServer.LastReference = 0;

      // Set the certificate store that is used to find the certificate specified in the start function below. 
      // If no certificate is specified the SMPP server will not be secured.
      // To access a certificate in the LocalMachine store the SMPP server needs to be started as Administrator.
      objServer.CertificateStore = objSmsConstants.SMPP_CERTIFICATESTORE_CURRENTUSER;

      // Start the SMPP server. This starts a background thread which listens on the specified port for incoming connections.
      // It's possible to start the server to listen to either IPv4, IPv6 or both. The 'Both' option is a so called 'dual stack'
      // implementation. It opens 2 sockets and listens on both.
      objServer.Start(nPort, (int)cbxIpVersion.SelectedValue, (string)cbxCertificate.SelectedValue);

      // Check if the starting the Smpp server was successfull. If not, set the message in the
      // bottom of the dialog.
      UpdateResult(objServer.LastError);

      UpdateControls();
    }

    private void tmrHandleSessions_Tick(object sender, EventArgs e)
    {
      // If the server is not started then there's nothing to do here.
      if (objServer.IsStarted == false) return;

      // To manage the server we need to continuously iterate over all 
      // connected sessions. Each session represents a connected SMPP client.
      AxSms.SmppSession objSession = objServer.GetFirstSession();
      while (objServer.LastError == 0)
      {
        // First, make sure that the session is listed in the session listview.
        // If it's not listed, add it.
        if (!lvSessions.Items.ContainsKey(objSession.Id.ToString()))
          RegisterSession(objSession);

        // This session is currently trying to bind to the server. This is where
        // the credentials should be checked.
        if (objSession.ConnectionState == objSmsConstants.SMPP_SESSIONSTATE_BINDING)
        {   // In the sample we're going to grant access to all session. In your own
            // application you will likely want to check to see if this is a trusted
            // client. All of the bind properties can be access and reviewed.
            //objSession.SystemId;
            //objSession.Password;
            //objSession.SystemType;
            //objSession.AddressRange;
            //etc..

          // If RespondToBind is called with anything other than 0 the SMPP server
          // will disconnect immediately after sending the response code.
          
          // also set default character encoding to be GSM character set. This way
          // national language shift tables are supported as well.
          objSession.UseGsmEncoding = objSmsConstants.SMPP_USEGSMENCODING_INOUTCHARS;
          objSession.RespondToBind(objSmsConstants.SMPP_ESME_ROK);
        }

        // See if this session has tried to submit any SMS messages. For all
        // SMS messages the server needs to respond on whether the message will
        // be accepted.
        AxSms.Message objMessage = objSession.ReceiveSubmitSms();
        while (objSession.LastError == 0)
        {
          // For the demonstration purposes we're going to allow any and all
          // messages without checking them.
          objMessage.SmppCommandStatus = objSmsConstants.SMPP_ESME_ROK;

          // The message reference does not need to be set explicity since
          // the server automatically generates a message reference and sets
          // it in the objMessage.Reference property.
          //
          // To generate a custom message reference set it here:
          /// objMessage.Reference = ".."

          objSession.RespondToSubmitSms(objMessage);

          // If a message requests a delivery report the server should try
          // to report when there's information about the SMS delivery status.
          if (objMessage.RequestDeliveryReport)
          {
            // For the demonstration we use the build-in method 'DeliverReport'
            // This is convenience function to quickly generate a deliver report.
            // out of an existing SMS message. It's also possible to construct
            // an SMS message and use the objSession.DeliverSms message for
            // more flexibilty. Make sure objMessage.SmppIsDeliveryReport
            // is set on a custom delivery report message.
            objMessage.SmppStatus = objSmsConstants.SMPP_MESSAGESTATE_DELIVERED;
            objSession.DeliverReport(objMessage);
          }

          // Pass the message through the internal SMS assembler. This assembles multipart message if neccisary.
          objSession.AssembleSms(objMessage);

          objMessage = objSession.ReceiveSubmitSms();
        }

        // Get complete messages. These are the messages that are entered through the previous 'AssembleSms' call.
        objMessage = objSession.GetAssembledSms(false);
        while (objSession.LastError == 0)
        {
          ListViewItem lvi = new ListViewItem(new String[]
          {
                        "In", objSession.SystemId, objMessage.ToAddress,
                        objMessage.Reference, "Received", objMessage.Body
          });
          lvMessages.Items.Add(lvi);
          objMessage = objSession.GetAssembledSms(false);
        }

        // The session could query the status of a specific SMS message. This functionality
        // can be used on servers that need to be backwards compatible with SMPP 3.3 systems.
        // For the demonstration we don't allow QuerySms commands.
        objMessage = objSession.ReceiveQuerySms();
        while (objSession.LastError == 0)
        {
          objMessage.SmppCommandStatus = objSmsConstants.SMPP_ESME_RINVCMDID;
          objSession.RespondToQuerySms(objMessage);
          objMessage = objSession.ReceiveQuerySms();
        }

        // We need to check all responses the Session has had on our message deliveries
        objMessage = objSession.ReceiveDeliverResponse();
        while (objSession.LastError == 0)
        {
          // For this example we assume the client is able to accept all messages
          // we send. The client could recject a message with a reponse code like
          // SMPP_ESME_RMSGQFUL, which requires us to re-send until the validity
          // period expires.
          objMessage = objSession.ReceiveDeliverResponse();
        }

        objSession = objServer.GetNextSession();
      }

      // Remove the closed sessions from the list view
      objSession = objServer.GetClosedSession();
      while (objServer.LastError == 0)
      {
        lvSessions.Items.RemoveByKey(objSession.Id.ToString());
        objSession = objServer.GetClosedSession();
      }

      UpdateControls();
    }

    private void btnDeliver_Click(object sender, EventArgs e)
    {
      // Don't do anything if there are no sessions connected
      if (cbxSystemID.Items.Count <= 0) return;

      AxSms.Message objSms = new AxSms.Message();

      // Set properties
      objSms.ToAddress = txtToAddress.Text;
      objSms.DataCoding = (int)cbxDataCoding.SelectedValue;
      objSms.Body = txtBody.Text;

      // Set the SMS properties from the advanced dialog            
      objSms.BodyFormat = objFrmSendAdvanced.BodyFormat;

      objSms.FromAddress = objFrmSendAdvanced.FromAddress;
      objSms.FromAddressTON = objFrmSendAdvanced.FromTon;
      objSms.FromAddressNPI = objFrmSendAdvanced.FromNpi;
      objSms.ToAddressTON = objFrmSendAdvanced.ToTon;
      objSms.ToAddressNPI = objFrmSendAdvanced.ToNpi;

      objSms.RequestDeliveryReport = objFrmSendAdvanced.RequestDeliveryReport;
      objSms.HasUdh = objFrmSendAdvanced.HasUdh;

      // Add TLV's to this message
      foreach (TlvInfo objTlvInfo in objFrmSendAdvanced.TlvInfo)
        objSms.SmppAddTlv(objTlvInfo.Tlv);

      // Set a usertag for the SMS message. This way, in the tmrHandleSessions function,
      // where the deliver reponses are checked, we can see if this message was 
      // accepted by the client session.
      objSms.UserTag = ++nLastUserTag;

      // Get the session object for the selected system id.
      AxSms.SmppSession objSession = objServer.GetSession((int)cbxSystemID.SelectedValue);
      if (UpdateResult(objServer.LastError) != 0) return;

      // This schedules the SMS for immediate delivery on that session. The 
      // tmrHandleSessions timer function peridically checks the delivery responses
      // to make sure the session has accepted this message.
      objSession.DeliverSms(objSms, objSmsConstants.MULTIPART_ACCEPT);

      // If there was a problem delivering the message don't add it to the list view
      if (UpdateResult(objServer.LastError) != 0) return;

      ListViewItem lvi = new ListViewItem(new String[]
              {
                        "Out", objSession.SystemId, objSms.ToAddress,
                        objSms.Reference, "Sent", objSms.Body
              });
      lvMessages.Items.Add(lvi);
    }

    private void btnStopServer_Click(object sender, EventArgs e)
    {
      // Set a wait cursor. This should not take much more than a second though.
      Cursor.Current = Cursors.WaitCursor;

      // This stops the Smpp server. All connected session will be disconnected and
      // the Smpp component background thread will be stopped.
      objServer.Stop();
      lvSessions.Items.Clear();

      UpdateControls();
    }

    // Add a new session to the UI
    private void RegisterSession(AxSms.SmppSession objSession)
    {
      // Add the new session to the sessions listbox
      ListViewItem lvi = new ListViewItem(new String[]
              {
                        objSession.Ip, Convert.ToString(objSession.Port), objSession.SystemId
              });
      lvi.Tag = objSession;
      lvi.Name = objSession.Id.ToString();
      lvSessions.Items.Add(lvi);

      // Add the new session to the systemid's combobox
      dctSystemIds.Add(objSession.Id, objSession.SystemId);

      // Refresh combobox items
      cbxSystemID.DisplayMember = "Value";
      cbxSystemID.ValueMember = "Key";
      cbxSystemID.DataSource = new BindingSource(dctSystemIds, null);
      cbxSystemID.Refresh();
    }

    private void btnAddClient_Click(object sender, EventArgs e)
    {
      // Calls the StartNewSmppClient function in a different thread. The StartNewSmppClient
      // function starts and connects a new Smpp client form to this Smpp server instance.
      Thread thread = new Thread(new ThreadStart(StartNewSmppClient));
      thread.Start();
    }

    private void StartNewSmppClient()
    {
      // The new client will automatically connect to this SMPP. The username and password
      // does not matter since this sample will not validate any binds.
      nClientsCount++;
      objFrmSmppClient = new frmSmpp("Client" + nClientsCount, "password", "127.0.0.1");
      objFrmSmppClient.ShowDialog();
    }

    private void frmSmppServer_FormClosing(object sender, FormClosingEventArgs e)
    {
      objServer.Stop();
    }

    private void UpdateControls()
    {
      grpSendMessage.Enabled = objServer.IsStarted;

      btnStartServer.Enabled = !objServer.IsStarted;
      txtPort.Enabled = !objServer.IsStarted;
      cbxIpVersion.Enabled = !objServer.IsStarted;
      cbxCertificate.Enabled = !objServer.IsStarted;

      btnStopServer.Enabled = objServer.IsStarted;
      grpIncommingMessages.Enabled = objServer.IsStarted;
      grpSessions.Enabled = objServer.IsStarted;
      tmrHandleSessions.Enabled = objServer.IsStarted;
    }

    private int UpdateResult(int nErrorCode)
    {
      txtResult.Text = nErrorCode.ToString() + ": " + objServer.GetErrorDescription(nErrorCode);
      return nErrorCode;
    }

    private void fillComboboxes()
    {
      var dctDataCoding = new Dictionary<String, int>();
      dctDataCoding.Add("Text", objSmsConstants.DATACODING_DEFAULT);
      dctDataCoding.Add("Unicode", objSmsConstants.DATACODING_UNICODE);
      dctDataCoding.Add("Data", objSmsConstants.DATACODING_8BIT_DATA);
      dctDataCoding.Add("Flash", objSmsConstants.DATACODING_FLASH);
      dctDataCoding.Add("Flash Unicode", objSmsConstants.DATACODING_FLASH | objSmsConstants.DATACODING_UNICODE);

      cbxDataCoding.DisplayMember = "Key";
      cbxDataCoding.ValueMember = "Value";
      cbxDataCoding.DataSource = new BindingSource(dctDataCoding, null);

      var dctIpVersion = new Dictionary<String, int>();
      dctIpVersion.Add("IPv6 And IPv4", objSmsConstants.SMPP_IPVERSION_BOTH);
      dctIpVersion.Add("IPv6 Only", objSmsConstants.SMPP_IPVERSION_6);
      dctIpVersion.Add("IPv4 Only", objSmsConstants.SMPP_IPVERSION_4);

      cbxIpVersion.DisplayMember = "Key";
      cbxIpVersion.ValueMember = "Value";
      cbxIpVersion.DataSource = new BindingSource(dctIpVersion, null);

      AxSms.SmppServer oSmppServer = new AxSms.SmppServer();
      var dctCertificate = new Dictionary<string, string>();
      dctCertificate.Add("<< Not Secured >>", "");

      oSmppServer.CertificateStore = objSmsConstants.SMPP_CERTIFICATESTORE_CURRENTUSER;
      var sCertificate = oSmppServer.FindFirstMyServerCertificate();
      while (oSmppServer.LastError == 0)
      {
        dctCertificate.Add(sCertificate, sCertificate);
        sCertificate = oSmppServer.FindNextMyServerCertificate();
      }

      cbxCertificate.DisplayMember = "Key";
      cbxCertificate.ValueMember = "Value";
      cbxCertificate.DataSource = new BindingSource(dctCertificate, null);
    }

    private void setupListboxes()
    {
      lvSessions.Columns.Clear();
      lvSessions.Columns.Add("Client IP", 230, HorizontalAlignment.Left);
      lvSessions.Columns.Add("Port", 115, HorizontalAlignment.Left);
      lvSessions.Columns.Add("SystemId", lvSessions.Width - 350, HorizontalAlignment.Left);

      lvMessages.Columns.Clear();
      lvMessages.Columns.Add("Dir.", 40, HorizontalAlignment.Left);
      lvMessages.Columns.Add("SystemID", 90, HorizontalAlignment.Left);
      lvMessages.Columns.Add("ToAddress", 85, HorizontalAlignment.Left);
      lvMessages.Columns.Add("Reference", 75, HorizontalAlignment.Left);
      lvMessages.Columns.Add("State", 75, HorizontalAlignment.Left);
      lvMessages.Columns.Add("Body", lvMessages.Width - 369, HorizontalAlignment.Left);
    }

    private void llblUrlRecipientFormat_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
    {
      Process.Start("https://www.auronsoftware.com/knowledge-base/#sms-component");
    }

    private void btnSendOptions_Click(object sender, EventArgs e)
    {
      objFrmSendAdvanced.ShowDialog();
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
