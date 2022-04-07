program smpp;

{$APPTYPE CONSOLE}

uses
  SysUtils, ActiveX, Windows,
  AXSMS_TLB in '..\typelib-imports\AxSms_TLB.pas';

procedure PrintResult(strFunction: string; objSmpp: AXSMS_TLB.Smpp);
begin
  Writeln(strFunction + ', result: ' + IntToStr(objSmpp.LastError) + ' (' +
    objSmpp.GetErrorDescription(objSmpp.LastError) + ')');
end;

var
  objSmpp: AXSMS_TLB.Smpp;
  objConstants: Constants;
  objSms: Message;
  objDemoAccount: DemoAccount;
  strLogPath: string;
  aTmpFolder: array[0..MAX_PATH] of Char;
  strServer: string;
  strPort: string;
  iPort: integer;
  strSystemId: string;
  strPassword: string;
  strToAddress: string;
  strMessage: string;

begin
  CoInitialize(nil);

  objSmpp := CoSmpp.Create;
  objSms := CoMessage.Create;
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

  Writeln('Auron SMS Component ' + objSmpp.Version + sLineBreak +
    'Build: ' + objSmpp.Build + sLineBreak +
    'Module' + objSmpp.Module + sLineBreak +
    'License Status: ' + objSmpp.LicenseStatus + sLineBreak +
    'License Key: ' + objSmpp.LicenseKey + sLineBreak);

  // Set a logfile, this is optional but helps troubleshooting.
  GetTempPath(MAX_PATH, @aTmpFolder);
  strLogPath := StrPas(aTmpFolder);
  strLogPath := strLogPath + 'Gsm.Log';
  objSmpp.LogFile := strLogPath;
  Writeln('Log file used: ' + objSmpp.LogFile + sLineBreak);

  // Get SMPP Server
  Writeln('Enter hostname of SMPP server: (press enter to use gateway.auronsoftware.com)');
  Readln(strServer);
  if (strServer = '') then
    strServer := 'gateway.auronsoftware.com'
  else
    WriteLn;

  // Get SMPP ServerPort
  WriteLn('Enter portnumer of SMPP server: (press enter to use 2775)');
  ReadLn(strPort);
  if (strport = '') then
    iPort := 2775
  else
    TryStrToInt(strPort, iPort);
  Writeln;

  // Get credentials required to access the SMPP server.
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
  objSms.ToAddress := strToAddress;
  objSms.Body := strMessage;

  // Open Smpp
    WriteLn('Opening Smpp connection: ' + strServer + ':' + IntToStr(iPort));
  objSmpp.Connect(strServer, iPort, 5000, false);
  PrintResult('Connect', objSmpp);
  if (objSmpp.LastError <> 0) then
  begin
    WriteLn;
    Writeln('Press enter to close the program');
    Readln;
    Exit;
  end;

  // Bind Smpp
  objSmpp.Bind(objConstants.SMPP_BIND_TRANSCEIVER, strSystemId, strPassword,
    '', objConstants.SMPP_VERSION_34, 0, 0, '', 0);
  PrintResult('Bind', objSmpp);
  WriteLn;
  if (objSmpp.LastError <> 0) then
  begin
    objSmpp.Disconnect();
    WriteLn;
    Writeln('Press enter to close the program');
    Readln;
    Exit;
  end;

  // Send the message
  WriteLn('Sending the message...');
  objSmpp.SubmitSms(objSms, objConstants.MULTIPART_TRUNCATE);
  PrintResult('SubmitSms', objSmpp);
  if (objSmpp.LastError <> 0) then
  begin
    objsmpp.Unbind;
    objSmpp.Disconnect();
    Writeln;
    Writeln('Press ENTER to close the program');
    Readln;
    Exit;
  end;

  // Wait for the server to accept the SMS message. This is only required in
  // this sample since the SMS is sent in the background and if the sample
  // immediately exits it could exit before the message is even delivered on the
  // server. If the application would stay connected, there's no need to add
  // this wait, instead, it's more efficient to periodically call
  // 'FetchSmsUpdate' directly to test if updates are available.
  while objSmpp.WaitForSmsUpdate(5000) do
  begin
    objSms := objSmpp.FetchSmsUpdate();
    if (objSmpp.LastError = 0) then
      Break;
    objSmpp.Sleep(100);
  end;

  // SMPP command status codes are provider specific. The Auron SMPP Demo
  // Gateway uses command status 1025 to communicate there are no more credits
  // left for this account on the Auron SMPP Demo Gateway.
  if (objSms.SmppCommandStatus <> 0) and
     (strServer = 'gateway.auronsoftware.com') then
  begin
    // 1025 = nocredits
    if (objSms.SmppCommandStatus = 1025) then
        Writeln('Message not sent. Reason: No credits left.')
    else
        Writeln('Message not sent. Reason: unspecified error [ ' +
          IntToStr(objSms.SmppCommandStatus) + '].');

    objsmpp.Unbind;
    objSmpp.Disconnect();
    Writeln;
    Writeln('Press ENTER to close the program');
    Readln;
    Exit;          
  end;

  // Show the message reference
  WriteLn('Message succesfully submitted');
  WriteLn('Message reference: ' + objSms.Reference);
  WriteLn;

  Writeln('Press enter to continue...');
  readln;
end.

