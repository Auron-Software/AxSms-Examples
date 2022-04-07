// SmppProgram.cpp : Defines the entry point for the console application.
//

#include <windows.h>
#include <stdio.h>
#include <comdef.h>
#include <atlbase.h>

#import "..\..\..\include\AxSms.tlb"
#include "..\..\..\include\AxSmsConstants.h"

VOID ReadSmppProvider( _bstr_t &bstrServer, INT &nServerPort, _bstr_t &bstrSystemID, _bstr_t &bstrPassword );
LPTSTR ReadInput( LPCTSTR lpszTitle, BOOL bAllowEmpty = FALSE );

///////////////////////////////////////////////////////////////////////////////////////////

int main(void)
{
	AxSms::ISmppPtr	oSmpp = NULL;
	AxSms::IMessagePtr oMessage = NULL;	
	_bstr_t			bstrServer = _T(""), bstrSystemID = _T(""), bstrSystemPassword = _T(""), bstrReference = _T("");
	INT				nServerPort = 0;
	BOOL			bResult = FALSE;

    // initialize COM
	CoInitialize(NULL);

	// Create objects
	oSmpp.CreateInstance(__uuidof(AxSms::Smpp));
	oMessage.CreateInstance(__uuidof(AxSms::Message));
	if( oSmpp == NULL || oMessage == NULL )
	{
		_tprintf( _T("Failed to create AxSms object(s).\n") );		
		goto _EndMain;
	}

	// A license key is required to unlock this component after the trial period has expired.
	// Assign the LicenseKey property every time a new instance of this component is created (see code below). 
	// Alternatively, the LicenseKey property can be set automatically. This requires the license key to be stored in the registry.
	// For details, see manual, chapter "Product Activation".
	/*
	oSmpp->LicenseKey = _T("XXXXX-XXXXX-XXXXX");
	*/

	// Print component info
	_tprintf( _T( "Auron SMS Component %s\nBuild: %s\nModule : %s\nLicense Status: %s\nLicense Key: %s\n\n" ), ( LPCTSTR ) oSmpp->Version, ( LPCTSTR ) oSmpp->Build, ( LPCTSTR ) oSmpp->Module, ( LPCTSTR ) oSmpp->LicenseStatus, ( LPCTSTR ) oSmpp->LicenseKey );

	// Set Log File for debugging purposes
	// oSmpp->LogFile = _T("c:\\Smpp.log" );
	// _tprintf( _T("Log File used: %s\n\n"), ( LPCTSTR ) oSmpp->LogFile );

    // Prompt user for SMPP server details; by default, the Auron SMPP demo is used
	ReadSmppProvider( bstrServer, nServerPort, bstrSystemID, bstrSystemPassword );

    // Connect to the SMPP server using host/IP-addess, a specific TCP port and a timeout
    _tprintf( _T("Connecting...\n"));
    oSmpp->Connect( ( LPCTSTR ) bstrServer, nServerPort, 5000, VARIANT_FALSE );
	_tprintf( _T("Connect, result: %ld (%s)\n"), oSmpp->LastError, ( LPCTSTR ) oSmpp->GetErrorDescription( oSmpp->LastError ) );
	if( oSmpp->LastError != 0L )
		goto _EndMain;

    // Bind to the SMPP server as transceiver using your SystemID(login) and password
    // Note: although we only send, we could use SMPP_BIND_TRANSMITTER. However, we woul like to receive a delivery report and therefore connect as SMPP_BIND_TRANSCEIVER
    _tprintf(_T("Binding..."));
    oSmpp->Bind( AXSMS_SMPP_BIND_TRANSCEIVER, ( LPCTSTR ) bstrSystemID, ( LPCTSTR ) bstrSystemPassword, _T(""), AXSMS_SMPP_VERSION_34, 0, 0, _T(""), 10000);
	_tprintf( _T("Binding, result: %ld (%s)\n"), oSmpp->LastError, ( LPCTSTR ) oSmpp->GetErrorDescription( oSmpp->LastError ) );
    if (oSmpp->LastError != 0)
		goto _EndMain;

    oMessage->Clear();
    oMessage->ToAddress = ReadInput( _T("Enter recipient (recommended to start with a '+')"), false );
    oMessage->Body = ReadInput(_T("Type SMS text"), false );
    oMessage->RequestDeliveryReport = VARIANT_TRUE;

    // Submit the SMS message; allow multiple-part (i.e. more than 160 chars for standard text, or more tan 70 chars for Unicode text)
    oSmpp->SubmitSms( oMessage, AXSMS_SMS_MULTIPART_ACCEPT );
	_tprintf( _T("SubmitSms, result: %ld (%s)\n"), oSmpp->LastError, ( LPCTSTR ) oSmpp->GetErrorDescription( oSmpp->LastError ) );
    if(oSmpp->LastError != 0)
		goto _EndMain;

    // Wait for the message to be sent in the background. 5000msecs means: timeout after 5000msecs.
    bResult = oSmpp->WaitForSmsUpdate(5000);
	_tprintf( _T("WaitForSmsUpdate, result: %s\n"), bResult ? _T("TRUE") : _T("FALSE") );
    if( ! bResult )
        goto _EndMain;

_EndMain:

	if( oMessage != NULL )
		oMessage.Release();

	if( oSmpp != NULL )
	{
		oSmpp->Unbind();
		oSmpp->Disconnect();

		oSmpp.Release();
	}

	_tprintf( _T("Ready.\n") );
	return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////

LPTSTR ReadInput( LPCTSTR lptszTitle, BOOL bAllowEmpty )
{
	static TCHAR		tszInput [ 255 + 1 ] = { _T('\0') };

	_tprintf( _T("%s:\n"), lptszTitle );
	do
	{
		_tprintf ( _T("   > ") );
		fflush(stdin); 
		fflush(stdout); 
		_fgetts( tszInput, 255, stdin );
		if( tszInput[ 0 ] != _T('\0') && tszInput[ _tcsclen( tszInput ) - 1  ] == _T('\n') )
			tszInput[ _tcsclen( tszInput ) - 1  ] = _T('\0');
	} while( _tcsclen ( tszInput ) == 0 && ! bAllowEmpty );

	return tszInput;
}

///////////////////////////////////////////////////////////////////////////////////////////

VOID ReadSmppProvider( _bstr_t &bstrServer, INT &nServerPort, _bstr_t &bstrSystemID, _bstr_t &bstrPassword )
{
    _bstr_t bstrInput;
    bstrInput = ReadInput(_T("Enter SMPP provider. Type <ENTER> to use the free Auron SMPP gateway"), true );
    if( _tcscmp( ( LPCTSTR ) bstrInput, _T("") ) == 0 )
	{
		AxSms::IDemoAccountPtr oDemoAccount = NULL;
		oDemoAccount.CreateInstance(__uuidof(AxSms::DemoAccount));

        bstrServer = _T("gateway.auronsoftware.com");
		nServerPort = 2775;

		bstrSystemID = oDemoAccount != NULL ? ( LPCTSTR ) oDemoAccount->SystemId : _T("");
		bstrPassword = oDemoAccount != NULL ? ( LPCTSTR ) oDemoAccount->Password : _T("");

		if( _tcscmp( bstrSystemID, _T( "") ) == 0 )
		{
			bstrSystemID = ReadInput(_T("Enter SystemID (account ID to login to the provider)"), false );
			bstrPassword = ReadInput(_T("Enter SystemPassword (password associated with account ID)"), false );
		}
	}
    else
	{
		bstrServer = bstrInput;
        bstrInput = ReadInput(_T("Enter port. Type <ENTER> to use default port 2775"), true );
		if( ( nServerPort = _tstol( ( LPCTSTR ) bstrInput ) ) == 0 )
			nServerPort = 2775;

		bstrSystemID = ReadInput(_T("Enter SystemID (account ID to login to the provider)"), false );
		bstrPassword = ReadInput(_T("Enter SystemPassword (password associated with account ID)"), false );
	}

    _tprintf( _T("Provider settings:\n") );
    _tprintf( _T("  Server: %s\n"), ( LPCTSTR ) bstrServer );
    _tprintf( _T("  ServerPort: %ld\n"), nServerPort );
    _tprintf( _T("  SystemID: %s\n"), ( LPCTSTR) bstrSystemID );
    _tprintf( _T("  SystemPassword: %s\n"), ( LPCTSTR ) bstrPassword );
    _tprintf( _T("") );
}

