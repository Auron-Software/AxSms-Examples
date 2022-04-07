#ifndef AXSMSCONSTANTS_H
#define AXSMSCONSTANTS_H

#define AXSMS_GSM_BAUDRATE_DEFAULT			0L	// default
#define AXSMS_GSM_BAUDRATE_INVALID			1L	// invalid baudrate
#define AXSMS_GSM_BAUDRATE_110			  110L	// 110    bps
#define	AXSMS_GSM_BAUDRATE_300			  300L	// 300    bps
#define	AXSMS_GSM_BAUDRATE_600		      600L	// 600    bps
#define	AXSMS_GSM_BAUDRATE_1200		     1200L	// 1200   bps
#define	AXSMS_GSM_BAUDRATE_2400		     2400L	// 2400   bps
#define	AXSMS_GSM_BAUDRATE_4800		     4800L	// 4800   bps
#define	AXSMS_GSM_BAUDRATE_9600		     9600L	// 9600   bps
#define	AXSMS_GSM_BAUDRATE_14400			14400L	// 14400  bps
#define	AXSMS_GSM_BAUDRATE_19200			19200L	// 19200  bps
#define	AXSMS_GSM_BAUDRATE_38400			38400L	// 38400  bps
#define AXSMS_GSM_BAUDRATE_56000			56000L	// 56000  bps
#define	AXSMS_GSM_BAUDRATE_57600			57600L	// 57600  bps
#define	AXSMS_GSM_BAUDRATE_64000			64000L	// 64000  bps
#define	AXSMS_GSM_BAUDRATE_115200	   115200L	// 115200 bps
#define	AXSMS_GSM_BAUDRATE_128000	   128000L	// 128000 bps
#define	AXSMS_GSM_BAUDRATE_230400	   230400L	// 230400 bps
#define	AXSMS_GSM_BAUDRATE_256000	   256000L	// 256000 bps
#define	AXSMS_GSM_BAUDRATE_460800	   460800L	// 460800 bps
#define	AXSMS_GSM_BAUDRATE_921600	   921600L	// 921600 bps

#define AXSMS_GSM_MESSAGESTATE_RECEIVED_UNREAD 0
#define AXSMS_GSM_MESSAGESTATE_RECEIVED_READ 1
#define AXSMS_GSM_MESSAGESTATE_STORED_UNSENT 2
#define AXSMS_GSM_MESSAGESTATE_STORED_SENT 3
#define AXSMS_GSM_MESSAGESTATE_ALL 4

#define AXSMS_GSM_STORAGETYPE_UNDEFINED 0	// --	undefined, don't change the current storage type
#define AXSMS_GSM_STORAGETYPE_SIM 1			// SM
#define AXSMS_GSM_STORAGETYPE_MEMORY 2		// ME	
#define AXSMS_GSM_STORAGETYPE_COMBINED 3		// MT	(All storage areas)
#define AXSMS_GSM_STORAGETYPE_STATUS 4		// SR	(Status report storage area)
#define AXSMS_GSM_STORAGETYPE_ALL 5			// --   Receive from all (SM / ME / MT)
#define AXSMS_GSM_STORAGETYPE_BROADCAST 6	// BM	(Broadcast storage area; Not using this)
#define AXSMS_GSM_STORAGETYPE_TERMINAL 7		// TA	(Terminal adaptor storage area; Not using this)

#define AXSMS_GSM_MESSAGEFORMAT_PDU 0
#define AXSMS_GSM_MESSAGEFORMAT_TEXT 1
#define AXSMS_GSM_MESSAGEFORMAT_AUTO 2

#define AXSMS_GSM_PREFIXSMSC_ENABLED 0
#define AXSMS_GSM_PREFIXSMSC_DISABLED 1
#define AXSMS_GSM_PREFIXSMSC_AUTO 2

// First octet values, or'ed into first octet in PDU mode

//(Deliver)
//Bit no7		6		5		4		 3		2		1		0
//Name	TP-RP	TP-UDHI	TP-SRI	(unused)(unused)TP-MMS	TP-MTI	TP-MTI
//														0		0

//(Submit)
//Bit no7		6		5		4		3		2		1		0
//Name	TP-RP	TP-UDHI	TP-SRR	TP-VPF	TP-VPF	TP-RD	TP-MTI	TP-MTI
//														0		1

#define AXSMS_GSM_FO_REPLYPATH_EXISTS 128
#define AXSMS_GSM_FO_UDHI 64
#define AXSMS_GSM_FO_STATUS_REPORT 32
#define AXSMS_GSM_FO_VALIDITY_NONE 0
#define AXSMS_GSM_FO_VALIDITY_RELATIVE 16
#define AXSMS_GSM_FO_VALIDITY_ENHANCED 8
#define AXSMS_GSM_FO_VALIDITY_ABSOLUTE 24
#define AXSMS_GSM_FO_REJECT_DUPLICATES 4
#define AXSMS_GSM_FO_SUBMIT_SM 1
#define AXSMS_GSM_FO_DELIVER_SM 0
#define AXSMS_GSM_FO_STATUS_SM 2

/******************************************************************************
	Datacoding in GSM
*******************************************************************************

 Bits 7654 3210
	  00nn nnnn - Normal class 2 (general datacoding)
		0	      Text is uncompressed (basically always)
		1         Text is compressed (TODO: don't even know what this means..)
		 0        Ignore bits 10
		 1        Apply bits 10 (message class)
		   00     Default GSM alphabet
		   01     8 bit data
		   10     UCS-2
		   11     Reserved
			 00   Immediate display (alert) (Flash message: 0001 0000)
			 01   ME specific (Only supposed to be stored in ME ?)
			 10   SIM specific (Only supposed to be stored in SIM ?)
			 11   TE specific (Only supposed to be stored in TE ?)
	  0100-1011 - Reserved
	  110n nnnn
		 0  0     Discard message; don't use or store the body.
		 1  0     Store message; message is encoded as normal GSM
		   00     Set indication inactive
		   10     Set indication active
			000   Voicemail message waiting
			001   Fax message waiting
			010   Email message waiting
			011   Other message waiting (Reserved ?)
	  1110 nnnn   Same as above but message is UCS-2
	  1111 nnnn   Class 1 message
		   00     Default alphabet
		   01     8-bit data
		   0 00   Immediate display (alert) (Flash message: 1111 0000)
		   0 01   ME specific (Only supposed to be stored in ME ?)
		   0 10	  SIM specific (Only supposed to be stored in SIM ?)
		   0 11	  TE specific (Only supposed to be stored in TE ?)
******************************************************************************/

/******************************************************************************
 - Unicode:
      000n 10nn  Class 2 Unicode message
      1110 nnnn  Voicemail/Fax/Email indicator
 - GSM:
      000n 00nn	 Class 2 message
      1101 nnnn  Voicemail/Fax/Email indicator
      1111 00nn  Class 1 message
 - 8 bit data:
      000n 01nn  Class 2 Data message
      1111 01nn  Class 1 Data message
 - Discard body
      1100 nnnn  Voicemail/Fax/Email indicator
******************************************************************************/

#define IS_GSMMI_DISCARDBODY(dcs)  ((dcs & 240) == 192)
#define IS_GSMMI_UNICODE(dcs)      ((dcs & 240) == 224)
#define IS_GSMMI_DEFAULT(dcs)      ((dcs & 240) == 208)
#define IS_GSMCLASS2_UNICODE(dcs)  ((dcs & 224) == 0 && (dcs & 12) == 8)
#define IS_GSMCLASS2_DEFAULT(dcs)  ((dcs & 224) == 0 && (dcs & 12) == 0)
#define IS_GSMCLASS2_DATA(dcs)     ((dcs & 224) == 0 && (dcs & 12) == 4)
#define IS_GSMCLASS1_DEFAULT(dcs)  ((dcs & 240) == 240 && (dcs & 12) == 0)
#define IS_GSMCLASS1_DATA(dcs)     ((dcs & 240) == 240 && (dcs & 12) == 4)

#define IS_GSM_UNICODE(dcs)        (IS_GSMMI_UNICODE(dcs) ||		\
                                    IS_GSMCLASS2_UNICODE(dcs))
#define IS_GSM_DEFAULT(dcs)        (IS_GSMMI_DEFAULT(dcs) ||		\
									IS_GSMCLASS2_DEFAULT(dcs) ||	\
                                    IS_GSMCLASS1_DEFAULT(dcs))
#define IS_GSM_DATA(dcs)           (IS_GSMCLASS2_DATA(dcs) ||		\
                                    IS_GSMCLASS1_DATA(dcs))
#define IS_GSM_DISCARDBODY(dcs)     IS_GSMMI_DISCARDBODY(dcs)

// DCS octet values, or'ed into DCS in PDU mode
#define AXSMS_GSM_DATACODING_DEFAULT 0
#define AXSMS_GSM_DATACODING_8BIT_DATA 4
#define AXSMS_GSM_DATACODING_UNICODE 8
#define AXSMS_GSM_DATACODING_ME_SPECIFIC 1
#define AXSMS_GSM_DATACODING_SIM_SPECIFIC 2
#define AXSMS_GSM_DATACODING_TE_SPECIFIC 3  

// Message status codes
#define AXSMS_GSM_STATUS_MESSAGE_DELIVERED_SUCCESSFULLY 0X00	// Short message delivered successfully
#define AXSMS_GSM_STATUS_FORWARDED_STATUS_UNKNOWN 0X01		// Forwarded, but status unknown
#define AXSMS_GSM_STATUS_REPLACED 0X02						// Replaced
#define AXSMS_GSM_STATUS_CONGESTION_STILL_TRYING 0X20			// Congestion, still trying
#define AXSMS_GSM_STATUS_RECIPIENT_BUSY_STILL_TRYING 0X21		// Recipient busy, still trying
#define AXSMS_GSM_STATUS_NO_RESPONSE_STILL_TRYING 0X22		// No response recipient, still trying
#define AXSMS_GSM_STATUS_SERVICE_REJECTED_STILL_TRYING 0X23	// Service rejected, still trying
#define AXSMS_GSM_STATUS_QOS_NOT_AVAILABLE_STILL_TRYING 0X24	// QOS not available, still trying
#define AXSMS_GSM_STATUS_RECIPIENT_ERROR_STILL_TRYING 0X25	// Recipient error, still trying
#define AXSMS_GSM_STATUS_RPC_ERROR 0X40						// RPC Error
#define AXSMS_GSM_STATUS_INCOMPATIBLE_DESTINATION 0X41		// Incompatible destination
#define AXSMS_GSM_STATUS_CONNECTION_REJECTED 0X42				// Connection rejected
#define AXSMS_GSM_STATUS_NOT_OBTAINABLE 0X43					// Not obtainable
#define AXSMS_GSM_STATUS_QOS_NOT_AVAILABLE 0X44				// QOS not available
#define AXSMS_GSM_STATUS_NO_INTERNETWORKING_AVAILABLE 0X45	// No internetworking available
#define AXSMS_GSM_STATUS_MESSAGE_EXPIRED 0X46					// Message expired
#define AXSMS_GSM_STATUS_MESSAGE_DELETED_BY_SENDER 0X47		// Message deleted by sender
#define AXSMS_GSM_STATUS_MESSAGE_DELETED_BY_SMSC 0X48			// Message deleted by SMSC
#define AXSMS_GSM_STATUS_DOES_NOT_EXIST 0X49					// Does not exist

#define AXSMS_GSM_TCPMODE_TELNET_WITH_COMCONTROL 0
#define AXSMS_GSM_TCPMODE_TELNET                 1
#define AXSMS_GSM_TCPMODE_RAW                    2

#define AXSMS_TON_UNKNOWN 0
#define AXSMS_TON_INTERNATIONAL 1
#define AXSMS_TON_NATIONAL 2
#define AXSMS_TON_NETWORK_SPECIFIC 3
#define AXSMS_TON_SUBSCRIBER_NUMBER 4
#define AXSMS_TON_ALPHANUMERIC 5
#define AXSMS_TON_ABBREVIATED 6

#define AXSMS_NPI_UNKNOWN 0
#define AXSMS_NPI_ISDN 1
#define AXSMS_NPI_DATA 3
#define AXSMS_NPI_TELEX 4
#define AXSMS_NPI_LAND_MOBILE 6
#define AXSMS_NPI_NATIONAL 8
#define AXSMS_NPI_PRIVATE 9
#define AXSMS_NPI_ERMES 10
#define AXSMS_SMPP_NPI_INTERNET 14
#define AXSMS_SMPP_NPI_WAP 18						// But this one is a bit more complicated..


/******************************************************************************
	Datacoding in SMPP
*******************************************************************************

 Bits 7654 3210
	  0000 nnnn - Normal class 2 (general datacoding)
           0000   SMSC Default alphabet
           0001   IA5 (CCITT T.50)/ASCII (ANSI X3.4)
           0010   Octet unspecified (8-bit binary)
           0011   Latin 1 (ISO-8859-1)
           0100   Octet unspecified (8-bit binary)
           0101   JIS (X 0208-1990)
           0110   Cyrllic (ISO-8859-5)
           0111   Latin/Hebrew (ISO-8859-8)
           1000   UCS2 (ISO/IEC-10646)
           1001   Pictogram Encoding
           1010   ISO-2022-JP (Music Codes)
           1011   reserved
           1100   reserved
           1101   Extended Kanji JIS(X 0212-1990)
           1110   KS C 5601
           1111   reserved
      1011 1111 - Reserved
	  110n nnnn - MWI (Message Waiting Indicator) -> 'Datacoding in GSM'
	  1110 nnnn - Reserved
	  1111 nnnn   Class 1 message -> 'Datacoding in GSM'

******************************************************************************/

#define IS_SMPPMI_DISCARDBODY(dcs)  ((dcs & 240) == 192)
#define IS_SMPPMI_DEFAULT(dcs)      ((dcs & 240) == 208)
#define IS_SMPPCLASS1_DEFAULT(dcs)  ((dcs & 240) == 240 && (dcs & 12) == 0)
#define IS_SMPPCLASS1_DATA(dcs)     ((dcs & 240) == 240 && (dcs & 12) == 4)

#define IS_SMPP_UNICODE(dcs)        (dcs == AXSMS_SMPP_DATACODING_UNICODE)
#define IS_SMPP_DEFAULT(dcs)        (dcs == AXSMS_SMPP_DATACODING_SMSC_DEFAULT ||           \
									 IS_GSMMI_DEFAULT(dcs) || IS_SMPPCLASS1_DEFAULT(dcs))
#define IS_SMPP_DATA(dcs)           (dcs == AXSMS_SMPP_DATACODING_OCTET_UNSPEC ||           \
                                     dcs == AXSMS_SMPP_DATACODING_OCTET_UNSPEC2 ||          \
									 IS_SMPPCLASS1_DATA(dcs))
#define IS_SMPP_DISCARDBODY(dcs)     IS_GSMMI_DISCARDBODY(dcs)

#define AXSMS_SMPP_DATACODING_SMSC_DEFAULT 0			// SMSC Default Alphabet
#define AXSMS_SMPP_DATACODING_ASCII 1				// IA5 (CCITT T.50)/ASCII (ANSI X3.4)
#define AXSMS_SMPP_DATACODING_OCTET_UNSPEC 2			// Octet unspecified (8-bit binary)
#define AXSMS_SMPP_DATACODING_LATIN 3				// Latin 1 (ISO-8859-1)
#define AXSMS_SMPP_DATACODING_OCTET_UNSPEC2 4		// Octet unspecified (8-bit binary)
#define AXSMS_SMPP_DATACODING_JIS_KANJI 5			// JIS (X 0208-1990) Japanese Industrial Standard
#define AXSMS_SMPP_DATACODING_CYRILLIC 6				// Cyrllic (ISO-8859-5)
#define AXSMS_SMPP_DATACODING_LATIN_HEBREW 7			// Latin/Hebrew (ISO-8859-8)
#define AXSMS_SMPP_DATACODING_UNICODE 8				// UTF-16 UCS2 (ISO/IEC-10646)
#define AXSMS_SMPP_DATACODING_PICTOGRAM 9			// Pictogram Encoding
#define AXSMS_SMPP_DATACODING_ISO_2022_JP 10			// ISO-2022-JP (Music Codes)
#define AXSMS_SMPP_DATACODING_EXTENDED_KANJI_JIS 13	// Extended Kanji JIS(X 0212-1990)
#define AXSMS_SMPP_DATACODING_KS_C_5601 14			// KS C 5601
#define AXSMS_SMPP_DATACODING_FLASH 0xf0				// Make this a flash message

#define AXSMS_SMPP_PRIORITYFLAG_BULK 0				// normal
#define AXSMS_SMPP_PRIORITYFLAG_NORMAL 1				// interactive
#define AXSMS_SMPP_PRIORITYFLAG_URGENT 2				// urgent
#define AXSMS_SMPP_PRIORITYFLAG_VERY_URGENT 3		// emergency

#define AXSMS_SMPP_MESSAGESTATE_AX_WAITRESP 0		// The message is waiting for an ack by the server (!inspec!)
#define AXSMS_SMPP_MESSAGESTATE_ENROUTE 1			// The message is in enroute state
#define AXSMS_SMPP_MESSAGESTATE_DELIVERED 2			// Message is delivered to destination
#define AXSMS_SMPP_MESSAGESTATE_EXPIRED 3			// Message validity period has expired
#define AXSMS_SMPP_MESSAGESTATE_DELETED 4			// Message has been deleted
#define AXSMS_SMPP_MESSAGESTATE_UNDELIVERABLE 5		// Message is undeliverable
#define AXSMS_SMPP_MESSAGESTATE_ACCEPTED 6			// Message is in accepted state
													//	(i.e. has been manually read
													//	 on behalf of the subscriber by
													//	 customer service)
#define AXSMS_SMPP_MESSAGESTATE_UNKNOWN 7			// Message is in invalid state
#define AXSMS_SMPP_MESSAGESTATE_REJECTED 8			// Message is in a rejected state
#define AXSMS_SMPP_MESSAGESTATE_AX_RESPERROR 96		// ActiveXperts specific status: error status in response
#define AXSMS_SMPP_MESSAGESTATE_AX_NOCREDITS 97		// ActiveXperts specific status: out of credits
#define AXSMS_SMPP_MESSAGESTATE_AX_RESPTO 98			// ActiveXperts specific status: The message was never acked by the server
#define AXSMS_SMPP_MESSAGESTATE_AX_RESPONDED 99		// ActiveXperts specific status: The message was acked by the server but not queried by ESME yet..

// PDU command id's
#define AXSMS_SMPP_CMD_GENERIC_NACK 0x80000000
#define AXSMS_SMPP_CMD_BIND_RECEIVER 0x00000001
#define AXSMS_SMPP_CMD_BIND_RECEIVER_RESP 0x80000001
#define AXSMS_SMPP_CMD_BIND_TRANSMITTER 0x00000002
#define AXSMS_SMPP_CMD_BIND_TRANSMITTER_RESP 0x80000002
#define AXSMS_SMPP_CMD_QUERY_SM 0x00000003
#define AXSMS_SMPP_CMD_QUERY_SMP_RESP 0x80000003
#define AXSMS_SMPP_CMD_SUBMIT_SM 0x00000004
#define AXSMS_SMPP_CMD_SUBMIT_SM_RESP 0x80000004
#define AXSMS_SMPP_CMD_DELIVER_SM 0x00000005
#define AXSMS_SMPP_CMD_DELIVER_SM_RESP 0x80000005
#define AXSMS_SMPP_CMD_UNBIND 0x00000006
#define AXSMS_SMPP_CMD_UNBIND_RESP 0x80000006
#define AXSMS_SMPP_CMD_REPLACE_SM 0x00000007
#define AXSMS_SMPP_CMD_REPLACE_SM_RESP 0x80000007
#define AXSMS_SMPP_CMD_CANCEL_SM 0x00000008
#define AXSMS_SMPP_CMD_CANCEL_SM_RESP 0x80000008
#define AXSMS_SMPP_CMD_BIND_TRANSCEIVER 0x00000009
#define AXSMS_SMPP_CMD_BIND_TRANSCEIVER_RESP 0x80000009
// reserved
#define AXSMS_SMPP_CMD_OUTBIND 0x0000000b
// reserved
#define AXSMS_SMPP_CMD_ENQUIRE_LINK 0x00000015
#define AXSMS_SMPP_CMD_ENQUIRE_LINK_RESP 0x80000015
// reserved
#define AXSMS_SMPP_CMD_SUBMIT_MULTI 0x00000021
#define AXSMS_SMPP_CMD_SUBMIT_MULTI_RESP 0x80000021
// reserved
#define AXSMS_SMPP_CMD_ALERT_NOTIFICATION 0x00000102
// reserved
#define AXSMS_SMPP_CMD_DATA_SM 0x00000103
#define AXSMS_SMPP_CMD_DATA_SM_RESP 0x80000103

// status codes
#define AXSMS_SMPP_ESME_ROK 0x00000000 // No Error
#define AXSMS_SMPP_ESME_RINVMSGLEN 0x00000001 // Message Length is invalid
#define AXSMS_SMPP_ESME_RINVCMDLEN 0x00000002 // Command Length is invalid
#define AXSMS_SMPP_ESME_RINVCMDID 0x00000003 // Invalid Command ID
#define AXSMS_SMPP_ESME_RINVBNDSTS 0x00000004 // Incorrect BIND Status for given command
#define AXSMS_SMPP_ESME_RALYBND 0x00000005 // ESME Already in Bound State
#define AXSMS_SMPP_ESME_RINVPRTFLG 0x00000006 // Invalid Priority Flag
#define AXSMS_SMPP_ESME_RINVREGDLVFLG 0x00000007 // Invalid Registered Delivery Flag
#define AXSMS_SMPP_ESME_RSYSERR 0x00000008 // System Error
// Reserved 0x00000009 Reserved
#define AXSMS_SMPP_ESME_RINVSRCADR 0x0000000A // Invalid Source Address
#define AXSMS_SMPP_ESME_RINVDSTADR 0x0000000B // Invalid Dest Addr
#define AXSMS_SMPP_ESME_RINVMSGID 0x0000000C // Message ID is invalid
#define AXSMS_SMPP_ESME_RBINDFAIL 0x0000000D // Bind Failed
#define AXSMS_SMPP_ESME_RINVPASWD 0x0000000E // Invalid Password
#define AXSMS_SMPP_ESME_RINVSYSID 0x0000000F // Invalid System ID
// Reserved 0x00000010 Reserved
#define AXSMS_SMPP_ESME_RCANCELFAIL 0x00000011 // Cancel SM Failed
// Reserved 0x00000012 Reserved
#define AXSMS_SMPP_ESME_RREPLACEFAIL 0x00000013 // Replace SM Failed
#define AXSMS_SMPP_ESME_RMSGQFUL 0x00000014 // Message Queue Full
#define AXSMS_SMPP_ESME_RINVSERTYP 0x00000015 // Invalid Service Type
// Reserved 0x00000016-0x00000032 Reserved
#define AXSMS_SMPP_ESME_RINVNUMDESTS 0x00000033 // Invalid number of destinations
#define AXSMS_SMPP_ESME_RINVDLNAME 0x00000034 // Invalid Distribution List name
// Reserved 0x00000035-0x0000003FReserved
#define AXSMS_SMPP_ESME_RINVDESTFLAG 0x00000040 // Destination flag is invalid (submit_multi)
// Reserved 0x00000041 Reserved
#define AXSMS_SMPP_ESME_RINVSUBREP 0x00000042 // Invalid ‘submit with replace’ request (i.e. submit_sm with replace_if_present_flag set)
#define AXSMS_SMPP_ESME_RINVESMCLASS 0x00000043 // Invalid esm_class field data
#define AXSMS_SMPP_ESME_RCNTSUBDL 0x00000044 // Cannot Submit to Distribution List
#define AXSMS_SMPP_ESME_RSUBMITFAIL 0x00000045 // submit_sm or submit_multi failed
// Reserved 0x00000046-0x00000047 Reserved
#define AXSMS_SMPP_ESME_RINVSRCTON 0x00000048 // Invalid Source address TON
#define AXSMS_SMPP_ESME_RINVSRCNPI 0x00000049 // Invalid Source address NPI
#define AXSMS_SMPP_ESME_RINVDSTTON 0x00000050 // Invalid Destination address TON
#define AXSMS_SMPP_ESME_RINVDSTNPI 0x00000051 // Invalid Destination address NPI
// Reserved 0x00000052 Reserved
#define AXSMS_SMPP_ESME_RINVSYSTYP 0x00000053 // Invalid system_type field
#define AXSMS_SMPP_ESME_RINVREPFLAG 0x00000054 // Invalid replace_if_present flag
#define AXSMS_SMPP_ESME_RINVNUMMSGS 0x00000055 // Invalid number of messages
// Reserved 0x00000056-0x00000057 Reserved
#define AXSMS_SMPP_ESME_RTHROTTLED 0x00000058 // Throttling error (ESME has exceeded allowed message limits)
// Reserved 0x00000059-0x00000060Reserved
#define AXSMS_SMPP_ESME_RINVSCHED 0x00000061 // Invalid Scheduled Delivery Time
#define AXSMS_SMPP_ESME_RINVEXPIRY 0x00000062 // Invalid message validity period (Expiry time)
#define AXSMS_SMPP_ESME_RINVDFTMSGID 0x00000063 // Predefined Message Invalid or Not Found
#define AXSMS_SMPP_ESME_RX_T_APPN 0x00000064 // ESME Receiver Temporary App Error Code
#define AXSMS_SMPP_ESME_RX_P_APPN 0x00000065 // ESME Receiver Permanent App Error Code
#define AXSMS_SMPP_ESME_RX_R_APPN 0x00000066 // ESME Receiver Reject Message Error Code
#define AXSMS_SMPP_ESME_RQUERYFAIL 0x00000067 // query_sm request failed
// Reserved 0x00000068-0x000000BF Reserved
#define AXSMS_SMPP_ESME_RINVOPTPARSTREAM 0x000000C0 // Error in the optional part of the PDU Body.
#define AXSMS_SMPP_ESME_ROPTPARNOTALLWD 0x000000C1 // Optional Parameter not allowed
#define AXSMS_SMPP_ESME_RINVPARLEN 0x000000C2 // Invalid Parameter Length.
#define AXSMS_SMPP_ESME_RMISSINGOPTPARAM 0x000000C3 // Expected Optional Parameter missing
#define AXSMS_SMPP_ESME_RINVOPTPARAMVAL 0x000000C4 // Invalid Optional Parameter Value
// Reserved 0x000000C5-0x000000FD Reserved
#define AXSMS_SMPP_ESME_RDELIVERYFAILURE 0x000000FE // Delivery Failure (used for data_sm_resp)
#define AXSMS_SMPP_ESME_RUNKNOWNERR 0x000000FF // Unknown Error
// Reserved for SMPP extension 0x00000100-0x000003FF Reserved for SMPP extension
// Reserved for SMSC vendor specific errors 0x00000400-0x000004FF
// Reserved for SMSC vendor specific errors
// Reserved 0x00000500-0xFFFFFFFF Reserved

#define AXSMS_SMPP_TLV_DEST_ADDR_SUBUNIT 0x0005 // GSM
#define AXSMS_SMPP_TLV_DEST_NETWORK_TYPE 0x0006 // Generic
#define AXSMS_SMPP_TLV_DEST_BEARER_TYPE 0x0007 // Generic
#define AXSMS_SMPP_TLV_DEST_TELEMATICS_ID 0x0008 // GSM
#define AXSMS_SMPP_TLV_SOURCE_ADDR_SUBUNIT 0x000D // GSM
#define AXSMS_SMPP_TLV_SOURCE_NETWORK_TYPE 0x000E // Generic
#define AXSMS_SMPP_TLV_SOURCE_BEARER_TYPE 0x000F // Generic
#define AXSMS_SMPP_TLV_SOURCE_TELEMATICS_ID 0x0010 // GSM
#define AXSMS_SMPP_TLV_QOS_TIME_TO_LIVE 0x0017 // Generic
#define AXSMS_SMPP_TLV_PAYLOAD_TYPE 0x0019 // Generic
#define AXSMS_SMPP_TLV_ADDITIONAL_STATUS_INFO_TEXT 0x001D // Generic
#define AXSMS_SMPP_TLV_RECEIPTED_MESSAGE_ID 0x001E // Generic
#define AXSMS_SMPP_TLV_MS_MSG_WAIT_FACILITIES 0x0030 // GSM
#define AXSMS_SMPP_TLV_PRIVACY_INDICATOR 0x0201 // CDMA, TDMA
#define AXSMS_SMPP_TLV_SOURCE_SUBADDRESS 0x0202 // CDMA, TDMA
#define AXSMS_SMPP_TLV_DEST_SUBADDRESS 0x0203 // CDMA, TDMA
#define AXSMS_SMPP_TLV_USER_MESSAGE_REFERENCE 0x0204 // Generic
#define AXSMS_SMPP_TLV_USER_RESPONSE_CODE 0x0205 // CDMA, TDMA
#define AXSMS_SMPP_TLV_SOURCE_PORT 0x020A // Generic
#define AXSMS_SMPP_TLV_DESTINATION_PORT 0x020B // Generic
#define AXSMS_SMPP_TLV_SAR_MSG_REF_NUM 0x020C // Generic
#define AXSMS_SMPP_TLV_LANGUAGE_INDICATOR 0x020D // CDMA, TDMA
#define AXSMS_SMPP_TLV_SAR_TOTAL_SEGMENTS 0x020E // Generic
#define AXSMS_SMPP_TLV_SAR_SEGMENT_SEQNUM 0x020F // Generic
#define AXSMS_SMPP_TLV_SC_INTERFACE_VERSION 0x0210 // Generic
#define AXSMS_SMPP_TLV_CALLBACK_NUM_PRES_IND 0x0302 // TDMA
#define AXSMS_SMPP_TLV_CALLBACK_NUM_ATAG 0x0303 // TDMA
#define AXSMS_SMPP_TLV_NUMBER_OF_MESSAGES 0x0304 // CDMA
#define AXSMS_SMPP_TLV_CALLBACK_NUM 0x0381 // CDMA, TDMA, GSM, iDEN
#define AXSMS_SMPP_TLV_DPF_RESULT 0x0420 // Generic
#define AXSMS_SMPP_TLV_SET_DPF 0x0421 // Generic
#define AXSMS_SMPP_TLV_MS_AVAILABILITY_STATUS 0x0422 // Generic
#define AXSMS_SMPP_TLV_NETWORK_ERROR_CODE 0x0423 // Generic
#define AXSMS_SMPP_TLV_MESSAGE_PAYLOAD 0x0424 // Generic
#define AXSMS_SMPP_TLV_DELIVERY_FAILURE_REASON 0x0425 // Generic
#define AXSMS_SMPP_TLV_MORE_MESSAGES_TO_SEND 0x0426 // GSM
#define AXSMS_SMPP_TLV_MESSAGE_STATE 0x0427 // Generic
#define AXSMS_SMPP_TLV_CONGESTION_STATE 0x0428 // Generic
#define AXSMS_SMPP_TLV_USSD_SERVICE_OP 0x0501 // GSM (USSD)
#define AXSMS_SMPP_TLV_DISPLAY_TIME 0x1201 // CDMA, TDMA
#define AXSMS_SMPP_TLV_SMS_SIGNAL 0x1203 // TDMA
#define AXSMS_SMPP_TLV_MS_VALIDITY 0x1204 // CDMA, TDMA
#define AXSMS_SMPP_TLV_ALERT_ON_MESSAGE_DELIVERY 0x130C // CDMA
#define AXSMS_SMPP_TLV_ITS_REPLY_TYPE 0x1380 // CDMA
#define AXSMS_SMPP_TLV_ITS_SESSION_INFO 0x1383 // CDMA

// How to send out multipart messages
#define AXSMS_SMPP_MULTIPARTMODE_UDH  1			// Using User Data Headers with 8 bit reference id
#define AXSMS_SMPP_MULTIPARTMODE_UDH16BIT 2		// Using User Data Headers with 16 bit reference id
#define AXSMS_SMPP_MULTIPARTMODE_SARTLV 3		// Using sar_msg_ref_num, sar_total_segments and sar_segment_seqnum TLV's
#define AXSMS_SMPP_MULTIPARTMODE_PAYLOADTLV 4	// As a single message using the message_payload TLV

#define AXSMS_SMPP_LOGLEVEL_MINIMAL   1   // show only error and message references
#define AXSMS_SMPP_LOGLEVEL_NORMAL    2   // be able to trace messages
#define AXSMS_SMPP_LOGLEVEL_VERBOSE   3   // be able to trace PDU details

#define AXSMS_SMPP_SUBMITMODE_SUBMITSM 1
#define AXSMS_SMPP_SUBMITMODE_DATASM 2
#define AXSMS_SMPP_DELIVERMODE_DELIVERSM 1
#define AXSMS_SMPP_DELIVERMODE_DATASM 2

// esm_class field constants
#define AXSMS_SMPP_ESM_2SMSC_MODE_DEFAULT 0 // SMSC default
#define AXSMS_SMPP_ESM_2SMSC_MODE_DATAGRAM 1 // datagram mode
#define AXSMS_SMPP_ESM_2SMSC_MODE_FORWARD 2 // forward (transaction) mode
#define AXSMS_SMPP_ESM_2SMSC_MODE_STOREFORWARD 3 // store and forward mode
#define AXSMS_SMPP_ESM_2SMSC_TYPE_DEFAULT 0 // default message type
#define AXSMS_SMPP_ESM_2SMSC_TYPE_DELIVERY_ACK 8 // short message contains ESME delivery ack
#define AXSMS_SMPP_ESM_2SMSC_TYPE_MANUAL_ACK 16 // short message contains ESME manual/user ack
#define AXSMS_SMPP_ESM_2SMSC_FEAT_NOTHING 0 // no GSM specific features
#define AXSMS_SMPP_ESM_2SMSC_FEAT_UDHI 64 // UDHI indicator (only relevant for MT short messages)
#define AXSMS_SMPP_ESM_2SMSC_FEAT_SRP 128 // Set Reply Path (only relevant for GSM network)
#define AXSMS_SMPP_ESM_2SMSC_FEAT_UDHI_AND_SRP 192 // Set UDHI and reply path (only relevant for GSM network)

#define AXSMS_SMPP_ESM_2ESME_DEFAULT 0 // Default message type
#define AXSMS_SMPP_ESM_2ESME_DELIVERY_RECEIPT 4 // Short message contains SMSC delivery receipt
#define AXSMS_SMPP_ESM_2ESME_DELIVERY_ACK 8 // Short message contains SME delivery acknowledgemet
#define AXSMS_SMPP_ESM_2ESME_MANUAL_ACK 16 // Short message contains SME Manual/User ack
#define AXSMS_SMPP_ESM_2ESME_CONVERSATION_ABORT 18 // Short message contains Conversation abort (Korean CDMA)
#define AXSMS_SMPP_ESM_2ESME_INTERM_DELIVERY_NTFY 32 // Short message contains Intermediate Delivery Notification

#define AXSMS_SMPP_USEGSMENCODING_DISABLED  0	// No GSM7 encoding will be applied
#define AXSMS_SMPP_USEGSMENCODING_INCOMING -1	// Incoming messages will be GSM7 decoded
#define AXSMS_SMPP_USEGSMENCODING_OUTGOING -2	// Outgoing messages will be GSM7 encoded
#define AXSMS_SMPP_USEGSMENCODING_INANDOUT -3	// In- and outgoing messages will be GSM7 encoded
#define AXSMS_SMPP_USEGSMENCODING_INCHARSET -4	// Incoming messages use GSM charset
#define AXSMS_SMPP_USEGSMENCODING_OUTCHARSET -5	// Outgoing messagse use GSM charset
#define AXSMS_SMPP_USEGSMENCODING_INOUTCHARS -6	// In- and outgoing messages will use GSM charset

// registered_delivery
#define AXSMS_SMPP_REG_DELIVERY_NONE 0 // no SMSC delivery receipt requested
#define AXSMS_SMPP_REG_DELIVERY_ON_SUCCESS_FAILURE 1 // delivery receipts requested on success and failure
#define AXSMS_SMPP_REG_DELIVERY_ON_FAILURE 2 // delivery receipt on delivery failure
#define AXSMS_SMPP_REG_DELIVERY_NO_SME_ACK 0 // no recipient SME acknowledgement requested
#define AXSMS_SMPP_REG_DELIVERY_SME_ACK 4 // SME delivery acknowledgement requested
#define AXSMS_SMPP_REG_DELIVERY_MANUAL_SME_ACK 8 // manual SME acknowledgement requested
#define AXSMS_SMPP_REG_DELIVERY_MAN_AUTO_SME_ACK 12 // both manual and auto acknowledgement req
#define AXSMS_SMPP_REG_DELIVERY_NO_INTERM_NTFY 0 // no intermediate notify
#define AXSMS_SMPP_REG_DELIVERY_INTERM_NTF 16 // intermediate notification requested

#define AXSMS_SMPP_BIND_TRANSMITTER 1
#define AXSMS_SMPP_BIND_TRANSCEIVER 2
#define AXSMS_SMPP_BIND_RECEIVER 3

#define AXSMS_SMPP_VERSION_33 0x33
#define AXSMS_SMPP_VERSION_34 0x34
#define AXSMS_SMPP_VERSION_50 0x50

#define AXSMS_SMPP_SESSIONSTATE_DISCONNECTED 1
#define AXSMS_SMPP_SESSIONSTATE_CONNECTED 2
#define AXSMS_SMPP_SESSIONSTATE_BINDING 3
#define AXSMS_SMPP_SESSIONSTATE_BOUND_TX 4
#define AXSMS_SMPP_SESSIONSTATE_BOUND_RX 5
#define AXSMS_SMPP_SESSIONSTATE_BOUND_TRX 6

#define AXSMS_SMPP_IPVERSION_4 0
#define AXSMS_SMPP_IPVERSION_6 1
#define AXSMS_SMPP_IPVERSION_BOTH 2

#define AXSMS_SMPP_CERTIFICATESTORE_LOCALMACHINE 1
#define AXSMS_SMPP_CERTIFICATESTORE_CURRENTUSER 2

#define AXSMS_SMS_WBXML_INDICATION_SIGNAL_NONE 0x05		// action='signal-none'
#define AXSMS_SMS_WBXML_INDICATION_SIGNAL_LOW 0x06		// action='signal-low'
#define AXSMS_SMS_WBXML_INDICATION_SIGNAL_MEDIUM 0x07	// action='signal-medium'
#define AXSMS_SMS_WBXML_INDICATION_SIGNAL_HIGH 0x08		// action='signal-high'
#define AXSMS_SMS_WBXML_INDICATION_SIGNAL_DELETE 0x09	// action='signal-delete'

// These datacoding constants are the same for GSM and SMPP
#define AXSMS_SMS_DATACODING_DEFAULT AXSMS_GSM_DATACODING_DEFAULT
#define AXSMS_SMS_DATACODING_UNICODE AXSMS_GSM_DATACODING_UNICODE
#define AXSMS_SMS_DATACODING_8BIT_DATA AXSMS_GSM_DATACODING_8BIT_DATA
#define AXSMS_SMS_DATACODING_FLASH AXSMS_SMPP_DATACODING_FLASH

// These NPI constants are the same for GSM and SMPP
#define AXSMS_SMS_NPI_UNKNOWN 0
#define AXSMS_SMS_NPI_ISDN 1
#define AXSMS_SMS_NPI_DATA 3
#define AXSMS_SMS_NPI_TELEX 4
#define AXSMS_SMS_NPI_LAND_MOBILE 6
#define AXSMS_SMS_NPI_NATIONAL 8
#define AXSMS_SMS_NPI_PRIVATE 9
#define AXSMS_SMS_NPI_ERMES 10

// These TON constants are the same for GSM and SMPP
#define AXSMS_SMS_TON_UNKNOWN 0
#define AXSMS_SMS_TON_INTERNATIONAL 1
#define AXSMS_SMS_TON_NATIONAL 2
#define AXSMS_SMS_TON_NETWORK_SPECIFIC 3
#define AXSMS_SMS_TON_SUBSCRIBER_NUMBER 4
#define AXSMS_SMS_TON_ALPHANUMERIC 5
#define AXSMS_SMS_TON_ABBREVIATED 6

#define AXSMS_SMS_MULTIPART_ACCEPT 0
#define AXSMS_SMS_MULTIPART_TRUNCATE 1
#define AXSMS_SMS_MULTIPART_REJECT 2

#define AXSMS_SMS_BODYFORMAT_TEXT 0
#define AXSMS_SMS_BODYFORMAT_HEX 2

#define AXSMS_HTTP_PLACEHOLDER_USERTAG _T("%USERTAG%")
#define AXSMS_HTTP_PLACEHOLDER_USERTAGSTRING _T("%USERTAGSTRING%")
#define AXSMS_HTTP_PLACEHOLDER_TOADDRESS _T("%TOADDRESS%")
#define AXSMS_HTTP_PLACEHOLDER_FROMADDRESS _T("%FROMADDRESS%")
#define AXSMS_HTTP_PLACEHOLDER_BODY _T("%BODY%")
#define AXSMS_HTTP_PLACEHOLDER_BODYASHEX _T("%BODYASHEX%")
#define AXSMS_HTTP_PLACEHOLDER_BODYASBASE64 _T("%BODYASBASE64%")
#define AXSMS_HTTP_PLACEHOLDER_DELIVERYREPORT _T("%DELIVERYREPORT%")
#define AXSMS_HTTP_PLACEHOLDER_TOADDRESSTON _T("%TOADDRESSTON%")
#define AXSMS_HTTP_PLACEHOLDER_TOADDRESSNPI _T("%TOADDRESSNPI%")
#define AXSMS_HTTP_PLACEHOLDER_FROMADDRESSTON _T("%FROMADDRESSTON%")
#define AXSMS_HTTP_PLACEHOLDER_FROMADDRESSNPI _T("%FROMADDRESSNPI%")
#define AXSMS_HTTP_PLACEHOLDER_PROTOCOLID _T("%PROTOCOLID%")
#define AXSMS_HTTP_PLACEHOLDER_DATACODING _T("%DATACODING%")
#define AXSMS_HTTP_PLACEHOLDER_UDHI _T("%UDHI%")

#define AXSMS_DIALUP_PROVIDERTYPE_UCP			0	// UCP Provider
#define AXSMS_DIALUP_PROVIDERTYPE_TAP_DEFAULT	1	// Standard TAP provider
#define AXSMS_DIALUP_PROVIDERTYPE_TAP_NOLF		2	// TAP provider, no request for LineFeed
#define AXSMS_DIALUP_PROVIDERTYPE_TAP_NOEOT		3	// TAP provider, no request for EOT

#define AXSMS_DIALUP_DEVICESETTINGS_DEFAULT		0	// default
#define AXSMS_DIALUP_DEVICESETTINGS_8N1			1	// n,8,1
#define AXSMS_DIALUP_DEVICESETTINGS_7E1			2	// e,7,1

#define AXSMS_DIALUP_DIALMODE_TONE				0	// Use tone dialing ( DTMF )
#define AXSMS_DIALUP_DIALMODE_PULSE				1	// Use pulse dialing

#endif // AXSMSCONSTANTS_H