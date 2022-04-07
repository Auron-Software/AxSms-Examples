//-----------------------------------------------------------------------
// <copyright file="frmHttpXml.cs" company="Auron">
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
    using System.Xml;
    using AxSms;
    using Microsoft.Win32;

    public partial class frmHttpXml : Form
    {
        private AxSms.Http objHttp;
        private AxSms.Constants objSmsConstants;


        public frmHttpXml()
        {
            InitializeComponent();
            objSmsConstants = new AxSms.Constants();
            objHttp = new AxSms.Http();
        } 

        private void btnSend_Click(object sender, EventArgs e)
        {
            string strBody = objHttp.Base64Encode(txtMessage.Text);
            string strToAddress = txtMessageRecipient.Text;
            string strXmlToSend = txtXmlTemplate.Text;

            strXmlToSend = strXmlToSend.Replace(objSmsConstants.HTTP_PLACEHOLDER_TOADDRESS, txtMessageRecipient.Text);
            strXmlToSend = strXmlToSend.Replace(objSmsConstants.HTTP_PLACEHOLDER_BODY, strBody);

            txtResponse.Text = objHttp.Post(txtHost.Text, strXmlToSend);
            UpdateResult(objHttp.LastError, objHttp.LastResponseCode.ToString());
        }

        private void frmHttpXml_Load(object sender, EventArgs e)
        {
            AxSms.DemoAccount objDemoAccount = new AxSms.DemoAccount();
            string strSystemID = objDemoAccount.SystemId;
            string strPassword = objDemoAccount.Password;

            txtLogFile.Text = string.Format("{0}{1}", Path.GetTempPath(), "Http.log");
            objHttp.LogFile = txtLogFile.Text;

            //Display SMS Component Info
            lblInfo.Text = String.Format("Auron SMS Component {0}; Build: {1}; Module: {2}", objHttp.Version, objHttp.Build, objHttp.Module);

            // Create the XML document to send.
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

        private void btnClearSent_Click(object sender, EventArgs e)
        {
            txtXmlTemplate.Text = string.Empty;
        }

        private void btnClearResponse_Click(object sender, EventArgs e)
        {
            txtResponse.Text = string.Empty;
        }

        private void btnView_Click(object sender, EventArgs e)
        {
            if (File.Exists(txtLogFile.Text))
            {
                Process.Start(txtLogFile.Text);
            }
        }

        private void UpdateResult(int nResult, string strLastResponse)
        {
            txtResult.Text = nResult.ToString() + ": " + objHttp.GetErrorDescription(nResult);
        }

        private void llblUrlRecipientFormat_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
            Process.Start("https://www.auronsoftware.com/knowledge-base/#sms-component");
        }       
    }
}
