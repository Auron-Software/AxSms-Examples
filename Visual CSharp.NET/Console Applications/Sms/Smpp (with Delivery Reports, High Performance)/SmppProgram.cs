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
            string strServer = string.Empty, strSystemType = string.Empty, strSystemID = string.Empty;
            string strSystemPassword = string.Empty, strReference = string.Empty;

            Console.WriteLine("*******************************************************************************\n\n" +
                "WARNING: This example will spend all of your assigned demo credits at once !\n\n" +
                "To avoid spending credits you can connect to the Auron SMPP simulator\n" +
                "instead. Download the SMPP Simulator from www.Auron.com/freeware\n\n" +
                "*******************************************************************************\n");

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
            string strToAddress = ReadInput("Enter receipient: ", false);

            // Connect to the SMPP server. This starts a background thread which maintains the communication with the SMPP server.
            objSmpp.Connect(strServer, nServerPort, 5000, false);
            Console.WriteLine("Connect, result: {0} ({1})", objSmpp.LastError, objSmpp.GetErrorDescription(objSmpp.LastError));
            if (objSmpp.LastError != 0)
            {
                Console.WriteLine("Press <ENTER> to continue.");
                Console.ReadLine();
                return;
            }

            // Bind to the SMPP server as transceiver using your SystemID(login) and password
            objSmpp.Bind(objSmsConstants.SMPP_BIND_TRANSCEIVER, strSystemID, strSystemPassword, strSystemType, objSmsConstants.SMPP_VERSION_34, 0, 0, string.Empty, 10000);
            Console.WriteLine("Bind, result: {0} ({1})", objSmpp.LastError, objSmpp.GetErrorDescription(objSmpp.LastError));
            if (objSmpp.LastError != 0)
            {
                objSmpp.Disconnect();
                Console.WriteLine("Press <ENTER> to continue.");
                Console.ReadLine();
                return;
            }

            // This is an example for a mainloop in a high-performance bulk-sms application. This applicaiton sends out a pre-determined
            // number of SMS messages while receiving messages as well. Quit the mainloop by pressing 'q'.
            int nSendNumber = 10;
            int nSmsId = 0;
            Console.WriteLine();
            Console.WriteLine("Enter mainloop; press 'q' to quit...");
            while (objSmpp.IsBound &&
                (!(Console.KeyAvailable && Console.ReadKey().Key == ConsoleKey.Q)))
            {
                AxSms.Message objSms;
                
                // This loop will start with sending out a predefined number of SMS messages 
                if (nSendNumber > 0)
                {
                    // Prepare to send a batch of SMS messages by first checking how many messages can be sent at once.
                    // The Sms submit space is related to the queue size for SMS submissions: objSmpp.MaxSmsSubmissions
                    int nSubmissions = objSmpp.CountSmsSubmitSpace();
                    if (nSubmissions >= nSendNumber) nSubmissions = nSendNumber;
                    for (int i = 0; i < nSubmissions; i++)
                    {
                        objSms = GenerateSms(nSendNumber, strToAddress);
                        objSms.UserTag = nSmsId;
                        nSmsId++;
                        nSendNumber--;

                        // It's possible to accept multipart messages because by calling 'CountSmsSubmitSpace' the
                        // number of messages you can submit is guaranteed, even if they are multipart messages.
                        objSmpp.SubmitSms(objSms, objSmsConstants.MULTIPART_ACCEPT);
                        Console.WriteLine("SubmitSms, result: {0}, ({1})", objSmpp.LastError, 
                            objSmpp.GetErrorDescription(objSmpp.LastError));
                    }
                }

                // Process all SMS updates. SMS updates are generated if the SMPP server responds to a submitted SMS message.
                objSms = objSmpp.FetchSmsUpdate();
                while (objSmpp.LastError == 0)
                {   // If the command status is something other than 0 (SMPP_ESME_ROK) the message is rejected
                    Console.WriteLine("SMS update, command status: {0}; SMS reference: {1}",
                        objSmsConstants.SmppEsmeToString(objSms.SmppCommandStatus), objSms.Reference);
                    if (objSms.SmppCommandStatus == objSmsConstants.SMPP_ESME_RTHROTTLED ||
                        objSms.SmppCommandStatus == objSmsConstants.SMPP_ESME_RMSGQFUL)
                    {   // The server is unable to handle the message right now, it's trying to throttle message volume.
                        // we can try to send it again right away to keep as close to the maximum throughput as possible.
                        // Don't mind the multipart flag here. The message returned by fetchupdate is always a single part.
                        Console.WriteLine("Retrying this message");
                        objSmpp.SubmitSms(objSms, objSmsConstants.MULTIPART_ACCEPT);
                    }
                    objSms = objSmpp.FetchSmsUpdate();
                }

                // Receive incoming messages, only receive a set number of messages at once. This is especially important
                // in high-volume applications. If there is no cap on the number of messages received here this loop can 
                // take an increasing ammount of time. 
                int nMaxReceive = 10;
                objSms = objSmpp.ReceiveMessage();
                while (objSmpp.LastError == 0 && nMaxReceive > 0)
                {
                    Console.WriteLine("Receive SMS from: {0}\nBody: {1}", objSms.FromAddress, objSms.Body);
                    nMaxReceive--;
                    objSms = objSmpp.ReceiveMessage();                    
                }

                Thread.Sleep(1);
            }

            // If the server disconnected while we are still sending, display the messages that where either
            // queued or sent but not acknowledged. This way we can still update our datamodel accordingly.
            var objMessage = objSmpp.FetchNotSubmitted();
            while (objSmpp.LastError == 0)
            {
                Console.WriteLine("This message was queued but never sent: [%d]", objMessage.UserTag);
                objMessage = objSmpp.FetchNotSubmitted();
            }

            objMessage = objSmpp.FetchNotUpdated();
            while (objSmpp.LastError == 0)
            {
                Console.WriteLine("This message was sent but never updated: [%d]; sequence: [%d]", 
                    objMessage.UserTag, objMessage.SmppSequenceNumber);
                objMessage = objSmpp.FetchNotUpdated();
            }
            
            // Unbind and Disconnect
            objSmpp.Unbind();
            objSmpp.Disconnect();

            Console.WriteLine("Disconnected.");
            Console.WriteLine("Ready.");
            Console.WriteLine("Press <ENTER> to continue.");
            Console.ReadLine();
        }

        static private AxSms.Message GenerateSms(int nNumber, string strTo)
        {
            AxSms.Message objSms = new AxSms.Message();
            objSms.ToAddress = strTo;
            objSms.Body = string.Format("{0} bottle{1} of beer on the wall, {0} bottle{1} of beer. ",
                nNumber, nNumber == 1 ? "": "s");

            objSms.Body += "Take one down and pass it around, ";
            nNumber--;

            if (nNumber <= 0)
                objSms.Body += "no more bottles of beer on the wall.";
            else
                objSms.Body += string.Format("{0} bottle{1} of beer on the wall.",
                    nNumber, nNumber == 1 ? "" : "s");

            return objSms;
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
