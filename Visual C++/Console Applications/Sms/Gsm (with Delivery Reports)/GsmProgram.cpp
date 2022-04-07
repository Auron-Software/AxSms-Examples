// GsmProgram.cpp : Defines the entry point for the console application.
//

#include <windows.h>
#include <stdio.h>
#include <tchar.h>

#import "..\..\..\include\AxSms.tlb"
#include "..\..\..\include\AxSmsConstants.h"

LPTSTR	ReadInput( LPCTSTR lptszTitle, BOOL bAllowEmpty = FALSE );
LPTSTR	AskDevice( AxSms::IGsmPtr &oGsm );

///////////////////////////////////////////////////////////////////////////////////////////

int main(void)
{
	AxSms::IGsmPtr oGsm = NULL;
	AxSms::IMessagePtr oMessage = NULL;
	AxSms::IGsmDeliveryReportPtr oDeliveryReport = NULL;
	LPTSTR	lptszMsgReference = NULL, lptszDeliveryReference = NULL, lptszDevice	= NULL;
	TCHAR *cp = NULL;
	BOOL bRequestDeliveryReport = FALSE;

    // initialize COM
	CoInitialize(NULL);

	// Create objects
	oGsm.CreateInstance(__uuidof(AxSms::Gsm));
	oMessage.CreateInstance(__uuidof(AxSms::Message));
	if( oGsm == NULL || oMessage == NULL )
	{
		_tprintf( _T("Failed to create AxSms object(s).\n") );		
		goto _EndMain;
	}

	// A license key is required to unlock this component after the trial period has expired.
	// Assign the LicenseKey property every time a new instance of this component is created (see code below). 
	// Alternatively, the LicenseKey property can be set automatically. This requires the license key to be stored in the registry.
	// For details, see manual, chapter "Product Activation".
	/*
	oGsm->LicenseKey = _T("XXXXX-XXXXX-XXXXX");
	*/

	// Print component info
	_tprintf( _T( "Auron SMS Component %s\nBuild: %s\nModule : %s\nLicense Status: %s\nLicense Key: %s\n\n" ), ( LPCTSTR ) oGsm->Version, ( LPCTSTR ) oGsm->Build, ( LPCTSTR ) oGsm->Module, ( LPCTSTR ) oGsm->LicenseStatus, ( LPCTSTR ) oGsm->LicenseKey );


	// Set Log File for debugging purposes
	// oGsm->LogFile = _T("c:\\gsm.log" );
	_tprintf( _T("Log File used: %s\n\n"), ( LPCTSTR ) oGsm->LogFile );

	// Ask for the port to be used. This can be a direct comport or a TAPI device
	lptszDevice = AskDevice( oGsm );

	_tprintf( _T( "Opening port...\n") );
    oGsm->Open( lptszDevice, _T(""), 0 );
	_tprintf( _T("Open, result: %ld (%s)\n"), oGsm->LastError, ( LPCTSTR ) oGsm->GetErrorDescription( oGsm->LastError ) );
    if(oGsm->LastError == 36101) // 36101 means: modem requires pin code, see also: www.auronsoftware.com/kb/api-error-codes/
	{
		_tprintf( _T( "Opening port...\n") );
		oGsm->Open( lptszDevice, ReadInput( _T("Enter PIN code"), FALSE ), 0 );
		_tprintf( _T("Open, result: %ld (%s)\n"), oGsm->LastError, ( LPCTSTR ) oGsm->GetErrorDescription( oGsm->LastError ) );
	}
	if( oGsm->LastError != 0L )
		goto _EndMain;

	// SmsMessage: Clear
	oMessage->Clear();

	// SmsMessage: Recipient and message format
	oMessage->ToAddress  = ReadInput( _T("Enter recipient (recommended to start with a '+')") );

	// SmsMessage: delivery report for this message
	cp = ReadInput( _T("Do you want a delivery report (y/n) ?"), TRUE );
	bRequestDeliveryReport = cp[0] == _T('y') || cp[0] == _T('Y'); 
	oMessage->RequestDeliveryReport = bRequestDeliveryReport ? VARIANT_TRUE : VARIANT_FALSE;

	// SmsMessage: Message body
	oMessage->Body = ReadInput( _T("Enter SMS message") );

	_tprintf( _T("Sending message...\n") );
	oGsm->SendSms( oMessage, AXSMS_SMS_MULTIPART_ACCEPT, 0 );
	_tprintf( _T("Send, result: %ld (%s)\n\n"), oGsm->LastError, ( LPCTSTR ) oGsm->GetErrorDescription( oGsm->LastError ) );
	if( oGsm->LastError != 0L )
		goto _EndMain;

	lptszMsgReference = oMessage->Reference;

	if( ! bRequestDeliveryReport )
		goto _EndMain;

	_tprintf(_T("Waiting for Delivery report...\n"));
	while (bRequestDeliveryReport)
	{
		_tprintf(_T("Check GSM device...\n"));
		oGsm->Receive( AXSMS_GSM_MESSAGESTATE_ALL, false, AXSMS_GSM_STORAGETYPE_ALL, 0 );
		if( oGsm->LastError != 0L )
		{
			_tprintf( _T("Receive failed, error%ld (%s)\n"), oGsm->LastError, ( LPCTSTR ) oGsm->GetErrorDescription( oGsm->LastError ) );
			goto _EndMain;
		}

		for( oDeliveryReport = oGsm->GetFirstReport(); oGsm->LastError == 0L; oDeliveryReport = oGsm->GetNextReport() )
		{
			lptszDeliveryReference = oDeliveryReport->Reference;
			if( _tcsicmp( lptszDeliveryReference, lptszMsgReference ) == 0 )
			{
				_tprintf(_T("Delivery Report found; status (%s): %ld\n"), lptszMsgReference, oDeliveryReport->Status );

				bRequestDeliveryReport = false;
				break;
			}
		}

		Sleep(3000);
	}

_EndMain:

	if (oMessage != NULL)
		oMessage.Release();

	if (oGsm != NULL)
		oGsm.Release();

	if (oDeliveryReport != NULL)
		oDeliveryReport.Release();

	CoUninitialize();

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
		// scanf ( "%s", tszInput );
		fflush(stdin); 
		fflush(stdout); 
		_fgetts( tszInput, 255, stdin );
		if( tszInput[ 0 ] != _T('\0') && tszInput[ _tcsclen( tszInput ) - 1  ] == _T('\n') )
			tszInput[ _tcsclen( tszInput ) - 1  ] = _T('\0');
	} while( _tcsclen ( tszInput ) == 0 && ! bAllowEmpty );

	return tszInput;
}

///////////////////////////////////////////////////////////////////////////////////////////

LPTSTR AskDevice( AxSms::IGsmPtr &oGsm )
{
	LONG			lDevice				= 0L;
	static TCHAR	tszDevice[ 256 + 1 ]	= { _T('\0') };
	LPCTSTR			lptszDevice;
	int				iCom					= 0;
	int				iDev					= 0;
	TCHAR			tszTapiDevices[ 99 ][ 256 ];

	_tprintf( _T("Select a device:\n") );

	for ( iCom = 1 ; iCom <= 8 ; iCom++ )
		_tprintf( _T("   %ld: COM%ld\n"), iCom, iCom );

	for( iDev = 0, lptszDevice = ( LPCTSTR ) oGsm->FindFirstDevice(); oGsm->LastError == 0L; iDev++, lptszDevice = ( LPCTSTR ) oGsm->FindNextDevice() )
	{
		_tprintf ( _T("   %ld: %s\n"), iCom + iDev, lptszDevice );
		_stprintf( tszTapiDevices[ iDev ], _T("%s"), lptszDevice );
	}

	while ( lDevice == 0L )
	{
		_tprintf( _T("   > ") );
		_tscanf( _T("%d"), &lDevice );

		Sleep( 1000 );
		if ( lDevice < iCom ) 
			_stprintf ( tszDevice, _T("COM%ld"), lDevice );
		else if( lDevice < iCom + iDev ) 
			_stprintf ( tszDevice, _T("%s"), tszTapiDevices[ lDevice - iCom ]  );
		else
			lDevice = 0L;
	}
	_tprintf( _T("  Selected device: %s\n\n"), tszDevice );
	return tszDevice;
}




