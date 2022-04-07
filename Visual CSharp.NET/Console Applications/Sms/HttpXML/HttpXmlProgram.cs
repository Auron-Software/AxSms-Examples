//-----------------------------------------------------------------------
// <copyright file="HttpXmlProgram.cs" company="Auron">
//     Copyright (c) Auron Software - www.auronsoftware.com
// </copyright>
//-----------------------------------------------------------------------

namespace HttpXmlProgram
{
    using System;
    using System.IO;
    using System.Xml;
    using AxSms;
    using Microsoft.Win32;

    class HttpXmlProgram
    {       
        static void Main(string[] args)
        {
            AxSms.Http objHttp = new AxSms.Http();
            AxSms.DemoAccount objDemoAccount = new AxSms.DemoAccount();

            string strSystemID = objDemoAccount.SystemId;
            string strPassword = objDemoAccount.Password;

            // A license key is required to unlock this component after the trial period has expired.
            // Assign the LicenseKey property every time a new instance of this component is created (see code below). 
            // Alternatively, the LicenseKey property can be set automatically. This requires the license key to be stored in the registry.
            // For details, see manual, chapter "Product Activation".
            /*
            objHttp.LicenseKey = "XXXXX-XXXXX-XXXXX";
            */

            Console.WriteLine("Auron SMS Component {0}\nBuild: {1}\nModule: {2}\nLicense Status: {3}\nLicense Key: {4}\n", 
                objHttp.Version, objHttp.Build, objHttp.Module, objHttp.LicenseStatus, objHttp.LicenseKey);

            // Set Logfile (optional, for debugging purposes)
            objHttp.LogFile = Path.GetTempPath() + "Http.log";
            Console.WriteLine("Log file used: {0}\n", objHttp.LogFile);
           
            // Create an XML document which contains the SMS message to send.
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
            xmlSettings.SetAttribute("bodyformat", "0");
            xmlSettings.SetAttribute("requestdeliveryreport", "True");
            xmlSettings.SetAttribute("datacoding", "0");
            xmlRoot.AppendChild(xmlSettings);

            XmlElement xmlMessage = xmlDoc.CreateElement("message");
            xmlMessage.SetAttribute("toaddress", ReadInput( "Enter recipient: ", false ) );

            XmlElement xmlBody = xmlDoc.CreateElement("body");
            xmlBody.InnerText = objHttp.Base64Encode(ReadInput("Type SMS text: ", false));
            xmlMessage.AppendChild(xmlBody);
            xmlRoot.AppendChild(xmlMessage);

            Console.WriteLine("Generating XML data to post...");
            Console.WriteLine(xmlDoc.OuterXml);            

            string strXmlToSend = xmlDoc.OuterXml;
            string strUrl = "https://gateway.auronsoftware.com:8181/sendsms/sendsmsHttpXML.asp";
            Console.WriteLine(string.Empty);
            string strXmlResponse = objHttp.Post(strUrl, strXmlToSend);
            Console.WriteLine("Post, result: {0} {1}", objHttp.LastError, objHttp.GetErrorDescription(objHttp.LastError));
            Console.WriteLine(string.Empty);
            Console.WriteLine("Response from server:");
            Console.WriteLine(strXmlResponse);

            Console.WriteLine("Ready.");
            Console.WriteLine("Press <ENTER> to continue.");
            Console.ReadLine();
        }        

        static private string ReadInput(string strTitle, bool bAllowEmpty)
        {
            string strInput, strReturn = string.Empty;

            Console.WriteLine(strTitle);
            do
            {
                Console.Write("  > ");
                strInput = Console.ReadLine();
                if (strInput.Length > 1)
                    strReturn = strInput;
            } while (strReturn == string.Empty && !bAllowEmpty);

            return strReturn;
        }
    }
}
