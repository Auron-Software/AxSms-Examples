//-----------------------------------------------------------------------
// <copyright file="frmhttp.aspx.cs" company="Auron">
//     Copyright (c) Auron Software - www.auronsoftware.com
// </copyright>
// <author>Dennis van de Giessen</author>
//-----------------------------------------------------------------------
namespace CScharpDemo
{
    using System;
    using System.IO;
    using AxSms;
    using Microsoft.Win32;

	public partial class frmhtml : System.Web.UI.Page
	{
		Http objHttp = new Http();
        AxSms.Constants objSmsConstants = new AxSms.Constants();
        AxSms.Message objSmsMessage = new AxSms.Message();
		
		protected void Page_Load(object sender, EventArgs e)
		{
            if (IsPostBack) return;

			string strSystemID = string.Empty;
			string strPassword = string.Empty;
			
			objHttp.LogFile = Path.GetTempPath() + "Http.log";
            txtLogFile.Text = objHttp.LogFile;
			// Windows default: 'C:\Users\%USERNAME%\AppData\Local\Temp\Auron.Http.log'

            AxSms.DemoAccount objDemoAccount = new AxSms.DemoAccount();
            strSystemID = objDemoAccount.SystemId;
            strPassword = objDemoAccount.Password;
			
			txtUrl.Text = string.Format("https://gateway.auronsoftware.com:8181/sendsms/default.asp?username={0}&password={1}&text={2}&to={3}",
				strSystemID,
				strPassword,
				objSmsConstants.HTTP_PLACEHOLDER_BODY,
				objSmsConstants.HTTP_PLACEHOLDER_TOADDRESS);
			
            lblInfo.Text = "Module [" + objHttp.Module + "]; Build [" + objHttp.Build + "]";
		}	
		
		protected void btnSendMessage_Click(object sender, EventArgs e)
		{
			objSmsMessage.Clear();
			objSmsMessage.Body = txtBody.Text;
			objSmsMessage.ToAddress = txtToAddress.Text;
			
			objHttp.Clear();
			objHttp.url = txtUrl.Text;
			
			objHttp.SendSms(objSmsMessage, objSmsConstants.MULTIPART_ACCEPT);
			UpdateResult(objHttp.LastError, objHttp.LastResponseCode.ToString());
		}
		
		private void UpdateResult(int nResult, string strLastResponse)
		{
			txtResult.Text = nResult.ToString() + ": " + objHttp.GetErrorDescription(nResult);
			txtLastResponse.Text = strLastResponse;
		}
	}
}
