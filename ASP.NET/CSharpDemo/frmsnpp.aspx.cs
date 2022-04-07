//-----------------------------------------------------------------------
// <copyright file="frmsnpp.aspx.cs" company="Auron">
//     Copyright (c) Auron Software - www.auronsoftware.com
// </copyright>
// <author>Dennis van de Giessen</author>
//-----------------------------------------------------------------------
namespace CScharpDemo
{
    using System;
    using System.IO;
    using AxSms;

	public partial class frmpagersnpp : System.Web.UI.Page
	{
		Snpp objSnpp = new Snpp();
		
		protected void Page_Load(object sender, EventArgs e)
		{
            if (IsPostBack) return;

            lblInfo.Text = "Module [" + objSnpp.Module + "]; Build [" + objSnpp.Build + "]";
			
			objSnpp.LogFile = Path.GetTempPath() + "Snpp.log";
            txtLogFile.Text = objSnpp.LogFile;
			// Windows default: 'C:\Users\%USERNAME%\AppData\Local\Temp\Auron.Snpp.log'
			
			ddlServers.Items.Clear();
			ddlServers.Items.Add("snpp.myairmail.com");
			ddlServers.Items.Add("snpp.pageallcom.com");
			ddlServers.Items.Add("snpp.americanmessaging.net");
			ddlServers.Items.Add("snpp.attws.net");
			ddlServers.Items.Add("pmcl.net");
			ddlServers.Items.Add("page.contactwireless.com");
			ddlServers.Items.Add("www.webpager.us");
			ddlServers.Items.Add("epage.graylink.com");
			ddlServers.Items.Add("alphapage.cc");
			ddlServers.Items.Add("mail2.illinoissignal.net");
			ddlServers.Items.Add("ipnpaging.com");
			ddlServers.Items.Add("snpp.lauttamus.com");
			ddlServers.Items.Add("snpp.mobilcom.net");
			ddlServers.Items.Add("pecos.nextel.com");
			ddlServers.Items.Add("snpp.nextel.com");
			ddlServers.Items.Add("snpp.ucom.com");
			ddlServers.Items.Add("mail.pagerpeople.com");
			ddlServers.Items.Add("snpp.sbc.com");
			ddlServers.Items.Add("snpp.acswireless.com");
			ddlServers.SelectedIndex = 1;			
		}
		
		protected void btnSend_Click(object sender, EventArgs e)
		{			
			objSnpp.Clear();
			objSnpp.Server = ddlServers.Text;
			objSnpp.ServerPort = int.Parse(txtPort.Text.ToString());
			objSnpp.ServerTimeout = 2000;
			
			// Send
			objSnpp.Send(txtPagerID.Text,txtMessage.Text);
			UpdateResult(objSnpp.LastError, objSnpp.ProviderResponse);
		}
		
		private void UpdateResult(int nResult, string strLastResponse)
		{
			txtResult.Text = nResult.ToString() + ": " + objSnpp.GetErrorDescription(nResult);
			txtResponse.Text = strLastResponse;
		}
	}
}
