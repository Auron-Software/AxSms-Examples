using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;

namespace HttpServer
{
  class HttpServerProgram
  {
    static void Main(string[] args)
    {
      AxSms.HttpServer objHttpServer = new AxSms.HttpServer();

      // A license key is required to unlock this component after the trial period has expired.
      // Assign the LicenseKey property every time a new instance of this component is created (see code below). 
      // Alternatively, the LicenseKey property can be set automatically. This requires the license key to be stored in the registry.
      // For details, see manual, chapter "Product Activation".
      /*
      objAndroid.LicenseKey = "XXXXX-XXXXX-XXXXX";
      */

      Console.WriteLine("Auron SMS Component {0}\nBuild: {1}\nModule: {2}\nLicense Status: {3}\nLicense Key: {4}\n",
          objHttpServer.Version, objHttpServer.Build, objHttpServer.Module, objHttpServer.LicenseStatus, objHttpServer.LicenseKey);

      // Set Logfile (optional, for debugging purposes)
      objHttpServer.LogFile = Path.GetTempPath() + "HttpServer.Log";
      Console.WriteLine("Log file used: {0}\n", objHttpServer.LogFile);

      // Startup HTTP Server
      objHttpServer.Startup();
      Console.WriteLine("Startup, result: " + objHttpServer.LastError + " (" + objHttpServer.GetErrorDescription(objHttpServer.LastError) + ")");
      if (objHttpServer.LastError != 0)
      {
        Console.WriteLine("Press <ENTER> to continue.");
        Console.ReadLine();
        return;
      }
      
      // Add URL to listen to
      objHttpServer.AddUrl("http://localhost:8002/API/");
      Console.WriteLine("AddUrl, result: " + objHttpServer.LastError + " (" + objHttpServer.GetErrorDescription(objHttpServer.LastError) + ")");
      if (objHttpServer.LastError != 0)
      {
        Console.WriteLine("Press <ENTER> to continue.");
        Console.ReadLine();
        return;
      }

      // Start your default browser
      System.Diagnostics.Process.Start("http://localhost:8002/API/receivesms.json?from=0031122334455&text=Hello+World");
      
      // Listen and handle API calls
      Console.WriteLine("Press any key to stop...");
      while (objHttpServer.IsStarted && !Console.KeyAvailable)
      {
        // Test for an existing request or wait a maximum of 100 milliseconds to fetch a new one
        objHttpServer.WaitForRequest(100);

        if (objHttpServer.LastError == 0)
        {
          // Incoming request received; Print some information about the request
          Console.WriteLine("Received request for: [" + objHttpServer.RequestUrl + "]");
    
          // test to see if they are querying the right URL
          objHttpServer.ClearResponse();
          if (objHttpServer.RequestUrlPath.StartsWith("/API/receivesms.json"))
          {
            // gather URL parameters
            string sFromAddress = GetQueryParameter(objHttpServer.RequestUrlQueryString, "from");
            string sText = GetQueryParameter(objHttpServer.RequestUrlQueryString, "text");

            if (sFromAddress == "" || sText == "")
            {
              // They forgot one or more parameters
              objHttpServer.ResponseCode = 400;
              objHttpServer.ResponseReason = "Invalid Request";
              objHttpServer.ResponseBodyString = "<h1>400 - Invalid request!</h1>";
            } else
            {
              // Everything is in order we#ve received an SMS message!
              objHttpServer.ResponseCode = 200;
              objHttpServer.ResponseReason = "OK";
              objHttpServer.SetResponseHeader("Content-Type", "text/json");
              objHttpServer.ResponseBodyString = "{\"resultCode\": \"0\", \"resultText\": \"received ok\"}";

              Console.WriteLine("Received incoming SMS from: " + sFromAddress + "; text: " + sText);
            }
          } else
          {
            // Invalid path; send a 404
            objHttpServer.ResponseCode = 404;
            objHttpServer.ResponseReason = "Not Found";
            objHttpServer.ResponseBodyString = "<h1>404 - Resource not found!</h1>";
          }
    
          objHttpServer.SendResponse();
          if (objHttpServer.LastError != 0)
          {
            Console.WriteLine("Send reponse error: [" + 
              objHttpServer.GetErrorDescription(objHttpServer.LastError) + "]");
          }
        }
      }

      objHttpServer.Shutdown();
    }

    private static string GetQueryParameter(string sQueryString, string sName)
    {
      Regex r = new Regex(sName + "=([^&]*)", RegexOptions.IgnoreCase);
      var m = r.Match(sQueryString);
      if (m.Success && m.Groups.Count > 0)
        return m.Groups[1].Value;
      else return "";
    }
  }
}
