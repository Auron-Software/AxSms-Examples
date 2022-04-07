//-----------------------------------------------------------------------
// <copyright file="frmDemo.cs" company="Auron">
//     Copyright (c) Auron Software - www.auronsoftware.com
// </copyright>
// <author>Dennis van de Giessen</author>
//-----------------------------------------------------------------------
namespace Demo
{
  using System;
  using System.Diagnostics;
  using System.Windows.Forms;
  using Microsoft.Win32;
  using System.IO;
  using System.Threading;
  using AxSms;

  public partial class frmDemo : Form
  {
    private frmGsm objFrmGsm;
    private frmSmpp objFrmSmpp;
    private frmHttp objFrmHttp;
    private frmSnpp objFrmSnpp;
    private frmLicensing objFrmLicensing;
    private frmUssd objFrmUssd;
    private frmHttpXml objFrmHttpXml;
    private frmSmppServer objFrmSmppServer;
    private frmAndroid objFrmAndroid;
    private frmHttpServer objFrmHttpServer;

        public frmDemo()
    {
      InitializeComponent();

      AxSms.DemoAccount objDemoAccount = new AxSms.DemoAccount();
      AxSms.Gsm objGsm = new AxSms.Gsm();
      objFrmGsm = new frmGsm();
      objFrmSmpp = new frmSmpp(objDemoAccount.SystemId, objDemoAccount.Password, "gateway.auronsoftware.com");
      objFrmHttp = new frmHttp();
      objFrmSnpp = new frmSnpp();
      objFrmLicensing = new frmLicensing();
      objFrmUssd = new frmUssd();
      objFrmHttpXml = new frmHttpXml();
      objFrmSmppServer = new frmSmppServer();
      objFrmAndroid = new frmAndroid();
      objFrmHttpServer = new frmHttpServer();

      txtVersion.Text = string.Format("{0}; Build {1}; Module {2}", objGsm.Version, objGsm.Build, objGsm.Module);

    }

    private void llblUrlSmsToolkit_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
    {
      Process.Start("https://www.auronsoftware.com/products/sms-component/");
    }

    private void btnGsm_Click(object sender, EventArgs e)
    {
      objFrmGsm.ShowDialog();
    }

    private void btnSmpp_Click(object sender, EventArgs e)
    {
      objFrmSmpp.ShowDialog();
    }

    private void btnHttp_Click(object sender, EventArgs e)
    {
      objFrmHttp.ShowDialog();
    }

    private void btnSnpp_Click(object sender, EventArgs e)
    {
      objFrmSnpp.ShowDialog();
    }

    private void btnLicensing_Click(object sender, EventArgs e)
    {
      objFrmLicensing.ShowDialog();
    }

    private void btnUssd_Click(object sender, EventArgs e)
    {
      objFrmUssd.ShowDialog();
    }

    private void btnHttpXml_Click(object sender, EventArgs e)
    {
      objFrmHttpXml.ShowDialog();
    }

    private void btnSmppServerClient_Click(object sender, EventArgs e)
    {
      objFrmSmppServer.ShowDialog();
    }

    private void frmDemo_Load(object sender, EventArgs e)
    {

    }

    private void btnAndroid_Click(object sender, EventArgs e)
    {
      objFrmAndroid.ShowDialog();
    }

    private void btnHttpServer_Click(object sender, EventArgs e)
    {
      objFrmHttpServer.ShowDialog();
    }
  }
}
