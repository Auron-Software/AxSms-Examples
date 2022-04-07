//-----------------------------------------------------------------------
// <copyright file="frmhttpxml.aspx.cs" company="Auron">
//     Copyright (c) Auron Software - www.auronsoftware.com
// </copyright>
// <author>Dennis van de Giessen</author>
//-----------------------------------------------------------------------
namespace CScharpDemo
{
    using System;
    using System.IO;
    using System.Xml;
    using AxSms;
    using Microsoft.Win32;

	public partial class frmhtmlxml : System.Web.UI.Page
	{
        AxSms.Http objHttp = new AxSms.Http();
        AxSms.Constants objSmsConstants = new AxSms.Constants();
        AxSms.Message objSmsMessage = new AxSms.Message();
		
		protected void Page_Load(object sender, EventArgs e)
		{
            if (IsPostBack) return;

			string strSystemID = string.Empty;
			string strPassword = string.Empty;
			
			objHttp.LogFile = Path.GetTempPath() + "HttpXml.log";
            txtLogFile.Text = objHttp.LogFile;
			// Windows default: 'C:\Users\%USERNAME%\AppData\Local\Temp\Auron.HttpXml.log'

            AxSms.DemoAccount objDemoAccount = new AxSms.DemoAccount();
            strSystemID = objDemoAccount.SystemId;
            strPassword = objDemoAccount.Password;
			
            lblInfo.Text = "Module [" + objHttp.Module + "]; Build [" + objHttp.Build + "]";

            //Create XML Template
            XmlDocument xmlDoc = new XmlDocument();
            XmlDeclaration xmlDec = xmlDoc.CreateXmlDeclaration("1.0", null, null);

            xmlDoc.AppendChild(xmlDec);

            XmlElement xmlRoot = xmlDoc.CreateElement("httpmessage");
            xmlDoc.AppendChild(xmlRoot);

            XmlElement xmlCredentials = xmlDoc.CreateElement("credentials");
            xmlCredentials.SetAttribute("systemid", strSystemID);
            xmlCredentials.SetAttribute("password", strPassword);
            xmlRoot.AppendChild(xmlCredentials);

            XmlElement xmlSettings = xmlDoc.CreateElement("settings");
            xmlSettings.SetAttribute("bodyformat", objSmsConstants.BODYFORMAT_TEXT.ToString());                
            xmlSettings.SetAttribute("datacoding", objSmsConstants.DATACODING_DEFAULT.ToString());
            xmlRoot.AppendChild(xmlSettings);

            XmlElement xmlMessage = xmlDoc.CreateElement("message");
            xmlMessage.SetAttribute("toaddress", objSmsConstants.HTTP_PLACEHOLDER_TOADDRESS);

            XmlElement xmlBody = xmlDoc.CreateElement("body");
            xmlBody.InnerText = objSmsConstants.HTTP_PLACEHOLDER_BODY;
            xmlMessage.AppendChild(xmlBody);
            xmlRoot.AppendChild(xmlMessage);
            txtXmlTemplate.Text = xmlDoc.OuterXml;
		}	
		
		protected void btnSendMessage_Click(object sender, EventArgs e)
		{
            objSmsMessage.Clear();
            objSmsMessage.Body = txtBody.Text;
            objSmsMessage.ToAddress = txtToAddress.Text;

            objHttp.Clear();
            objHttp.url = txtHost.Text;
            objHttp.PostBody = txtXmlTemplate.Text;

            txtServerResponse.Text = objHttp.SendSms(objSmsMessage, objSmsConstants.MULTIPART_ACCEPT);
		}
	}
}
