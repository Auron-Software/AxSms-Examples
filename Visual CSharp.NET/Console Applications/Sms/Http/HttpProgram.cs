
//-----------------------------------------------------------------------
// <copyright file="HttpProgram.cs" company="Auron">
//     Copyright (c) Auron Software - www.auronsoftware.com
// </copyright>
//-----------------------------------------------------------------------

namespace HttpProgram
{
    using System;
    using System.IO;
    using AxSms;
    using Microsoft.Win32;

    class HttpProgram
    {        
        static void Main(string[] args)
        {
            AxSms.Http objHttp = new AxSms.Http();
            AxSms.Message objSmsMessage = new AxSms.Message();
            AxSms.Constants objSmsConstants = new AxSms.Constants();

            string strUrl = string.Empty;

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

            // Prompt user for an HTTP Post URL. By default, the Auron HTTP gateway is used
            strUrl = ReadInput("Enter HTTP Post provider URL.\nType <ENTER> to use the free Auron SMS gateway", true);
            if (strUrl == string.Empty)
            {
                AxSms.DemoAccount objDemoAccount = new AxSms.DemoAccount();
                string strUsername = objDemoAccount.SystemId;
                string strPassword = objDemoAccount.Password;

                // The URL is a template. Use the placeholder constants to determine where different SMS properties will be added
                // to the URL when an SMS message is send.
                strUrl = string.Format("gateway.auronsoftware.com:8080/sendsms/default.asp?username={0}&password={1}&text={2}&to={3}",
                    strUsername, strPassword, objSmsConstants.HTTP_PLACEHOLDER_BODY, objSmsConstants.HTTP_PLACEHOLDER_TOADDRESS);
                Console.WriteLine(strUrl);
            }

            Console.WriteLine(string.Empty);
            objSmsMessage.Clear();
            objSmsMessage.ToAddress = ReadInput("Enter recipient ", false);
            objSmsMessage.Body = ReadInput("Enter message body: ", false);

            objHttp.url = strUrl;            

            // Send the message
            objHttp.SendSms(objSmsMessage, objSmsConstants.MULTIPART_ACCEPT);
            Console.WriteLine("SendSms, result: {0} {1}", objHttp.LastError, objHttp.GetErrorDescription(objHttp.LastError));
            Console.WriteLine("Response from provider: " + objHttp.LastResponseCode);
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
