using System;
using System.Collections.Generic;
using System.Text;
using System.IO;
using System.Threading;

namespace SmppServerProgram
{
    class SmppServerProgram
    {
        static void Main(string[] args)
        {
            AxSms.SmppServer objSmppServer = new AxSms.SmppServer();
            AxSms.Constants objSmsConstants = new AxSms.Constants();

            int iPort = 2775;

            // A license key is required to unlock this component after the trial period has expired.
            // Assign the LicenseKey property every time a new instance of this component is created (see code below). 
            // Alternatively, the LicenseKey property can be set automatically. This requires the license key to be stored in the registry.
            // For details, see manual, chapter "Product Activation".
            /*
            objSmppServer.LicenseKey = "XXXXX-XXXXX-XXXXX";
            */

            Console.WriteLine("Auron SMS Component {0}\nBuild: {1}\nModule: {2}\nLicense Status: {3}\nLicense Key: {4}\n",
                objSmppServer.Version, objSmppServer.Build, objSmppServer.Module, objSmppServer.LicenseStatus, objSmppServer.LicenseKey);

            // Set Logfile (optional, for debugging purposes)
            objSmppServer.LogFile = Path.GetTempPath() + "SmppServer.log";
            Console.WriteLine("Log file used: {0}\n", objSmppServer.LogFile);
            Console.WriteLine();

            // The Smpp server can generate message references automatically. This is a simple 8 character numerical reference, starting
            // at 0 and incremented by 1 for every message. When using the automatically generated references set the start offset here
            // to be sure that clients are not receiving duplicate message references.
            objSmppServer.LastReference = 0;

            // Start the SMPP server. This starts a background thread which listens on the specified port for incoming connections.
            // It's possible to start the server to listen to either IPv4, IPv6 or both. The 'Both' option is a so called 'dual stack'
            // implementation. It opens 2 sockets and listens on both.
            objSmppServer.Start(iPort, objSmsConstants.SMPP_IPVERSION_BOTH);
            if (objSmppServer.LastError == 0)
            {
                Console.WriteLine("SMPP Server listening on port: {0}", iPort);
                Console.WriteLine("To connect bind as 'Transceiver', login: 'test', password: 'password'");
            }
            else
            {
                Console.WriteLine("Error starting server: {0}, ({1})", objSmppServer.LastError,
                    objSmppServer.GetErrorDescription(objSmppServer.LastError));
                Console.WriteLine("Press <ENTER> to continue.");
                Console.ReadLine();
                return;
            }

            long lDeliverIntervalMs = 1000, lNextDeliver = Environment.TickCount + lDeliverIntervalMs;
            Console.WriteLine("Enter mainloop; press 'q' to quit...");
            while (objSmppServer.IsStarted &&
                (!(Console.KeyAvailable && Console.ReadKey().Key == ConsoleKey.Q)))
            {
                // Continuously iterate over all connected session to handle bind request and send/receive messages.
                AxSms.SmppSession objSession = objSmppServer.GetFirstSession();
                while (objSmppServer.LastError == 0)
                {
                    if (objSession.ConnectionState == objSmsConstants.SMPP_SESSIONSTATE_BINDING)
                    {   // Respond to the bind request, check if the credentials and bind-type is ok.
                        // If the response is other than 'ROK' the connection is closed automatically.
                        int iResponse = 0;
                        if (objSession.RequestedBind == objSmsConstants.SMPP_BIND_TRANSCEIVER &&
                            objSession.SystemId == "test" && objSession.Password == "password")
                            iResponse = objSmsConstants.SMPP_ESME_ROK;
                        else
                            iResponse = objSmsConstants.SMPP_ESME_RINVPASWD;

                        // Enable the next line to create a logfile for a session
                        //objSession.LogFile = "session.log"; 
                        objSession.RespondToBind(iResponse);
                        Console.WriteLine("Bind from: [{0}]:{1}, response: {2}",
                            objSession.Ip, objSession.Port, objSmsConstants.SmppEsmeToString(iResponse));
                    }

                    // Receive and handle any submission that a client may have done
                    int iMaxReceive = 10;
                    AxSms.Message objSms = objSession.ReceiveSubmitSms();
                    while (objSession.LastError == 0 && iMaxReceive > 0)
                    {   // Every submission requires a response, either accept or reject the message.
                        // If the message is accepted it needs a message reference to uniquely identify this 
                        // message in the future. The SmppServer automatically generates a reference which
                        // can be replaced by a custom reference.
                        //objSms.Reference = ".. custom message reference (max 64 chars) ..";
                        objSms.SmppCommandStatus = objSmsConstants.SMPP_ESME_ROK;       // Anything other than 'ROK' rejects the message
                        objSession.RespondToSubmitSms(objSms);

                        // Pass the message through the internal SMS assembler. This assembles multipart message if neccisary.
                        objSession.AssembleSms(objSms);

                        if (objSms.RequestDeliveryReport)
                        {   // This is a helper function to quickly generate a delivery report based on the message status.
                            // Since a delivery report is just an SMS messages with 'objSms.SmppIsDeliveryReport' set to true
                            // it's easy to generate your own delivery report for more flexibility.                             
                            objSms.SmppStatus = objSmsConstants.SMPP_MESSAGESTATE_DELIVERED;
                            objSession.DeliverReport(objSms);
                        }

                        iMaxReceive--;
                        objSms = objSession.ReceiveSubmitSms();
                    }

                    // Get complete messages. These are the messages that are entered through the previous 'AssembleSms' call.
                    objSms = objSession.GetAssembledSms(false);
                    while (objSession.LastError == 0)
                    {
                        Console.WriteLine("Message from: {0}, address: {1}, reference: {2}\nbody: {3}", 
                            objSession.SystemId, objSms.FromAddress, objSms.Reference, objSms.Body);
                        objSms = objSession.GetAssembledSms(false);
                    }

                    // Receive and handle SMS queries. In this example all SMS queries are rejected.
                    int iMaxQuery = 10;
                    objSms = objSession.ReceiveQuerySms();
                    while (objSession.LastError == 0 && iMaxQuery > 0)
                    {
                        Console.WriteLine("Sms query from: {0}, for reference: {1}", objSession.SystemId, objSms.Reference);
                        objSms.SmppCommandStatus = objSmsConstants.SMPP_ESME_RINVCMDID;
                        objSession.RespondToQuerySms(objSms);
                        objSms = objSession.ReceiveQuerySms();
                    }

                    // Delivery a test SMS every .. milliseconds. This call is asynchonous, use ReceiveDeliverResponse
                    // to find out if the client accepted the message
                    if (lNextDeliver < Environment.TickCount)
                    {
                        objSms = new AxSms.Message();
                        objSms.ToAddress = "1234567890";
                        objSms.FromAddress = "SMPPSAMPLE";
                        objSms.Body = "Test SMS from Auron SMS Component SMPP Server object";
                        objSession.DeliverSms(objSms, objSmsConstants.MULTIPART_ACCEPT);
                        if (objSession.LastError != 0)
                            Console.WriteLine("Error on DeliverSms: {0}, ({1})", objSmppServer.LastError,
                                objSmppServer.GetErrorDescription(objSmppServer.LastError));
                    }

                    // Test the delivery reponses from the connected session.
                    objSms = objSession.ReceiveDeliverResponse();
                    while (objSession.LastError == 0)
                    {
                        Console.WriteLine("Message delivered on {0}, status: {1}", objSession.SystemId,
                          objSmsConstants.SmppEsmeToString(objSms.SmppCommandStatus));
                        objSms = objSession.ReceiveDeliverResponse();
                    }

                    objSession = objSmppServer.GetNextSession();
                }                
                
                // Process sessions that have disconnected in the mean time.
                objSession = objSmppServer.GetClosedSession();
                while (objSmppServer.LastError == 0)
                {   // Get an overview of SMS messages that where supposed to be delivered to the message but either
                    // never made it out of the deliver queue or where never acknowledged by the client.
                    Console.WriteLine("Session [{0}]:{1} closed.", objSession.Ip, objSession.Port);
                    Console.WriteLine("Not Responded:");
                    AxSms.Message objNotResponsedSMS;
                    objNotResponsedSMS = objSession.FetchNotResponded();
                    while (objSession.LastError == 0)
                    {
                        Console.WriteLine("Usertag: {0}; SequenceNumber: {1}", objNotResponsedSMS.UserTag, objNotResponsedSMS.SmppSequenceNumber);
                        objNotResponsedSMS = objSession.FetchNotResponded();
                    }

                    Console.WriteLine("Not Delivered:");
                    AxSms.Message objNotDeliveredSMS;
                    objNotDeliveredSMS = objSession.FetchNotDelivered();
                    while (objSession.LastError == 0)
                    {
                        Console.WriteLine("Usertag: {0}", objNotDeliveredSMS.UserTag);
                        objNotDeliveredSMS = objSession.FetchNotDelivered();
                    }
                    
                    objSession = objSmppServer.GetClosedSession();
                }

                if (lNextDeliver < Environment.TickCount)
                    lNextDeliver = Environment.TickCount + lDeliverIntervalMs;

                Thread.Sleep(1);
            }

            objSmppServer.Stop();

            Console.WriteLine("Disconnected.");
            Console.WriteLine("Ready.");
            Console.WriteLine("Press <ENTER> to continue.");
            Console.ReadLine();
        }
    }
}
