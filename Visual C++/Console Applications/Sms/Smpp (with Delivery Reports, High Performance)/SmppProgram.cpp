// SmppProgram.cpp : Defines the entry point for the console application.
//

#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <comdef.h>
#include <atlbase.h>

#import "..\..\..\include\AxSms.tlb"
#include "..\..\..\include\AxSmsConstants.h"

VOID ReadSmppProvider( _bstr_t &bstrServer, INT &nServerPort, _bstr_t &bstrSystemID, _bstr_t &bstrPassword );
LPTSTR ReadInput( LPCTSTR lpszTitle, BOOL bAllowEmpty = FALSE );
VOID GenerateSmsBody(AxSms::IMessagePtr &oSms, INT nSendNumber);
LPTSTR ASPrint(LPCTSTR lptszFmt, ...);

///////////////////////////////////////////////////////////////////////////////////////////

int main(void)
{
	AxSms::ISmppPtr	oSmpp = NULL;
	AxSms::IConstantsPtr oConstants = NULL;
	AxSms::IMessagePtr oSms = NULL, oRcvMessage = NULL;	
	_bstr_t			bstrServer = _T(""), bstrSystemID = _T(""), bstrSystemPassword = _T(""),
					bstrToAddress = _T("");
	INT				nServerPort = 0;
	INT				nSendNumber = 10;
	BOOL			bDone = FALSE;

    // initialize COM
	CoInitialize(NULL);

	// Create objects
	oSmpp.CreateInstance(__uuidof(AxSms::Smpp));
	oConstants.CreateInstance(__uuidof(AxSms::Constants));
	oSms.CreateInstance(__uuidof(AxSms::Message));	
	if( oSmpp == NULL || oSms == NULL || oConstants == NULL )
	{
		_tprintf( _T("Failed to create AxSms object(s).\n") );		
		goto _EndMain;
	}

	_tprintf(_T("*******************************************************************************\n\n") 
        _T("WARNING: This example will spend all of your assigned demo credits at once !\n\n")
        _T("To avoid spending credits you can connect to the Auron SMPP simulator\n")
        _T("instead. Download the SMPP Simulator from www.Auron.com/freeware\n\n")
        _T("*******************************************************************************\n"));

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
	bstrToAddress = ReadInput(_T("Enter receipient: "), false);

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

    // This is an example for a mainloop in a high-performance bulk-sms application. This applicaiton sends out a pre-determined
    // number of SMS messages while receiving messages as well. Quit the mainloop by pressing 'q'.
	_tprintf(_T("Enter mainloop; press 'q' to quit...\n"));
	while (oSmpp->IsBound && !bDone)
	{
		// This loop will start with sending out a predefined number of SMS messages 
		if (nSendNumber > 0)
		{
            // Prepare to send a batch of SMS messages by first checking how many messages can be sent at once.
            // The Sms submit space is related to the queue size for SMS submissions: oSmpp.MaxSmsSubmissions
            INT nSubmissions = oSmpp->CountSmsSubmitSpace();
            if (nSubmissions >= nSendNumber) nSubmissions = nSendNumber;
            for (int i = 0; i < nSubmissions; i++)
            {                
				oSms.CreateInstance(__uuidof(AxSms::Message));
				oSms->ToAddress = bstrToAddress;
				GenerateSmsBody(oSms, nSendNumber);
                nSendNumber--;

                // It's possible to accept multipart messages because by calling 'CountSmsSubmitSpace' the
                // number of messages you can submit is guaranteed, even if they are multipart messages.
                oSmpp->SubmitSms(oSms, oConstants->MULTIPART_ACCEPT);
                _tprintf(_T("SubmitSms, result: %d, (%s)\n"), oSmpp->LastError, 
                    (LPCTSTR)oSmpp->GetErrorDescription(oSmpp->LastError));
            }
		}

        // Process all SMS updates. SMS updates are generated if the SMPP server responds to a submitted SMS message.
        oSms = oSmpp->FetchSmsUpdate();
        while (oSmpp->LastError == 0)
        {   // If the command status is something other than 0 (SMPP_ESME_ROK) the message is rejected
            _tprintf(_T("SMS update, command status: %s; SMS reference: %s\n"),
                (LPCTSTR)oConstants->SmppEsmeToString(oSms->SmppCommandStatus), (LPCTSTR)oSms->Reference);
            if (oSms->SmppCommandStatus == oConstants->SMPP_ESME_RTHROTTLED ||
                oSms->SmppCommandStatus == oConstants->SMPP_ESME_RMSGQFUL)
            {   // The server is unable to handle the message right now, it's trying to throttle message volume.
                // we can try to send it again right away to keep as close to the maximum throughput as possible.
                // Don't mind the multipart flag here. The message returned by fetchupdate is always a single part.
                _tprintf(_T("Retrying this message\n"));
                oSmpp->SubmitSms(oSms, oConstants->MULTIPART_ACCEPT);
            }
            oSms = oSmpp->FetchSmsUpdate();
        }
		
        // Receive incoming messages, only receive a set number of messages at once. This is especially important
        // in high-volume applications. If there is no cap on the number of messages received here this loop can 
        // take an increasing ammount of time. 
        INT nMaxReceive = 10;
        oSms = oSmpp->ReceiveMessage();
        while (oSmpp->LastError == 0 && nMaxReceive > 0)
        {
            _tprintf(_T("Receive SMS from: %s\nBody: %s\n"), (LPCTSTR)oSms->FromAddress, (LPCTSTR)oSms->Body);
            nMaxReceive--;
            oSms = oSmpp->ReceiveMessage();                    
        }

		bDone = _kbhit() != 0 && _getche() == 'q';
		Sleep(1);
	}	

_EndMain:

	// Disconnect can always be called. If the connection is still bound, it will 'unbind'.
	oSmpp->Disconnect();

	if( oSms != NULL )
		oSms.Release();

	if( oConstants != NULL )
		oConstants.Release();

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

VOID GenerateSmsBody(AxSms::IMessagePtr &oSms, INT nSendNumber)
{
	LPTSTR lptszBuf1 = ASPrint(_T("%d bottle%s of beer on the wall, %d bottle%s of beer. ")
		_T("Take one down and pass it around, "),
		nSendNumber, nSendNumber == 1 ? "": "s", nSendNumber, nSendNumber == 1 ? "": "s");
	
	nSendNumber--;

	LPTSTR lptszBuf2 = NULL;
	if (nSendNumber <= 0)
		lptszBuf2 = _tcsdup(_T("no more bottles of beer on the wall."));
	else
		lptszBuf2 = ASPrint(_T("%d bottle%s of beer on the wall."),
			nSendNumber, nSendNumber == 1 ? "": "s");

	LPTSTR lptszBuf3 = ASPrint(_T("%s%s"), lptszBuf1, lptszBuf2);

	oSms->Body = lptszBuf3;

	free(lptszBuf1);
	free(lptszBuf2);
	free(lptszBuf3);
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

///////////////////////////////////////////////////////////////////////////////////////////

LPTSTR ASPrint(LPCTSTR lptszFmt, ...)
{
	LPTSTR lptszBuf = NULL;
	INT iLen = 0;
	va_list	args;

	va_start(args, lptszFmt);
	iLen = _vsctprintf(lptszFmt, args) + 1;
	lptszBuf = (LPTSTR)calloc(iLen, sizeof(TCHAR));
	if (lptszBuf == NULL) return lptszBuf;
	_vstprintf_s(lptszBuf, iLen, lptszFmt, args);
	va_end(args);

	return lptszBuf;
}
