//-----------------------------------------------------------------------
// <copyright file="SnppProgram.cs" company="Auron">
//     Copyright (c) Auron Software - www.auronsoftware.com
// </copyright>
//-----------------------------------------------------------------------

namespace SnppProgram
{
    using System;
    using System.Collections.Generic;
    using System.Text;
    using AxSms;
    using System.IO;

    class SnppProgram
    {
        static void Main(string[] args)
        {
            AxSms.Snpp objSnpp = new AxSms.Snpp();

            int nServerPort = 0, nServerTimeout = 0;
            string strServer = string.Empty, strRecipient = string.Empty, strMessage = string.Empty;

            // A license key is required to unlock this component after the trial period has expired.
            // Assign the LicenseKey property every time a new instance of this component is created (see code below). 
            // Alternatively, the LicenseKey property can be set automatically. This requires the license key to be stored in the registry.
            // For details, see manual, chapter "Product Activation".
            /*
            objSnpp.LicenseKey = "XXXXX-XXXXX-XXXXX";
            */

            Console.WriteLine("Auron SMS Component {0}\nBuild: {1}\nModule: {2}\nLicense Status: {3}\nLicense Key: {4}\n", 
                objSnpp.Version, objSnpp.Build, objSnpp.Module, objSnpp.LicenseStatus, objSnpp.LicenseKey);

            // Set Logfile (optional, for debugging purposes)
            objSnpp.LogFile = Path.GetTempPath() + "Snpp.log";
            Console.WriteLine("Log file used: {0}\n", objSnpp.LogFile);

            // Prompt user for SNPP provider
            ReadSnppProvider(ref strServer, ref nServerPort, ref nServerTimeout);

            objSnpp.Server = strServer;
            objSnpp.ServerPort = nServerPort;
            objSnpp.ServerTimeout = nServerTimeout;

            strRecipient = ReadInput("Enter recipient NOTE: Most providers require a 10 digit pager number.", false);
            strMessage = ReadInput("Type Pager text", false);

            // Send
            objSnpp.Send(strRecipient, strMessage);
            Console.WriteLine("Send, result: " + objSnpp.LastError + " (" + objSnpp.GetErrorDescription(objSnpp.LastError) + ")");
            if (objSnpp.LastError == 0)
                Console.WriteLine("Last response of SNPP provider: " + objSnpp.ProviderResponse);

            Console.WriteLine("Disconnected.");
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

        static private void ReadSnppProvider (ref string strServer, ref int nServerPort, ref int nServerTimeout)
        {
            string strInput;
            strInput = ReadInput( "Enter SNPP provider. See also: https://www.auronsoftware.com/xmstoolkit/snpplist\nType <ENTER> to use default SNPP provider snpp.pageallcom.com: ", true );
            strServer = strInput == string.Empty ? "snpp.pageallcom.com" : strInput;

            strInput = ReadInput( "Enter port. Type <ENTER> to use default port 444", true );
            nServerPort = strInput == string.Empty ? 444 : ( int.TryParse(strInput, out nServerPort) ? nServerPort : 444 );

            strInput = ReadInput("Enter timeout in milliseconds. Type <ENTER> to use default timeout of 25000 msecs", true);
            nServerTimeout = strInput == string.Empty ? 2500 : (int.TryParse(strInput, out nServerTimeout) ? nServerTimeout : 2500);

            Console.WriteLine("\r\n" + "Provider settings: ");
            Console.WriteLine("  Server: " + strServer);
            Console.WriteLine("  ServerPort: " + nServerPort);
            Console.WriteLine("  ServerTimeout: " + nServerTimeout);
            Console.WriteLine(string.Empty);
        }
    }
}
