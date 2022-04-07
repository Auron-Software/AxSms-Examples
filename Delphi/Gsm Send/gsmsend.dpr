program gsmsend;

{$APPTYPE CONSOLE}
uses
  SysUtils, ActiveX, Windows,
  AXSMS_TLB in '..\typelib-imports\AxSms_TLB.pas';

function InputDeviceName(objGsm: Gsm): string;
var
  strMessage: string;
  strDeviceName: string;
  strInput: string;
  iInput: integer;
  iIndex: integer;
  aDeviceNames: array of string;
begin
  strMessage := 'Select a device: ';
  iIndex := 0;

  // Create a list of devicenames, start with TAPI devices
  strDeviceName := objGsm.FindFirstDevice();
  while objGsm.LastError = 0 do
  begin
    strMessage := strMessage + sLineBreak + '  ' +
      IntToStr(iIndex) + ': ' + strDeviceName;
    iIndex := iIndex + 1;
    SetLength(aDeviceNames, iIndex);
    aDeviceNames[iIndex - 1] := strDeviceName;
    strDeviceName := objGsm.FindNextDevice();
  end;

  // Add COM ports
  strDeviceName := objGsm.FindFirstPort();
  while objGsm.LastError = 0 do
  begin
    strMessage := strMessage + sLineBreak + '  ' +
      IntToStr(iIndex) + ': ' + strDeviceName;
    iIndex := iIndex + 1;
    SetLength(aDeviceNames, iIndex);
    aDeviceNames[iIndex - 1] := strDeviceName;
    strDeviceName := objGsm.FindNextPort();
  end;

  // Get input nr and translate it to a devicename
  strDeviceName := '';
  if iIndex = 0 then
  begin
    Writeln('No TAPI devices or COM ports where found.');
  end
  else
  begin
    Writeln(strMessage);
    while strDeviceName = '' do
    begin
      Write('  > ');
      ReadLn(strInput);
      if TryStrToInt(strInput, iInput) then
      begin
        if (iInput >= iIndex) Or (iInput < 0) then iIndex := 0;
        strDeviceName := aDeviceNames[iInput]
      end;
    end;
  end;

  Result := strDeviceName;
end;

procedure PrintResult(strFunction: string; objGsm: Gsm);
begin
  Writeln(strFunction + ', result: ' + IntToStr(objGsm.LastError) + ' (' +
    objGsm.GetErrorDescription(objGsm.LastError) + ')');
end;

var
  objGsm: Gsm;
  objConstants: Constants;
  objSms: Message;
  strLogPath: string;
  strDeviceName: string;
  strPincode: string;
  strToAddress: string;
  strMessage: string;
  aTmpFolder: array[0..MAX_PATH] of Char;

begin
  CoInitialize(nil);

  objGsm := CoGsm.Create;
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

  Writeln('Auron SMS Component ' + objGsm.Version + sLineBreak +
    'Build: ' + objGsm.Build + sLineBreak +
    'Module: ' + objGsm.Module + sLineBreak +
    'License Status: ' + objGsm.LicenseStatus + sLineBreak +
    'License Key: ' + objGsm.LicenseKey + sLineBreak);

  // Set a logfile, this is optional but helps troubleshooting.
  GetTempPath(MAX_PATH, @aTmpFolder);
  strLogPath := StrPas(aTmpFolder);
  strLogPath := strLogPath + 'Gsm.Log';
  objGsm.LogFile := strLogPath;
  Writeln('Log file used: ' + objGsm.LogFile + sLineBreak);

  strDeviceName := InputDeviceName(objGsm);

  // Open the selected device
  objGsm.Open(strDeviceName, '', objConstants.GSM_BAUDRATE_DEFAULT);
  PrintResult('Open', objGsm);
  if objGsm.LastError = 36101 then
  begin
    Writeln('Enter PIN code: ');
    Readln(strPincode);
    objGsm.Open(strDeviceName, strPincode, objConstants.GSM_BAUDRATE_DEFAULT);
    PrintResult('Open', objGsm);
  end;

  Writeln;

  // Create an SMS message
  Writeln('Enter a phone nr. to send a message to: ');
  Readln(strToAddress);
  Writeln('Enter the message body: ');
  Readln(strMessage);
  objSms.ToAddress := strToAddress;
  objSms.Body := strMessage;

  Writeln;

  // Send the SMS message through the GSM device.
  objGsm.SendSms(objSms, objConstants.MULTIPART_ACCEPT, 0);
  PrintResult('SendSms', objGsm);

  Writeln;

  // Close the device so other application can use it.
  objGsm.Close();

  Writeln('Press enter to continue...');
  readln;
end.

