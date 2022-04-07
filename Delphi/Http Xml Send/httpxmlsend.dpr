program httpxmlsend;

{$APPTYPE CONSOLE}
uses
  SysUtils, ActiveX, Windows,
  AXSMS_TLB in '..\typelib-imports\AxSms_TLB.pas';

procedure PrintResult(strFunction: string; objHttp: Http);
begin
  Writeln(strFunction + ', result: ' + IntToStr(objHttp.LastError) + ' (' +
    objHttp.GetErrorDescription(objHttp.LastError) + ')');
end;

var
  objHttp: Http;
  objConstants: Constants;
  objSms: Message;
  strLogPath: string;
  objDemoAccount: DemoAccount;
  aTmpFolder: array[0..MAX_PATH] of Char;
  strSystemId: string;
  strPassword: string;
  strResponse: string;
  strToAddress: string;
  strMessage: string;
  strXml: string;
  strUrl: string;

begin
  CoInitialize(nil);

  objHttp := CoHttp.Create;
  objConstants := CoConstants.Create;

  // A license key is required to unlock this component after the trial period
  // has expired. Assign the LicenseKey property every time a new instance of
  // this component is created (see code below). Alternatively, the LicenseKey
  // property can be set automatically. This requires the license key to be
  // stored in the registry. For details, see manual, chapter
  // "Product Activation".
  {
  objGsm.LicenseKey = 'XXXXX-XXXXX-XXXXX';
  }

  Writeln('Auron SMS Component ' + objHttp.Version + sLineBreak +
    'Build: ' + objHttp.Build + sLineBreak +
    'Module' + objHttp.Module + sLineBreak +
    'License Status: ' + objHttp.LicenseStatus + sLineBreak +
    'License Key: ' + objHttp.LicenseKey + sLineBreak);

  // Set a logfile, this is optional but helps troubleshooting.
  GetTempPath(MAX_PATH, @aTmpFolder);
  strLogPath := StrPas(aTmpFolder);
  strLogPath := strLogPath + 'Gsm.Log';
  objHttp.LogFile := strLogPath;
  Writeln('Log file used: ' + objHttp.LogFile + sLineBreak);

  // Get credentials required to access the HTTP server.
  objDemoAccount := CoDemoAccount.Create;
  Writeln('Enter account systemID: (press enter to use ''' +
    objDemoAccount.SystemId + ''')');
  Readln(strSystemId);
  if (strSystemId = '') then strSystemId := objDemoAccount.SystemId;
  Writeln('Enter account password: (press enter to use ''' +
    objDemoAccount.Password + ''')');
  Readln(strPassword);
  if (strPassword = '') then strPassword := objDemoAccount.Password;

  // Create an SMS message
  Writeln('Enter a phone nr. to send a message to: ');
  Readln(strToAddress);
  Writeln('Enter the message body: ');
  Readln(strMessage);

  // Define XML message body and URL to post to.
  strUrl := 'https://gateway.auronsoftware.com:8181/sendsms/sendsmsHttpXML.asp';
  strXml :=
  '<httpmessage>'
    + '<credentials systemid="' + strSystemId + '" password="' + strPassword + '"/>'
    + '<settings bodyformat="0" requestdeliveryreport="True" datacoding="0" deliveryreporturl="https://www.auronsoftware.com"/>'
    + '<message toaddress="' + strToAddress + '">'
      + '<body>' + objHttp.Base64Encode(strMessage) + '</body>'
    + '</message>'
  + '</httpmessage>';

  // Send Message
  WriteLn('Sending XML:');
  WriteLn(strXml);
  WriteLn;
  strResponse := objHttp.Post(strUrl, strXml);
  PrintResult('Post', objHttp);

  // Show results
  Writeln('Server response code: ' + IntToStr(objHttp.LastResponseCode));
  Writeln('Server response:');
  Writeln(strResponse);

  Writeln;

  Writeln('Press enter to continue...');
  readln;
end.

