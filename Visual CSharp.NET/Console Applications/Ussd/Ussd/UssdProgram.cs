//-----------------------------------------------------------------------
// <copyright file="UssdProgram.cs" company="Auron">
//     Copyright (c) Auron Software - www.auronsoftware.com
// </copyright>
//-----------------------------------------------------------------------

namespace UssdProgram
{
    using System;
    using System.Collections.Generic;
    using System.IO;
    using AxSms;

    class UssdProgram
    {
        static void Main(string[] args)
        {
            AxSms.Gsm objGsm = new AxSms.Gsm();

            // A license key is required to unlock this component after the trial period has expired.
            // Assign the LicenseKey property every time a new instance of this component is created (see code below). 
            // Alternatively, the LicenseKey property can be set automatically. This requires the license key to be stored in the registry.
            // For details, see manual, chapter "Product Activation".
            /*
            objGsm.LicenseKey = "XXXXX-XXXXX-XXXXX";
            */

            Console.WriteLine("Auron SMS Component {0}\nBuild: {1}\nModule: {2}\nLicense Status: {3}\nLicense Key: {4}\n", 
                objGsm.Version, objGsm.Build, objGsm.Module, objGsm.LicenseStatus, objGsm.LicenseKey);

            // Set Logfile (optional, for debugging purposes)
            objGsm.LogFile = Path.GetTempPath() + "Gsm.log";
            Console.WriteLine("Log file used: {0}\n", objGsm.LogFile);

            // Get a device name; exit if no name is given.
            string strDevice;
            if ((strDevice = InputDeviceName(objGsm)) == string.Empty)
            {
                Console.WriteLine("Press <ENTER> to continue.");
                Console.ReadLine();
                return;
            }

            // Opens the COM-Port of the GSM modem.
            objGsm.Open(strDevice, string.Empty, 0);
            Console.WriteLine("Open, result: " + objGsm.LastError + " (" + objGsm.GetErrorDescription(objGsm.LastError) + ")");
            if (objGsm.LastError == 36101) // 36101 means: modem requires pin code, see also: www.auronsoftware.com/kb/api-error-codes/
            {
                objGsm.Open(strDevice, ReadInput("Enter PIN code", false),0);
                Console.WriteLine("Open, result: " + objGsm.LastError + " (" + objGsm.GetErrorDescription(objGsm.LastError) + ")");
            }

            if (objGsm.LastError != 0)
            {
                Console.WriteLine("Press <ENTER> to continue.");
                Console.ReadLine();
                return;
            }

            string strResponse, strCommand = string.Empty;
            string[] strFields;

            strCommand = ReadInput("Enter the command you want to send out", false);
            strCommand = string.Format("AT+CUSD=1,\"{0}\",15", strCommand);             

            objGsm.SendCommand(strCommand);
            Console.WriteLine("SendCommand, result: " + objGsm.LastError + " (" + objGsm.GetErrorDescription(objGsm.LastError) + ")");
                        
            strResponse = objGsm.ReadResponse(10000);
            Console.WriteLine("ReadResponse, result: " + objGsm.LastError + " (" + objGsm.GetErrorDescription(objGsm.LastError) + ")");

            if (strResponse.Contains("OK")) // Response should be OK
            {
                objGsm.SendCommand(string.Empty);
                strResponse = objGsm.ReadResponse(10000);
                Console.WriteLine("ReadResponse, result: " + objGsm.LastError + " (" + objGsm.GetErrorDescription(objGsm.LastError) + ")");

                if (strResponse.Contains("+CUSD:"))
                {
                    strFields = strResponse.Split(char.Parse("\""));

                    if (strFields.Length > 1)
                        strResponse = strFields[1];
                    else
                        strResponse = strFields[0];
                }
            }

            if (objGsm.LastError != 0)
                Console.WriteLine("Response: N/A");
            else
                Console.WriteLine(string.Format("Response: {0}",strResponse));

            objGsm.Close();
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

        static private string InputDeviceName(AxSms.Gsm objGsm)
        {
            string strInput, strDevice, strPort = string.Empty;
            string strMessage = string.Empty;
            int i = 0;
            var lsDeviceNames = new List<string>();

            strMessage += "Select a device: ";

            // Build a list of TAPI devices
            strDevice = objGsm.FindFirstDevice();
            while (objGsm.LastError == 0)
            {
                strMessage += "\r\n  " + (i).ToString() + ": " + strDevice;
                lsDeviceNames.Add(strDevice);
                strDevice = objGsm.FindNextDevice();
                i++;
            }

            // Build a list of COM ports
            strPort = objGsm.FindFirstPort();
            while (objGsm.LastError == 0)
            {
                strMessage += "\r\n  " + (i).ToString() + ": " + strPort;
                lsDeviceNames.Add(strPort);
                strPort = objGsm.FindNextPort();
                i++;
            }

            strDevice = string.Empty;

            if (lsDeviceNames.Count == 0)
                Console.WriteLine("No devices or COM ports where found.");
            else
            {
                Console.WriteLine(strMessage);

                while (strDevice == string.Empty)
                {
                    Console.Write("  > ");
                    strInput = Console.ReadLine();

                    int iDevice = int.TryParse(strInput, out iDevice) ? iDevice : 0;
                    if (iDevice > lsDeviceNames.Count - 1) iDevice = 0;
                    strDevice = lsDeviceNames[iDevice];
                }
                Console.WriteLine("  Selected device: " + strDevice + "\r\n");
            }
            return strDevice;
        }
    }
}
