// SnppProgram.cpp : Defines the entry point for the console application.
//

#include <windows.h>
#include <stdio.h>
#include <comdef.h>
#include <atlbase.h>

#import "..\..\..\include\AxSms.tlb"
#include "..\..\..\include\AxSmsConstants.h"

LPTSTR ReadInput( LPCTSTR lpszTitle, BOOL bAllowEmpty = FALSE );
VOID  ReadSnppProvider( _bstr_t &bstrServer, INT &nServerPort, INT &nServerTimeout );

int main(void)
{

	AxSms::ISnppPtr	oSnpp = NULL;
    _bstr_t			bstrServer = _T(""), bstrUrl = _T("");
    _bstr_t			bstrRecipient = _T(""), bstrMessage = _T("");
	INT				nServerPort = 0, nServerTimeout = 0;

    // initialize COM
	CoInitialize(NULL);

	// Create objects
	oSnpp.CreateInstance(__uuidof(AxSms::Snpp));
	if( oSnpp == NULL )
	{
		_tprintf( _T("Failed to create AxSms object.\n") );		
		goto _EndMain;
	}

	// A license key is required to unlock this component after the trial period has expired.
	// Assign the LicenseKey property every time a new instance of this component is created (see code below). 
	// Alternatively, the LicenseKey property can be set automatically. This requires the license key to be stored in the registry.
	// For details, see manual, chapter "Product Activation".
	/*
	oSnpp->LicenseKey = _T("XXXXX-XXXXX-XXXXX");
	*/

	// Print component info
	_tprintf( _T( "Auron SMS Component %s\nBuild: %s\nModule : %s\nLicense Status: %s\nLicense Key: %s\n\n" ), ( LPCTSTR ) oSnpp->Version, ( LPCTSTR ) oSnpp->Build, ( LPCTSTR ) oSnpp->Module, ( LPCTSTR ) oSnpp->LicenseStatus, ( LPCTSTR ) oSnpp->LicenseKey );
	
	ReadSnppProvider( bstrServer, nServerPort, nServerTimeout);

	// Set Log File for debugging purposes
	// oSnpp->setLogFile( "c::\\http.log" );
    oSnpp->Server = ( LPCTSTR ) bstrServer;
    oSnpp->ServerPort= nServerPort;
    oSnpp->ServerTimeout = nServerTimeout;

    bstrRecipient = ReadInput( _T("Enter recipient") );
    bstrMessage = _T("Auron SMS Component SNPP test message!" );

	oSnpp->Send( ( LPCTSTR ) bstrRecipient, ( LPCTSTR ) bstrMessage );
	_tprintf( _T("Send, result: %ld (%s)\n"), oSnpp->LastError, ( LPCTSTR ) oSnpp->GetErrorDescription( oSnpp->LastError ) );
	_tprintf( _T("Response from provider: %s\n"), ( LPCTSTR ) oSnpp->ProviderResponse );

_EndMain:

	if( oSnpp != NULL )
		oSnpp.Release();

	_tprintf( _T("Ready.\n") );

	return 0;
}

LPTSTR ReadInput( LPCTSTR lptszTitle, BOOL bAllowEmpty )
{
	static TCHAR		tszInput [ 255 + 1 ] = { _T('\0') };

	_tprintf( _T("%s:\n"), lptszTitle );
	do
	{
		_tprintf ( _T("   > ") );
		// scanf ( "%s", tszInput );
		fflush(stdin); 
		fflush(stdout); 
		_fgetts( tszInput, 255, stdin );
		if( tszInput[ 0 ] != _T('\0') && tszInput[ _tcsclen( tszInput ) - 1  ] == _T('\n') )
			tszInput[ _tcsclen( tszInput ) - 1  ] = _T('\0');
	} while( _tcsclen ( tszInput ) == 0 && ! bAllowEmpty );

	return tszInput;
}


VOID ReadSnppProvider( _bstr_t &bstrServer, INT &nServerPort, INT &nServerTimeout )
{
    _bstr_t bstrInput;
    bstrInput = ReadInput(_T("Enter SNPP provider. See also: https://www.auronsoftware.com/xmstoolkit/snpplist\nType <ENTER> to use default SNPP provider snpp.pageallcom.com"), true);
    if( _tcscmp( ( LPCTSTR ) bstrInput, _T("") ) == 0 )
        bstrServer = _T("snpp.pageallcom.com");
    else
        bstrServer = bstrInput;

    bstrInput = ReadInput(_T("Enter port. Type <ENTER> to use default port 444"), true);
    if( ( nServerPort = _tstol( ( LPCTSTR ) bstrInput ) ) == 0)
        nServerPort = 444;

    bstrInput = ReadInput(_T("Enter timeout in msecs. Type <ENTER> to use default of 2500 msecs"), true);
    if ( ( nServerTimeout = _tstol( ( LPCTSTR ) bstrInput ) ) == 0)
        nServerTimeout = 2500;

    _tprintf( _T("Provider settings:\n") );
    _tprintf( _T("  Server: %s\n"), ( LPCTSTR) bstrServer );
    _tprintf( _T("  ServerPort: %ld\n"), nServerPort );
    _tprintf( _T("  ServerTimeout: %ld\n"), nServerTimeout );
    _tprintf( _T("") );
}



