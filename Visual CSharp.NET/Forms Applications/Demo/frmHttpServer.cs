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
  public partial class frmHttpServer : Form
  {
    private AxSms.HttpServer objHttpServer;

    public frmHttpServer()
    {
      objHttpServer = new AxSms.HttpServer();

      InitializeComponent();
    }
    private void frmHttpServer_Load(object sender, EventArgs e)
    {
      setupListboxes();

      txtLogFile.Text = Path.GetTempPath() + "HttpServer.log";
      txtLogFile.ReadOnly = true;

      objHttpServer.LogFile = txtLogFile.Text;

      lblInfo.Text = String.Format("Auron SMS Component {0}; Build: {1}; Module: {2}", 
        objHttpServer.Version, objHttpServer.Build, objHttpServer.Module);

      UpdateControls();

      // Enable the receive timer. This timer will be used to check the http server object to
      // see if any new message have been received.
      this.tmrCheckReceive.Enabled = true;
      this.tmrCheckReceive.Interval = 100;
    }

    private void UpdateControls()
    {
      bool bIsStarted = objHttpServer.IsStarted;
      btnStartStop.Text = bIsStarted ? "Stop": "Start";
      btnBrowse.Enabled = bIsStarted;

      txtUrl.Enabled = !bIsStarted;

      lvRequestLog.Enabled = bIsStarted;
      txtLastRequestBody.Enabled = bIsStarted;
      txtLastRequestHeaders.Enabled = bIsStarted;
    }

    private void setupListboxes()
    {
      lvRequestLog.Clear();
      lvRequestLog.Columns.Add("Url", 400);
    }

    private void btnView_Click(object sender, EventArgs e)
    {
      if (File.Exists(txtLogFile.Text))
      {
        Process.Start(txtLogFile.Text);
      }
    }

    private void lnkFindOutMore_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
    {
      Process.Start("https://www.auronsoftware.com/kb/sms-component/api-reference/axsms-httpserver/");
    }

    private void btnBrowse_Click(object sender, EventArgs e)
    {
      Process.Start(txtUrl.Text);
    }

    private void btnStartStop_Click(object sender, EventArgs e)
    {
      if (objHttpServer.IsStarted)
      {
        objHttpServer.Shutdown();
        setupListboxes();
        txtLastRequestBody.Text = "";
        txtLastRequestHeaders.Text = "";
        txtResult.Text = "";

        UpdateControls();

        return;
      }

      objHttpServer.Startup();
      if (UpdateResult(objHttpServer.LastError) != 0) return;

      objHttpServer.AddUrl(txtUrl.Text);
      if (UpdateResult(objHttpServer.LastError) != 0)
      {
        objHttpServer.Shutdown();
        return;
      }

      UpdateControls();
    }

    private int UpdateResult(int nErrorCode)
    {
      txtResult.Text = nErrorCode.ToString() + ": " + objHttpServer.GetErrorDescription(nErrorCode);
      return nErrorCode;
    }

    private void tmrCheckReceive_Tick(object sender, EventArgs e)
    {
      if (!objHttpServer.IsStarted) return;

      // see if a request is available; exit if no request is available
      objHttpServer.WaitForRequest(0);
      if (objHttpServer.LastError != 0)
        return;

      lvRequestLog.Items.Add(objHttpServer.RequestUrl);
      txtLastRequestHeaders.Text = objHttpServer.RequestHeaders;

      if (objHttpServer.RequestBodyIsBinary)
        txtLastRequestBody.Text = "<binary request body>";
      else if (objHttpServer.RequestBodyString == "")
        txtLastRequestBody.Text = "<empty request body>";
      else 
        txtLastRequestBody.Text = objHttpServer.RequestBodyString;

      objHttpServer.ClearResponse();
      objHttpServer.ResponseCode = 200;
      objHttpServer.ResponseReason = "OK";
      objHttpServer.ResponseBodyString = 
        "<html><body><h1>Welcome to the Auron Software HTTP Server API demo</h1>" + 
        "<p>Your request has been logged.</p></body></html>";
      objHttpServer.SendResponse();
    }
  }
}
