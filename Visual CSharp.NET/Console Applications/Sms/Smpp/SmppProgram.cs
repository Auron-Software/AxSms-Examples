//-----------------------------------------------------------------------
// <copyright file="SmppProgram.cs" company="Auron">
//     Copyright (c) Auron Software - www.auronsoftware.com
// </copyright>
//-----------------------------------------------------------------------

namespace SmppProgram
{
    using System;
    using System.IO;
    using System.Threading;
    using AxSms;
    using Microsoft.Win32;

    class SmppProgram
    {
        static void Main(string[] args)
        {
            AxSms.Smpp objSmpp = new AxSms.Smpp();
            AxSms.Constants objSmsConstants = new AxSms.Constants();

            int nServerPort = 0;
            string strServer = string.Empty, strSystemType = string.Empty;
            string strSystemID = string.Empty, strSystemPassword = string.Empty;
            bool bResult;

            // A license key is required to unlock this component after the trial period has expired.
            // Assign the LicenseKey property every time a new instance of this component is created (see code below). 
            // Alternatively, the LicenseKey property can be set automatically. This requires the license key to be stored in the registry.
            // For details, see manual, chapter "Product Activation".
            /*
            objSmpp.LicenseKey = "XXXXX-XXXXX-XXXXX";
            */

            Console.WriteLine("Auron SMS Component {0}\nBuild: {1}\nModule: {2}\nLicense Status: {3}\nLicense Key: {4}\n", 
                objSmpp.Version, objSmpp.Build, objSmpp.Module, objSmpp.LicenseStatus, objSmpp.LicenseKey);

            // Set Logfile (optional, for debugging purposes)
            objSmpp.LogFile = Path.GetTempPath() + "Smpp.log";
            Console.WriteLine("Log file used: {0}\n", objSmpp.LogFile);

            // Prompt user for SMPP server details; by default, the Auron SMPP demo is used
            ReadSmppProvider(objSmpp, ref strServer, ref nServerPort, ref strSystemType, ref strSystemID, ref strSystemPassword);

            // Connect to the SMPP server. This starts a background thread which maintains the communication with the SMPP server.
            objSmpp.Connect(strServer, nServerPort, 5000, false);
            Console.WriteLine("Connect, result: {0} {1}", objSmpp.LastError, objSmpp.GetErrorDescription(objSmpp.LastError));            
            if (objSmpp.LastError != 0)
            {
                Console.WriteLine("Press <ENTER> to continue.");
                Console.ReadLine();
                return;
            }

            // Bind to the SMPP server as transceiver using your SystemID(login) and password
            objSmpp.Bind(objSmsConstants.SMPP_BIND_TRANSCEIVER, strSystemID, strSystemPassword, strSystemType, objSmsConstants.SMPP_VERSION_34, 0, 0, string.Empty, 0);
            Console.WriteLine("Bind, result: {0} {1}", objSmpp.LastError, objSmpp.GetErrorDescription(objSmpp.LastError));
            if (objSmpp.LastError != 0)
            {
                objSmpp.Disconnect();
                Console.WriteLine("Press <ENTER> to continue.");
                Console.ReadLine();
                return;
            }

            // Create an SMS Message
            AxSms.Message objSmsMessage = new AxSms.Message();
            objSmsMessage.ToAddress = ReadInput("Enter recipient (recommended to start with a '+')", false);
            objSmsMessage.Body = ReadInput("Enter the message text you want to send to the recipient", false);

            // Submit the SMS message. This submits the SMS to the background thread which sends it to the SMPP server.
            objSmpp.SubmitSms(objSmsMessage, objSmsConstants.MULTIPART_ACCEPT);
            Console.WriteLine("SubmitSms, result: {0} {1}", objSmpp.LastError, objSmpp.GetErrorDescription(objSmpp.LastError));
            if (objSmpp.LastError != 0)
            {
                objSmpp.Unbind();
                objSmpp.Disconnect();
                Console.WriteLine("Press <ENTER> to continue.");
                Console.ReadLine();
                return;
            }

            // Wait for the server to reply to the SMS message. The server can either accept it or reject it with an error status.
            // Error status codes are partly provider specific. When using the Auron demo gateway, status 1025 represents
            // 'No more credits'
            bResult = objSmpp.WaitForSmsUpdate(5000);
            Console.WriteLine("WaitForSmsUpdate, result: {0}", bResult ? "TRUE" : "FALSE");
            if (bResult)
            {   // The server has an update available, let's see if our SMS was accepted.
                objSmsMessage = objSmpp.FetchSmsUpdate();
                if (objSmsMessage.SmppCommandStatus == 0)
                    Console.WriteLine("Sms sent !");
                else
                    Console.WriteLine("Sms rejected: {0}", 
                        objSmsConstants.SmppEsmeToString(objSmsMessage.SmppCommandStatus));
            }

            // Unbind and Disconnect
            objSmpp.Unbind();
            objSmpp.Disconnect();

            Console.WriteLine("Disconnected.");
            Console.WriteLine("Ready.");
            Console.WriteLine("Press <ENTER> to continue.");
            Console.ReadLine();
        }

        static private string ReadInput( string strTitle, bool bAllowEmpty )
        {
            string strInput;
            Console.WriteLine(strTitle + ": ");
            do
            {
                Console.Write("  > ");
                strInput = Console.ReadLine();
            }
            while (strInput == string.Empty && !bAllowEmpty);
            return strInput;
        }

        static private void ReadSmppProvider(Smpp objSmpp, ref string strServer, ref int nPort, ref string strSystemType, ref string strSystemID, ref string strSystemPassword)
        {
            string strPort;

            strServer = ReadInput("Enter hostname of SMPP server. Type <ENTER> to use the free Auron SMPP gateway", true);

            if (strServer == string.Empty)
            {
                strServer = "gateway.auronsoftware.com";
                nPort = 2775;
                strSystemType = "SMPP";

                AxSms.DemoAccount objDemoAccount = new AxSms.DemoAccount();

                strSystemID = objDemoAccount.SystemId;
                strSystemPassword = objDemoAccount.Password;
            }
            else
            {
                strPort = ReadInput("Enter portnumber of SMPP server. Type <ENTER> to use default port 2775", true);
                if (strPort == string.Empty)
                    nPort = 2775;
                else
                    nPort = int.TryParse(strPort, out nPort) ? nPort : 2775;

                strSystemType = ReadInput("Enter SystemType. Type <ENTER> to use default SMPP", true);
                if (strSystemType == string.Empty)
                    strSystemType = "SMPP";
                strSystemID = ReadInput("Enter account systemID", false);
                strSystemPassword = ReadInput("Enter account password", true);
            }

            Console.WriteLine("\r\n" + "Provider settings: ");
            Console.WriteLine("  Server: " + strServer);
            Console.WriteLine("  ServerPort: " + nPort);
            Console.WriteLine("  SystemID: " + strSystemID);
            Console.WriteLine("  SystemPassword: " + strSystemPassword);
            Console.WriteLine(string.Empty);
        }

    }
}
