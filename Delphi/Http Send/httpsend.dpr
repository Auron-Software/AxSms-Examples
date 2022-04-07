program httpsend;

{$APPTYPE CONSOLE}
uses
  SysUtils, ActiveX, Windows,
  AXSMS_TLB in '..\typelib-imports\AxSms_TLB.pas';

procedure PrintResult(strPrompt: string; objHttp: Http);
begin
  Writeln(strPrompt + ', result: ' + IntToStr(objHttp.LastError) + ' (' +
    objHttp.GetErrorDescription(objHttp.LastError) + ')');
end;

var
  objHttp: Http;
  objConstants: Constants;
  objSms: Message;
  objDemoAccount: DemoAccount;
  strLogPath: string;
  aTmpFolder: array[0..MAX_PATH] of Char;
  strSystemId: string;
  strPassword: string;
  strResponse: string;
  strToAddress: string;
  strMessage: string;

begin
  CoInitialize(nil);

  objHttp := CoHttp.Create;
  objConstants := CoConstants.Create;
  objSms := CoMessage.Create;

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
  strLogPath := strLogPath + 'Http.Log';
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

  // Set HTTP provider URL template.
  objHttp.Url := 'https://gateway.auronsoftware.com:8181/sendsms/default.asp' +
    '?username=' + strSystemId +
    '&password=' + strPassword +
    '&text=' + objConstants.HTTP_PLACEHOLDER_BODY +
    '&to=' + objConstants.HTTP_PLACEHOLDER_TOADDRESS;

  // Create an SMS message
  Writeln('Enter a phone nr. to send a message to: ');
  Readln(strToAddress);
  Writeln('Enter the message body: ');
  Readln(strMessage);
  objSms.ToAddress := strToAddress;
  objSms.Body := strMessage;

  Writeln;

  // Send the SMS message
  strResponse := objHttp.SendSms(objSms, objConstants.MULTIPART_ACCEPT);
  PrintResult('SendSms', objHttp);

  // Show results
  Writeln('Server response code: ' + IntToStr(objHttp.LastResponseCode));
  Writeln('Server response:');
  Writeln(strResponse);

  Writeln;

  Writeln('Press enter to continue...');
  readln;           
end.


