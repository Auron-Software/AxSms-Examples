using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace AndroidSms
{
  class Program
  {
    static void Main(string[] args)
    {
      AxSms.Android objAndroid = new AxSms.Android();
      AxSms.Message objSmsMessage = new AxSms.Message();

      // A license key is required to unlock this component after the trial period has expired.
      // Assign the LicenseKey property every time a new instance of this component is created (see code below). 
      // Alternatively, the LicenseKey property can be set automatically. This requires the license key to be stored in the registry.
      // For details, see manual, chapter "Product Activation".
      /*
      objAndroid.LicenseKey = "XXXXX-XXXXX-XXXXX";
      */

      Console.WriteLine("Auron SMS Component {0}\nBuild: {1}\nModule: {2}\nLicense Status: {3}\nLicense Key: {4}\n",
          objAndroid.Version, objAndroid.Build, objAndroid.Module, objAndroid.LicenseStatus, objAndroid.LicenseKey);

      // Set Logfile (optional, for debugging purposes)
      objAndroid.LogFile = Path.GetTempPath() + "Android.Log";
      Console.WriteLine("Log file used: {0}\n", objAndroid.LogFile);

      string strIp = ReadInput("Enter Android SMS Agent IP:", false);
      if (strIp == string.Empty)
      {
        Console.WriteLine("Press <ENTER> to continue.");
        Console.ReadLine();
        return;
      }

      objAndroid.Connect(strIp, 7770);
      Console.WriteLine("Connect, result: " + objAndroid.LastError + " (" + objAndroid.GetErrorDescription(objAndroid.LastError) + ")");
      if (objAndroid.LastError != 0)
      {
        Console.WriteLine("Press <ENTER> to continue.");
        Console.ReadLine();
        return;
      }

      // Message settings
      objSmsMessage.ToAddress = ReadInput("Enter recipient: ", false);
      objSmsMessage.Body = ReadInput("Enter message body: ", false);

      // Send the message
      objAndroid.SendSms(objSmsMessage);
      Console.WriteLine("SendSms, result: " + objAndroid.LastError + " (" + objAndroid.GetErrorDescription(objAndroid.LastError) + ")");

      Console.WriteLine("Waiting for incoming SMS messages...");
      Console.WriteLine("(Press any key to quit)");
      while (objAndroid.IsConnected && !Console.KeyAvailable)
      {
        objSmsMessage = objAndroid.ReceiveSms();
        while (objAndroid.LastError == 0)
        {
          Console.WriteLine("Receive SMS from: " + objSmsMessage.FromAddress);
          Console.WriteLine("Body: " + objSmsMessage.Body);
          objSmsMessage = objAndroid.ReceiveSms();
        }
        Thread.Sleep(10);
      }

      // Make sure the port gets closed
      objAndroid.Disconnect();
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
        if (strInput.Length > 1) strReturn = strInput;
      } while (strReturn == string.Empty && !bAllowEmpty);

      return strReturn;
    }
  }
}
