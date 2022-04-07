// HttpProgram.cpp : Defines the entry point for the console application.
//

#include <windows.h>
#include <stdio.h>
#include <comdef.h>
#include <atlbase.h>

#import "..\..\..\include\AxSms.tlb"
#include "..\..\..\include\AxSmsConstants.h"

LPTSTR ReadInput( LPCTSTR lpszTitle, BOOL bAllowEmpty = FALSE );
LPTSTR GetHttpURL();


int main(void)
{
    // initialize COM
	CoInitialize(NULL);

	AxSms::IHttpPtr	oHttp = NULL;
	AxSms::IMessagePtr oMessage = NULL;	
	LPCTSTR	lptszUrl = _T("");
	LPCTSTR	lptszResponse = _T("");

	// Create objects
	oHttp.CreateInstance(__uuidof(AxSms::Http));
	oMessage.CreateInstance(__uuidof(AxSms::Message));
	if( oHttp == NULL || oMessage == NULL )
	{
		_tprintf( _T("Failed to create AxSms object(s).\n") );		
		goto _EndMain;
	}

	// A license key is required to unlock this component after the trial period has expired.
	// Assign the LicenseKey property every time a new instance of this component is created (see code below). 
	// Alternatively, the LicenseKey property can be set automatically. This requires the license key to be stored in the registry.
	// For details, see manual, chapter "Product Activation".
	/*
	oHttp->LicenseKey = _T("XXXXX-XXXXX-XXXXX");
	*/

	// Print component info
	_tprintf( _T( "Auron SMS Component %s\nBuild: %s\nModule : %s\nLicense Status: %s\nLicense Key: %s\n\n" ), ( LPCTSTR ) oHttp->Version, ( LPCTSTR ) oHttp->Build, ( LPCTSTR ) oHttp->Module, ( LPCTSTR ) oHttp->LicenseStatus, ( LPCTSTR ) oHttp->LicenseKey );

	// Set Log File for debugging purposes
	// oHttp->LogFile = _T("c:\\Http.log" );
	// _tprintf( _T("Log File used: %s\n\n"), ( LPCTSTR ) oHttp->LogFile );
  
	lptszUrl = GetHttpURL();

	oMessage->Clear();
	oMessage->Body = _T("Auron SMS Component HTTP-Post test message!");
	oMessage->ToAddress = ReadInput( _T("Enter recipient (recommended to start with a '+')") );

	oHttp->url = lptszUrl;    

	_tprintf(_T("Sending..."));
	lptszResponse = oHttp->SendSms( oMessage, AXSMS_SMS_MULTIPART_ACCEPT );
	_tprintf( _T("Send, result: %ld (%s)\n"), oHttp->LastError, ( LPCTSTR ) oHttp->GetErrorDescription( oHttp->LastError ) );
	_tprintf( _T("Response from provider: %s\n"), lptszResponse );

_EndMain:
 
	if (oMessage != NULL)
		oMessage.Release();

	if (oHttp != NULL)
		oHttp.Release();

	CoUninitialize();

	_tprintf( _T("Ready.\n") );

  return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////

LPTSTR ReadInput( LPCTSTR lptszTitle, BOOL bAllowEmpty )
{
	static TCHAR tszRetVal [ 255 + 1 ] = { _T('\0') };

	_tprintf( _T("%s:\n"), lptszTitle );
	do
	{
		_tprintf ( _T("   > ") );
		fflush(stdin); 
		fflush(stdout); 
		_fgetts( tszRetVal, 255, stdin );
		if( tszRetVal[ 0 ] != _T('\0') && tszRetVal[ _tcsclen( tszRetVal ) - 1  ] == _T('\n') )
			tszRetVal[ _tcsclen( tszRetVal ) - 1  ] = _T('\0');
	} while( _tcsclen ( tszRetVal ) == 0 && ! bAllowEmpty );

	return tszRetVal;
}

///////////////////////////////////////////////////////////////////////////////////////////

LPTSTR GetHttpURL()
{
	static TCHAR tszRetVal [ 255 + 1 ] = { _T('\0') };
	AxSms::IDemoAccountPtr oDemoAccount = NULL;
	LPCTSTR	lptszUserName = NULL, lptszPassword = NULL, lptszUrl = NULL;

	oDemoAccount.CreateInstance(__uuidof(AxSms::DemoAccount));
	lptszUserName = oDemoAccount != NULL ? ( LPCTSTR ) oDemoAccount->SystemId : _T("");
	lptszPassword = oDemoAccount != NULL ? ( LPCTSTR ) oDemoAccount->Password : _T("");

	lptszUrl = ReadInput(_T("Enter HTTP Post provider URL.\nType <ENTER> to use the free Auron SMS gateway"), true );

    if( _tcslen( lptszUrl ) == 0 )
    {
		_tprintf( _T("Account:[%s], Password:[%s]\n"), lptszUserName, lptszPassword );

		// Placeholders are replaced when sending an SMS Message
		_stprintf( tszRetVal, _T("https://gateway.auronsoftware.com:8181/sendsms/default.asp?username=%s&password=%s&text=%")			
			AXSMS_HTTP_PLACEHOLDER_BODY _T("%&to=%") AXSMS_HTTP_PLACEHOLDER_TOADDRESS _T("%"), 
			lptszUserName, lptszPassword );
    }
	_tprintf( _T("URL: [%s]\n"), tszRetVal );
   
    _tprintf(_T("\n"));

	oDemoAccount.Release();

	return tszRetVal;
}


