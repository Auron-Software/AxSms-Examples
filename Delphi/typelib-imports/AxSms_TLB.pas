unit AxSms_TLB;

// ************************************************************************ //
// WARNING                                                                    
// -------                                                                    
// The types declared in this file were generated from data read from a       
// Type Library. If this type library is explicitly or indirectly (via        
// another type library referring to this type library) re-imported, or the   
// 'Refresh' command of the Type Library Editor activated while editing the   
// Type Library, the contents of this file will be regenerated and all        
// manual modifications will be lost.                                         
// ************************************************************************ //

// $Rev: 17244 $
// File generated on 3/23/2022 4:13:01 AM from Type Library described below.

// ************************************************************************  //
// Type Lib: G:\AxSms\VisualC\AxSms\Release32\AxSms32.dll (1)
// LIBID: {B00F4729-F464-4690-88A0-E059489AF063}
// LCID: 0
// Helpfile: 
// HelpString: Auron SMS Component 7.0 Type Library
// DepndLst: 
//   (1) v2.0 stdole, (C:\Windows\SysWOW64\stdole2.tlb)
// Errors:
//   Hint: Parameter 'In' of IHttp.UrlEncode changed to 'In_'
//   Hint: Parameter 'In' of IHttp.Base64Encode changed to 'In_'
//   Hint: Parameter 'In' of IHttp.HexEncode changed to 'In_'
//   Hint: Parameter 'Type' of ISmpp.Bind changed to 'Type_'
//   WARN: Could not find file 'H:\Utils\TLIBIMP.SYM, G:\AxSms\TLIBIMP.SYM, H:\Utils\..\bin\tlibimp.sym'
// Cmdline:
//   "H:\Utils\tlibimp.exe"  -P+ -Ha- -Hs- -Hr- -D"G:\AxSms\Samples\Delphi\typelib-imports\" "G:\AxSms\VisualC\AxSms\Release32\AxSms32.dll"
// ************************************************************************ //
{$TYPEDADDRESS OFF} // Unit must be compiled without type-checked pointers. 
{$WARN SYMBOL_PLATFORM OFF}
{$WRITEABLECONST ON}
{$VARPROPSETTER ON}
{$ALIGN 4}
interface

uses Windows, ActiveX, Classes, Graphics, OleServer, StdVCL, Variants;
  

// *********************************************************************//
// GUIDS declared in the TypeLibrary. Following prefixes are used:        
//   Type Libraries     : LIBID_xxxx                                      
//   CoClasses          : CLASS_xxxx                                      
//   DISPInterfaces     : DIID_xxxx                                       
//   Non-DISP interfaces: IID_xxxx                                        
// *********************************************************************//
const
  // TypeLibrary Major and minor versions
  AxSmsMajorVersion = 1;
  AxSmsMinorVersion = 0;

  LIBID_AxSms: TGUID = '{B00F4729-F464-4690-88A0-E059489AF063}';

  IID_IConstants: TGUID = '{7D47E1D0-4B72-4A5D-B174-A0E82AF73892}';
  CLASS_Constants: TGUID = '{41A6CF7D-3C5B-40B7-82AC-3AB3BBBF1A84}';
  IID_IMessage: TGUID = '{DFD486FC-45B4-49AB-AD5A-98256AE057FC}';
  CLASS_Message: TGUID = '{7524134C-0186-43C6-958C-2C3A49FE40FC}';
  IID_ITlv: TGUID = '{4687CEE3-3966-46A2-AEE3-5A747F455B84}';
  CLASS_Tlv: TGUID = '{461B017B-C733-4145-A3AA-040B3A1E86D5}';
  IID_IGsmDeliveryReport: TGUID = '{6962C3D8-88FE-4660-A4EC-901A244A57D2}';
  CLASS_GsmDeliveryReport: TGUID = '{035EC473-4171-4D8C-BB09-000F1BBB79B5}';
  IID_IDialup: TGUID = '{3E9851DF-D82F-4806-8716-769C015C23F2}';
  CLASS_Dialup: TGUID = '{265F828D-DB37-4676-8E3E-B73B5A653A48}';
  IID_IAndroid: TGUID = '{6AEF9B37-E65E-4FEB-971A-0659DE7B931E}';
  CLASS_Android: TGUID = '{370876FA-FCFB-4EE6-8316-FA0AC5A771AE}';
  IID_IGsm: TGUID = '{B25B188D-42A8-45EF-887F-653CBC9E234B}';
  CLASS_Gsm: TGUID = '{4AB18312-548A-4607-97E1-3DE7FC27CDD2}';
  IID_IHttpServer: TGUID = '{356CDE23-BC03-4283-9F64-AF3D0F49100A}';
  CLASS_HttpServer: TGUID = '{9169AD26-4304-4B1B-8CD9-77EA2B41F3BC}';
  IID_IHttp: TGUID = '{1825A7C6-DBAB-4B99-AAA1-FDEDF36A4982}';
  CLASS_Http: TGUID = '{5092DA94-3952-4FDA-9B8E-4B387F0164E6}';
  IID_ISnpp: TGUID = '{C4AAB6D2-F834-4FE6-A4AE-B1D5794BC3B4}';
  CLASS_Snpp: TGUID = '{929AEEE5-56B2-4A67-BCC8-45E5D4FA3739}';
  IID_ISmpp: TGUID = '{9E5FC25E-613A-4951-9C8F-37923C7AE7AE}';
  CLASS_Smpp: TGUID = '{A1453018-3C02-4C22-A136-3CF9B78CEAC8}';
  IID_ISmppServer: TGUID = '{EBE10239-A8C6-46CA-BC48-0CFA6CFD835C}';
  CLASS_SmppServer: TGUID = '{6F2D0285-924E-4F76-A0EA-FC9282D4C761}';
  IID_ISmppSession: TGUID = '{3E1FF0C2-4F98-4FA2-954B-BF5730FB6CF9}';
  CLASS_SmppSession: TGUID = '{A0D488D4-C668-4346-9D44-3CD00832723E}';
  IID_ITemplateWapPush: TGUID = '{54DD400B-F0D6-42AF-964B-9F38CD57D8CC}';
  CLASS_TemplateWapPush: TGUID = '{FA1CDBE0-666B-430F-BCC5-838661432F76}';
  IID_ITemplatevCard: TGUID = '{FCB5DCC2-4DDD-465D-936F-40AEBDDD17C3}';
  CLASS_TemplatevCard: TGUID = '{72B516D0-8B84-4B92-A297-474353A2C90A}';
  IID_IDemoAccount: TGUID = '{231F4503-C639-479F-B799-4C9FCE0BDF9C}';
  CLASS_DemoAccount: TGUID = '{634B8464-5D45-4E0E-BCC7-EB04500BC159}';
type

// *********************************************************************//
// Forward declaration of types defined in TypeLibrary                    
// *********************************************************************//
  IConstants = interface;
  IConstantsDisp = dispinterface;
  IMessage = interface;
  IMessageDisp = dispinterface;
  ITlv = interface;
  ITlvDisp = dispinterface;
  IGsmDeliveryReport = interface;
  IGsmDeliveryReportDisp = dispinterface;
  IDialup = interface;
  IDialupDisp = dispinterface;
  IAndroid = interface;
  IAndroidDisp = dispinterface;
  IGsm = interface;
  IGsmDisp = dispinterface;
  IHttpServer = interface;
  IHttpServerDisp = dispinterface;
  IHttp = interface;
  IHttpDisp = dispinterface;
  ISnpp = interface;
  ISnppDisp = dispinterface;
  ISmpp = interface;
  ISmppDisp = dispinterface;
  ISmppServer = interface;
  ISmppServerDisp = dispinterface;
  ISmppSession = interface;
  ISmppSessionDisp = dispinterface;
  ITemplateWapPush = interface;
  ITemplateWapPushDisp = dispinterface;
  ITemplatevCard = interface;
  ITemplatevCardDisp = dispinterface;
  IDemoAccount = interface;
  IDemoAccountDisp = dispinterface;

// *********************************************************************//
// Declaration of CoClasses defined in Type Library                       
// (NOTE: Here we map each CoClass to its Default Interface)              
// *********************************************************************//
  Constants = IConstants;
  Message = IMessage;
  Tlv = ITlv;
  GsmDeliveryReport = IGsmDeliveryReport;
  Dialup = IDialup;
  Android = IAndroid;
  Gsm = IGsm;
  HttpServer = IHttpServer;
  Http = IHttp;
  Snpp = ISnpp;
  Smpp = ISmpp;
  SmppServer = ISmppServer;
  SmppSession = ISmppSession;
  TemplateWapPush = ITemplateWapPush;
  TemplatevCard = ITemplatevCard;
  DemoAccount = IDemoAccount;


// *********************************************************************//
// Interface: IConstants
// Flags:     (4544) Dual NonExtensible OleAutomation Dispatchable
// GUID:      {7D47E1D0-4B72-4A5D-B174-A0E82AF73892}
// *********************************************************************//
  IConstants = interface(IDispatch)
    ['{7D47E1D0-4B72-4A5D-B174-A0E82AF73892}']
    function Get_SMPP_BIND_TRANSMITTER: Integer; safecall;
    function Get_SMPP_BIND_TRANSCEIVER: Integer; safecall;
    function Get_SMPP_BIND_RECEIVER: Integer; safecall;
    function Get_SMPP_VERSION_33: Integer; safecall;
    function Get_SMPP_VERSION_34: Integer; safecall;
    function Get_SMPP_VERSION_50: Integer; safecall;
    function Get_TON_UNKNOWN: Integer; safecall;
    function Get_TON_INTERNATIONAL: Integer; safecall;
    function Get_TON_NATIONAL: Integer; safecall;
    function Get_TON_NETWORK_SPECIFIC: Integer; safecall;
    function Get_TON_SUBSCRIBER_NUMBER: Integer; safecall;
    function Get_TON_ALPHANUMERIC: Integer; safecall;
    function Get_SMPP_TON_ABBREVIATED: Integer; safecall;
    function Get_NPI_UNKNOWN: Integer; safecall;
    function Get_NPI_ISDN: Integer; safecall;
    function Get_NPI_DATA: Integer; safecall;
    function Get_NPI_TELEX: Integer; safecall;
    function Get_NPI_NATIONAL: Integer; safecall;
    function Get_NPI_PRIVATE: Integer; safecall;
    function Get_NPI_ERMES: Integer; safecall;
    function Get_SMPP_NPI_INTERNET: Integer; safecall;
    function Get_NPI_LAND_MOBILE: Integer; safecall;
    function Get_MULTIPART_ACCEPT: Integer; safecall;
    function Get_MULTIPART_TRUNCATE: Integer; safecall;
    function Get_MULTIPART_REJECT: Integer; safecall;
    function Get_BODYFORMAT_TEXT: Integer; safecall;
    function Get_BODYFORMAT_HEX: Integer; safecall;
    function Get_SMPP_ESM_2ESME_DEFAULT: Integer; safecall;
    function Get_SMPP_ESM_2ESME_DELIVERY_RECEIPT: Integer; safecall;
    function Get_SMPP_ESM_2ESME_DELIVERY_ACK: Integer; safecall;
    function Get_SMPP_ESM_2ESME_MANUAL_ACK: Integer; safecall;
    function Get_SMPP_ESM_2ESME_CONVERSATION_ABORT: Integer; safecall;
    function Get_SMPP_ESM_2ESME_INTERMEDIATE_DELIVERY_NOTIFY: Integer; safecall;
    function Get_SMPP_ESM_2SMSC_MODE_DEFAULT: Integer; safecall;
    function Get_SMPP_ESM_2SMSC_MODE_STOREFORWARD: Integer; safecall;
    function Get_SMPP_ESM_2SMSC_MODE_DATAGRAM: Integer; safecall;
    function Get_SMPP_ESM_2SMSC_MODE_FORWARD: Integer; safecall;
    function Get_SMPP_ESM_2SMSC_TYPE_DEFAULT: Integer; safecall;
    function Get_SMPP_ESM_2SMSC_TYPE_DELIVERY_ACK: Integer; safecall;
    function Get_SMPP_ESM_2SMSC_TYPE_MANUAL_ACK: Integer; safecall;
    function Get_SMPP_ESM_2SMSC_FEAT_NOTHING: Integer; safecall;
    function Get_SMPP_ESM_2SMSC_FEAT_UDHI: Integer; safecall;
    function Get_SMPP_ESM_2SMSC_FEAT_SRP: Integer; safecall;
    function Get_SMPP_USEGSMENCODING_DISABLED: Integer; safecall;
    function Get_SMPP_USEGSMENCODING_INANDOUT: Integer; safecall;
    function Get_SMPP_USEGSMENCODING_INCOMING: Integer; safecall;
    function Get_SMPP_USEGSMENCODING_OUTGOING: Integer; safecall;
    function Get_SMPP_DATACODING_ASCII: Integer; safecall;
    function Get_SMPP_DATACODING_OCTET_UNSPEC: Integer; safecall;
    function Get_SMPP_DATACODING_LATIN: Integer; safecall;
    function Get_SMPP_DATACODING_JIS_KANJI: Integer; safecall;
    function Get_SMPP_DATACODING_CYRILLIC: Integer; safecall;
    function Get_SMPP_DATACODING_LATIN_HEBREW: Integer; safecall;
    function Get_SMPP_DATACODING_PICTOGRAM: Integer; safecall;
    function Get_SMPP_DATACODING_ISO_2022_JP: Integer; safecall;
    function Get_SMPP_DATACODING_EXTENDED_KANJI_JIS: Integer; safecall;
    function Get_SMPP_DATACODING_KS_C_5601: Integer; safecall;
    function Get_SMPP_PRIORITYFLAG_BULK: Integer; safecall;
    function Get_SMPP_PRIORITYFLAG_NORMAL: Integer; safecall;
    function Get_SMPP_PRIORITYFLAG_URGENT: Integer; safecall;
    function Get_SMPP_PRIORITYFLAG_VERY_URGENT: Integer; safecall;
    function Get_SMPP_MESSAGESTATE_AX_WAITRESP: Integer; safecall;
    function Get_SMPP_MESSAGESTATE_ENROUTE: Integer; safecall;
    function Get_SMPP_MESSAGESTATE_DELIVERED: Integer; safecall;
    function Get_SMPP_MESSAGESTATE_EXPIRED: Integer; safecall;
    function Get_SMPP_MESSAGESTATE_DELETED: Integer; safecall;
    function Get_SMPP_MESSAGESTATE_UNDELIVERABLE: Integer; safecall;
    function Get_SMPP_MESSAGESTATE_ACCEPTED: Integer; safecall;
    function Get_SMPP_MESSAGESTATE_UNKNOWN: Integer; safecall;
    function Get_SMPP_MESSAGESTATE_REJECTED: Integer; safecall;
    function Get_SMPP_MESSAGESTATE_AX_RESPERROR: Integer; safecall;
    function Get_SMPP_MESSAGESTATE_AX_NOCREDITS: Integer; safecall;
    function Get_SMPP_MESSAGESTATE_AX_RESPTO: Integer; safecall;
    function Get_SMPP_MESSAGESTATE_AX_RESPONDED: Integer; safecall;
    function Get_SMPP_SESSIONSTATE_CONNECTED: Integer; safecall;
    function Get_SMPP_SESSIONSTATE_DISCONNECTED: Integer; safecall;
    function Get_SMPP_SESSIONSTATE_BINDING: Integer; safecall;
    function Get_SMPP_SESSIONSTATE_BOUND_TX: Integer; safecall;
    function Get_SMPP_SESSIONSTATE_BOUND_RX: Integer; safecall;
    function Get_SMPP_SESSIONSTATE_BOUND_TRX: Integer; safecall;
    function Get_SMPP_TLV_DEST_ADDR_SUBUNIT: Integer; safecall;
    function Get_SMPP_TLV_DEST_NETWORK_TYPE: Integer; safecall;
    function Get_SMPP_TLV_DEST_BEARER_TYPE: Integer; safecall;
    function Get_SMPP_TLV_DEST_TELEMATICS_ID: Integer; safecall;
    function Get_SMPP_TLV_SOURCE_ADDR_SUBUNIT: Integer; safecall;
    function Get_SMPP_TLV_SOURCE_NETWORK_TYPE: Integer; safecall;
    function Get_SMPP_TLV_SOURCE_BEARER_TYPE: Integer; safecall;
    function Get_SMPP_TLV_SOURCE_TELEMATICS_ID: Integer; safecall;
    function Get_SMPP_TLV_QOS_TIME_TO_LIVE: Integer; safecall;
    function Get_SMPP_TLV_PAYLOAD_TYPE: Integer; safecall;
    function Get_SMPP_TLV_ADDITIONAL_STATUS_INFO_TEXT: Integer; safecall;
    function Get_SMPP_TLV_RECEIPTED_MESSAGE_ID: Integer; safecall;
    function Get_SMPP_TLV_MS_MSG_WAIT_FACILITIES: Integer; safecall;
    function Get_SMPP_TLV_PRIVACY_INDICATOR: Integer; safecall;
    function Get_SMPP_TLV_SOURCE_SUBADDRESS: Integer; safecall;
    function Get_SMPP_TLV_DEST_SUBADDRESS: Integer; safecall;
    function Get_SMPP_TLV_USER_MESSAGE_REFERENCE: Integer; safecall;
    function Get_SMPP_TLV_USER_RESPONSE_CODE: Integer; safecall;
    function Get_SMPP_TLV_SOURCE_PORT: Integer; safecall;
    function Get_SMPP_TLV_DESTINATION_PORT: Integer; safecall;
    function Get_SMPP_TLV_SAR_MSG_REF_NUM: Integer; safecall;
    function Get_SMPP_TLV_LANGUAGE_INDICATOR: Integer; safecall;
    function Get_SMPP_TLV_SAR_TOTAL_SEGMENTS: Integer; safecall;
    function Get_SMPP_TLV_SAR_SEGMENT_SEQNUM: Integer; safecall;
    function Get_SMPP_TLV_SC_INTERFACE_VERSION: Integer; safecall;
    function Get_SMPP_TLV_CALLBACK_NUM_PRES_IND: Integer; safecall;
    function Get_SMPP_TLV_CALLBACK_NUM_ATAG: Integer; safecall;
    function Get_SMPP_TLV_NUMBER_OF_MESSAGES: Integer; safecall;
    function Get_SMPP_TLV_CALLBACK_NUM: Integer; safecall;
    function Get_SMPP_TLV_DPF_RESULT: Integer; safecall;
    function Get_SMPP_TLV_SET_DPF: Integer; safecall;
    function Get_SMPP_TLV_MS_AVAILABILITY_STATUS: Integer; safecall;
    function Get_SMPP_TLV_NETWORK_ERROR_CODE: Integer; safecall;
    function Get_SMPP_TLV_MESSAGE_PAYLOAD: Integer; safecall;
    function Get_SMPP_TLV_DELIVERY_FAILURE_REASON: Integer; safecall;
    function Get_SMPP_TLV_MORE_MESSAGES_TO_SEND: Integer; safecall;
    function Get_SMPP_TLV_MESSAGE_STATE: Integer; safecall;
    function Get_SMPP_TLV_CONGESTION_STATE: Integer; safecall;
    function Get_SMPP_TLV_USSD_SERVICE_OP: Integer; safecall;
    function Get_SMPP_TLV_DISPLAY_TIME: Integer; safecall;
    function Get_SMPP_TLV_SMS_SIGNAL: Integer; safecall;
    function Get_SMPP_TLV_MS_VALIDITY: Integer; safecall;
    function Get_SMPP_TLV_ALERT_ON_MESSAGE_DELIVERY: Integer; safecall;
    function Get_SMPP_TLV_ITS_REPLY_TYPE: Integer; safecall;
    function Get_SMPP_TLV_ITS_SESSION_INFO: Integer; safecall;
    function Get_SMPP_MULTIPARTMODE_UDH: Integer; safecall;
    function Get_SMPP_MULTIPARTMODE_UDH16BIT: Integer; safecall;
    function Get_SMPP_MULTIPARTMODE_SARTLV: Integer; safecall;
    function Get_SMPP_MULTIPARTMODE_PAYLOADTLV: Integer; safecall;
    function Get_SMPP_LOGLEVEL_MINIMAL: Integer; safecall;
    function Get_SMPP_LOGLEVEL_NORMAL: Integer; safecall;
    function Get_SMPP_LOGLEVEL_VERBOSE: Integer; safecall;
    function Get_SMPP_SUBMITMODE_SUBMITSM: Integer; safecall;
    function Get_SMPP_SUBMITMODE_DATASM: Integer; safecall;
    function Get_SMPP_DELIVERMODE_DELIVERSM: Integer; safecall;
    function Get_SMPP_DELIVERMODE_DATASM: Integer; safecall;
    function Get_SMPP_USEGSMENCODING_INCHARSET: Integer; safecall;
    function Get_SMPP_USEGSMENCODING_OUTCHARSET: Integer; safecall;
    function Get_SMPP_USEGSMENCODING_INOUTCHARS: Integer; safecall;
    function Get_SMPP_IPVERSION_4: Integer; safecall;
    function Get_SMPP_IPVERSION_6: Integer; safecall;
    function Get_SMPP_IPVERSION_BOTH: Integer; safecall;
    function Get_SMPP_CERTIFICATESTORE_LOCALMACHINE: Integer; safecall;
    function Get_SMPP_CERTIFICATESTORE_CURRENTUSER: Integer; safecall;
    function Get_SMPP_ESME_ROK: Integer; safecall;
    function Get_SMPP_ESME_RINVMSGLEN: Integer; safecall;
    function Get_SMPP_ESME_RINVCMDLEN: Integer; safecall;
    function Get_SMPP_ESME_RINVCMDID: Integer; safecall;
    function Get_SMPP_ESME_RINVBNDSTS: Integer; safecall;
    function Get_SMPP_ESME_RALYBND: Integer; safecall;
    function Get_SMPP_ESME_RINVPRTFLG: Integer; safecall;
    function Get_SMPP_ESME_RINVREGDLVFLG: Integer; safecall;
    function Get_SMPP_ESME_RSYSERR: Integer; safecall;
    function Get_SMPP_ESME_RINVSRCADR: Integer; safecall;
    function Get_SMPP_ESME_RINVDSTADR: Integer; safecall;
    function Get_SMPP_ESME_RINVMSGID: Integer; safecall;
    function Get_SMPP_ESME_RBINDFAIL: Integer; safecall;
    function Get_SMPP_ESME_RINVPASWD: Integer; safecall;
    function Get_SMPP_ESME_RINVSYSID: Integer; safecall;
    function Get_SMPP_ESME_RCANCELFAIL: Integer; safecall;
    function Get_SMPP_ESME_RREPLACEFAIL: Integer; safecall;
    function Get_SMPP_ESME_RMSGQFUL: Integer; safecall;
    function Get_SMPP_ESME_RINVSERTYP: Integer; safecall;
    function Get_SMPP_ESME_RINVNUMDESTS: Integer; safecall;
    function Get_SMPP_ESME_RINVDLNAME: Integer; safecall;
    function Get_SMPP_ESME_RINVDESTFLAG: Integer; safecall;
    function Get_SMPP_ESME_RINVSUBREP: Integer; safecall;
    function Get_SMPP_ESME_RINVESMCLASS: Integer; safecall;
    function Get_SMPP_ESME_RCNTSUBDL: Integer; safecall;
    function Get_SMPP_ESME_RSUBMITFAIL: Integer; safecall;
    function Get_SMPP_ESME_RINVSRCTON: Integer; safecall;
    function Get_SMPP_ESME_RINVSRCNPI: Integer; safecall;
    function Get_SMPP_ESME_RINVDSTTON: Integer; safecall;
    function Get_SMPP_ESME_RINVDSTNPI: Integer; safecall;
    function Get_SMPP_ESME_RINVSYSTYP: Integer; safecall;
    function Get_SMPP_ESME_RINVREPFLAG: Integer; safecall;
    function Get_SMPP_ESME_RINVNUMMSGS: Integer; safecall;
    function Get_SMPP_ESME_RTHROTTLED: Integer; safecall;
    function Get_SMPP_ESME_RINVSCHED: Integer; safecall;
    function Get_SMPP_ESME_RINVEXPIRY: Integer; safecall;
    function Get_SMPP_ESME_RINVDFTMSGID: Integer; safecall;
    function Get_SMPP_ESME_RX_T_APPN: Integer; safecall;
    function Get_SMPP_ESME_RX_P_APPN: Integer; safecall;
    function Get_SMPP_ESME_RX_R_APPN: Integer; safecall;
    function Get_SMPP_ESME_RQUERYFAIL: Integer; safecall;
    function Get_SMPP_ESME_RINVOPTPARSTREAM: Integer; safecall;
    function Get_SMPP_ESME_ROPTPARNOTALLWD: Integer; safecall;
    function Get_SMPP_ESME_RINVPARLEN: Integer; safecall;
    function Get_SMPP_ESME_RMISSINGOPTPARAM: Integer; safecall;
    function Get_SMPP_ESME_RINVOPTPARAMVAL: Integer; safecall;
    function Get_SMPP_ESME_RDELIVERYFAILURE: Integer; safecall;
    function Get_SMPP_ESME_RUNKNOWNERR: Integer; safecall;
    function Get_GSM_STATUS_MESSAGE_DELIVERED_SUCCESSFULLY: Integer; safecall;
    function Get_GSM_STATUS_FORWARDED_STATUS_UNKNOWN: Integer; safecall;
    function Get_GSM_STATUS_REPLACED: Integer; safecall;
    function Get_GSM_STATUS_CONGESTION_STILL_TRYING: Integer; safecall;
    function Get_GSM_STATUS_RECIPIENT_BUSY_STILL_TRYING: Integer; safecall;
    function Get_GSM_STATUS_NO_RESPONSE_STILL_TRYING: Integer; safecall;
    function Get_GSM_STATUS_SERVICE_REJECTED_STILL_TRYING: Integer; safecall;
    function Get_GSM_STATUS_QOS_NOT_AVAILABLE_STILL_TRYING: Integer; safecall;
    function Get_GSM_STATUS_RECIPIENT_ERROR_STILL_TRYING: Integer; safecall;
    function Get_GSM_STATUS_RPC_ERROR: Integer; safecall;
    function Get_GSM_STATUS_INCOMPATIBLE_DESTINATION: Integer; safecall;
    function Get_GSM_STATUS_CONNECTION_REJECTED: Integer; safecall;
    function Get_GSM_STATUS_NOT_OBTAINABLE: Integer; safecall;
    function Get_GSM_STATUS_QOS_NOT_AVAILABLE: Integer; safecall;
    function Get_GSM_STATUS_NO_INTERNETWORKING_AVAILABLE: Integer; safecall;
    function Get_GSM_STATUS_MESSAGE_EXPIRED: Integer; safecall;
    function Get_GSM_STATUS_MESSAGE_DELETED_BY_SENDER: Integer; safecall;
    function Get_GSM_STATUS_MESSAGE_DELETED_BY_SMSC: Integer; safecall;
    function Get_GSM_STATUS_DOES_NOT_EXIST: Integer; safecall;
    function Get_GSM_STORAGETYPE_SIM: Integer; safecall;
    function Get_GSM_STORAGETYPE_MEMORY: Integer; safecall;
    function Get_GSM_STORAGETYPE_COMBINED: Integer; safecall;
    function Get_GSM_STORAGETYPE_STATUS: Integer; safecall;
    function Get_GSM_STORAGETYPE_ALL: Integer; safecall;
    function Get_GSM_FO_REPLYPATH_EXISTS: Integer; safecall;
    function Get_GSM_FO_UDHI: Integer; safecall;
    function Get_GSM_FO_STATUS_REPORT: Integer; safecall;
    function Get_GSM_FO_VALIDITY_NONE: Integer; safecall;
    function Get_GSM_FO_VALIDITY_RELATIVE: Integer; safecall;
    function Get_GSM_FO_VALIDITY_ENHANCED: Integer; safecall;
    function Get_GSM_FO_VALIDITY_ABSOLUTE: Integer; safecall;
    function Get_GSM_FO_REJECT_DUPLICATES: Integer; safecall;
    function Get_GSM_FO_SUBMIT_SM: Integer; safecall;
    function Get_GSM_FO_DELIVER_SM: Integer; safecall;
    function Get_GSM_FO_STATUS_SM: Integer; safecall;
    function Get_DATACODING_DEFAULT: Integer; safecall;
    function Get_DATACODING_8BIT_DATA: Integer; safecall;
    function Get_DATACODING_UNICODE: Integer; safecall;
    function Get_GSM_DATACODING_ME_SPECIFIC: Integer; safecall;
    function Get_GSM_DATACODING_SIM_SPECIFIC: Integer; safecall;
    function Get_GSM_DATACODING_TE_SPECIFIC: Integer; safecall;
    function Get_DATACODING_FLASH: Integer; safecall;
    function Get_GSM_BAUDRATE_110: Integer; safecall;
    function Get_GSM_BAUDRATE_300: Integer; safecall;
    function Get_GSM_BAUDRATE_600: Integer; safecall;
    function Get_GSM_BAUDRATE_1200: Integer; safecall;
    function Get_GSM_BAUDRATE_2400: Integer; safecall;
    function Get_GSM_BAUDRATE_4800: Integer; safecall;
    function Get_GSM_BAUDRATE_9600: Integer; safecall;
    function Get_GSM_BAUDRATE_14400: Integer; safecall;
    function Get_GSM_BAUDRATE_19200: Integer; safecall;
    function Get_GSM_BAUDRATE_38400: Integer; safecall;
    function Get_GSM_BAUDRATE_56000: Integer; safecall;
    function Get_GSM_BAUDRATE_57600: Integer; safecall;
    function Get_GSM_BAUDRATE_64000: Integer; safecall;
    function Get_GSM_BAUDRATE_115200: Integer; safecall;
    function Get_GSM_BAUDRATE_128000: Integer; safecall;
    function Get_GSM_BAUDRATE_230400: Integer; safecall;
    function Get_GSM_BAUDRATE_256000: Integer; safecall;
    function Get_GSM_BAUDRATE_460800: Integer; safecall;
    function Get_GSM_BAUDRATE_921600: Integer; safecall;
    function Get_GSM_BAUDRATE_DEFAULT: Integer; safecall;
    function Get_GSM_MESSAGESTATE_RECEIVED_UNREAD: Integer; safecall;
    function Get_GSM_MESSAGESTATE_RECEIVED_READ: Integer; safecall;
    function Get_GSM_MESSAGESTATE_STORED_UNSENT: Integer; safecall;
    function Get_GSM_MESSAGESTATE_STORED_SENT: Integer; safecall;
    function Get_GSM_MESSAGESTATE_ALL: Integer; safecall;
    function Get_GSM_MESSAGEFORMAT_PDU: Integer; safecall;
    function Get_GSM_MESSAGEFORMAT_TEXT: Integer; safecall;
    function Get_GSM_MESSAGEFORMAT_AUTO: Integer; safecall;
    function Get_HTTP_PLACEHOLDER_USERTAG: WideString; safecall;
    function Get_HTTP_PLACEHOLDER_TOADDRESS: WideString; safecall;
    function Get_HTTP_PLACEHOLDER_FROMADDRESS: WideString; safecall;
    function Get_HTTP_PLACEHOLDER_BODY: WideString; safecall;
    function Get_HTTP_PLACEHOLDER_BODYASHEX: WideString; safecall;
    function Get_HTTP_PLACEHOLDER_BODYASBASE64: WideString; safecall;
    function Get_HTTP_PLACEHOLDER_DELIVERYREPORT: WideString; safecall;
    function Get_HTTP_PLACEHOLDER_TOADDRESSTON: WideString; safecall;
    function Get_HTTP_PLACEHOLDER_TOADDRESSNPI: WideString; safecall;
    function Get_HTTP_PLACEHOLDER_FROMADDRESSTON: WideString; safecall;
    function Get_HTTP_PLACEHOLDER_FROMADDRESSNPI: WideString; safecall;
    function Get_HTTP_PLACEHOLDER_PROTOCOLID: WideString; safecall;
    function Get_HTTP_PLACEHOLDER_UDHI: WideString; safecall;
    function Get_HTTP_PLACEHOLDER_DATACODING: WideString; safecall;
    function Get_HTTP_PLACEHOLDER_USERTAGSTRING: WideString; safecall;
    function Get_GSM_PREFIXSMSC_ENABLED: Integer; safecall;
    function Get_GSM_PREFIXSMSC_DISABLED: Integer; safecall;
    function Get_GSM_PREFIXSMSC_AUTO: Integer; safecall;
    function Get_GSM_TCPMODE_RAW: Integer; safecall;
    function Get_GSM_TCPMODE_TELNET: Integer; safecall;
    function Get_GSM_TCPMODE_TELNET_WITH_COMCONTROL: Integer; safecall;
    function Get_WAPPUSH_SIGNAL_NONE: Integer; safecall;
    function Get_WAPPUSH_SIGNAL_LOW: Integer; safecall;
    function Get_WAPPUSH_SIGNAL_MEDIUM: Integer; safecall;
    function Get_WAPPUSH_SIGNAL_HIGH: Integer; safecall;
    function Get_WAPPUSH_SIGNAL_DELETE: Integer; safecall;
    function Get_DIALUP_PROVIDERTYPE_UCP: Integer; safecall;
    function Get_DIALUP_PROVIDERTYPE_TAP_DEFAULT: Integer; safecall;
    function Get_DIALUP_PROVIDERTYPE_TAP_NOLF: Integer; safecall;
    function Get_DIALUP_PROVIDERTYPE_TAP_NOEOT: Integer; safecall;
    function Get_DIALUP_DIALMODE_TONE: Integer; safecall;
    function Get_DIALUP_DIALMODE_PULSE: Integer; safecall;
    function Get_DIALUP_DEVICESETTINGS_DEFAULT: Integer; safecall;
    function Get_DIALUP_DEVICESETTINGS_8N1: Integer; safecall;
    function Get_DIALUP_DEVICESETTINGS_7E1: Integer; safecall;
    function Get_LANGUAGE_LOCKINGSHIFT_BASIC: Integer; safecall;
    function Get_LANGUAGE_LOCKINGSHIFT_TURKISH: Integer; safecall;
    function Get_LANGUAGE_LOCKINGSHIFT_PORTUGUESE: Integer; safecall;
    function Get_LANGUAGE_LOCKINGSHIFT_SPANISH: Integer; safecall;
    function Get_LANGUAGE_LOCKINGSHIFT_BENGALI: Integer; safecall;
    function Get_LANGUAGE_LOCKINGSHIFT_GUJARATI: Integer; safecall;
    function Get_LANGUAGE_LOCKINGSHIFT_HINDI: Integer; safecall;
    function Get_LANGUAGE_LOCKINGSHIFT_KANNADA: Integer; safecall;
    function Get_LANGUAGE_LOCKINGSHIFT_MALAYALAM: Integer; safecall;
    function Get_LANGUAGE_LOCKINGSHIFT_ORIYA: Integer; safecall;
    function Get_LANGUAGE_LOCKINGSHIFT_PUNJABI: Integer; safecall;
    function Get_LANGUAGE_LOCKINGSHIFT_TAMIL: Integer; safecall;
    function Get_LANGUAGE_LOCKINGSHIFT_TELUGU: Integer; safecall;
    function Get_LANGUAGE_LOCKINGSHIFT_URDU: Integer; safecall;
    function Get_LANGUAGE_SINGLESHIFT_BASIC: Integer; safecall;
    function Get_LANGUAGE_SINGLESHIFT_TURKISH: Integer; safecall;
    function Get_LANGUAGE_SINGLESHIFT_SPANISH: Integer; safecall;
    function Get_LANGUAGE_SINGLESHIFT_PORTUGUESE: Integer; safecall;
    function Get_LANGUAGE_SINGLESHIFT_BENGALI: Integer; safecall;
    function Get_LANGUAGE_SINGLESHIFT_GUJARATI: Integer; safecall;
    function Get_LANGUAGE_SINGLESHIFT_HINDI: Integer; safecall;
    function Get_LANGUAGE_SINGLESHIFT_KANNADA: Integer; safecall;
    function Get_LANGUAGE_SINGLESHIFT_MALAYALAM: Integer; safecall;
    function Get_LANGUAGE_SINGLESHIFT_ORIYA: Integer; safecall;
    function Get_LANGUAGE_SINGLESHIFT_PUNJABI: Integer; safecall;
    function Get_LANGUAGE_SINGLESHIFT_TAMIL: Integer; safecall;
    function Get_LANGUAGE_SINGLESHIFT_TELUGU: Integer; safecall;
    function Get_LANGUAGE_SINGLESHIFT_URDU: Integer; safecall;
    function SmppBindToString(lVal: Integer): WideString; safecall;
    function SmppVersionToString(lVal: Integer): WideString; safecall;
    function TonToString(lVal: Integer): WideString; safecall;
    function NpiToString(lVal: Integer): WideString; safecall;
    function MultipartToString(lVal: Integer): WideString; safecall;
    function BodyformatToString(lVal: Integer): WideString; safecall;
    function SmppEsm2SmscToString(lVal: Integer): WideString; safecall;
    function SmppEsm2EsmeToString(lVal: Integer): WideString; safecall;
    function SmppUseGsmEncodingToString(lVal: Integer): WideString; safecall;
    function SmppDataCodingToString(lVal: Integer): WideString; safecall;
    function SmppPriorityFlagToString(lVal: Integer): WideString; safecall;
    function SmppMessageStateToString(lVal: Integer): WideString; safecall;
    function SmppSessionStateToString(lVal: Integer): WideString; safecall;
    function SmppTlvToString(lVal: Integer): WideString; safecall;
    function SmppMultipartModeToString(lVal: Integer): WideString; safecall;
    function SmppSubmitModeToString(lVal: Integer): WideString; safecall;
    function SmppEsmeToString(lVal: Integer): WideString; safecall;
    function GsmStatusToString(lVal: Integer): WideString; safecall;
    function GsmStorageTypeToString(lVal: Integer): WideString; safecall;
    function GsmFoToString(lVal: Integer): WideString; safecall;
    function GsmDataCodingToString(lVal: Integer): WideString; safecall;
    function GsmBaudrateToString(lVal: Integer): WideString; safecall;
    function GsmMessageStateToString(lVal: Integer): WideString; safecall;
    function GsmMessageFormatToString(lVal: Integer): WideString; safecall;
    function GsmPrefixSmscToString(lVal: Integer): WideString; safecall;
    function WapPushSignalToString(lVal: Integer): WideString; safecall;
    function DialupProviderTypeToString(lVal: Integer): WideString; safecall;
    function DialupDialModeToString(lVal: Integer): WideString; safecall;
    function DialupDeviceSettingsToString(lVal: Integer): WideString; safecall;
    function GsmTcpModeToString(lVal: Integer): WideString; safecall;
    function LanguageLockingShiftToString(lVal: Integer): WideString; safecall;
    function LanguageSingleShiftToString(lVal: Integer): WideString; safecall;
    property SMPP_BIND_TRANSMITTER: Integer read Get_SMPP_BIND_TRANSMITTER;
    property SMPP_BIND_TRANSCEIVER: Integer read Get_SMPP_BIND_TRANSCEIVER;
    property SMPP_BIND_RECEIVER: Integer read Get_SMPP_BIND_RECEIVER;
    property SMPP_VERSION_33: Integer read Get_SMPP_VERSION_33;
    property SMPP_VERSION_34: Integer read Get_SMPP_VERSION_34;
    property SMPP_VERSION_50: Integer read Get_SMPP_VERSION_50;
    property TON_UNKNOWN: Integer read Get_TON_UNKNOWN;
    property TON_INTERNATIONAL: Integer read Get_TON_INTERNATIONAL;
    property TON_NATIONAL: Integer read Get_TON_NATIONAL;
    property TON_NETWORK_SPECIFIC: Integer read Get_TON_NETWORK_SPECIFIC;
    property TON_SUBSCRIBER_NUMBER: Integer read Get_TON_SUBSCRIBER_NUMBER;
    property TON_ALPHANUMERIC: Integer read Get_TON_ALPHANUMERIC;
    property SMPP_TON_ABBREVIATED: Integer read Get_SMPP_TON_ABBREVIATED;
    property NPI_UNKNOWN: Integer read Get_NPI_UNKNOWN;
    property NPI_ISDN: Integer read Get_NPI_ISDN;
    property NPI_DATA: Integer read Get_NPI_DATA;
    property NPI_TELEX: Integer read Get_NPI_TELEX;
    property NPI_NATIONAL: Integer read Get_NPI_NATIONAL;
    property NPI_PRIVATE: Integer read Get_NPI_PRIVATE;
    property NPI_ERMES: Integer read Get_NPI_ERMES;
    property SMPP_NPI_INTERNET: Integer read Get_SMPP_NPI_INTERNET;
    property NPI_LAND_MOBILE: Integer read Get_NPI_LAND_MOBILE;
    property MULTIPART_ACCEPT: Integer read Get_MULTIPART_ACCEPT;
    property MULTIPART_TRUNCATE: Integer read Get_MULTIPART_TRUNCATE;
    property MULTIPART_REJECT: Integer read Get_MULTIPART_REJECT;
    property BODYFORMAT_TEXT: Integer read Get_BODYFORMAT_TEXT;
    property BODYFORMAT_HEX: Integer read Get_BODYFORMAT_HEX;
    property SMPP_ESM_2ESME_DEFAULT: Integer read Get_SMPP_ESM_2ESME_DEFAULT;
    property SMPP_ESM_2ESME_DELIVERY_RECEIPT: Integer read Get_SMPP_ESM_2ESME_DELIVERY_RECEIPT;
    property SMPP_ESM_2ESME_DELIVERY_ACK: Integer read Get_SMPP_ESM_2ESME_DELIVERY_ACK;
    property SMPP_ESM_2ESME_MANUAL_ACK: Integer read Get_SMPP_ESM_2ESME_MANUAL_ACK;
    property SMPP_ESM_2ESME_CONVERSATION_ABORT: Integer read Get_SMPP_ESM_2ESME_CONVERSATION_ABORT;
    property SMPP_ESM_2ESME_INTERMEDIATE_DELIVERY_NOTIFY: Integer read Get_SMPP_ESM_2ESME_INTERMEDIATE_DELIVERY_NOTIFY;
    property SMPP_ESM_2SMSC_MODE_DEFAULT: Integer read Get_SMPP_ESM_2SMSC_MODE_DEFAULT;
    property SMPP_ESM_2SMSC_MODE_STOREFORWARD: Integer read Get_SMPP_ESM_2SMSC_MODE_STOREFORWARD;
    property SMPP_ESM_2SMSC_MODE_DATAGRAM: Integer read Get_SMPP_ESM_2SMSC_MODE_DATAGRAM;
    property SMPP_ESM_2SMSC_MODE_FORWARD: Integer read Get_SMPP_ESM_2SMSC_MODE_FORWARD;
    property SMPP_ESM_2SMSC_TYPE_DEFAULT: Integer read Get_SMPP_ESM_2SMSC_TYPE_DEFAULT;
    property SMPP_ESM_2SMSC_TYPE_DELIVERY_ACK: Integer read Get_SMPP_ESM_2SMSC_TYPE_DELIVERY_ACK;
    property SMPP_ESM_2SMSC_TYPE_MANUAL_ACK: Integer read Get_SMPP_ESM_2SMSC_TYPE_MANUAL_ACK;
    property SMPP_ESM_2SMSC_FEAT_NOTHING: Integer read Get_SMPP_ESM_2SMSC_FEAT_NOTHING;
    property SMPP_ESM_2SMSC_FEAT_UDHI: Integer read Get_SMPP_ESM_2SMSC_FEAT_UDHI;
    property SMPP_ESM_2SMSC_FEAT_SRP: Integer read Get_SMPP_ESM_2SMSC_FEAT_SRP;
    property SMPP_USEGSMENCODING_DISABLED: Integer read Get_SMPP_USEGSMENCODING_DISABLED;
    property SMPP_USEGSMENCODING_INANDOUT: Integer read Get_SMPP_USEGSMENCODING_INANDOUT;
    property SMPP_USEGSMENCODING_INCOMING: Integer read Get_SMPP_USEGSMENCODING_INCOMING;
    property SMPP_USEGSMENCODING_OUTGOING: Integer read Get_SMPP_USEGSMENCODING_OUTGOING;
    property SMPP_DATACODING_ASCII: Integer read Get_SMPP_DATACODING_ASCII;
    property SMPP_DATACODING_OCTET_UNSPEC: Integer read Get_SMPP_DATACODING_OCTET_UNSPEC;
    property SMPP_DATACODING_LATIN: Integer read Get_SMPP_DATACODING_LATIN;
    property SMPP_DATACODING_JIS_KANJI: Integer read Get_SMPP_DATACODING_JIS_KANJI;
    property SMPP_DATACODING_CYRILLIC: Integer read Get_SMPP_DATACODING_CYRILLIC;
    property SMPP_DATACODING_LATIN_HEBREW: Integer read Get_SMPP_DATACODING_LATIN_HEBREW;
    property SMPP_DATACODING_PICTOGRAM: Integer read Get_SMPP_DATACODING_PICTOGRAM;
    property SMPP_DATACODING_ISO_2022_JP: Integer read Get_SMPP_DATACODING_ISO_2022_JP;
    property SMPP_DATACODING_EXTENDED_KANJI_JIS: Integer read Get_SMPP_DATACODING_EXTENDED_KANJI_JIS;
    property SMPP_DATACODING_KS_C_5601: Integer read Get_SMPP_DATACODING_KS_C_5601;
    property SMPP_PRIORITYFLAG_BULK: Integer read Get_SMPP_PRIORITYFLAG_BULK;
    property SMPP_PRIORITYFLAG_NORMAL: Integer read Get_SMPP_PRIORITYFLAG_NORMAL;
    property SMPP_PRIORITYFLAG_URGENT: Integer read Get_SMPP_PRIORITYFLAG_URGENT;
    property SMPP_PRIORITYFLAG_VERY_URGENT: Integer read Get_SMPP_PRIORITYFLAG_VERY_URGENT;
    property SMPP_MESSAGESTATE_AX_WAITRESP: Integer read Get_SMPP_MESSAGESTATE_AX_WAITRESP;
    property SMPP_MESSAGESTATE_ENROUTE: Integer read Get_SMPP_MESSAGESTATE_ENROUTE;
    property SMPP_MESSAGESTATE_DELIVERED: Integer read Get_SMPP_MESSAGESTATE_DELIVERED;
    property SMPP_MESSAGESTATE_EXPIRED: Integer read Get_SMPP_MESSAGESTATE_EXPIRED;
    property SMPP_MESSAGESTATE_DELETED: Integer read Get_SMPP_MESSAGESTATE_DELETED;
    property SMPP_MESSAGESTATE_UNDELIVERABLE: Integer read Get_SMPP_MESSAGESTATE_UNDELIVERABLE;
    property SMPP_MESSAGESTATE_ACCEPTED: Integer read Get_SMPP_MESSAGESTATE_ACCEPTED;
    property SMPP_MESSAGESTATE_UNKNOWN: Integer read Get_SMPP_MESSAGESTATE_UNKNOWN;
    property SMPP_MESSAGESTATE_REJECTED: Integer read Get_SMPP_MESSAGESTATE_REJECTED;
    property SMPP_MESSAGESTATE_AX_RESPERROR: Integer read Get_SMPP_MESSAGESTATE_AX_RESPERROR;
    property SMPP_MESSAGESTATE_AX_NOCREDITS: Integer read Get_SMPP_MESSAGESTATE_AX_NOCREDITS;
    property SMPP_MESSAGESTATE_AX_RESPTO: Integer read Get_SMPP_MESSAGESTATE_AX_RESPTO;
    property SMPP_MESSAGESTATE_AX_RESPONDED: Integer read Get_SMPP_MESSAGESTATE_AX_RESPONDED;
    property SMPP_SESSIONSTATE_CONNECTED: Integer read Get_SMPP_SESSIONSTATE_CONNECTED;
    property SMPP_SESSIONSTATE_DISCONNECTED: Integer read Get_SMPP_SESSIONSTATE_DISCONNECTED;
    property SMPP_SESSIONSTATE_BINDING: Integer read Get_SMPP_SESSIONSTATE_BINDING;
    property SMPP_SESSIONSTATE_BOUND_TX: Integer read Get_SMPP_SESSIONSTATE_BOUND_TX;
    property SMPP_SESSIONSTATE_BOUND_RX: Integer read Get_SMPP_SESSIONSTATE_BOUND_RX;
    property SMPP_SESSIONSTATE_BOUND_TRX: Integer read Get_SMPP_SESSIONSTATE_BOUND_TRX;
    property SMPP_TLV_DEST_ADDR_SUBUNIT: Integer read Get_SMPP_TLV_DEST_ADDR_SUBUNIT;
    property SMPP_TLV_DEST_NETWORK_TYPE: Integer read Get_SMPP_TLV_DEST_NETWORK_TYPE;
    property SMPP_TLV_DEST_BEARER_TYPE: Integer read Get_SMPP_TLV_DEST_BEARER_TYPE;
    property SMPP_TLV_DEST_TELEMATICS_ID: Integer read Get_SMPP_TLV_DEST_TELEMATICS_ID;
    property SMPP_TLV_SOURCE_ADDR_SUBUNIT: Integer read Get_SMPP_TLV_SOURCE_ADDR_SUBUNIT;
    property SMPP_TLV_SOURCE_NETWORK_TYPE: Integer read Get_SMPP_TLV_SOURCE_NETWORK_TYPE;
    property SMPP_TLV_SOURCE_BEARER_TYPE: Integer read Get_SMPP_TLV_SOURCE_BEARER_TYPE;
    property SMPP_TLV_SOURCE_TELEMATICS_ID: Integer read Get_SMPP_TLV_SOURCE_TELEMATICS_ID;
    property SMPP_TLV_QOS_TIME_TO_LIVE: Integer read Get_SMPP_TLV_QOS_TIME_TO_LIVE;
    property SMPP_TLV_PAYLOAD_TYPE: Integer read Get_SMPP_TLV_PAYLOAD_TYPE;
    property SMPP_TLV_ADDITIONAL_STATUS_INFO_TEXT: Integer read Get_SMPP_TLV_ADDITIONAL_STATUS_INFO_TEXT;
    property SMPP_TLV_RECEIPTED_MESSAGE_ID: Integer read Get_SMPP_TLV_RECEIPTED_MESSAGE_ID;
    property SMPP_TLV_MS_MSG_WAIT_FACILITIES: Integer read Get_SMPP_TLV_MS_MSG_WAIT_FACILITIES;
    property SMPP_TLV_PRIVACY_INDICATOR: Integer read Get_SMPP_TLV_PRIVACY_INDICATOR;
    property SMPP_TLV_SOURCE_SUBADDRESS: Integer read Get_SMPP_TLV_SOURCE_SUBADDRESS;
    property SMPP_TLV_DEST_SUBADDRESS: Integer read Get_SMPP_TLV_DEST_SUBADDRESS;
    property SMPP_TLV_USER_MESSAGE_REFERENCE: Integer read Get_SMPP_TLV_USER_MESSAGE_REFERENCE;
    property SMPP_TLV_USER_RESPONSE_CODE: Integer read Get_SMPP_TLV_USER_RESPONSE_CODE;
    property SMPP_TLV_SOURCE_PORT: Integer read Get_SMPP_TLV_SOURCE_PORT;
    property SMPP_TLV_DESTINATION_PORT: Integer read Get_SMPP_TLV_DESTINATION_PORT;
    property SMPP_TLV_SAR_MSG_REF_NUM: Integer read Get_SMPP_TLV_SAR_MSG_REF_NUM;
    property SMPP_TLV_LANGUAGE_INDICATOR: Integer read Get_SMPP_TLV_LANGUAGE_INDICATOR;
    property SMPP_TLV_SAR_TOTAL_SEGMENTS: Integer read Get_SMPP_TLV_SAR_TOTAL_SEGMENTS;
    property SMPP_TLV_SAR_SEGMENT_SEQNUM: Integer read Get_SMPP_TLV_SAR_SEGMENT_SEQNUM;
    property SMPP_TLV_SC_INTERFACE_VERSION: Integer read Get_SMPP_TLV_SC_INTERFACE_VERSION;
    property SMPP_TLV_CALLBACK_NUM_PRES_IND: Integer read Get_SMPP_TLV_CALLBACK_NUM_PRES_IND;
    property SMPP_TLV_CALLBACK_NUM_ATAG: Integer read Get_SMPP_TLV_CALLBACK_NUM_ATAG;
    property SMPP_TLV_NUMBER_OF_MESSAGES: Integer read Get_SMPP_TLV_NUMBER_OF_MESSAGES;
    property SMPP_TLV_CALLBACK_NUM: Integer read Get_SMPP_TLV_CALLBACK_NUM;
    property SMPP_TLV_DPF_RESULT: Integer read Get_SMPP_TLV_DPF_RESULT;
    property SMPP_TLV_SET_DPF: Integer read Get_SMPP_TLV_SET_DPF;
    property SMPP_TLV_MS_AVAILABILITY_STATUS: Integer read Get_SMPP_TLV_MS_AVAILABILITY_STATUS;
    property SMPP_TLV_NETWORK_ERROR_CODE: Integer read Get_SMPP_TLV_NETWORK_ERROR_CODE;
    property SMPP_TLV_MESSAGE_PAYLOAD: Integer read Get_SMPP_TLV_MESSAGE_PAYLOAD;
    property SMPP_TLV_DELIVERY_FAILURE_REASON: Integer read Get_SMPP_TLV_DELIVERY_FAILURE_REASON;
    property SMPP_TLV_MORE_MESSAGES_TO_SEND: Integer read Get_SMPP_TLV_MORE_MESSAGES_TO_SEND;
    property SMPP_TLV_MESSAGE_STATE: Integer read Get_SMPP_TLV_MESSAGE_STATE;
    property SMPP_TLV_CONGESTION_STATE: Integer read Get_SMPP_TLV_CONGESTION_STATE;
    property SMPP_TLV_USSD_SERVICE_OP: Integer read Get_SMPP_TLV_USSD_SERVICE_OP;
    property SMPP_TLV_DISPLAY_TIME: Integer read Get_SMPP_TLV_DISPLAY_TIME;
    property SMPP_TLV_SMS_SIGNAL: Integer read Get_SMPP_TLV_SMS_SIGNAL;
    property SMPP_TLV_MS_VALIDITY: Integer read Get_SMPP_TLV_MS_VALIDITY;
    property SMPP_TLV_ALERT_ON_MESSAGE_DELIVERY: Integer read Get_SMPP_TLV_ALERT_ON_MESSAGE_DELIVERY;
    property SMPP_TLV_ITS_REPLY_TYPE: Integer read Get_SMPP_TLV_ITS_REPLY_TYPE;
    property SMPP_TLV_ITS_SESSION_INFO: Integer read Get_SMPP_TLV_ITS_SESSION_INFO;
    property SMPP_MULTIPARTMODE_UDH: Integer read Get_SMPP_MULTIPARTMODE_UDH;
    property SMPP_MULTIPARTMODE_UDH16BIT: Integer read Get_SMPP_MULTIPARTMODE_UDH16BIT;
    property SMPP_MULTIPARTMODE_SARTLV: Integer read Get_SMPP_MULTIPARTMODE_SARTLV;
    property SMPP_MULTIPARTMODE_PAYLOADTLV: Integer read Get_SMPP_MULTIPARTMODE_PAYLOADTLV;
    property SMPP_LOGLEVEL_MINIMAL: Integer read Get_SMPP_LOGLEVEL_MINIMAL;
    property SMPP_LOGLEVEL_NORMAL: Integer read Get_SMPP_LOGLEVEL_NORMAL;
    property SMPP_LOGLEVEL_VERBOSE: Integer read Get_SMPP_LOGLEVEL_VERBOSE;
    property SMPP_SUBMITMODE_SUBMITSM: Integer read Get_SMPP_SUBMITMODE_SUBMITSM;
    property SMPP_SUBMITMODE_DATASM: Integer read Get_SMPP_SUBMITMODE_DATASM;
    property SMPP_DELIVERMODE_DELIVERSM: Integer read Get_SMPP_DELIVERMODE_DELIVERSM;
    property SMPP_DELIVERMODE_DATASM: Integer read Get_SMPP_DELIVERMODE_DATASM;
    property SMPP_USEGSMENCODING_INCHARSET: Integer read Get_SMPP_USEGSMENCODING_INCHARSET;
    property SMPP_USEGSMENCODING_OUTCHARSET: Integer read Get_SMPP_USEGSMENCODING_OUTCHARSET;
    property SMPP_USEGSMENCODING_INOUTCHARS: Integer read Get_SMPP_USEGSMENCODING_INOUTCHARS;
    property SMPP_IPVERSION_4: Integer read Get_SMPP_IPVERSION_4;
    property SMPP_IPVERSION_6: Integer read Get_SMPP_IPVERSION_6;
    property SMPP_IPVERSION_BOTH: Integer read Get_SMPP_IPVERSION_BOTH;
    property SMPP_CERTIFICATESTORE_LOCALMACHINE: Integer read Get_SMPP_CERTIFICATESTORE_LOCALMACHINE;
    property SMPP_CERTIFICATESTORE_CURRENTUSER: Integer read Get_SMPP_CERTIFICATESTORE_CURRENTUSER;
    property SMPP_ESME_ROK: Integer read Get_SMPP_ESME_ROK;
    property SMPP_ESME_RINVMSGLEN: Integer read Get_SMPP_ESME_RINVMSGLEN;
    property SMPP_ESME_RINVCMDLEN: Integer read Get_SMPP_ESME_RINVCMDLEN;
    property SMPP_ESME_RINVCMDID: Integer read Get_SMPP_ESME_RINVCMDID;
    property SMPP_ESME_RINVBNDSTS: Integer read Get_SMPP_ESME_RINVBNDSTS;
    property SMPP_ESME_RALYBND: Integer read Get_SMPP_ESME_RALYBND;
    property SMPP_ESME_RINVPRTFLG: Integer read Get_SMPP_ESME_RINVPRTFLG;
    property SMPP_ESME_RINVREGDLVFLG: Integer read Get_SMPP_ESME_RINVREGDLVFLG;
    property SMPP_ESME_RSYSERR: Integer read Get_SMPP_ESME_RSYSERR;
    property SMPP_ESME_RINVSRCADR: Integer read Get_SMPP_ESME_RINVSRCADR;
    property SMPP_ESME_RINVDSTADR: Integer read Get_SMPP_ESME_RINVDSTADR;
    property SMPP_ESME_RINVMSGID: Integer read Get_SMPP_ESME_RINVMSGID;
    property SMPP_ESME_RBINDFAIL: Integer read Get_SMPP_ESME_RBINDFAIL;
    property SMPP_ESME_RINVPASWD: Integer read Get_SMPP_ESME_RINVPASWD;
    property SMPP_ESME_RINVSYSID: Integer read Get_SMPP_ESME_RINVSYSID;
    property SMPP_ESME_RCANCELFAIL: Integer read Get_SMPP_ESME_RCANCELFAIL;
    property SMPP_ESME_RREPLACEFAIL: Integer read Get_SMPP_ESME_RREPLACEFAIL;
    property SMPP_ESME_RMSGQFUL: Integer read Get_SMPP_ESME_RMSGQFUL;
    property SMPP_ESME_RINVSERTYP: Integer read Get_SMPP_ESME_RINVSERTYP;
    property SMPP_ESME_RINVNUMDESTS: Integer read Get_SMPP_ESME_RINVNUMDESTS;
    property SMPP_ESME_RINVDLNAME: Integer read Get_SMPP_ESME_RINVDLNAME;
    property SMPP_ESME_RINVDESTFLAG: Integer read Get_SMPP_ESME_RINVDESTFLAG;
    property SMPP_ESME_RINVSUBREP: Integer read Get_SMPP_ESME_RINVSUBREP;
    property SMPP_ESME_RINVESMCLASS: Integer read Get_SMPP_ESME_RINVESMCLASS;
    property SMPP_ESME_RCNTSUBDL: Integer read Get_SMPP_ESME_RCNTSUBDL;
    property SMPP_ESME_RSUBMITFAIL: Integer read Get_SMPP_ESME_RSUBMITFAIL;
    property SMPP_ESME_RINVSRCTON: Integer read Get_SMPP_ESME_RINVSRCTON;
    property SMPP_ESME_RINVSRCNPI: Integer read Get_SMPP_ESME_RINVSRCNPI;
    property SMPP_ESME_RINVDSTTON: Integer read Get_SMPP_ESME_RINVDSTTON;
    property SMPP_ESME_RINVDSTNPI: Integer read Get_SMPP_ESME_RINVDSTNPI;
    property SMPP_ESME_RINVSYSTYP: Integer read Get_SMPP_ESME_RINVSYSTYP;
    property SMPP_ESME_RINVREPFLAG: Integer read Get_SMPP_ESME_RINVREPFLAG;
    property SMPP_ESME_RINVNUMMSGS: Integer read Get_SMPP_ESME_RINVNUMMSGS;
    property SMPP_ESME_RTHROTTLED: Integer read Get_SMPP_ESME_RTHROTTLED;
    property SMPP_ESME_RINVSCHED: Integer read Get_SMPP_ESME_RINVSCHED;
    property SMPP_ESME_RINVEXPIRY: Integer read Get_SMPP_ESME_RINVEXPIRY;
    property SMPP_ESME_RINVDFTMSGID: Integer read Get_SMPP_ESME_RINVDFTMSGID;
    property SMPP_ESME_RX_T_APPN: Integer read Get_SMPP_ESME_RX_T_APPN;
    property SMPP_ESME_RX_P_APPN: Integer read Get_SMPP_ESME_RX_P_APPN;
    property SMPP_ESME_RX_R_APPN: Integer read Get_SMPP_ESME_RX_R_APPN;
    property SMPP_ESME_RQUERYFAIL: Integer read Get_SMPP_ESME_RQUERYFAIL;
    property SMPP_ESME_RINVOPTPARSTREAM: Integer read Get_SMPP_ESME_RINVOPTPARSTREAM;
    property SMPP_ESME_ROPTPARNOTALLWD: Integer read Get_SMPP_ESME_ROPTPARNOTALLWD;
    property SMPP_ESME_RINVPARLEN: Integer read Get_SMPP_ESME_RINVPARLEN;
    property SMPP_ESME_RMISSINGOPTPARAM: Integer read Get_SMPP_ESME_RMISSINGOPTPARAM;
    property SMPP_ESME_RINVOPTPARAMVAL: Integer read Get_SMPP_ESME_RINVOPTPARAMVAL;
    property SMPP_ESME_RDELIVERYFAILURE: Integer read Get_SMPP_ESME_RDELIVERYFAILURE;
    property SMPP_ESME_RUNKNOWNERR: Integer read Get_SMPP_ESME_RUNKNOWNERR;
    property GSM_STATUS_MESSAGE_DELIVERED_SUCCESSFULLY: Integer read Get_GSM_STATUS_MESSAGE_DELIVERED_SUCCESSFULLY;
    property GSM_STATUS_FORWARDED_STATUS_UNKNOWN: Integer read Get_GSM_STATUS_FORWARDED_STATUS_UNKNOWN;
    property GSM_STATUS_REPLACED: Integer read Get_GSM_STATUS_REPLACED;
    property GSM_STATUS_CONGESTION_STILL_TRYING: Integer read Get_GSM_STATUS_CONGESTION_STILL_TRYING;
    property GSM_STATUS_RECIPIENT_BUSY_STILL_TRYING: Integer read Get_GSM_STATUS_RECIPIENT_BUSY_STILL_TRYING;
    property GSM_STATUS_NO_RESPONSE_STILL_TRYING: Integer read Get_GSM_STATUS_NO_RESPONSE_STILL_TRYING;
    property GSM_STATUS_SERVICE_REJECTED_STILL_TRYING: Integer read Get_GSM_STATUS_SERVICE_REJECTED_STILL_TRYING;
    property GSM_STATUS_QOS_NOT_AVAILABLE_STILL_TRYING: Integer read Get_GSM_STATUS_QOS_NOT_AVAILABLE_STILL_TRYING;
    property GSM_STATUS_RECIPIENT_ERROR_STILL_TRYING: Integer read Get_GSM_STATUS_RECIPIENT_ERROR_STILL_TRYING;
    property GSM_STATUS_RPC_ERROR: Integer read Get_GSM_STATUS_RPC_ERROR;
    property GSM_STATUS_INCOMPATIBLE_DESTINATION: Integer read Get_GSM_STATUS_INCOMPATIBLE_DESTINATION;
    property GSM_STATUS_CONNECTION_REJECTED: Integer read Get_GSM_STATUS_CONNECTION_REJECTED;
    property GSM_STATUS_NOT_OBTAINABLE: Integer read Get_GSM_STATUS_NOT_OBTAINABLE;
    property GSM_STATUS_QOS_NOT_AVAILABLE: Integer read Get_GSM_STATUS_QOS_NOT_AVAILABLE;
    property GSM_STATUS_NO_INTERNETWORKING_AVAILABLE: Integer read Get_GSM_STATUS_NO_INTERNETWORKING_AVAILABLE;
    property GSM_STATUS_MESSAGE_EXPIRED: Integer read Get_GSM_STATUS_MESSAGE_EXPIRED;
    property GSM_STATUS_MESSAGE_DELETED_BY_SENDER: Integer read Get_GSM_STATUS_MESSAGE_DELETED_BY_SENDER;
    property GSM_STATUS_MESSAGE_DELETED_BY_SMSC: Integer read Get_GSM_STATUS_MESSAGE_DELETED_BY_SMSC;
    property GSM_STATUS_DOES_NOT_EXIST: Integer read Get_GSM_STATUS_DOES_NOT_EXIST;
    property GSM_STORAGETYPE_SIM: Integer read Get_GSM_STORAGETYPE_SIM;
    property GSM_STORAGETYPE_MEMORY: Integer read Get_GSM_STORAGETYPE_MEMORY;
    property GSM_STORAGETYPE_COMBINED: Integer read Get_GSM_STORAGETYPE_COMBINED;
    property GSM_STORAGETYPE_STATUS: Integer read Get_GSM_STORAGETYPE_STATUS;
    property GSM_STORAGETYPE_ALL: Integer read Get_GSM_STORAGETYPE_ALL;
    property GSM_FO_REPLYPATH_EXISTS: Integer read Get_GSM_FO_REPLYPATH_EXISTS;
    property GSM_FO_UDHI: Integer read Get_GSM_FO_UDHI;
    property GSM_FO_STATUS_REPORT: Integer read Get_GSM_FO_STATUS_REPORT;
    property GSM_FO_VALIDITY_NONE: Integer read Get_GSM_FO_VALIDITY_NONE;
    property GSM_FO_VALIDITY_RELATIVE: Integer read Get_GSM_FO_VALIDITY_RELATIVE;
    property GSM_FO_VALIDITY_ENHANCED: Integer read Get_GSM_FO_VALIDITY_ENHANCED;
    property GSM_FO_VALIDITY_ABSOLUTE: Integer read Get_GSM_FO_VALIDITY_ABSOLUTE;
    property GSM_FO_REJECT_DUPLICATES: Integer read Get_GSM_FO_REJECT_DUPLICATES;
    property GSM_FO_SUBMIT_SM: Integer read Get_GSM_FO_SUBMIT_SM;
    property GSM_FO_DELIVER_SM: Integer read Get_GSM_FO_DELIVER_SM;
    property GSM_FO_STATUS_SM: Integer read Get_GSM_FO_STATUS_SM;
    property DATACODING_DEFAULT: Integer read Get_DATACODING_DEFAULT;
    property DATACODING_8BIT_DATA: Integer read Get_DATACODING_8BIT_DATA;
    property DATACODING_UNICODE: Integer read Get_DATACODING_UNICODE;
    property GSM_DATACODING_ME_SPECIFIC: Integer read Get_GSM_DATACODING_ME_SPECIFIC;
    property GSM_DATACODING_SIM_SPECIFIC: Integer read Get_GSM_DATACODING_SIM_SPECIFIC;
    property GSM_DATACODING_TE_SPECIFIC: Integer read Get_GSM_DATACODING_TE_SPECIFIC;
    property DATACODING_FLASH: Integer read Get_DATACODING_FLASH;
    property GSM_BAUDRATE_110: Integer read Get_GSM_BAUDRATE_110;
    property GSM_BAUDRATE_300: Integer read Get_GSM_BAUDRATE_300;
    property GSM_BAUDRATE_600: Integer read Get_GSM_BAUDRATE_600;
    property GSM_BAUDRATE_1200: Integer read Get_GSM_BAUDRATE_1200;
    property GSM_BAUDRATE_2400: Integer read Get_GSM_BAUDRATE_2400;
    property GSM_BAUDRATE_4800: Integer read Get_GSM_BAUDRATE_4800;
    property GSM_BAUDRATE_9600: Integer read Get_GSM_BAUDRATE_9600;
    property GSM_BAUDRATE_14400: Integer read Get_GSM_BAUDRATE_14400;
    property GSM_BAUDRATE_19200: Integer read Get_GSM_BAUDRATE_19200;
    property GSM_BAUDRATE_38400: Integer read Get_GSM_BAUDRATE_38400;
    property GSM_BAUDRATE_56000: Integer read Get_GSM_BAUDRATE_56000;
    property GSM_BAUDRATE_57600: Integer read Get_GSM_BAUDRATE_57600;
    property GSM_BAUDRATE_64000: Integer read Get_GSM_BAUDRATE_64000;
    property GSM_BAUDRATE_115200: Integer read Get_GSM_BAUDRATE_115200;
    property GSM_BAUDRATE_128000: Integer read Get_GSM_BAUDRATE_128000;
    property GSM_BAUDRATE_230400: Integer read Get_GSM_BAUDRATE_230400;
    property GSM_BAUDRATE_256000: Integer read Get_GSM_BAUDRATE_256000;
    property GSM_BAUDRATE_460800: Integer read Get_GSM_BAUDRATE_460800;
    property GSM_BAUDRATE_921600: Integer read Get_GSM_BAUDRATE_921600;
    property GSM_BAUDRATE_DEFAULT: Integer read Get_GSM_BAUDRATE_DEFAULT;
    property GSM_MESSAGESTATE_RECEIVED_UNREAD: Integer read Get_GSM_MESSAGESTATE_RECEIVED_UNREAD;
    property GSM_MESSAGESTATE_RECEIVED_READ: Integer read Get_GSM_MESSAGESTATE_RECEIVED_READ;
    property GSM_MESSAGESTATE_STORED_UNSENT: Integer read Get_GSM_MESSAGESTATE_STORED_UNSENT;
    property GSM_MESSAGESTATE_STORED_SENT: Integer read Get_GSM_MESSAGESTATE_STORED_SENT;
    property GSM_MESSAGESTATE_ALL: Integer read Get_GSM_MESSAGESTATE_ALL;
    property GSM_MESSAGEFORMAT_PDU: Integer read Get_GSM_MESSAGEFORMAT_PDU;
    property GSM_MESSAGEFORMAT_TEXT: Integer read Get_GSM_MESSAGEFORMAT_TEXT;
    property GSM_MESSAGEFORMAT_AUTO: Integer read Get_GSM_MESSAGEFORMAT_AUTO;
    property HTTP_PLACEHOLDER_USERTAG: WideString read Get_HTTP_PLACEHOLDER_USERTAG;
    property HTTP_PLACEHOLDER_TOADDRESS: WideString read Get_HTTP_PLACEHOLDER_TOADDRESS;
    property HTTP_PLACEHOLDER_FROMADDRESS: WideString read Get_HTTP_PLACEHOLDER_FROMADDRESS;
    property HTTP_PLACEHOLDER_BODY: WideString read Get_HTTP_PLACEHOLDER_BODY;
    property HTTP_PLACEHOLDER_BODYASHEX: WideString read Get_HTTP_PLACEHOLDER_BODYASHEX;
    property HTTP_PLACEHOLDER_BODYASBASE64: WideString read Get_HTTP_PLACEHOLDER_BODYASBASE64;
    property HTTP_PLACEHOLDER_DELIVERYREPORT: WideString read Get_HTTP_PLACEHOLDER_DELIVERYREPORT;
    property HTTP_PLACEHOLDER_TOADDRESSTON: WideString read Get_HTTP_PLACEHOLDER_TOADDRESSTON;
    property HTTP_PLACEHOLDER_TOADDRESSNPI: WideString read Get_HTTP_PLACEHOLDER_TOADDRESSNPI;
    property HTTP_PLACEHOLDER_FROMADDRESSTON: WideString read Get_HTTP_PLACEHOLDER_FROMADDRESSTON;
    property HTTP_PLACEHOLDER_FROMADDRESSNPI: WideString read Get_HTTP_PLACEHOLDER_FROMADDRESSNPI;
    property HTTP_PLACEHOLDER_PROTOCOLID: WideString read Get_HTTP_PLACEHOLDER_PROTOCOLID;
    property HTTP_PLACEHOLDER_UDHI: WideString read Get_HTTP_PLACEHOLDER_UDHI;
    property HTTP_PLACEHOLDER_DATACODING: WideString read Get_HTTP_PLACEHOLDER_DATACODING;
    property HTTP_PLACEHOLDER_USERTAGSTRING: WideString read Get_HTTP_PLACEHOLDER_USERTAGSTRING;
    property GSM_PREFIXSMSC_ENABLED: Integer read Get_GSM_PREFIXSMSC_ENABLED;
    property GSM_PREFIXSMSC_DISABLED: Integer read Get_GSM_PREFIXSMSC_DISABLED;
    property GSM_PREFIXSMSC_AUTO: Integer read Get_GSM_PREFIXSMSC_AUTO;
    property GSM_TCPMODE_RAW: Integer read Get_GSM_TCPMODE_RAW;
    property GSM_TCPMODE_TELNET: Integer read Get_GSM_TCPMODE_TELNET;
    property GSM_TCPMODE_TELNET_WITH_COMCONTROL: Integer read Get_GSM_TCPMODE_TELNET_WITH_COMCONTROL;
    property WAPPUSH_SIGNAL_NONE: Integer read Get_WAPPUSH_SIGNAL_NONE;
    property WAPPUSH_SIGNAL_LOW: Integer read Get_WAPPUSH_SIGNAL_LOW;
    property WAPPUSH_SIGNAL_MEDIUM: Integer read Get_WAPPUSH_SIGNAL_MEDIUM;
    property WAPPUSH_SIGNAL_HIGH: Integer read Get_WAPPUSH_SIGNAL_HIGH;
    property WAPPUSH_SIGNAL_DELETE: Integer read Get_WAPPUSH_SIGNAL_DELETE;
    property DIALUP_PROVIDERTYPE_UCP: Integer read Get_DIALUP_PROVIDERTYPE_UCP;
    property DIALUP_PROVIDERTYPE_TAP_DEFAULT: Integer read Get_DIALUP_PROVIDERTYPE_TAP_DEFAULT;
    property DIALUP_PROVIDERTYPE_TAP_NOLF: Integer read Get_DIALUP_PROVIDERTYPE_TAP_NOLF;
    property DIALUP_PROVIDERTYPE_TAP_NOEOT: Integer read Get_DIALUP_PROVIDERTYPE_TAP_NOEOT;
    property DIALUP_DIALMODE_TONE: Integer read Get_DIALUP_DIALMODE_TONE;
    property DIALUP_DIALMODE_PULSE: Integer read Get_DIALUP_DIALMODE_PULSE;
    property DIALUP_DEVICESETTINGS_DEFAULT: Integer read Get_DIALUP_DEVICESETTINGS_DEFAULT;
    property DIALUP_DEVICESETTINGS_8N1: Integer read Get_DIALUP_DEVICESETTINGS_8N1;
    property DIALUP_DEVICESETTINGS_7E1: Integer read Get_DIALUP_DEVICESETTINGS_7E1;
    property LANGUAGE_LOCKINGSHIFT_BASIC: Integer read Get_LANGUAGE_LOCKINGSHIFT_BASIC;
    property LANGUAGE_LOCKINGSHIFT_TURKISH: Integer read Get_LANGUAGE_LOCKINGSHIFT_TURKISH;
    property LANGUAGE_LOCKINGSHIFT_PORTUGUESE: Integer read Get_LANGUAGE_LOCKINGSHIFT_PORTUGUESE;
    property LANGUAGE_LOCKINGSHIFT_SPANISH: Integer read Get_LANGUAGE_LOCKINGSHIFT_SPANISH;
    property LANGUAGE_LOCKINGSHIFT_BENGALI: Integer read Get_LANGUAGE_LOCKINGSHIFT_BENGALI;
    property LANGUAGE_LOCKINGSHIFT_GUJARATI: Integer read Get_LANGUAGE_LOCKINGSHIFT_GUJARATI;
    property LANGUAGE_LOCKINGSHIFT_HINDI: Integer read Get_LANGUAGE_LOCKINGSHIFT_HINDI;
    property LANGUAGE_LOCKINGSHIFT_KANNADA: Integer read Get_LANGUAGE_LOCKINGSHIFT_KANNADA;
    property LANGUAGE_LOCKINGSHIFT_MALAYALAM: Integer read Get_LANGUAGE_LOCKINGSHIFT_MALAYALAM;
    property LANGUAGE_LOCKINGSHIFT_ORIYA: Integer read Get_LANGUAGE_LOCKINGSHIFT_ORIYA;
    property LANGUAGE_LOCKINGSHIFT_PUNJABI: Integer read Get_LANGUAGE_LOCKINGSHIFT_PUNJABI;
    property LANGUAGE_LOCKINGSHIFT_TAMIL: Integer read Get_LANGUAGE_LOCKINGSHIFT_TAMIL;
    property LANGUAGE_LOCKINGSHIFT_TELUGU: Integer read Get_LANGUAGE_LOCKINGSHIFT_TELUGU;
    property LANGUAGE_LOCKINGSHIFT_URDU: Integer read Get_LANGUAGE_LOCKINGSHIFT_URDU;
    property LANGUAGE_SINGLESHIFT_BASIC: Integer read Get_LANGUAGE_SINGLESHIFT_BASIC;
    property LANGUAGE_SINGLESHIFT_TURKISH: Integer read Get_LANGUAGE_SINGLESHIFT_TURKISH;
    property LANGUAGE_SINGLESHIFT_SPANISH: Integer read Get_LANGUAGE_SINGLESHIFT_SPANISH;
    property LANGUAGE_SINGLESHIFT_PORTUGUESE: Integer read Get_LANGUAGE_SINGLESHIFT_PORTUGUESE;
    property LANGUAGE_SINGLESHIFT_BENGALI: Integer read Get_LANGUAGE_SINGLESHIFT_BENGALI;
    property LANGUAGE_SINGLESHIFT_GUJARATI: Integer read Get_LANGUAGE_SINGLESHIFT_GUJARATI;
    property LANGUAGE_SINGLESHIFT_HINDI: Integer read Get_LANGUAGE_SINGLESHIFT_HINDI;
    property LANGUAGE_SINGLESHIFT_KANNADA: Integer read Get_LANGUAGE_SINGLESHIFT_KANNADA;
    property LANGUAGE_SINGLESHIFT_MALAYALAM: Integer read Get_LANGUAGE_SINGLESHIFT_MALAYALAM;
    property LANGUAGE_SINGLESHIFT_ORIYA: Integer read Get_LANGUAGE_SINGLESHIFT_ORIYA;
    property LANGUAGE_SINGLESHIFT_PUNJABI: Integer read Get_LANGUAGE_SINGLESHIFT_PUNJABI;
    property LANGUAGE_SINGLESHIFT_TAMIL: Integer read Get_LANGUAGE_SINGLESHIFT_TAMIL;
    property LANGUAGE_SINGLESHIFT_TELUGU: Integer read Get_LANGUAGE_SINGLESHIFT_TELUGU;
    property LANGUAGE_SINGLESHIFT_URDU: Integer read Get_LANGUAGE_SINGLESHIFT_URDU;
  end;

// *********************************************************************//
// DispIntf:  IConstantsDisp
// Flags:     (4544) Dual NonExtensible OleAutomation Dispatchable
// GUID:      {7D47E1D0-4B72-4A5D-B174-A0E82AF73892}
// *********************************************************************//
  IConstantsDisp = dispinterface
    ['{7D47E1D0-4B72-4A5D-B174-A0E82AF73892}']
    property SMPP_BIND_TRANSMITTER: Integer readonly dispid 101;
    property SMPP_BIND_TRANSCEIVER: Integer readonly dispid 102;
    property SMPP_BIND_RECEIVER: Integer readonly dispid 103;
    property SMPP_VERSION_33: Integer readonly dispid 204;
    property SMPP_VERSION_34: Integer readonly dispid 205;
    property SMPP_VERSION_50: Integer readonly dispid 206;
    property TON_UNKNOWN: Integer readonly dispid 307;
    property TON_INTERNATIONAL: Integer readonly dispid 308;
    property TON_NATIONAL: Integer readonly dispid 309;
    property TON_NETWORK_SPECIFIC: Integer readonly dispid 310;
    property TON_SUBSCRIBER_NUMBER: Integer readonly dispid 311;
    property TON_ALPHANUMERIC: Integer readonly dispid 312;
    property SMPP_TON_ABBREVIATED: Integer readonly dispid 313;
    property NPI_UNKNOWN: Integer readonly dispid 414;
    property NPI_ISDN: Integer readonly dispid 415;
    property NPI_DATA: Integer readonly dispid 416;
    property NPI_TELEX: Integer readonly dispid 417;
    property NPI_NATIONAL: Integer readonly dispid 418;
    property NPI_PRIVATE: Integer readonly dispid 419;
    property NPI_ERMES: Integer readonly dispid 420;
    property SMPP_NPI_INTERNET: Integer readonly dispid 421;
    property NPI_LAND_MOBILE: Integer readonly dispid 422;
    property MULTIPART_ACCEPT: Integer readonly dispid 522;
    property MULTIPART_TRUNCATE: Integer readonly dispid 523;
    property MULTIPART_REJECT: Integer readonly dispid 524;
    property BODYFORMAT_TEXT: Integer readonly dispid 625;
    property BODYFORMAT_HEX: Integer readonly dispid 627;
    property SMPP_ESM_2ESME_DEFAULT: Integer readonly dispid 731;
    property SMPP_ESM_2ESME_DELIVERY_RECEIPT: Integer readonly dispid 732;
    property SMPP_ESM_2ESME_DELIVERY_ACK: Integer readonly dispid 733;
    property SMPP_ESM_2ESME_MANUAL_ACK: Integer readonly dispid 734;
    property SMPP_ESM_2ESME_CONVERSATION_ABORT: Integer readonly dispid 735;
    property SMPP_ESM_2ESME_INTERMEDIATE_DELIVERY_NOTIFY: Integer readonly dispid 736;
    property SMPP_ESM_2SMSC_MODE_DEFAULT: Integer readonly dispid 737;
    property SMPP_ESM_2SMSC_MODE_STOREFORWARD: Integer readonly dispid 738;
    property SMPP_ESM_2SMSC_MODE_DATAGRAM: Integer readonly dispid 739;
    property SMPP_ESM_2SMSC_MODE_FORWARD: Integer readonly dispid 740;
    property SMPP_ESM_2SMSC_TYPE_DEFAULT: Integer readonly dispid 741;
    property SMPP_ESM_2SMSC_TYPE_DELIVERY_ACK: Integer readonly dispid 742;
    property SMPP_ESM_2SMSC_TYPE_MANUAL_ACK: Integer readonly dispid 743;
    property SMPP_ESM_2SMSC_FEAT_NOTHING: Integer readonly dispid 744;
    property SMPP_ESM_2SMSC_FEAT_UDHI: Integer readonly dispid 745;
    property SMPP_ESM_2SMSC_FEAT_SRP: Integer readonly dispid 746;
    property SMPP_USEGSMENCODING_DISABLED: Integer readonly dispid 848;
    property SMPP_USEGSMENCODING_INANDOUT: Integer readonly dispid 849;
    property SMPP_USEGSMENCODING_INCOMING: Integer readonly dispid 850;
    property SMPP_USEGSMENCODING_OUTGOING: Integer readonly dispid 851;
    property SMPP_DATACODING_ASCII: Integer readonly dispid 952;
    property SMPP_DATACODING_OCTET_UNSPEC: Integer readonly dispid 953;
    property SMPP_DATACODING_LATIN: Integer readonly dispid 954;
    property SMPP_DATACODING_JIS_KANJI: Integer readonly dispid 956;
    property SMPP_DATACODING_CYRILLIC: Integer readonly dispid 957;
    property SMPP_DATACODING_LATIN_HEBREW: Integer readonly dispid 958;
    property SMPP_DATACODING_PICTOGRAM: Integer readonly dispid 960;
    property SMPP_DATACODING_ISO_2022_JP: Integer readonly dispid 961;
    property SMPP_DATACODING_EXTENDED_KANJI_JIS: Integer readonly dispid 962;
    property SMPP_DATACODING_KS_C_5601: Integer readonly dispid 963;
    property SMPP_PRIORITYFLAG_BULK: Integer readonly dispid 1070;
    property SMPP_PRIORITYFLAG_NORMAL: Integer readonly dispid 1071;
    property SMPP_PRIORITYFLAG_URGENT: Integer readonly dispid 1072;
    property SMPP_PRIORITYFLAG_VERY_URGENT: Integer readonly dispid 1073;
    property SMPP_MESSAGESTATE_AX_WAITRESP: Integer readonly dispid 1100;
    property SMPP_MESSAGESTATE_ENROUTE: Integer readonly dispid 1101;
    property SMPP_MESSAGESTATE_DELIVERED: Integer readonly dispid 1102;
    property SMPP_MESSAGESTATE_EXPIRED: Integer readonly dispid 1103;
    property SMPP_MESSAGESTATE_DELETED: Integer readonly dispid 1104;
    property SMPP_MESSAGESTATE_UNDELIVERABLE: Integer readonly dispid 1105;
    property SMPP_MESSAGESTATE_ACCEPTED: Integer readonly dispid 1106;
    property SMPP_MESSAGESTATE_UNKNOWN: Integer readonly dispid 1107;
    property SMPP_MESSAGESTATE_REJECTED: Integer readonly dispid 1108;
    property SMPP_MESSAGESTATE_AX_RESPERROR: Integer readonly dispid 1109;
    property SMPP_MESSAGESTATE_AX_NOCREDITS: Integer readonly dispid 1110;
    property SMPP_MESSAGESTATE_AX_RESPTO: Integer readonly dispid 1111;
    property SMPP_MESSAGESTATE_AX_RESPONDED: Integer readonly dispid 1112;
    property SMPP_SESSIONSTATE_CONNECTED: Integer readonly dispid 1203;
    property SMPP_SESSIONSTATE_DISCONNECTED: Integer readonly dispid 1204;
    property SMPP_SESSIONSTATE_BINDING: Integer readonly dispid 1205;
    property SMPP_SESSIONSTATE_BOUND_TX: Integer readonly dispid 1206;
    property SMPP_SESSIONSTATE_BOUND_RX: Integer readonly dispid 1207;
    property SMPP_SESSIONSTATE_BOUND_TRX: Integer readonly dispid 1208;
    property SMPP_TLV_DEST_ADDR_SUBUNIT: Integer readonly dispid 1300;
    property SMPP_TLV_DEST_NETWORK_TYPE: Integer readonly dispid 1301;
    property SMPP_TLV_DEST_BEARER_TYPE: Integer readonly dispid 1302;
    property SMPP_TLV_DEST_TELEMATICS_ID: Integer readonly dispid 1303;
    property SMPP_TLV_SOURCE_ADDR_SUBUNIT: Integer readonly dispid 1304;
    property SMPP_TLV_SOURCE_NETWORK_TYPE: Integer readonly dispid 1305;
    property SMPP_TLV_SOURCE_BEARER_TYPE: Integer readonly dispid 1306;
    property SMPP_TLV_SOURCE_TELEMATICS_ID: Integer readonly dispid 1307;
    property SMPP_TLV_QOS_TIME_TO_LIVE: Integer readonly dispid 1308;
    property SMPP_TLV_PAYLOAD_TYPE: Integer readonly dispid 1309;
    property SMPP_TLV_ADDITIONAL_STATUS_INFO_TEXT: Integer readonly dispid 1310;
    property SMPP_TLV_RECEIPTED_MESSAGE_ID: Integer readonly dispid 1311;
    property SMPP_TLV_MS_MSG_WAIT_FACILITIES: Integer readonly dispid 1312;
    property SMPP_TLV_PRIVACY_INDICATOR: Integer readonly dispid 1313;
    property SMPP_TLV_SOURCE_SUBADDRESS: Integer readonly dispid 1314;
    property SMPP_TLV_DEST_SUBADDRESS: Integer readonly dispid 1315;
    property SMPP_TLV_USER_MESSAGE_REFERENCE: Integer readonly dispid 1316;
    property SMPP_TLV_USER_RESPONSE_CODE: Integer readonly dispid 1317;
    property SMPP_TLV_SOURCE_PORT: Integer readonly dispid 1318;
    property SMPP_TLV_DESTINATION_PORT: Integer readonly dispid 1319;
    property SMPP_TLV_SAR_MSG_REF_NUM: Integer readonly dispid 1320;
    property SMPP_TLV_LANGUAGE_INDICATOR: Integer readonly dispid 1321;
    property SMPP_TLV_SAR_TOTAL_SEGMENTS: Integer readonly dispid 1322;
    property SMPP_TLV_SAR_SEGMENT_SEQNUM: Integer readonly dispid 1323;
    property SMPP_TLV_SC_INTERFACE_VERSION: Integer readonly dispid 1324;
    property SMPP_TLV_CALLBACK_NUM_PRES_IND: Integer readonly dispid 1325;
    property SMPP_TLV_CALLBACK_NUM_ATAG: Integer readonly dispid 1326;
    property SMPP_TLV_NUMBER_OF_MESSAGES: Integer readonly dispid 1327;
    property SMPP_TLV_CALLBACK_NUM: Integer readonly dispid 1328;
    property SMPP_TLV_DPF_RESULT: Integer readonly dispid 1329;
    property SMPP_TLV_SET_DPF: Integer readonly dispid 1330;
    property SMPP_TLV_MS_AVAILABILITY_STATUS: Integer readonly dispid 1331;
    property SMPP_TLV_NETWORK_ERROR_CODE: Integer readonly dispid 1332;
    property SMPP_TLV_MESSAGE_PAYLOAD: Integer readonly dispid 1333;
    property SMPP_TLV_DELIVERY_FAILURE_REASON: Integer readonly dispid 1334;
    property SMPP_TLV_MORE_MESSAGES_TO_SEND: Integer readonly dispid 1335;
    property SMPP_TLV_MESSAGE_STATE: Integer readonly dispid 1336;
    property SMPP_TLV_CONGESTION_STATE: Integer readonly dispid 1337;
    property SMPP_TLV_USSD_SERVICE_OP: Integer readonly dispid 1338;
    property SMPP_TLV_DISPLAY_TIME: Integer readonly dispid 1339;
    property SMPP_TLV_SMS_SIGNAL: Integer readonly dispid 1340;
    property SMPP_TLV_MS_VALIDITY: Integer readonly dispid 1341;
    property SMPP_TLV_ALERT_ON_MESSAGE_DELIVERY: Integer readonly dispid 1342;
    property SMPP_TLV_ITS_REPLY_TYPE: Integer readonly dispid 1343;
    property SMPP_TLV_ITS_SESSION_INFO: Integer readonly dispid 1344;
    property SMPP_MULTIPARTMODE_UDH: Integer readonly dispid 1401;
    property SMPP_MULTIPARTMODE_UDH16BIT: Integer readonly dispid 1402;
    property SMPP_MULTIPARTMODE_SARTLV: Integer readonly dispid 1403;
    property SMPP_MULTIPARTMODE_PAYLOADTLV: Integer readonly dispid 1404;
    property SMPP_LOGLEVEL_MINIMAL: Integer readonly dispid 1411;
    property SMPP_LOGLEVEL_NORMAL: Integer readonly dispid 1412;
    property SMPP_LOGLEVEL_VERBOSE: Integer readonly dispid 1413;
    property SMPP_SUBMITMODE_SUBMITSM: Integer readonly dispid 1506;
    property SMPP_SUBMITMODE_DATASM: Integer readonly dispid 1507;
    property SMPP_DELIVERMODE_DELIVERSM: Integer readonly dispid 1526;
    property SMPP_DELIVERMODE_DATASM: Integer readonly dispid 1527;
    property SMPP_USEGSMENCODING_INCHARSET: Integer readonly dispid 1551;
    property SMPP_USEGSMENCODING_OUTCHARSET: Integer readonly dispid 1552;
    property SMPP_USEGSMENCODING_INOUTCHARS: Integer readonly dispid 1553;
    property SMPP_IPVERSION_4: Integer readonly dispid 1581;
    property SMPP_IPVERSION_6: Integer readonly dispid 1582;
    property SMPP_IPVERSION_BOTH: Integer readonly dispid 1583;
    property SMPP_CERTIFICATESTORE_LOCALMACHINE: Integer readonly dispid 1591;
    property SMPP_CERTIFICATESTORE_CURRENTUSER: Integer readonly dispid 1592;
    property SMPP_ESME_ROK: Integer readonly dispid 1601;
    property SMPP_ESME_RINVMSGLEN: Integer readonly dispid 1602;
    property SMPP_ESME_RINVCMDLEN: Integer readonly dispid 1603;
    property SMPP_ESME_RINVCMDID: Integer readonly dispid 1604;
    property SMPP_ESME_RINVBNDSTS: Integer readonly dispid 1605;
    property SMPP_ESME_RALYBND: Integer readonly dispid 1606;
    property SMPP_ESME_RINVPRTFLG: Integer readonly dispid 1607;
    property SMPP_ESME_RINVREGDLVFLG: Integer readonly dispid 1608;
    property SMPP_ESME_RSYSERR: Integer readonly dispid 1609;
    property SMPP_ESME_RINVSRCADR: Integer readonly dispid 1610;
    property SMPP_ESME_RINVDSTADR: Integer readonly dispid 1611;
    property SMPP_ESME_RINVMSGID: Integer readonly dispid 1612;
    property SMPP_ESME_RBINDFAIL: Integer readonly dispid 1613;
    property SMPP_ESME_RINVPASWD: Integer readonly dispid 1614;
    property SMPP_ESME_RINVSYSID: Integer readonly dispid 1615;
    property SMPP_ESME_RCANCELFAIL: Integer readonly dispid 1616;
    property SMPP_ESME_RREPLACEFAIL: Integer readonly dispid 1617;
    property SMPP_ESME_RMSGQFUL: Integer readonly dispid 1618;
    property SMPP_ESME_RINVSERTYP: Integer readonly dispid 1619;
    property SMPP_ESME_RINVNUMDESTS: Integer readonly dispid 1620;
    property SMPP_ESME_RINVDLNAME: Integer readonly dispid 1621;
    property SMPP_ESME_RINVDESTFLAG: Integer readonly dispid 1622;
    property SMPP_ESME_RINVSUBREP: Integer readonly dispid 1623;
    property SMPP_ESME_RINVESMCLASS: Integer readonly dispid 1624;
    property SMPP_ESME_RCNTSUBDL: Integer readonly dispid 1625;
    property SMPP_ESME_RSUBMITFAIL: Integer readonly dispid 1626;
    property SMPP_ESME_RINVSRCTON: Integer readonly dispid 1627;
    property SMPP_ESME_RINVSRCNPI: Integer readonly dispid 1628;
    property SMPP_ESME_RINVDSTTON: Integer readonly dispid 1629;
    property SMPP_ESME_RINVDSTNPI: Integer readonly dispid 1630;
    property SMPP_ESME_RINVSYSTYP: Integer readonly dispid 1631;
    property SMPP_ESME_RINVREPFLAG: Integer readonly dispid 1632;
    property SMPP_ESME_RINVNUMMSGS: Integer readonly dispid 1633;
    property SMPP_ESME_RTHROTTLED: Integer readonly dispid 1634;
    property SMPP_ESME_RINVSCHED: Integer readonly dispid 1635;
    property SMPP_ESME_RINVEXPIRY: Integer readonly dispid 1636;
    property SMPP_ESME_RINVDFTMSGID: Integer readonly dispid 1637;
    property SMPP_ESME_RX_T_APPN: Integer readonly dispid 1638;
    property SMPP_ESME_RX_P_APPN: Integer readonly dispid 1639;
    property SMPP_ESME_RX_R_APPN: Integer readonly dispid 1640;
    property SMPP_ESME_RQUERYFAIL: Integer readonly dispid 1641;
    property SMPP_ESME_RINVOPTPARSTREAM: Integer readonly dispid 1642;
    property SMPP_ESME_ROPTPARNOTALLWD: Integer readonly dispid 1643;
    property SMPP_ESME_RINVPARLEN: Integer readonly dispid 1644;
    property SMPP_ESME_RMISSINGOPTPARAM: Integer readonly dispid 1645;
    property SMPP_ESME_RINVOPTPARAMVAL: Integer readonly dispid 1646;
    property SMPP_ESME_RDELIVERYFAILURE: Integer readonly dispid 1647;
    property SMPP_ESME_RUNKNOWNERR: Integer readonly dispid 1648;
    property GSM_STATUS_MESSAGE_DELIVERED_SUCCESSFULLY: Integer readonly dispid 1751;
    property GSM_STATUS_FORWARDED_STATUS_UNKNOWN: Integer readonly dispid 1752;
    property GSM_STATUS_REPLACED: Integer readonly dispid 1753;
    property GSM_STATUS_CONGESTION_STILL_TRYING: Integer readonly dispid 1754;
    property GSM_STATUS_RECIPIENT_BUSY_STILL_TRYING: Integer readonly dispid 1755;
    property GSM_STATUS_NO_RESPONSE_STILL_TRYING: Integer readonly dispid 1756;
    property GSM_STATUS_SERVICE_REJECTED_STILL_TRYING: Integer readonly dispid 1757;
    property GSM_STATUS_QOS_NOT_AVAILABLE_STILL_TRYING: Integer readonly dispid 1758;
    property GSM_STATUS_RECIPIENT_ERROR_STILL_TRYING: Integer readonly dispid 1759;
    property GSM_STATUS_RPC_ERROR: Integer readonly dispid 1760;
    property GSM_STATUS_INCOMPATIBLE_DESTINATION: Integer readonly dispid 1761;
    property GSM_STATUS_CONNECTION_REJECTED: Integer readonly dispid 1762;
    property GSM_STATUS_NOT_OBTAINABLE: Integer readonly dispid 1763;
    property GSM_STATUS_QOS_NOT_AVAILABLE: Integer readonly dispid 1764;
    property GSM_STATUS_NO_INTERNETWORKING_AVAILABLE: Integer readonly dispid 1765;
    property GSM_STATUS_MESSAGE_EXPIRED: Integer readonly dispid 1766;
    property GSM_STATUS_MESSAGE_DELETED_BY_SENDER: Integer readonly dispid 1767;
    property GSM_STATUS_MESSAGE_DELETED_BY_SMSC: Integer readonly dispid 1768;
    property GSM_STATUS_DOES_NOT_EXIST: Integer readonly dispid 1769;
    property GSM_STORAGETYPE_SIM: Integer readonly dispid 1871;
    property GSM_STORAGETYPE_MEMORY: Integer readonly dispid 1872;
    property GSM_STORAGETYPE_COMBINED: Integer readonly dispid 1873;
    property GSM_STORAGETYPE_STATUS: Integer readonly dispid 1874;
    property GSM_STORAGETYPE_ALL: Integer readonly dispid 1875;
    property GSM_FO_REPLYPATH_EXISTS: Integer readonly dispid 1901;
    property GSM_FO_UDHI: Integer readonly dispid 1902;
    property GSM_FO_STATUS_REPORT: Integer readonly dispid 1903;
    property GSM_FO_VALIDITY_NONE: Integer readonly dispid 1904;
    property GSM_FO_VALIDITY_RELATIVE: Integer readonly dispid 1905;
    property GSM_FO_VALIDITY_ENHANCED: Integer readonly dispid 1906;
    property GSM_FO_VALIDITY_ABSOLUTE: Integer readonly dispid 1907;
    property GSM_FO_REJECT_DUPLICATES: Integer readonly dispid 1908;
    property GSM_FO_SUBMIT_SM: Integer readonly dispid 1909;
    property GSM_FO_DELIVER_SM: Integer readonly dispid 1911;
    property GSM_FO_STATUS_SM: Integer readonly dispid 1912;
    property DATACODING_DEFAULT: Integer readonly dispid 2021;
    property DATACODING_8BIT_DATA: Integer readonly dispid 2022;
    property DATACODING_UNICODE: Integer readonly dispid 2023;
    property GSM_DATACODING_ME_SPECIFIC: Integer readonly dispid 2024;
    property GSM_DATACODING_SIM_SPECIFIC: Integer readonly dispid 2025;
    property GSM_DATACODING_TE_SPECIFIC: Integer readonly dispid 2026;
    property DATACODING_FLASH: Integer readonly dispid 2027;
    property GSM_BAUDRATE_110: Integer readonly dispid 2131;
    property GSM_BAUDRATE_300: Integer readonly dispid 2132;
    property GSM_BAUDRATE_600: Integer readonly dispid 2133;
    property GSM_BAUDRATE_1200: Integer readonly dispid 2134;
    property GSM_BAUDRATE_2400: Integer readonly dispid 2135;
    property GSM_BAUDRATE_4800: Integer readonly dispid 2136;
    property GSM_BAUDRATE_9600: Integer readonly dispid 2137;
    property GSM_BAUDRATE_14400: Integer readonly dispid 2138;
    property GSM_BAUDRATE_19200: Integer readonly dispid 2139;
    property GSM_BAUDRATE_38400: Integer readonly dispid 2140;
    property GSM_BAUDRATE_56000: Integer readonly dispid 2141;
    property GSM_BAUDRATE_57600: Integer readonly dispid 2142;
    property GSM_BAUDRATE_64000: Integer readonly dispid 2143;
    property GSM_BAUDRATE_115200: Integer readonly dispid 2144;
    property GSM_BAUDRATE_128000: Integer readonly dispid 2145;
    property GSM_BAUDRATE_230400: Integer readonly dispid 2146;
    property GSM_BAUDRATE_256000: Integer readonly dispid 2147;
    property GSM_BAUDRATE_460800: Integer readonly dispid 2148;
    property GSM_BAUDRATE_921600: Integer readonly dispid 2149;
    property GSM_BAUDRATE_DEFAULT: Integer readonly dispid 2150;
    property GSM_MESSAGESTATE_RECEIVED_UNREAD: Integer readonly dispid 2261;
    property GSM_MESSAGESTATE_RECEIVED_READ: Integer readonly dispid 2262;
    property GSM_MESSAGESTATE_STORED_UNSENT: Integer readonly dispid 2263;
    property GSM_MESSAGESTATE_STORED_SENT: Integer readonly dispid 2264;
    property GSM_MESSAGESTATE_ALL: Integer readonly dispid 2265;
    property GSM_MESSAGEFORMAT_PDU: Integer readonly dispid 2371;
    property GSM_MESSAGEFORMAT_TEXT: Integer readonly dispid 2372;
    property GSM_MESSAGEFORMAT_AUTO: Integer readonly dispid 2373;
    property HTTP_PLACEHOLDER_USERTAG: WideString readonly dispid 2401;
    property HTTP_PLACEHOLDER_TOADDRESS: WideString readonly dispid 2402;
    property HTTP_PLACEHOLDER_FROMADDRESS: WideString readonly dispid 2403;
    property HTTP_PLACEHOLDER_BODY: WideString readonly dispid 2404;
    property HTTP_PLACEHOLDER_BODYASHEX: WideString readonly dispid 2405;
    property HTTP_PLACEHOLDER_BODYASBASE64: WideString readonly dispid 2406;
    property HTTP_PLACEHOLDER_DELIVERYREPORT: WideString readonly dispid 2407;
    property HTTP_PLACEHOLDER_TOADDRESSTON: WideString readonly dispid 2408;
    property HTTP_PLACEHOLDER_TOADDRESSNPI: WideString readonly dispid 2409;
    property HTTP_PLACEHOLDER_FROMADDRESSTON: WideString readonly dispid 2410;
    property HTTP_PLACEHOLDER_FROMADDRESSNPI: WideString readonly dispid 2411;
    property HTTP_PLACEHOLDER_PROTOCOLID: WideString readonly dispid 2412;
    property HTTP_PLACEHOLDER_UDHI: WideString readonly dispid 2413;
    property HTTP_PLACEHOLDER_DATACODING: WideString readonly dispid 2414;
    property HTTP_PLACEHOLDER_USERTAGSTRING: WideString readonly dispid 2415;
    property GSM_PREFIXSMSC_ENABLED: Integer readonly dispid 2501;
    property GSM_PREFIXSMSC_DISABLED: Integer readonly dispid 2502;
    property GSM_PREFIXSMSC_AUTO: Integer readonly dispid 2503;
    property GSM_TCPMODE_RAW: Integer readonly dispid 2521;
    property GSM_TCPMODE_TELNET: Integer readonly dispid 2522;
    property GSM_TCPMODE_TELNET_WITH_COMCONTROL: Integer readonly dispid 2523;
    property WAPPUSH_SIGNAL_NONE: Integer readonly dispid 2611;
    property WAPPUSH_SIGNAL_LOW: Integer readonly dispid 2612;
    property WAPPUSH_SIGNAL_MEDIUM: Integer readonly dispid 2613;
    property WAPPUSH_SIGNAL_HIGH: Integer readonly dispid 2614;
    property WAPPUSH_SIGNAL_DELETE: Integer readonly dispid 2615;
    property DIALUP_PROVIDERTYPE_UCP: Integer readonly dispid 2701;
    property DIALUP_PROVIDERTYPE_TAP_DEFAULT: Integer readonly dispid 2702;
    property DIALUP_PROVIDERTYPE_TAP_NOLF: Integer readonly dispid 2703;
    property DIALUP_PROVIDERTYPE_TAP_NOEOT: Integer readonly dispid 2704;
    property DIALUP_DIALMODE_TONE: Integer readonly dispid 2811;
    property DIALUP_DIALMODE_PULSE: Integer readonly dispid 2812;
    property DIALUP_DEVICESETTINGS_DEFAULT: Integer readonly dispid 2921;
    property DIALUP_DEVICESETTINGS_8N1: Integer readonly dispid 2922;
    property DIALUP_DEVICESETTINGS_7E1: Integer readonly dispid 2923;
    property LANGUAGE_LOCKINGSHIFT_BASIC: Integer readonly dispid 3001;
    property LANGUAGE_LOCKINGSHIFT_TURKISH: Integer readonly dispid 3002;
    property LANGUAGE_LOCKINGSHIFT_PORTUGUESE: Integer readonly dispid 3003;
    property LANGUAGE_LOCKINGSHIFT_SPANISH: Integer readonly dispid 3004;
    property LANGUAGE_LOCKINGSHIFT_BENGALI: Integer readonly dispid 3005;
    property LANGUAGE_LOCKINGSHIFT_GUJARATI: Integer readonly dispid 3006;
    property LANGUAGE_LOCKINGSHIFT_HINDI: Integer readonly dispid 3007;
    property LANGUAGE_LOCKINGSHIFT_KANNADA: Integer readonly dispid 3008;
    property LANGUAGE_LOCKINGSHIFT_MALAYALAM: Integer readonly dispid 3009;
    property LANGUAGE_LOCKINGSHIFT_ORIYA: Integer readonly dispid 3010;
    property LANGUAGE_LOCKINGSHIFT_PUNJABI: Integer readonly dispid 3011;
    property LANGUAGE_LOCKINGSHIFT_TAMIL: Integer readonly dispid 3012;
    property LANGUAGE_LOCKINGSHIFT_TELUGU: Integer readonly dispid 3013;
    property LANGUAGE_LOCKINGSHIFT_URDU: Integer readonly dispid 3014;
    property LANGUAGE_SINGLESHIFT_BASIC: Integer readonly dispid 3101;
    property LANGUAGE_SINGLESHIFT_TURKISH: Integer readonly dispid 3102;
    property LANGUAGE_SINGLESHIFT_SPANISH: Integer readonly dispid 3103;
    property LANGUAGE_SINGLESHIFT_PORTUGUESE: Integer readonly dispid 3104;
    property LANGUAGE_SINGLESHIFT_BENGALI: Integer readonly dispid 3105;
    property LANGUAGE_SINGLESHIFT_GUJARATI: Integer readonly dispid 3106;
    property LANGUAGE_SINGLESHIFT_HINDI: Integer readonly dispid 3107;
    property LANGUAGE_SINGLESHIFT_KANNADA: Integer readonly dispid 3108;
    property LANGUAGE_SINGLESHIFT_MALAYALAM: Integer readonly dispid 3109;
    property LANGUAGE_SINGLESHIFT_ORIYA: Integer readonly dispid 3110;
    property LANGUAGE_SINGLESHIFT_PUNJABI: Integer readonly dispid 3111;
    property LANGUAGE_SINGLESHIFT_TAMIL: Integer readonly dispid 3112;
    property LANGUAGE_SINGLESHIFT_TELUGU: Integer readonly dispid 3113;
    property LANGUAGE_SINGLESHIFT_URDU: Integer readonly dispid 3114;
    function SmppBindToString(lVal: Integer): WideString; dispid 10001;
    function SmppVersionToString(lVal: Integer): WideString; dispid 10002;
    function TonToString(lVal: Integer): WideString; dispid 10003;
    function NpiToString(lVal: Integer): WideString; dispid 10004;
    function MultipartToString(lVal: Integer): WideString; dispid 10005;
    function BodyformatToString(lVal: Integer): WideString; dispid 10006;
    function SmppEsm2SmscToString(lVal: Integer): WideString; dispid 10007;
    function SmppEsm2EsmeToString(lVal: Integer): WideString; dispid 10008;
    function SmppUseGsmEncodingToString(lVal: Integer): WideString; dispid 10009;
    function SmppDataCodingToString(lVal: Integer): WideString; dispid 10010;
    function SmppPriorityFlagToString(lVal: Integer): WideString; dispid 10011;
    function SmppMessageStateToString(lVal: Integer): WideString; dispid 10012;
    function SmppSessionStateToString(lVal: Integer): WideString; dispid 10013;
    function SmppTlvToString(lVal: Integer): WideString; dispid 10014;
    function SmppMultipartModeToString(lVal: Integer): WideString; dispid 10015;
    function SmppSubmitModeToString(lVal: Integer): WideString; dispid 10016;
    function SmppEsmeToString(lVal: Integer): WideString; dispid 10017;
    function GsmStatusToString(lVal: Integer): WideString; dispid 10018;
    function GsmStorageTypeToString(lVal: Integer): WideString; dispid 10019;
    function GsmFoToString(lVal: Integer): WideString; dispid 10020;
    function GsmDataCodingToString(lVal: Integer): WideString; dispid 10021;
    function GsmBaudrateToString(lVal: Integer): WideString; dispid 10022;
    function GsmMessageStateToString(lVal: Integer): WideString; dispid 10023;
    function GsmMessageFormatToString(lVal: Integer): WideString; dispid 10024;
    function GsmPrefixSmscToString(lVal: Integer): WideString; dispid 10025;
    function WapPushSignalToString(lVal: Integer): WideString; dispid 10026;
    function DialupProviderTypeToString(lVal: Integer): WideString; dispid 10027;
    function DialupDialModeToString(lVal: Integer): WideString; dispid 10028;
    function DialupDeviceSettingsToString(lVal: Integer): WideString; dispid 10029;
    function GsmTcpModeToString(lVal: Integer): WideString; dispid 10030;
    function LanguageLockingShiftToString(lVal: Integer): WideString; dispid 10031;
    function LanguageSingleShiftToString(lVal: Integer): WideString; dispid 10032;
  end;

// *********************************************************************//
// Interface: IMessage
// Flags:     (4544) Dual NonExtensible OleAutomation Dispatchable
// GUID:      {DFD486FC-45B4-49AB-AD5A-98256AE057FC}
// *********************************************************************//
  IMessage = interface(IDispatch)
    ['{DFD486FC-45B4-49AB-AD5A-98256AE057FC}']
    procedure Clear; safecall;
    function Get_UserTag: Integer; safecall;
    procedure Set_UserTag(Val: Integer); safecall;
    function Get_ToAddress: WideString; safecall;
    procedure Set_ToAddress(const Val: WideString); safecall;
    function Get_FromAddress: WideString; safecall;
    procedure Set_FromAddress(const Val: WideString); safecall;
    function Get_Body: WideString; safecall;
    procedure Set_Body(const Val: WideString); safecall;
    function Get_RequestDeliveryReport: WordBool; safecall;
    procedure Set_RequestDeliveryReport(Val: WordBool); safecall;
    function Get_ToAddressTON: Integer; safecall;
    procedure Set_ToAddressTON(Val: Integer); safecall;
    function Get_ToAddressNPI: Integer; safecall;
    procedure Set_ToAddressNPI(Val: Integer); safecall;
    function Get_FromAddressTON: Integer; safecall;
    procedure Set_FromAddressTON(Val: Integer); safecall;
    function Get_FromAddressNPI: Integer; safecall;
    procedure Set_FromAddressNPI(Val: Integer); safecall;
    function Get_ProtocolId: Integer; safecall;
    procedure Set_ProtocolId(Val: Integer); safecall;
    function Get_ValidityPeriod: Integer; safecall;
    procedure Set_ValidityPeriod(Val: Integer); safecall;
    function Get_Reference: WideString; safecall;
    procedure Set_Reference(const Val: WideString); safecall;
    function Get_DataCoding: Integer; safecall;
    procedure Set_DataCoding(Val: Integer); safecall;
    function Get_BodyFormat: Integer; safecall;
    procedure Set_BodyFormat(Val: Integer); safecall;
    function Get_TotalParts: Integer; safecall;
    function Get_PartNumber: Integer; safecall;
    function Get_ReceiveTime: WideString; safecall;
    function Get_ReceiveTimeInSeconds: Integer; safecall;
    function Get_HasUdh: WordBool; safecall;
    procedure Set_HasUdh(Val: WordBool); safecall;
    function Get_Incomplete: WordBool; safecall;
    function Get_MultipartRef: Integer; safecall;
    procedure Set_LanguageLockingShift(Val: Integer); safecall;
    function Get_LanguageLockingShift: Integer; safecall;
    procedure Set_LanguageSingleShift(Val: Integer); safecall;
    function Get_LanguageSingleShift: Integer; safecall;
    function Get_GsmFirstOctet: Integer; safecall;
    procedure Set_GsmFirstOctet(Val: Integer); safecall;
    function Get_GsmSmscAddress: WideString; safecall;
    function Get_GsmSmscAddressTON: Integer; safecall;
    function Get_GsmSmscAddressNPI: Integer; safecall;
    function Get_GsmMemoryIndex: WideString; safecall;
    procedure Set_GsmMemoryIndex(const Val: WideString); safecall;
    function Get_GsmMemoryLocation: WideString; safecall;
    procedure Set_GsmMemoryLocation(const Val: WideString); safecall;
    function Get_SmppPriority: Integer; safecall;
    procedure Set_SmppPriority(Val: Integer); safecall;
    function Get_SmppServiceType: WideString; safecall;
    procedure Set_SmppServiceType(const Val: WideString); safecall;
    function Get_SmppEsmClass: Integer; safecall;
    procedure Set_SmppEsmClass(Val: Integer); safecall;
    function Get_SmppIsDeliveryReport: WordBool; safecall;
    procedure Set_SmppIsDeliveryReport(Val: WordBool); safecall;
    function Get_SmppStatus: Integer; safecall;
    procedure Set_SmppStatus(Val: Integer); safecall;
    function Get_SmppError: Integer; safecall;
    procedure Set_SmppError(Val: Integer); safecall;
    function Get_SmppCommandStatus: Integer; safecall;
    procedure Set_SmppCommandStatus(Val: Integer); safecall;
    procedure Set_SmppSequenceNumber(Val: Integer); safecall;
    function Get_SmppSequenceNumber: Integer; safecall;
    function Get_SmppServerSubmitDate: WideString; safecall;
    function Get_SmppServerFinalDate: WideString; safecall;
    function Get_UserTagString: WideString; safecall;
    procedure Set_UserTagString(const Val: WideString); safecall;
    procedure SmppAddTlv(const Tlv: ITlv); safecall;
    function SmppGetFirstTlv: ITlv; safecall;
    function SmppGetNextTlv: ITlv; safecall;
    function SmppGetTlv(lTag: Integer): ITlv; safecall;
    procedure SmppDeleteTlv(lTag: Integer); safecall;
    function Get_LastError: Integer; safecall;
    function GetErrorDescription(Error: Integer): WideString; safecall;
    function ToJSon: WideString; safecall;
    procedure FromJSon(const Val: WideString); safecall;
    property UserTag: Integer read Get_UserTag write Set_UserTag;
    property ToAddress: WideString read Get_ToAddress write Set_ToAddress;
    property FromAddress: WideString read Get_FromAddress write Set_FromAddress;
    property Body: WideString read Get_Body write Set_Body;
    property RequestDeliveryReport: WordBool read Get_RequestDeliveryReport write Set_RequestDeliveryReport;
    property ToAddressTON: Integer read Get_ToAddressTON write Set_ToAddressTON;
    property ToAddressNPI: Integer read Get_ToAddressNPI write Set_ToAddressNPI;
    property FromAddressTON: Integer read Get_FromAddressTON write Set_FromAddressTON;
    property FromAddressNPI: Integer read Get_FromAddressNPI write Set_FromAddressNPI;
    property ProtocolId: Integer read Get_ProtocolId write Set_ProtocolId;
    property ValidityPeriod: Integer read Get_ValidityPeriod write Set_ValidityPeriod;
    property Reference: WideString read Get_Reference write Set_Reference;
    property DataCoding: Integer read Get_DataCoding write Set_DataCoding;
    property BodyFormat: Integer read Get_BodyFormat write Set_BodyFormat;
    property TotalParts: Integer read Get_TotalParts;
    property PartNumber: Integer read Get_PartNumber;
    property ReceiveTime: WideString read Get_ReceiveTime;
    property ReceiveTimeInSeconds: Integer read Get_ReceiveTimeInSeconds;
    property HasUdh: WordBool read Get_HasUdh write Set_HasUdh;
    property Incomplete: WordBool read Get_Incomplete;
    property MultipartRef: Integer read Get_MultipartRef;
    property LanguageLockingShift: Integer read Get_LanguageLockingShift write Set_LanguageLockingShift;
    property LanguageSingleShift: Integer read Get_LanguageSingleShift write Set_LanguageSingleShift;
    property GsmFirstOctet: Integer read Get_GsmFirstOctet write Set_GsmFirstOctet;
    property GsmSmscAddress: WideString read Get_GsmSmscAddress;
    property GsmSmscAddressTON: Integer read Get_GsmSmscAddressTON;
    property GsmSmscAddressNPI: Integer read Get_GsmSmscAddressNPI;
    property GsmMemoryIndex: WideString read Get_GsmMemoryIndex write Set_GsmMemoryIndex;
    property GsmMemoryLocation: WideString read Get_GsmMemoryLocation write Set_GsmMemoryLocation;
    property SmppPriority: Integer read Get_SmppPriority write Set_SmppPriority;
    property SmppServiceType: WideString read Get_SmppServiceType write Set_SmppServiceType;
    property SmppEsmClass: Integer read Get_SmppEsmClass write Set_SmppEsmClass;
    property SmppIsDeliveryReport: WordBool read Get_SmppIsDeliveryReport write Set_SmppIsDeliveryReport;
    property SmppStatus: Integer read Get_SmppStatus write Set_SmppStatus;
    property SmppError: Integer read Get_SmppError write Set_SmppError;
    property SmppCommandStatus: Integer read Get_SmppCommandStatus write Set_SmppCommandStatus;
    property SmppSequenceNumber: Integer read Get_SmppSequenceNumber write Set_SmppSequenceNumber;
    property SmppServerSubmitDate: WideString read Get_SmppServerSubmitDate;
    property SmppServerFinalDate: WideString read Get_SmppServerFinalDate;
    property UserTagString: WideString read Get_UserTagString write Set_UserTagString;
    property LastError: Integer read Get_LastError;
  end;

// *********************************************************************//
// DispIntf:  IMessageDisp
// Flags:     (4544) Dual NonExtensible OleAutomation Dispatchable
// GUID:      {DFD486FC-45B4-49AB-AD5A-98256AE057FC}
// *********************************************************************//
  IMessageDisp = dispinterface
    ['{DFD486FC-45B4-49AB-AD5A-98256AE057FC}']
    procedure Clear; dispid 1;
    property UserTag: Integer dispid 2;
    property ToAddress: WideString dispid 3;
    property FromAddress: WideString dispid 4;
    property Body: WideString dispid 5;
    property RequestDeliveryReport: WordBool dispid 7;
    property ToAddressTON: Integer dispid 8;
    property ToAddressNPI: Integer dispid 9;
    property FromAddressTON: Integer dispid 10;
    property FromAddressNPI: Integer dispid 11;
    property ProtocolId: Integer dispid 12;
    property ValidityPeriod: Integer dispid 13;
    property Reference: WideString dispid 14;
    property DataCoding: Integer dispid 15;
    property BodyFormat: Integer dispid 16;
    property TotalParts: Integer readonly dispid 17;
    property PartNumber: Integer readonly dispid 18;
    property ReceiveTime: WideString readonly dispid 19;
    property ReceiveTimeInSeconds: Integer readonly dispid 20;
    property HasUdh: WordBool dispid 21;
    property Incomplete: WordBool readonly dispid 22;
    property MultipartRef: Integer readonly dispid 23;
    property LanguageLockingShift: Integer dispid 25;
    property LanguageSingleShift: Integer dispid 26;
    property GsmFirstOctet: Integer dispid 51;
    property GsmSmscAddress: WideString readonly dispid 52;
    property GsmSmscAddressTON: Integer readonly dispid 53;
    property GsmSmscAddressNPI: Integer readonly dispid 54;
    property GsmMemoryIndex: WideString dispid 55;
    property GsmMemoryLocation: WideString dispid 56;
    property SmppPriority: Integer dispid 71;
    property SmppServiceType: WideString dispid 72;
    property SmppEsmClass: Integer dispid 73;
    property SmppIsDeliveryReport: WordBool dispid 74;
    property SmppStatus: Integer dispid 75;
    property SmppError: Integer dispid 76;
    property SmppCommandStatus: Integer dispid 77;
    property SmppSequenceNumber: Integer dispid 78;
    property SmppServerSubmitDate: WideString readonly dispid 79;
    property SmppServerFinalDate: WideString readonly dispid 80;
    property UserTagString: WideString dispid 81;
    procedure SmppAddTlv(const Tlv: ITlv); dispid 91;
    function SmppGetFirstTlv: ITlv; dispid 92;
    function SmppGetNextTlv: ITlv; dispid 93;
    function SmppGetTlv(lTag: Integer): ITlv; dispid 94;
    procedure SmppDeleteTlv(lTag: Integer); dispid 95;
    property LastError: Integer readonly dispid 101;
    function GetErrorDescription(Error: Integer): WideString; dispid 102;
    function ToJSon: WideString; dispid 110;
    procedure FromJSon(const Val: WideString); dispid 111;
  end;

// *********************************************************************//
// Interface: ITlv
// Flags:     (4544) Dual NonExtensible OleAutomation Dispatchable
// GUID:      {4687CEE3-3966-46A2-AEE3-5A747F455B84}
// *********************************************************************//
  ITlv = interface(IDispatch)
    ['{4687CEE3-3966-46A2-AEE3-5A747F455B84}']
    procedure Clear; safecall;
    function Get_Tag: Integer; safecall;
    procedure Set_Tag(Val: Integer); safecall;
    function Get_ValueAsString: WideString; safecall;
    procedure Set_ValueAsString(const Val: WideString); safecall;
    function Get_ValueAsHexString: WideString; safecall;
    procedure Set_ValueAsHexString(const Val: WideString); safecall;
    function Get_ValueAsInt32: Integer; safecall;
    procedure Set_ValueAsInt32(Val: Integer); safecall;
    function Get_ValueAsInt16: Integer; safecall;
    procedure Set_ValueAsInt16(Val: Integer); safecall;
    function Get_ValueAsInt8: Integer; safecall;
    procedure Set_ValueAsInt8(Val: Integer); safecall;
    function Get_Length: Integer; safecall;
    property Tag: Integer read Get_Tag write Set_Tag;
    property ValueAsString: WideString read Get_ValueAsString write Set_ValueAsString;
    property ValueAsHexString: WideString read Get_ValueAsHexString write Set_ValueAsHexString;
    property ValueAsInt32: Integer read Get_ValueAsInt32 write Set_ValueAsInt32;
    property ValueAsInt16: Integer read Get_ValueAsInt16 write Set_ValueAsInt16;
    property ValueAsInt8: Integer read Get_ValueAsInt8 write Set_ValueAsInt8;
    property Length: Integer read Get_Length;
  end;

// *********************************************************************//
// DispIntf:  ITlvDisp
// Flags:     (4544) Dual NonExtensible OleAutomation Dispatchable
// GUID:      {4687CEE3-3966-46A2-AEE3-5A747F455B84}
// *********************************************************************//
  ITlvDisp = dispinterface
    ['{4687CEE3-3966-46A2-AEE3-5A747F455B84}']
    procedure Clear; dispid 1;
    property Tag: Integer dispid 2;
    property ValueAsString: WideString dispid 3;
    property ValueAsHexString: WideString dispid 4;
    property ValueAsInt32: Integer dispid 5;
    property ValueAsInt16: Integer dispid 6;
    property ValueAsInt8: Integer dispid 7;
    property Length: Integer readonly dispid 8;
  end;

// *********************************************************************//
// Interface: IGsmDeliveryReport
// Flags:     (4544) Dual NonExtensible OleAutomation Dispatchable
// GUID:      {6962C3D8-88FE-4660-A4EC-901A244A57D2}
// *********************************************************************//
  IGsmDeliveryReport = interface(IDispatch)
    ['{6962C3D8-88FE-4660-A4EC-901A244A57D2}']
    procedure Clear; safecall;
    function Get_Reference: WideString; safecall;
    function Get_UserTag: Integer; safecall;
    procedure Set_UserTag(Val: Integer); safecall;
    function Get_SmscAddress: WideString; safecall;
    function Get_SmscTime: WideString; safecall;
    function Get_SmscTimeInSeconds: Integer; safecall;
    function Get_DischargeTime: WideString; safecall;
    function Get_DischargeTimeInSeconds: Integer; safecall;
    function Get_MemoryIndex: WideString; safecall;
    function Get_FirstOctet: Integer; safecall;
    function Get_SmscTON: Integer; safecall;
    function Get_SmscNPI: Integer; safecall;
    function Get_TON: Integer; safecall;
    function Get_NPI: Integer; safecall;
    function Get_Status: Integer; safecall;
    function Get_FromAddress: WideString; safecall;
    function Get_MemoryLocation: WideString; safecall;
    function Get_UserTagString: WideString; safecall;
    procedure Set_UserTagString(const Val: WideString); safecall;
    property Reference: WideString read Get_Reference;
    property UserTag: Integer read Get_UserTag write Set_UserTag;
    property SmscAddress: WideString read Get_SmscAddress;
    property SmscTime: WideString read Get_SmscTime;
    property SmscTimeInSeconds: Integer read Get_SmscTimeInSeconds;
    property DischargeTime: WideString read Get_DischargeTime;
    property DischargeTimeInSeconds: Integer read Get_DischargeTimeInSeconds;
    property MemoryIndex: WideString read Get_MemoryIndex;
    property FirstOctet: Integer read Get_FirstOctet;
    property SmscTON: Integer read Get_SmscTON;
    property SmscNPI: Integer read Get_SmscNPI;
    property TON: Integer read Get_TON;
    property NPI: Integer read Get_NPI;
    property Status: Integer read Get_Status;
    property FromAddress: WideString read Get_FromAddress;
    property MemoryLocation: WideString read Get_MemoryLocation;
    property UserTagString: WideString read Get_UserTagString write Set_UserTagString;
  end;

// *********************************************************************//
// DispIntf:  IGsmDeliveryReportDisp
// Flags:     (4544) Dual NonExtensible OleAutomation Dispatchable
// GUID:      {6962C3D8-88FE-4660-A4EC-901A244A57D2}
// *********************************************************************//
  IGsmDeliveryReportDisp = dispinterface
    ['{6962C3D8-88FE-4660-A4EC-901A244A57D2}']
    procedure Clear; dispid 1;
    property Reference: WideString readonly dispid 2;
    property UserTag: Integer dispid 3;
    property SmscAddress: WideString readonly dispid 4;
    property SmscTime: WideString readonly dispid 5;
    property SmscTimeInSeconds: Integer readonly dispid 6;
    property DischargeTime: WideString readonly dispid 7;
    property DischargeTimeInSeconds: Integer readonly dispid 8;
    property MemoryIndex: WideString readonly dispid 9;
    property FirstOctet: Integer readonly dispid 10;
    property SmscTON: Integer readonly dispid 11;
    property SmscNPI: Integer readonly dispid 12;
    property TON: Integer readonly dispid 13;
    property NPI: Integer readonly dispid 14;
    property Status: Integer readonly dispid 15;
    property FromAddress: WideString readonly dispid 16;
    property MemoryLocation: WideString readonly dispid 17;
    property UserTagString: WideString dispid 20;
  end;

// *********************************************************************//
// Interface: IDialup
// Flags:     (4544) Dual NonExtensible OleAutomation Dispatchable
// GUID:      {3E9851DF-D82F-4806-8716-769C015C23F2}
// *********************************************************************//
  IDialup = interface(IDispatch)
    ['{3E9851DF-D82F-4806-8716-769C015C23F2}']
    function Get_Version: WideString; safecall;
    function Get_Build: WideString; safecall;
    function Get_Module: WideString; safecall;
    function Get_LicenseStatus: WideString; safecall;
    function Get_LicenseKey: WideString; safecall;
    procedure Set_LicenseKey(const LicenseKey: WideString); safecall;
    procedure SaveLicenseKey; safecall;
    function Get_LogFile: WideString; safecall;
    procedure Set_LogFile(const LogFile: WideString); safecall;
    procedure Sleep(Ms: Integer); safecall;
    procedure Clear; safecall;
    function Get_LastError: Integer; safecall;
    function GetErrorDescription(ErrorCode: Integer): WideString; safecall;
    function Get_Device: WideString; safecall;
    procedure Set_Device(const Val: WideString); safecall;
    function Get_DeviceSpeed: Integer; safecall;
    procedure Set_DeviceSpeed(Val: Integer); safecall;
    function Get_DeviceSettings: Integer; safecall;
    procedure Set_DeviceSettings(Val: Integer); safecall;
    function Get_DeviceInitString: WideString; safecall;
    procedure Set_DeviceInitString(const Val: WideString); safecall;
    function Get_DialMode: Integer; safecall;
    procedure Set_DialMode(Val: Integer); safecall;
    function Get_ProviderDialString: WideString; safecall;
    procedure Set_ProviderDialString(const Val: WideString); safecall;
    function Get_ProviderPassword: WideString; safecall;
    procedure Set_ProviderPassword(const Val: WideString); safecall;
    function Get_ProviderType: Integer; safecall;
    procedure Set_ProviderType(Val: Integer); safecall;
    function Get_ProviderResponse: WideString; safecall;
    function Get_AdvancedSettings: WideString; safecall;
    procedure Set_AdvancedSettings(const Val: WideString); safecall;
    function GetDeviceCount: Integer; safecall;
    function GetDevice(lIndex: Integer): WideString; safecall;
    procedure Send(const Message: IMessage); safecall;
    procedure ProviderLoadConfig(const FileName: WideString); safecall;
    procedure ProviderSaveConfig(const FileName: WideString); safecall;
    property Version: WideString read Get_Version;
    property Build: WideString read Get_Build;
    property Module: WideString read Get_Module;
    property LicenseStatus: WideString read Get_LicenseStatus;
    property LicenseKey: WideString read Get_LicenseKey write Set_LicenseKey;
    property LogFile: WideString read Get_LogFile write Set_LogFile;
    property LastError: Integer read Get_LastError;
    property Device: WideString read Get_Device write Set_Device;
    property DeviceSpeed: Integer read Get_DeviceSpeed write Set_DeviceSpeed;
    property DeviceSettings: Integer read Get_DeviceSettings write Set_DeviceSettings;
    property DeviceInitString: WideString read Get_DeviceInitString write Set_DeviceInitString;
    property DialMode: Integer read Get_DialMode write Set_DialMode;
    property ProviderDialString: WideString read Get_ProviderDialString write Set_ProviderDialString;
    property ProviderPassword: WideString read Get_ProviderPassword write Set_ProviderPassword;
    property ProviderType: Integer read Get_ProviderType write Set_ProviderType;
    property ProviderResponse: WideString read Get_ProviderResponse;
    property AdvancedSettings: WideString read Get_AdvancedSettings write Set_AdvancedSettings;
  end;

// *********************************************************************//
// DispIntf:  IDialupDisp
// Flags:     (4544) Dual NonExtensible OleAutomation Dispatchable
// GUID:      {3E9851DF-D82F-4806-8716-769C015C23F2}
// *********************************************************************//
  IDialupDisp = dispinterface
    ['{3E9851DF-D82F-4806-8716-769C015C23F2}']
    property Version: WideString readonly dispid 1;
    property Build: WideString readonly dispid 2;
    property Module: WideString readonly dispid 3;
    property LicenseStatus: WideString readonly dispid 100;
    property LicenseKey: WideString dispid 101;
    procedure SaveLicenseKey; dispid 102;
    property LogFile: WideString dispid 201;
    procedure Sleep(Ms: Integer); dispid 300;
    procedure Clear; dispid 301;
    property LastError: Integer readonly dispid 400;
    function GetErrorDescription(ErrorCode: Integer): WideString; dispid 401;
    property Device: WideString dispid 501;
    property DeviceSpeed: Integer dispid 502;
    property DeviceSettings: Integer dispid 503;
    property DeviceInitString: WideString dispid 504;
    property DialMode: Integer dispid 514;
    property ProviderDialString: WideString dispid 515;
    property ProviderPassword: WideString dispid 516;
    property ProviderType: Integer dispid 517;
    property ProviderResponse: WideString readonly dispid 520;
    property AdvancedSettings: WideString dispid 527;
    function GetDeviceCount: Integer; dispid 601;
    function GetDevice(lIndex: Integer): WideString; dispid 602;
    procedure Send(const Message: IMessage); dispid 603;
    procedure ProviderLoadConfig(const FileName: WideString); dispid 706;
    procedure ProviderSaveConfig(const FileName: WideString); dispid 707;
  end;

// *********************************************************************//
// Interface: IAndroid
// Flags:     (4544) Dual NonExtensible OleAutomation Dispatchable
// GUID:      {6AEF9B37-E65E-4FEB-971A-0659DE7B931E}
// *********************************************************************//
  IAndroid = interface(IDispatch)
    ['{6AEF9B37-E65E-4FEB-971A-0659DE7B931E}']
    function Get_Version: WideString; safecall;
    function Get_Build: WideString; safecall;
    function Get_Module: WideString; safecall;
    function Get_LicenseStatus: WideString; safecall;
    function Get_LicenseKey: WideString; safecall;
    procedure Set_LicenseKey(const LicenseKey: WideString); safecall;
    procedure SaveLicenseKey; safecall;
    function Get_LogFile: WideString; safecall;
    procedure Set_LogFile(const LogFile: WideString); safecall;
    function Get_ActivityFile: WideString; safecall;
    procedure Set_ActivityFile(const ActivityFile: WideString); safecall;
    procedure Sleep(Ms: Integer); safecall;
    procedure Clear; safecall;
    function Get_LastError: Integer; safecall;
    function GetErrorDescription(ErrorCode: Integer): WideString; safecall;
    procedure Connect(const Host: WideString; Port: Integer); safecall;
    procedure Disconnect; safecall;
    procedure SendSms(const Message: IMessage); safecall;
    function ReceiveSms: IMessage; safecall;
    function Get_DeviceInfo: WideString; safecall;
    function Get_AppVersion: WideString; safecall;
    function Get_IsConnected: WordBool; safecall;
    function Get_SendSmsTimeoutMs: Integer; safecall;
    function Get_ConnectTimeoutMs: Integer; safecall;
    function Get_CommandTimeoutMs: Integer; safecall;
    procedure Set_SendSmsTimeoutMs(Value: Integer); safecall;
    procedure Set_ConnectTimeoutMs(Value: Integer); safecall;
    procedure Set_CommandTimeoutMs(Value: Integer); safecall;
    property Version: WideString read Get_Version;
    property Build: WideString read Get_Build;
    property Module: WideString read Get_Module;
    property LicenseStatus: WideString read Get_LicenseStatus;
    property LicenseKey: WideString read Get_LicenseKey write Set_LicenseKey;
    property LogFile: WideString read Get_LogFile write Set_LogFile;
    property ActivityFile: WideString read Get_ActivityFile write Set_ActivityFile;
    property LastError: Integer read Get_LastError;
    property DeviceInfo: WideString read Get_DeviceInfo;
    property AppVersion: WideString read Get_AppVersion;
    property IsConnected: WordBool read Get_IsConnected;
    property SendSmsTimeoutMs: Integer read Get_SendSmsTimeoutMs write Set_SendSmsTimeoutMs;
    property ConnectTimeoutMs: Integer read Get_ConnectTimeoutMs write Set_ConnectTimeoutMs;
    property CommandTimeoutMs: Integer read Get_CommandTimeoutMs write Set_CommandTimeoutMs;
  end;

// *********************************************************************//
// DispIntf:  IAndroidDisp
// Flags:     (4544) Dual NonExtensible OleAutomation Dispatchable
// GUID:      {6AEF9B37-E65E-4FEB-971A-0659DE7B931E}
// *********************************************************************//
  IAndroidDisp = dispinterface
    ['{6AEF9B37-E65E-4FEB-971A-0659DE7B931E}']
    property Version: WideString readonly dispid 1;
    property Build: WideString readonly dispid 2;
    property Module: WideString readonly dispid 3;
    property LicenseStatus: WideString readonly dispid 100;
    property LicenseKey: WideString dispid 101;
    procedure SaveLicenseKey; dispid 102;
    property LogFile: WideString dispid 201;
    property ActivityFile: WideString dispid 202;
    procedure Sleep(Ms: Integer); dispid 300;
    procedure Clear; dispid 301;
    property LastError: Integer readonly dispid 400;
    function GetErrorDescription(ErrorCode: Integer): WideString; dispid 401;
    procedure Connect(const Host: WideString; Port: Integer); dispid 501;
    procedure Disconnect; dispid 502;
    procedure SendSms(const Message: IMessage); dispid 510;
    function ReceiveSms: IMessage; dispid 520;
    property DeviceInfo: WideString readonly dispid 601;
    property AppVersion: WideString readonly dispid 602;
    property IsConnected: WordBool readonly dispid 605;
    property SendSmsTimeoutMs: Integer dispid 610;
    property ConnectTimeoutMs: Integer dispid 611;
    property CommandTimeoutMs: Integer dispid 612;
  end;

// *********************************************************************//
// Interface: IGsm
// Flags:     (4544) Dual NonExtensible OleAutomation Dispatchable
// GUID:      {B25B188D-42A8-45EF-887F-653CBC9E234B}
// *********************************************************************//
  IGsm = interface(IDispatch)
    ['{B25B188D-42A8-45EF-887F-653CBC9E234B}']
    function Get_Version: WideString; safecall;
    function Get_Build: WideString; safecall;
    function Get_Module: WideString; safecall;
    function Get_LicenseStatus: WideString; safecall;
    function Get_LicenseKey: WideString; safecall;
    procedure Set_LicenseKey(const LicenseKey: WideString); safecall;
    procedure SaveLicenseKey; safecall;
    function Get_LogFile: WideString; safecall;
    procedure Set_LogFile(const LogFile: WideString); safecall;
    function Get_ActivityFile: WideString; safecall;
    procedure Set_ActivityFile(const ActivityFile: WideString); safecall;
    procedure Sleep(Ms: Integer); safecall;
    procedure Clear; safecall;
    function Get_LastError: Integer; safecall;
    function GetErrorDescription(ErrorCode: Integer): WideString; safecall;
    function FindFirstPort: WideString; safecall;
    function FindNextPort: WideString; safecall;
    function FindFirstDevice: WideString; safecall;
    function FindNextDevice: WideString; safecall;
    procedure Open(const strName: WideString; const strPin: WideString; lBaudrate: Integer); safecall;
    procedure Close; safecall;
    procedure SendCommand(const strCommand: WideString); safecall;
    function ReadResponse(lTimeout: Integer): WideString; safecall;
    procedure ResetCom; safecall;
    function Get_Manufacturer: WideString; safecall;
    function Get_Model: WideString; safecall;
    function Get_Revision: WideString; safecall;
    function Get_SerialNr: WideString; safecall;
    function Get_SendEnabled: WordBool; safecall;
    function Get_ReceiveEnabled: WordBool; safecall;
    function Get_ReportEnabled: WordBool; safecall;
    function SendSms(const Val: IMessage; lMultipartFlag: Integer; lTimeout: Integer): WideString; safecall;
    procedure Receive(lType: Integer; bDelete: WordBool; lStorageType: Integer; lTimeout: Integer); safecall;
    function GetFirstSms: IMessage; safecall;
    function GetNextSms: IMessage; safecall;
    function GetFirstReport: IGsmDeliveryReport; safecall;
    function GetNextReport: IGsmDeliveryReport; safecall;
    procedure DeleteSms(const pSms: IMessage); safecall;
    procedure DeleteReport(const pReport: IGsmDeliveryReport); safecall;
    function Get_ExtractApplicationPort: WordBool; safecall;
    procedure Set_ExtractApplicationPort(Val: WordBool); safecall;
    function Get_AssembleMultipart: WordBool; safecall;
    procedure Set_AssembleMultipart(Val: WordBool); safecall;
    function Get_MessageMode: Integer; safecall;
    procedure Set_MessageMode(Val: Integer); safecall;
    function Get_PrefixSmscMode: Integer; safecall;
    procedure Set_PrefixSmscMode(Val: Integer); safecall;
    function Get_NetworkTimeout: Integer; safecall;
    procedure Set_NetworkTimeout(Val: Integer); safecall;
    function Get_InterCommandDelay: Integer; safecall;
    procedure Set_InterCommandDelay(Val: Integer); safecall;
    function Get_InterCharacterDelay: Integer; safecall;
    procedure Set_InterCharacterDelay(Val: Integer); safecall;
    function Get_WaitForNetwork: WordBool; safecall;
    procedure Set_WaitForNetwork(Val: WordBool); safecall;
    function Get_PreferredSmsc: WideString; safecall;
    procedure Set_PreferredSmsc(const Val: WideString); safecall;
    function Get_CommandTimeout: Integer; safecall;
    procedure Set_CommandTimeout(Val: Integer); safecall;
    function Get_KeepUnusedUdh: WordBool; safecall;
    procedure Set_KeepUnusedUdh(Val: WordBool); safecall;
    function Get_OverrideFeatureCheck: WordBool; safecall;
    procedure Set_OverrideFeatureCheck(Val: WordBool); safecall;
    function Get_ExtractLanguageShift: WordBool; safecall;
    procedure Set_ExtractLanguageShift(Val: WordBool); safecall;
    function Get_TcpMode: Integer; safecall;
    procedure Set_TcpMode(Val: Integer); safecall;
    function Get_IsOpen: WordBool; safecall;
    property Version: WideString read Get_Version;
    property Build: WideString read Get_Build;
    property Module: WideString read Get_Module;
    property LicenseStatus: WideString read Get_LicenseStatus;
    property LicenseKey: WideString read Get_LicenseKey write Set_LicenseKey;
    property LogFile: WideString read Get_LogFile write Set_LogFile;
    property ActivityFile: WideString read Get_ActivityFile write Set_ActivityFile;
    property LastError: Integer read Get_LastError;
    property Manufacturer: WideString read Get_Manufacturer;
    property Model: WideString read Get_Model;
    property Revision: WideString read Get_Revision;
    property SerialNr: WideString read Get_SerialNr;
    property SendEnabled: WordBool read Get_SendEnabled;
    property ReceiveEnabled: WordBool read Get_ReceiveEnabled;
    property ReportEnabled: WordBool read Get_ReportEnabled;
    property ExtractApplicationPort: WordBool read Get_ExtractApplicationPort write Set_ExtractApplicationPort;
    property AssembleMultipart: WordBool read Get_AssembleMultipart write Set_AssembleMultipart;
    property MessageMode: Integer read Get_MessageMode write Set_MessageMode;
    property PrefixSmscMode: Integer read Get_PrefixSmscMode write Set_PrefixSmscMode;
    property NetworkTimeout: Integer read Get_NetworkTimeout write Set_NetworkTimeout;
    property InterCommandDelay: Integer read Get_InterCommandDelay write Set_InterCommandDelay;
    property InterCharacterDelay: Integer read Get_InterCharacterDelay write Set_InterCharacterDelay;
    property WaitForNetwork: WordBool read Get_WaitForNetwork write Set_WaitForNetwork;
    property PreferredSmsc: WideString read Get_PreferredSmsc write Set_PreferredSmsc;
    property CommandTimeout: Integer read Get_CommandTimeout write Set_CommandTimeout;
    property KeepUnusedUdh: WordBool read Get_KeepUnusedUdh write Set_KeepUnusedUdh;
    property OverrideFeatureCheck: WordBool read Get_OverrideFeatureCheck write Set_OverrideFeatureCheck;
    property ExtractLanguageShift: WordBool read Get_ExtractLanguageShift write Set_ExtractLanguageShift;
    property TcpMode: Integer read Get_TcpMode write Set_TcpMode;
    property IsOpen: WordBool read Get_IsOpen;
  end;

// *********************************************************************//
// DispIntf:  IGsmDisp
// Flags:     (4544) Dual NonExtensible OleAutomation Dispatchable
// GUID:      {B25B188D-42A8-45EF-887F-653CBC9E234B}
// *********************************************************************//
  IGsmDisp = dispinterface
    ['{B25B188D-42A8-45EF-887F-653CBC9E234B}']
    property Version: WideString readonly dispid 1;
    property Build: WideString readonly dispid 2;
    property Module: WideString readonly dispid 3;
    property LicenseStatus: WideString readonly dispid 100;
    property LicenseKey: WideString dispid 101;
    procedure SaveLicenseKey; dispid 102;
    property LogFile: WideString dispid 201;
    property ActivityFile: WideString dispid 202;
    procedure Sleep(Ms: Integer); dispid 300;
    procedure Clear; dispid 301;
    property LastError: Integer readonly dispid 400;
    function GetErrorDescription(ErrorCode: Integer): WideString; dispid 401;
    function FindFirstPort: WideString; dispid 501;
    function FindNextPort: WideString; dispid 502;
    function FindFirstDevice: WideString; dispid 503;
    function FindNextDevice: WideString; dispid 504;
    procedure Open(const strName: WideString; const strPin: WideString; lBaudrate: Integer); dispid 601;
    procedure Close; dispid 602;
    procedure SendCommand(const strCommand: WideString); dispid 603;
    function ReadResponse(lTimeout: Integer): WideString; dispid 604;
    procedure ResetCom; dispid 605;
    property Manufacturer: WideString readonly dispid 701;
    property Model: WideString readonly dispid 702;
    property Revision: WideString readonly dispid 703;
    property SerialNr: WideString readonly dispid 704;
    property SendEnabled: WordBool readonly dispid 801;
    property ReceiveEnabled: WordBool readonly dispid 802;
    property ReportEnabled: WordBool readonly dispid 803;
    function SendSms(const Val: IMessage; lMultipartFlag: Integer; lTimeout: Integer): WideString; dispid 901;
    procedure Receive(lType: Integer; bDelete: WordBool; lStorageType: Integer; lTimeout: Integer); dispid 902;
    function GetFirstSms: IMessage; dispid 903;
    function GetNextSms: IMessage; dispid 904;
    function GetFirstReport: IGsmDeliveryReport; dispid 905;
    function GetNextReport: IGsmDeliveryReport; dispid 906;
    procedure DeleteSms(const pSms: IMessage); dispid 907;
    procedure DeleteReport(const pReport: IGsmDeliveryReport); dispid 908;
    property ExtractApplicationPort: WordBool dispid 1001;
    property AssembleMultipart: WordBool dispid 1003;
    property MessageMode: Integer dispid 1004;
    property PrefixSmscMode: Integer dispid 1005;
    property NetworkTimeout: Integer dispid 1007;
    property InterCommandDelay: Integer dispid 1008;
    property InterCharacterDelay: Integer dispid 1009;
    property WaitForNetwork: WordBool dispid 1010;
    property PreferredSmsc: WideString dispid 1011;
    property CommandTimeout: Integer dispid 1012;
    property KeepUnusedUdh: WordBool dispid 1014;
    property OverrideFeatureCheck: WordBool dispid 1015;
    property ExtractLanguageShift: WordBool dispid 1016;
    property TcpMode: Integer dispid 1020;
    property IsOpen: WordBool readonly dispid 1030;
  end;

// *********************************************************************//
// Interface: IHttpServer
// Flags:     (4544) Dual NonExtensible OleAutomation Dispatchable
// GUID:      {356CDE23-BC03-4283-9F64-AF3D0F49100A}
// *********************************************************************//
  IHttpServer = interface(IDispatch)
    ['{356CDE23-BC03-4283-9F64-AF3D0F49100A}']
    function Get_Version: WideString; safecall;
    function Get_Build: WideString; safecall;
    function Get_Module: WideString; safecall;
    function Get_LicenseStatus: WideString; safecall;
    function Get_LicenseKey: WideString; safecall;
    procedure Set_LicenseKey(const LicenseKey: WideString); safecall;
    procedure SaveLicenseKey; safecall;
    function Get_LogFile: WideString; safecall;
    procedure Set_LogFile(const LogFile: WideString); safecall;
    function Get_ActivityFile: WideString; safecall;
    procedure Set_ActivityFile(const ActivityFile: WideString); safecall;
    procedure Sleep(Ms: Integer); safecall;
    procedure Clear; safecall;
    function Get_LastError: Integer; safecall;
    function GetErrorDescription(ErrorCode: Integer): WideString; safecall;
    function Get_IsStarted: WordBool; safecall;
    procedure AddUrl(const url: WideString); safecall;
    procedure Startup; safecall;
    procedure Shutdown; safecall;
    procedure WaitForRequest(Timeout: Integer); safecall;
    procedure SendResponse; safecall;
    procedure ClearResponse; safecall;
    procedure SaveRequestBody(const Path: WideString); safecall;
    procedure LoadResponseBody(const Path: WideString; bIsText: WordBool); safecall;
    procedure SetResponseBodyFromBase64(const b64string: WideString); safecall;
    function GetRequestHeader(const Key: WideString): WideString; safecall;
    function GetResponseHeader(const Key: WideString): WideString; safecall;
    procedure SetResponseHeader(const Key: WideString; const Value: WideString); safecall;
    function Get_MaxRequestSizeBytes: Integer; safecall;
    procedure Set_MaxRequestSizeBytes(Val: Integer); safecall;
    function Get_NumRequestQueues: Integer; safecall;
    function Get_ResponseTimeoutMs: Integer; safecall;
    function Get_RequestUrl: WideString; safecall;
    function Get_RequestUrlPath: WideString; safecall;
    function Get_RequestUrlHost: WideString; safecall;
    function Get_RequestUrlQueryString: WideString; safecall;
    function Get_RequestVerb: WideString; safecall;
    function Get_RequestBodyString: WideString; safecall;
    function Get_RequestBodyBase64: WideString; safecall;
    function Get_RequestBodyIsBinary: WordBool; safecall;
    function Get_RequestIp: WideString; safecall;
    function Get_RequestPort: Integer; safecall;
    function Get_RequestHeaders: WideString; safecall;
    function Get_ResponseCode: Integer; safecall;
    function Get_ResponseReason: WideString; safecall;
    function Get_ResponseHeaders: WideString; safecall;
    function Get_ResponseBodyString: WideString; safecall;
    function Get_ResponseBodyBase64: WideString; safecall;
    procedure Set_NumRequestQueues(Val: Integer); safecall;
    procedure Set_ResponseTimeoutMs(Val: Integer); safecall;
    procedure Set_ResponseCode(Val: Integer); safecall;
    procedure Set_ResponseReason(const Val: WideString); safecall;
    procedure Set_ResponseBodyString(const Val: WideString); safecall;
    property Version: WideString read Get_Version;
    property Build: WideString read Get_Build;
    property Module: WideString read Get_Module;
    property LicenseStatus: WideString read Get_LicenseStatus;
    property LicenseKey: WideString read Get_LicenseKey write Set_LicenseKey;
    property LogFile: WideString read Get_LogFile write Set_LogFile;
    property ActivityFile: WideString read Get_ActivityFile write Set_ActivityFile;
    property LastError: Integer read Get_LastError;
    property IsStarted: WordBool read Get_IsStarted;
    property MaxRequestSizeBytes: Integer read Get_MaxRequestSizeBytes write Set_MaxRequestSizeBytes;
    property NumRequestQueues: Integer read Get_NumRequestQueues write Set_NumRequestQueues;
    property ResponseTimeoutMs: Integer read Get_ResponseTimeoutMs write Set_ResponseTimeoutMs;
    property RequestUrl: WideString read Get_RequestUrl;
    property RequestUrlPath: WideString read Get_RequestUrlPath;
    property RequestUrlHost: WideString read Get_RequestUrlHost;
    property RequestUrlQueryString: WideString read Get_RequestUrlQueryString;
    property RequestVerb: WideString read Get_RequestVerb;
    property RequestBodyString: WideString read Get_RequestBodyString;
    property RequestBodyBase64: WideString read Get_RequestBodyBase64;
    property RequestBodyIsBinary: WordBool read Get_RequestBodyIsBinary;
    property RequestIp: WideString read Get_RequestIp;
    property RequestPort: Integer read Get_RequestPort;
    property RequestHeaders: WideString read Get_RequestHeaders;
    property ResponseCode: Integer read Get_ResponseCode write Set_ResponseCode;
    property ResponseReason: WideString read Get_ResponseReason write Set_ResponseReason;
    property ResponseHeaders: WideString read Get_ResponseHeaders;
    property ResponseBodyString: WideString read Get_ResponseBodyString write Set_ResponseBodyString;
    property ResponseBodyBase64: WideString read Get_ResponseBodyBase64;
  end;

// *********************************************************************//
// DispIntf:  IHttpServerDisp
// Flags:     (4544) Dual NonExtensible OleAutomation Dispatchable
// GUID:      {356CDE23-BC03-4283-9F64-AF3D0F49100A}
// *********************************************************************//
  IHttpServerDisp = dispinterface
    ['{356CDE23-BC03-4283-9F64-AF3D0F49100A}']
    property Version: WideString readonly dispid 1;
    property Build: WideString readonly dispid 2;
    property Module: WideString readonly dispid 3;
    property LicenseStatus: WideString readonly dispid 100;
    property LicenseKey: WideString dispid 101;
    procedure SaveLicenseKey; dispid 102;
    property LogFile: WideString dispid 201;
    property ActivityFile: WideString dispid 202;
    procedure Sleep(Ms: Integer); dispid 300;
    procedure Clear; dispid 301;
    property LastError: Integer readonly dispid 400;
    function GetErrorDescription(ErrorCode: Integer): WideString; dispid 401;
    property IsStarted: WordBool readonly dispid 701;
    procedure AddUrl(const url: WideString); dispid 1000;
    procedure Startup; dispid 1010;
    procedure Shutdown; dispid 1011;
    procedure WaitForRequest(Timeout: Integer); dispid 1020;
    procedure SendResponse; dispid 1021;
    procedure ClearResponse; dispid 1030;
    procedure SaveRequestBody(const Path: WideString); dispid 1040;
    procedure LoadResponseBody(const Path: WideString; bIsText: WordBool); dispid 1041;
    procedure SetResponseBodyFromBase64(const b64string: WideString); dispid 1042;
    function GetRequestHeader(const Key: WideString): WideString; dispid 1050;
    function GetResponseHeader(const Key: WideString): WideString; dispid 1051;
    procedure SetResponseHeader(const Key: WideString; const Value: WideString); dispid 1052;
    property MaxRequestSizeBytes: Integer dispid 1499;
    property NumRequestQueues: Integer dispid 1500;
    property ResponseTimeoutMs: Integer dispid 1501;
    property RequestUrl: WideString readonly dispid 1502;
    property RequestUrlPath: WideString readonly dispid 1503;
    property RequestUrlHost: WideString readonly dispid 1504;
    property RequestUrlQueryString: WideString readonly dispid 1505;
    property RequestVerb: WideString readonly dispid 1506;
    property RequestBodyString: WideString readonly dispid 1507;
    property RequestBodyBase64: WideString readonly dispid 1508;
    property RequestBodyIsBinary: WordBool readonly dispid 1509;
    property RequestIp: WideString readonly dispid 1510;
    property RequestPort: Integer readonly dispid 1511;
    property RequestHeaders: WideString readonly dispid 1512;
    property ResponseCode: Integer dispid 1514;
    property ResponseReason: WideString dispid 1515;
    property ResponseHeaders: WideString readonly dispid 1516;
    property ResponseBodyString: WideString dispid 1517;
    property ResponseBodyBase64: WideString readonly dispid 1518;
  end;

// *********************************************************************//
// Interface: IHttp
// Flags:     (4544) Dual NonExtensible OleAutomation Dispatchable
// GUID:      {1825A7C6-DBAB-4B99-AAA1-FDEDF36A4982}
// *********************************************************************//
  IHttp = interface(IDispatch)
    ['{1825A7C6-DBAB-4B99-AAA1-FDEDF36A4982}']
    function Get_Version: WideString; safecall;
    function Get_Build: WideString; safecall;
    function Get_Module: WideString; safecall;
    function Get_LicenseStatus: WideString; safecall;
    function Get_LicenseKey: WideString; safecall;
    procedure Set_LicenseKey(const LicenseKey: WideString); safecall;
    procedure SaveLicenseKey; safecall;
    function Get_LogFile: WideString; safecall;
    procedure Set_LogFile(const LogFile: WideString); safecall;
    function Get_ActivityFile: WideString; safecall;
    procedure Set_ActivityFile(const ActivityFile: WideString); safecall;
    function Get_LogDetails: WordBool; safecall;
    procedure Set_LogDetails(LogFile: WordBool); safecall;
    procedure Sleep(Ms: Integer); safecall;
    procedure Clear; safecall;
    function Get_LastError: Integer; safecall;
    function GetErrorDescription(ErrorCode: Integer): WideString; safecall;
    function Get(const strUrl: WideString): WideString; safecall;
    function Post(const strUrl: WideString; const strPostBody: WideString): WideString; safecall;
    procedure Download(const strUrl: WideString; const strTargetPath: WideString); safecall;
    function Get_url: WideString; safecall;
    procedure Set_url(const Val: WideString); safecall;
    function Get_PostBody: WideString; safecall;
    procedure Set_PostBody(const Val: WideString); safecall;
    function SendSms(const Sms: IMessage; MultipartFlag: Integer): WideString; safecall;
    function Get_WebAccount: WideString; safecall;
    procedure Set_WebAccount(const Val: WideString); safecall;
    function Get_WebPassword: WideString; safecall;
    procedure Set_WebPassword(const Val: WideString); safecall;
    function Get_ProxyServer: WideString; safecall;
    procedure Set_ProxyServer(const Val: WideString); safecall;
    function Get_ProxyAccount: WideString; safecall;
    procedure Set_ProxyAccount(const Val: WideString); safecall;
    function Get_ProxyPassword: WideString; safecall;
    procedure Set_ProxyPassword(const Val: WideString); safecall;
    function Get_RequestTimeout: Integer; safecall;
    procedure Set_RequestTimeout(Val: Integer); safecall;
    procedure SetHeader(const Header: WideString; const Value: WideString); safecall;
    function Get_LastResponseCode: Integer; safecall;
    function Get_LastResponseText: WideString; safecall;
    function UrlEncode(const In_: WideString): WideString; safecall;
    function Base64Encode(const In_: WideString): WideString; safecall;
    function Base64EncodeFile(const FileName: WideString): WideString; safecall;
    function HexEncode(const In_: WideString): WideString; safecall;
    property Version: WideString read Get_Version;
    property Build: WideString read Get_Build;
    property Module: WideString read Get_Module;
    property LicenseStatus: WideString read Get_LicenseStatus;
    property LicenseKey: WideString read Get_LicenseKey write Set_LicenseKey;
    property LogFile: WideString read Get_LogFile write Set_LogFile;
    property ActivityFile: WideString read Get_ActivityFile write Set_ActivityFile;
    property LogDetails: WordBool read Get_LogDetails write Set_LogDetails;
    property LastError: Integer read Get_LastError;
    property url: WideString read Get_url write Set_url;
    property PostBody: WideString read Get_PostBody write Set_PostBody;
    property WebAccount: WideString read Get_WebAccount write Set_WebAccount;
    property WebPassword: WideString read Get_WebPassword write Set_WebPassword;
    property ProxyServer: WideString read Get_ProxyServer write Set_ProxyServer;
    property ProxyAccount: WideString read Get_ProxyAccount write Set_ProxyAccount;
    property ProxyPassword: WideString read Get_ProxyPassword write Set_ProxyPassword;
    property RequestTimeout: Integer read Get_RequestTimeout write Set_RequestTimeout;
    property LastResponseCode: Integer read Get_LastResponseCode;
    property LastResponseText: WideString read Get_LastResponseText;
  end;

// *********************************************************************//
// DispIntf:  IHttpDisp
// Flags:     (4544) Dual NonExtensible OleAutomation Dispatchable
// GUID:      {1825A7C6-DBAB-4B99-AAA1-FDEDF36A4982}
// *********************************************************************//
  IHttpDisp = dispinterface
    ['{1825A7C6-DBAB-4B99-AAA1-FDEDF36A4982}']
    property Version: WideString readonly dispid 1;
    property Build: WideString readonly dispid 2;
    property Module: WideString readonly dispid 3;
    property LicenseStatus: WideString readonly dispid 100;
    property LicenseKey: WideString dispid 101;
    procedure SaveLicenseKey; dispid 102;
    property LogFile: WideString dispid 201;
    property ActivityFile: WideString dispid 202;
    property LogDetails: WordBool dispid 203;
    procedure Sleep(Ms: Integer); dispid 300;
    procedure Clear; dispid 301;
    property LastError: Integer readonly dispid 400;
    function GetErrorDescription(ErrorCode: Integer): WideString; dispid 401;
    function Get(const strUrl: WideString): WideString; dispid 501;
    function Post(const strUrl: WideString; const strPostBody: WideString): WideString; dispid 502;
    procedure Download(const strUrl: WideString; const strTargetPath: WideString); dispid 503;
    property url: WideString dispid 601;
    property PostBody: WideString dispid 602;
    function SendSms(const Sms: IMessage; MultipartFlag: Integer): WideString; dispid 650;
    property WebAccount: WideString dispid 701;
    property WebPassword: WideString dispid 702;
    property ProxyServer: WideString dispid 703;
    property ProxyAccount: WideString dispid 704;
    property ProxyPassword: WideString dispid 705;
    property RequestTimeout: Integer dispid 707;
    procedure SetHeader(const Header: WideString; const Value: WideString); dispid 708;
    property LastResponseCode: Integer readonly dispid 750;
    property LastResponseText: WideString readonly dispid 751;
    function UrlEncode(const In_: WideString): WideString; dispid 801;
    function Base64Encode(const In_: WideString): WideString; dispid 802;
    function Base64EncodeFile(const FileName: WideString): WideString; dispid 803;
    function HexEncode(const In_: WideString): WideString; dispid 804;
  end;

// *********************************************************************//
// Interface: ISnpp
// Flags:     (4544) Dual NonExtensible OleAutomation Dispatchable
// GUID:      {C4AAB6D2-F834-4FE6-A4AE-B1D5794BC3B4}
// *********************************************************************//
  ISnpp = interface(IDispatch)
    ['{C4AAB6D2-F834-4FE6-A4AE-B1D5794BC3B4}']
    function Get_Version: WideString; safecall;
    function Get_Build: WideString; safecall;
    function Get_Module: WideString; safecall;
    function Get_LicenseStatus: WideString; safecall;
    function Get_LicenseKey: WideString; safecall;
    procedure Set_LicenseKey(const LicenseKey: WideString); safecall;
    procedure SaveLicenseKey; safecall;
    function Get_LogFile: WideString; safecall;
    procedure Set_LogFile(const LogFile: WideString); safecall;
    procedure Clear; safecall;
    function Get_LastError: Integer; safecall;
    function GetErrorDescription(ErrorCode: Integer): WideString; safecall;
    function Get_Server: WideString; safecall;
    procedure Set_Server(const Val: WideString); safecall;
    function Get_ServerPort: Integer; safecall;
    procedure Set_ServerPort(Val: Integer); safecall;
    function Get_ServerTimeout: Integer; safecall;
    procedure Set_ServerTimeout(Val: Integer); safecall;
    function Get_ProviderPassword: WideString; safecall;
    procedure Set_ProviderPassword(const Val: WideString); safecall;
    function Get_ProviderUsername: WideString; safecall;
    procedure Set_ProviderUsername(const Val: WideString); safecall;
    function Get_ProviderResponse: WideString; safecall;
    function Get_MultilineEnabled: WordBool; safecall;
    procedure Set_MultilineEnabled(Val: WordBool); safecall;
    procedure Send(const ToAddress: WideString; const Message: WideString); safecall;
    property Version: WideString read Get_Version;
    property Build: WideString read Get_Build;
    property Module: WideString read Get_Module;
    property LicenseStatus: WideString read Get_LicenseStatus;
    property LicenseKey: WideString read Get_LicenseKey write Set_LicenseKey;
    property LogFile: WideString read Get_LogFile write Set_LogFile;
    property LastError: Integer read Get_LastError;
    property Server: WideString read Get_Server write Set_Server;
    property ServerPort: Integer read Get_ServerPort write Set_ServerPort;
    property ServerTimeout: Integer read Get_ServerTimeout write Set_ServerTimeout;
    property ProviderPassword: WideString read Get_ProviderPassword write Set_ProviderPassword;
    property ProviderUsername: WideString read Get_ProviderUsername write Set_ProviderUsername;
    property ProviderResponse: WideString read Get_ProviderResponse;
    property MultilineEnabled: WordBool read Get_MultilineEnabled write Set_MultilineEnabled;
  end;

// *********************************************************************//
// DispIntf:  ISnppDisp
// Flags:     (4544) Dual NonExtensible OleAutomation Dispatchable
// GUID:      {C4AAB6D2-F834-4FE6-A4AE-B1D5794BC3B4}
// *********************************************************************//
  ISnppDisp = dispinterface
    ['{C4AAB6D2-F834-4FE6-A4AE-B1D5794BC3B4}']
    property Version: WideString readonly dispid 1;
    property Build: WideString readonly dispid 2;
    property Module: WideString readonly dispid 3;
    property LicenseStatus: WideString readonly dispid 100;
    property LicenseKey: WideString dispid 101;
    procedure SaveLicenseKey; dispid 102;
    property LogFile: WideString dispid 201;
    procedure Clear; dispid 301;
    property LastError: Integer readonly dispid 400;
    function GetErrorDescription(ErrorCode: Integer): WideString; dispid 401;
    property Server: WideString dispid 501;
    property ServerPort: Integer dispid 502;
    property ServerTimeout: Integer dispid 503;
    property ProviderPassword: WideString dispid 504;
    property ProviderUsername: WideString dispid 505;
    property ProviderResponse: WideString readonly dispid 510;
    property MultilineEnabled: WordBool dispid 515;
    procedure Send(const ToAddress: WideString; const Message: WideString); dispid 601;
  end;

// *********************************************************************//
// Interface: ISmpp
// Flags:     (4544) Dual NonExtensible OleAutomation Dispatchable
// GUID:      {9E5FC25E-613A-4951-9C8F-37923C7AE7AE}
// *********************************************************************//
  ISmpp = interface(IDispatch)
    ['{9E5FC25E-613A-4951-9C8F-37923C7AE7AE}']
    function Get_Version: WideString; safecall;
    function Get_Build: WideString; safecall;
    function Get_Module: WideString; safecall;
    function Get_LicenseStatus: WideString; safecall;
    function Get_LicenseKey: WideString; safecall;
    procedure Set_LicenseKey(const LicenseKey: WideString); safecall;
    procedure SaveLicenseKey; safecall;
    function Get_LogFile: WideString; safecall;
    procedure Set_LogFile(const LogFile: WideString); safecall;
    function Get_ActivityFile: WideString; safecall;
    procedure Set_ActivityFile(const ActivityFile: WideString); safecall;
    function Get_LogPduDetails: WordBool; safecall;
    procedure Set_LogPduDetails(LogDetails: WordBool); safecall;
    function Get_LogLevel: Integer; safecall;
    procedure Set_LogLevel(pLevel: Integer); safecall;
    procedure Sleep(Ms: Integer); safecall;
    procedure Clear; safecall;
    function Get_LastError: Integer; safecall;
    function GetErrorDescription(ErrorCode: Integer): WideString; safecall;
    procedure Connect(const Host: WideString; Port: Integer; Timeout: Integer; Secure: WordBool); safecall;
    procedure Bind(Type_: Integer; const SystemId: WideString; const SystemPassword: WideString; 
                   const SystemType: WideString; Version: Integer; TON: Integer; NPI: Integer; 
                   const AddressRange: WideString; Timeout: Integer); safecall;
    procedure Unbind; safecall;
    procedure Disconnect; safecall;
    procedure AddBindTlv(const Tlv: ITlv); safecall;
    procedure DeleteBindTlv(lTag: Integer); safecall;
    function GetFirstBindTlv: ITlv; safecall;
    function GetNextBindTlv: ITlv; safecall;
    function GetBindTlv(lTag: Integer): ITlv; safecall;
    function SubmitSms(const Sms: IMessage; MultipartFlag: Integer): Integer; safecall;
    function WaitForSmsUpdate(TimeoutMs: Integer): WordBool; safecall;
    function FetchSmsUpdate: IMessage; safecall;
    procedure QuerySms(const Sms: IMessage); safecall;
    function ReceiveMessage: IMessage; safecall;
    function CountSmsReceived: Integer; safecall;
    function CountSmsSubmitSpace: Integer; safecall;
    function CountSmsQuerySpace: Integer; safecall;
    function Get_IsConnected: WordBool; safecall;
    function Get_IsBound: WordBool; safecall;
    function Get_MaxOutPendingPdus: Integer; safecall;
    procedure Set_MaxOutPendingPdus(Val: Integer); safecall;
    function Get_MaxSmsSubmissions: Integer; safecall;
    procedure Set_MaxSmsSubmissions(Val: Integer); safecall;
    function Get_MaxSmsQueries: Integer; safecall;
    procedure Set_MaxSmsQueries(Val: Integer); safecall;
    function Get_PduTimeout: Integer; safecall;
    procedure Set_PduTimeout(Val: Integer); safecall;
    function Get_EnquireInterval: Integer; safecall;
    procedure Set_EnquireInterval(Val: Integer); safecall;
    function Get_MultipartTimeout: Integer; safecall;
    procedure Set_MultipartTimeout(Val: Integer); safecall;
    function Get_UseGsmEncoding: Integer; safecall;
    procedure Set_UseGsmEncoding(Val: Integer); safecall;
    function Get_AssembleMultipart: WordBool; safecall;
    procedure Set_AssembleMultipart(Val: WordBool); safecall;
    function Get_MultipartMode: Integer; safecall;
    procedure Set_MultipartMode(Val: Integer); safecall;
    function Get_ExtractApplicationPort: WordBool; safecall;
    procedure Set_ExtractApplicationPort(Val: WordBool); safecall;
    function Get_MaxSmsReceived: Integer; safecall;
    procedure Set_MaxSmsReceived(Val: Integer); safecall;
    function Get_SubmitMode: Integer; safecall;
    procedure Set_SubmitMode(Val: Integer); safecall;
    function Get_KeepUnusedUdh: WordBool; safecall;
    procedure Set_KeepUnusedUdh(Val: WordBool); safecall;
    function Get_ExtractLanguageShift: WordBool; safecall;
    procedure Set_ExtractLanguageShift(Val: WordBool); safecall;
    function Get_LocalIpAddress: WideString; safecall;
    procedure Set_LocalIpAddress(const Ip: WideString); safecall;
    function Get_SmsSentPerSecond: Integer; safecall;
    function Get_SmsReceivedPerSecond: Integer; safecall;
    function GetFirstPart(const Sms: IMessage): IMessage; safecall;
    function GetNextPart: IMessage; safecall;
    function CountParts(const Sms: IMessage): Integer; safecall;
    procedure AssembleSms(const Part: IMessage); safecall;
    function GetAssembledSms(Force: WordBool): IMessage; safecall;
    procedure ResetSmsAssembler; safecall;
    function FetchNotUpdated: IMessage; safecall;
    function FetchNotSubmitted: IMessage; safecall;
    property Version: WideString read Get_Version;
    property Build: WideString read Get_Build;
    property Module: WideString read Get_Module;
    property LicenseStatus: WideString read Get_LicenseStatus;
    property LicenseKey: WideString read Get_LicenseKey write Set_LicenseKey;
    property LogFile: WideString read Get_LogFile write Set_LogFile;
    property ActivityFile: WideString read Get_ActivityFile write Set_ActivityFile;
    property LogPduDetails: WordBool read Get_LogPduDetails write Set_LogPduDetails;
    property LogLevel: Integer read Get_LogLevel write Set_LogLevel;
    property LastError: Integer read Get_LastError;
    property IsConnected: WordBool read Get_IsConnected;
    property IsBound: WordBool read Get_IsBound;
    property MaxOutPendingPdus: Integer read Get_MaxOutPendingPdus write Set_MaxOutPendingPdus;
    property MaxSmsSubmissions: Integer read Get_MaxSmsSubmissions write Set_MaxSmsSubmissions;
    property MaxSmsQueries: Integer read Get_MaxSmsQueries write Set_MaxSmsQueries;
    property PduTimeout: Integer read Get_PduTimeout write Set_PduTimeout;
    property EnquireInterval: Integer read Get_EnquireInterval write Set_EnquireInterval;
    property MultipartTimeout: Integer read Get_MultipartTimeout write Set_MultipartTimeout;
    property UseGsmEncoding: Integer read Get_UseGsmEncoding write Set_UseGsmEncoding;
    property AssembleMultipart: WordBool read Get_AssembleMultipart write Set_AssembleMultipart;
    property MultipartMode: Integer read Get_MultipartMode write Set_MultipartMode;
    property ExtractApplicationPort: WordBool read Get_ExtractApplicationPort write Set_ExtractApplicationPort;
    property MaxSmsReceived: Integer read Get_MaxSmsReceived write Set_MaxSmsReceived;
    property SubmitMode: Integer read Get_SubmitMode write Set_SubmitMode;
    property KeepUnusedUdh: WordBool read Get_KeepUnusedUdh write Set_KeepUnusedUdh;
    property ExtractLanguageShift: WordBool read Get_ExtractLanguageShift write Set_ExtractLanguageShift;
    property LocalIpAddress: WideString read Get_LocalIpAddress write Set_LocalIpAddress;
    property SmsSentPerSecond: Integer read Get_SmsSentPerSecond;
    property SmsReceivedPerSecond: Integer read Get_SmsReceivedPerSecond;
  end;

// *********************************************************************//
// DispIntf:  ISmppDisp
// Flags:     (4544) Dual NonExtensible OleAutomation Dispatchable
// GUID:      {9E5FC25E-613A-4951-9C8F-37923C7AE7AE}
// *********************************************************************//
  ISmppDisp = dispinterface
    ['{9E5FC25E-613A-4951-9C8F-37923C7AE7AE}']
    property Version: WideString readonly dispid 1;
    property Build: WideString readonly dispid 2;
    property Module: WideString readonly dispid 3;
    property LicenseStatus: WideString readonly dispid 100;
    property LicenseKey: WideString dispid 101;
    procedure SaveLicenseKey; dispid 102;
    property LogFile: WideString dispid 201;
    property ActivityFile: WideString dispid 202;
    property LogPduDetails: WordBool dispid 250;
    property LogLevel: Integer dispid 251;
    procedure Sleep(Ms: Integer); dispid 300;
    procedure Clear; dispid 301;
    property LastError: Integer readonly dispid 400;
    function GetErrorDescription(ErrorCode: Integer): WideString; dispid 401;
    procedure Connect(const Host: WideString; Port: Integer; Timeout: Integer; Secure: WordBool); dispid 500;
    procedure Bind(Type_: Integer; const SystemId: WideString; const SystemPassword: WideString; 
                   const SystemType: WideString; Version: Integer; TON: Integer; NPI: Integer; 
                   const AddressRange: WideString; Timeout: Integer); dispid 501;
    procedure Unbind; dispid 502;
    procedure Disconnect; dispid 503;
    procedure AddBindTlv(const Tlv: ITlv); dispid 510;
    procedure DeleteBindTlv(lTag: Integer); dispid 511;
    function GetFirstBindTlv: ITlv; dispid 512;
    function GetNextBindTlv: ITlv; dispid 513;
    function GetBindTlv(lTag: Integer): ITlv; dispid 514;
    function SubmitSms(const Sms: IMessage; MultipartFlag: Integer): Integer; dispid 551;
    function WaitForSmsUpdate(TimeoutMs: Integer): WordBool; dispid 552;
    function FetchSmsUpdate: IMessage; dispid 553;
    procedure QuerySms(const Sms: IMessage); dispid 554;
    function ReceiveMessage: IMessage; dispid 555;
    function CountSmsReceived: Integer; dispid 571;
    function CountSmsSubmitSpace: Integer; dispid 572;
    function CountSmsQuerySpace: Integer; dispid 573;
    property IsConnected: WordBool readonly dispid 601;
    property IsBound: WordBool readonly dispid 602;
    property MaxOutPendingPdus: Integer dispid 701;
    property MaxSmsSubmissions: Integer dispid 702;
    property MaxSmsQueries: Integer dispid 703;
    property PduTimeout: Integer dispid 801;
    property EnquireInterval: Integer dispid 802;
    property MultipartTimeout: Integer dispid 803;
    property UseGsmEncoding: Integer dispid 901;
    property AssembleMultipart: WordBool dispid 902;
    property MultipartMode: Integer dispid 903;
    property ExtractApplicationPort: WordBool dispid 904;
    property MaxSmsReceived: Integer dispid 905;
    property SubmitMode: Integer dispid 906;
    property KeepUnusedUdh: WordBool dispid 907;
    property ExtractLanguageShift: WordBool dispid 908;
    property LocalIpAddress: WideString dispid 951;
    property SmsSentPerSecond: Integer readonly dispid 1000;
    property SmsReceivedPerSecond: Integer readonly dispid 1001;
    function GetFirstPart(const Sms: IMessage): IMessage; dispid 1100;
    function GetNextPart: IMessage; dispid 1101;
    function CountParts(const Sms: IMessage): Integer; dispid 1102;
    procedure AssembleSms(const Part: IMessage); dispid 1105;
    function GetAssembledSms(Force: WordBool): IMessage; dispid 1106;
    procedure ResetSmsAssembler; dispid 1107;
    function FetchNotUpdated: IMessage; dispid 1201;
    function FetchNotSubmitted: IMessage; dispid 1202;
  end;

// *********************************************************************//
// Interface: ISmppServer
// Flags:     (4544) Dual NonExtensible OleAutomation Dispatchable
// GUID:      {EBE10239-A8C6-46CA-BC48-0CFA6CFD835C}
// *********************************************************************//
  ISmppServer = interface(IDispatch)
    ['{EBE10239-A8C6-46CA-BC48-0CFA6CFD835C}']
    function Get_Version: WideString; safecall;
    function Get_Build: WideString; safecall;
    function Get_Module: WideString; safecall;
    function Get_LicenseStatus: WideString; safecall;
    function Get_LicenseKey: WideString; safecall;
    procedure Set_LicenseKey(const LicenseKey: WideString); safecall;
    procedure SaveLicenseKey; safecall;
    function Get_LogFile: WideString; safecall;
    procedure Set_LogFile(const LogFile: WideString); safecall;
    function Get_ActivityFile: WideString; safecall;
    procedure Set_ActivityFile(const ActivityFile: WideString); safecall;
    function Get_CertificateStore: Integer; safecall;
    procedure Set_CertificateStore(CertificateStore: Integer); safecall;
    function Get_ListenIpv4: WideString; safecall;
    procedure Set_ListenIpv4(const Ip: WideString); safecall;
    function Get_ListenIpv6: WideString; safecall;
    procedure Set_ListenIpv6(const Ip: WideString); safecall;
    procedure Sleep(Ms: Integer); safecall;
    procedure Clear; safecall;
    function Get_LastError: Integer; safecall;
    function GetErrorDescription(ErrorCode: Integer): WideString; safecall;
    procedure Start(Port: Integer; IpVersion: Integer; const Certificate: WideString); safecall;
    procedure Stop; safecall;
    function GetFirstSession: ISmppSession; safecall;
    function GetNextSession: ISmppSession; safecall;
    function GetSession(Id: Integer): ISmppSession; safecall;
    function GetClosedSession: ISmppSession; safecall;
    function FindFirstMyServerCertificate: WideString; safecall;
    function FindNextMyServerCertificate: WideString; safecall;
    function FindFirstLocalIpAddress(IpVersion: Integer): WideString; safecall;
    function FindNextLocalIpAddress: WideString; safecall;
    function Get_MaxClosedSessions: Integer; safecall;
    procedure Set_MaxClosedSessions(Val: Integer); safecall;
    function Get_IsStarted: WordBool; safecall;
    function Get_LastReference: Integer; safecall;
    procedure Set_LastReference(Val: Integer); safecall;
    property Version: WideString read Get_Version;
    property Build: WideString read Get_Build;
    property Module: WideString read Get_Module;
    property LicenseStatus: WideString read Get_LicenseStatus;
    property LicenseKey: WideString read Get_LicenseKey write Set_LicenseKey;
    property LogFile: WideString read Get_LogFile write Set_LogFile;
    property ActivityFile: WideString read Get_ActivityFile write Set_ActivityFile;
    property CertificateStore: Integer read Get_CertificateStore write Set_CertificateStore;
    property ListenIpv4: WideString read Get_ListenIpv4 write Set_ListenIpv4;
    property ListenIpv6: WideString read Get_ListenIpv6 write Set_ListenIpv6;
    property LastError: Integer read Get_LastError;
    property MaxClosedSessions: Integer read Get_MaxClosedSessions write Set_MaxClosedSessions;
    property IsStarted: WordBool read Get_IsStarted;
    property LastReference: Integer read Get_LastReference write Set_LastReference;
  end;

// *********************************************************************//
// DispIntf:  ISmppServerDisp
// Flags:     (4544) Dual NonExtensible OleAutomation Dispatchable
// GUID:      {EBE10239-A8C6-46CA-BC48-0CFA6CFD835C}
// *********************************************************************//
  ISmppServerDisp = dispinterface
    ['{EBE10239-A8C6-46CA-BC48-0CFA6CFD835C}']
    property Version: WideString readonly dispid 1;
    property Build: WideString readonly dispid 2;
    property Module: WideString readonly dispid 3;
    property LicenseStatus: WideString readonly dispid 100;
    property LicenseKey: WideString dispid 101;
    procedure SaveLicenseKey; dispid 102;
    property LogFile: WideString dispid 201;
    property ActivityFile: WideString dispid 202;
    property CertificateStore: Integer dispid 242;
    property ListenIpv4: WideString dispid 243;
    property ListenIpv6: WideString dispid 244;
    procedure Sleep(Ms: Integer); dispid 300;
    procedure Clear; dispid 301;
    property LastError: Integer readonly dispid 400;
    function GetErrorDescription(ErrorCode: Integer): WideString; dispid 401;
    procedure Start(Port: Integer; IpVersion: Integer; const Certificate: WideString); dispid 501;
    procedure Stop; dispid 502;
    function GetFirstSession: ISmppSession; dispid 601;
    function GetNextSession: ISmppSession; dispid 602;
    function GetSession(Id: Integer): ISmppSession; dispid 603;
    function GetClosedSession: ISmppSession; dispid 605;
    function FindFirstMyServerCertificate: WideString; dispid 611;
    function FindNextMyServerCertificate: WideString; dispid 612;
    function FindFirstLocalIpAddress(IpVersion: Integer): WideString; dispid 621;
    function FindNextLocalIpAddress: WideString; dispid 622;
    property MaxClosedSessions: Integer dispid 651;
    property IsStarted: WordBool readonly dispid 701;
    property LastReference: Integer dispid 801;
  end;

// *********************************************************************//
// Interface: ISmppSession
// Flags:     (4544) Dual NonExtensible OleAutomation Dispatchable
// GUID:      {3E1FF0C2-4F98-4FA2-954B-BF5730FB6CF9}
// *********************************************************************//
  ISmppSession = interface(IDispatch)
    ['{3E1FF0C2-4F98-4FA2-954B-BF5730FB6CF9}']
    function Get_LogFile: WideString; safecall;
    procedure Set_LogFile(const LogFile: WideString); safecall;
    function Get_ActivityFile: WideString; safecall;
    procedure Set_ActivityFile(const ActivityFile: WideString); safecall;
    function Get_LogPduDetails: WordBool; safecall;
    procedure Set_LogPduDetails(LogDetails: WordBool); safecall;
    function Get_LogLevel: Integer; safecall;
    procedure Set_LogLevel(pLevel: Integer); safecall;
    function Get_LastError: Integer; safecall;
    function GetErrorDescription(ErrorCode: Integer): WideString; safecall;
    function Get_Ip: WideString; safecall;
    function Get_Port: Integer; safecall;
    function Get_Version: Integer; safecall;
    function Get_SystemId: WideString; safecall;
    function Get_Password: WideString; safecall;
    function Get_SystemType: WideString; safecall;
    function Get_AddressRange: WideString; safecall;
    function Get_AddressRangeNpi: Integer; safecall;
    function Get_AddressRangeTon: Integer; safecall;
    function Get_ConnectionState: Integer; safecall;
    function Get_RequestedBind: Integer; safecall;
    function Get_Id: Integer; safecall;
    procedure RespondToBind(Status: Integer); safecall;
    procedure RespondToSubmitSms(const Sms: IMessage); safecall;
    function ReceiveSubmitSms: IMessage; safecall;
    procedure RespondToQuerySms(const Sms: IMessage); safecall;
    function ReceiveQuerySms: IMessage; safecall;
    function DeliverSms(const Sms: IMessage; MultipartFlag: Integer): Integer; safecall;
    procedure DeliverReport(const Sms: IMessage); safecall;
    function ReceiveDeliverResponse: IMessage; safecall;
    function GetFirstBindTlv: ITlv; safecall;
    function GetNextBindTlv: ITlv; safecall;
    function GetBindTlv(lTag: Integer): ITlv; safecall;
    procedure Disconnect; safecall;
    function Get_MaxSmsDeliveries: Integer; safecall;
    procedure Set_MaxSmsDeliveries(Val: Integer); safecall;
    function Get_MaxSmsSubmission: Integer; safecall;
    procedure Set_MaxSmsSubmission(Val: Integer); safecall;
    function Get_MaxSmsQueries: Integer; safecall;
    procedure Set_MaxSmsQueries(Val: Integer); safecall;
    function Get_MaxOutPendingPdus: Integer; safecall;
    procedure Set_MaxOutPendingPdus(Val: Integer); safecall;
    function Get_PduTimeout: Integer; safecall;
    procedure Set_PduTimeout(Val: Integer); safecall;
    function Get_EnquireInterval: Integer; safecall;
    procedure Set_EnquireInterval(Val: Integer); safecall;
    function Get_MultipartTimeout: Integer; safecall;
    procedure Set_MultipartTimeout(Val: Integer); safecall;
    function Get_UseGsmEncoding: Integer; safecall;
    procedure Set_UseGsmEncoding(Val: Integer); safecall;
    function Get_MultipartMode: Integer; safecall;
    procedure Set_MultipartMode(Val: Integer); safecall;
    function Get_ExtractApplicationPort: WordBool; safecall;
    procedure Set_ExtractApplicationPort(Val: WordBool); safecall;
    function Get_DeliverMode: Integer; safecall;
    procedure Set_DeliverMode(Val: Integer); safecall;
    function Get_KeepUnusedUdh: WordBool; safecall;
    procedure Set_KeepUnusedUdh(Val: WordBool); safecall;
    function Get_ExtractLanguageShift: WordBool; safecall;
    procedure Set_ExtractLanguageShift(Val: WordBool); safecall;
    function CountSmsSubmissions: Integer; safecall;
    function CountSmsQueries: Integer; safecall;
    function CountSmsDeliverySpace: Integer; safecall;
    function Get_SmsSentPerSecond: Integer; safecall;
    function Get_SmsReceivedPerSecond: Integer; safecall;
    function GetFirstPart(const Sms: IMessage): IMessage; safecall;
    function GetNextPart: IMessage; safecall;
    function CountParts(const Sms: IMessage): Integer; safecall;
    procedure AssembleSms(const Part: IMessage); safecall;
    function GetAssembledSms(Force: WordBool): IMessage; safecall;
    function FetchNotResponded: IMessage; safecall;
    function FetchNotDelivered: IMessage; safecall;
    function Get_IsConnected: WordBool; safecall;
    function Get_IsBound: WordBool; safecall;
    property LogFile: WideString read Get_LogFile write Set_LogFile;
    property ActivityFile: WideString read Get_ActivityFile write Set_ActivityFile;
    property LogPduDetails: WordBool read Get_LogPduDetails write Set_LogPduDetails;
    property LogLevel: Integer read Get_LogLevel write Set_LogLevel;
    property LastError: Integer read Get_LastError;
    property Ip: WideString read Get_Ip;
    property Port: Integer read Get_Port;
    property Version: Integer read Get_Version;
    property SystemId: WideString read Get_SystemId;
    property Password: WideString read Get_Password;
    property SystemType: WideString read Get_SystemType;
    property AddressRange: WideString read Get_AddressRange;
    property AddressRangeNpi: Integer read Get_AddressRangeNpi;
    property AddressRangeTon: Integer read Get_AddressRangeTon;
    property ConnectionState: Integer read Get_ConnectionState;
    property RequestedBind: Integer read Get_RequestedBind;
    property Id: Integer read Get_Id;
    property MaxSmsDeliveries: Integer read Get_MaxSmsDeliveries write Set_MaxSmsDeliveries;
    property MaxSmsSubmission: Integer read Get_MaxSmsSubmission write Set_MaxSmsSubmission;
    property MaxSmsQueries: Integer read Get_MaxSmsQueries write Set_MaxSmsQueries;
    property MaxOutPendingPdus: Integer read Get_MaxOutPendingPdus write Set_MaxOutPendingPdus;
    property PduTimeout: Integer read Get_PduTimeout write Set_PduTimeout;
    property EnquireInterval: Integer read Get_EnquireInterval write Set_EnquireInterval;
    property MultipartTimeout: Integer read Get_MultipartTimeout write Set_MultipartTimeout;
    property UseGsmEncoding: Integer read Get_UseGsmEncoding write Set_UseGsmEncoding;
    property MultipartMode: Integer read Get_MultipartMode write Set_MultipartMode;
    property ExtractApplicationPort: WordBool read Get_ExtractApplicationPort write Set_ExtractApplicationPort;
    property DeliverMode: Integer read Get_DeliverMode write Set_DeliverMode;
    property KeepUnusedUdh: WordBool read Get_KeepUnusedUdh write Set_KeepUnusedUdh;
    property ExtractLanguageShift: WordBool read Get_ExtractLanguageShift write Set_ExtractLanguageShift;
    property SmsSentPerSecond: Integer read Get_SmsSentPerSecond;
    property SmsReceivedPerSecond: Integer read Get_SmsReceivedPerSecond;
    property IsConnected: WordBool read Get_IsConnected;
    property IsBound: WordBool read Get_IsBound;
  end;

// *********************************************************************//
// DispIntf:  ISmppSessionDisp
// Flags:     (4544) Dual NonExtensible OleAutomation Dispatchable
// GUID:      {3E1FF0C2-4F98-4FA2-954B-BF5730FB6CF9}
// *********************************************************************//
  ISmppSessionDisp = dispinterface
    ['{3E1FF0C2-4F98-4FA2-954B-BF5730FB6CF9}']
    property LogFile: WideString dispid 201;
    property ActivityFile: WideString dispid 202;
    property LogPduDetails: WordBool dispid 250;
    property LogLevel: Integer dispid 251;
    property LastError: Integer readonly dispid 400;
    function GetErrorDescription(ErrorCode: Integer): WideString; dispid 401;
    property Ip: WideString readonly dispid 501;
    property Port: Integer readonly dispid 502;
    property Version: Integer readonly dispid 503;
    property SystemId: WideString readonly dispid 504;
    property Password: WideString readonly dispid 505;
    property SystemType: WideString readonly dispid 506;
    property AddressRange: WideString readonly dispid 507;
    property AddressRangeNpi: Integer readonly dispid 508;
    property AddressRangeTon: Integer readonly dispid 509;
    property ConnectionState: Integer readonly dispid 510;
    property RequestedBind: Integer readonly dispid 511;
    property Id: Integer readonly dispid 550;
    procedure RespondToBind(Status: Integer); dispid 601;
    procedure RespondToSubmitSms(const Sms: IMessage); dispid 602;
    function ReceiveSubmitSms: IMessage; dispid 603;
    procedure RespondToQuerySms(const Sms: IMessage); dispid 604;
    function ReceiveQuerySms: IMessage; dispid 605;
    function DeliverSms(const Sms: IMessage; MultipartFlag: Integer): Integer; dispid 606;
    procedure DeliverReport(const Sms: IMessage); dispid 607;
    function ReceiveDeliverResponse: IMessage; dispid 608;
    function GetFirstBindTlv: ITlv; dispid 620;
    function GetNextBindTlv: ITlv; dispid 621;
    function GetBindTlv(lTag: Integer): ITlv; dispid 622;
    procedure Disconnect; dispid 650;
    property MaxSmsDeliveries: Integer dispid 701;
    property MaxSmsSubmission: Integer dispid 702;
    property MaxSmsQueries: Integer dispid 703;
    property MaxOutPendingPdus: Integer dispid 704;
    property PduTimeout: Integer dispid 751;
    property EnquireInterval: Integer dispid 752;
    property MultipartTimeout: Integer dispid 753;
    property UseGsmEncoding: Integer dispid 771;
    property MultipartMode: Integer dispid 773;
    property ExtractApplicationPort: WordBool dispid 774;
    property DeliverMode: Integer dispid 775;
    property KeepUnusedUdh: WordBool dispid 776;
    property ExtractLanguageShift: WordBool dispid 777;
    function CountSmsSubmissions: Integer; dispid 801;
    function CountSmsQueries: Integer; dispid 802;
    function CountSmsDeliverySpace: Integer; dispid 803;
    property SmsSentPerSecond: Integer readonly dispid 901;
    property SmsReceivedPerSecond: Integer readonly dispid 902;
    function GetFirstPart(const Sms: IMessage): IMessage; dispid 1100;
    function GetNextPart: IMessage; dispid 1101;
    function CountParts(const Sms: IMessage): Integer; dispid 1102;
    procedure AssembleSms(const Part: IMessage); dispid 1105;
    function GetAssembledSms(Force: WordBool): IMessage; dispid 1106;
    function FetchNotResponded: IMessage; dispid 1201;
    function FetchNotDelivered: IMessage; dispid 1202;
    property IsConnected: WordBool readonly dispid 1250;
    property IsBound: WordBool readonly dispid 1251;
  end;

// *********************************************************************//
// Interface: ITemplateWapPush
// Flags:     (4544) Dual NonExtensible OleAutomation Dispatchable
// GUID:      {54DD400B-F0D6-42AF-964B-9F38CD57D8CC}
// *********************************************************************//
  ITemplateWapPush = interface(IDispatch)
    ['{54DD400B-F0D6-42AF-964B-9F38CD57D8CC}']
    function Get_url: WideString; safecall;
    procedure Set_url(const pVal: WideString); safecall;
    function Get_Description: WideString; safecall;
    procedure Set_Description(const pVal: WideString); safecall;
    function Get_SignalAction: Integer; safecall;
    procedure Set_SignalAction(pVal: Integer); safecall;
    function Get_Data: WideString; safecall;
    function Get_LastError: Integer; safecall;
    procedure Encode; safecall;
    function GetErrorDescription(lCode: Integer): WideString; safecall;
    procedure Clear; safecall;
    property url: WideString read Get_url write Set_url;
    property Description: WideString read Get_Description write Set_Description;
    property SignalAction: Integer read Get_SignalAction write Set_SignalAction;
    property Data: WideString read Get_Data;
    property LastError: Integer read Get_LastError;
  end;

// *********************************************************************//
// DispIntf:  ITemplateWapPushDisp
// Flags:     (4544) Dual NonExtensible OleAutomation Dispatchable
// GUID:      {54DD400B-F0D6-42AF-964B-9F38CD57D8CC}
// *********************************************************************//
  ITemplateWapPushDisp = dispinterface
    ['{54DD400B-F0D6-42AF-964B-9F38CD57D8CC}']
    property url: WideString dispid 1;
    property Description: WideString dispid 2;
    property SignalAction: Integer dispid 3;
    property Data: WideString readonly dispid 4;
    property LastError: Integer readonly dispid 5;
    procedure Encode; dispid 6;
    function GetErrorDescription(lCode: Integer): WideString; dispid 7;
    procedure Clear; dispid 8;
  end;

// *********************************************************************//
// Interface: ITemplatevCard
// Flags:     (4544) Dual NonExtensible OleAutomation Dispatchable
// GUID:      {FCB5DCC2-4DDD-465D-936F-40AEBDDD17C3}
// *********************************************************************//
  ITemplatevCard = interface(IDispatch)
    ['{FCB5DCC2-4DDD-465D-936F-40AEBDDD17C3}']
    procedure Clear; safecall;
    function GetErrorDescription(lError: Integer): WideString; safecall;
    function Get_url: WideString; safecall;
    procedure Set_url(const pVal: WideString); safecall;
    function Get_Title: WideString; safecall;
    procedure Set_Title(const pVal: WideString); safecall;
    function Get_EMail: WideString; safecall;
    procedure Set_EMail(const pVal: WideString); safecall;
    function Get_Fax: WideString; safecall;
    procedure Set_Fax(const pVal: WideString); safecall;
    function Get_Pager: WideString; safecall;
    procedure Set_Pager(const pVal: WideString); safecall;
    function Get_Mobile: WideString; safecall;
    procedure Set_Mobile(const pVal: WideString); safecall;
    function Get_PhoneHome: WideString; safecall;
    procedure Set_PhoneHome(const pVal: WideString); safecall;
    function Get_PhoneWork: WideString; safecall;
    procedure Set_PhoneWork(const pVal: WideString); safecall;
    function Get_Phone: WideString; safecall;
    procedure Set_Phone(const pVal: WideString); safecall;
    function Get_Name: WideString; safecall;
    procedure Set_Name(const pVal: WideString); safecall;
    procedure Encode; safecall;
    function Get_Data: WideString; safecall;
    function Get_LastError: Integer; safecall;
    property url: WideString read Get_url write Set_url;
    property Title: WideString read Get_Title write Set_Title;
    property EMail: WideString read Get_EMail write Set_EMail;
    property Fax: WideString read Get_Fax write Set_Fax;
    property Pager: WideString read Get_Pager write Set_Pager;
    property Mobile: WideString read Get_Mobile write Set_Mobile;
    property PhoneHome: WideString read Get_PhoneHome write Set_PhoneHome;
    property PhoneWork: WideString read Get_PhoneWork write Set_PhoneWork;
    property Phone: WideString read Get_Phone write Set_Phone;
    property Name: WideString read Get_Name write Set_Name;
    property Data: WideString read Get_Data;
    property LastError: Integer read Get_LastError;
  end;

// *********************************************************************//
// DispIntf:  ITemplatevCardDisp
// Flags:     (4544) Dual NonExtensible OleAutomation Dispatchable
// GUID:      {FCB5DCC2-4DDD-465D-936F-40AEBDDD17C3}
// *********************************************************************//
  ITemplatevCardDisp = dispinterface
    ['{FCB5DCC2-4DDD-465D-936F-40AEBDDD17C3}']
    procedure Clear; dispid 1;
    function GetErrorDescription(lError: Integer): WideString; dispid 2;
    property url: WideString dispid 3;
    property Title: WideString dispid 4;
    property EMail: WideString dispid 5;
    property Fax: WideString dispid 6;
    property Pager: WideString dispid 7;
    property Mobile: WideString dispid 8;
    property PhoneHome: WideString dispid 9;
    property PhoneWork: WideString dispid 10;
    property Phone: WideString dispid 11;
    property Name: WideString dispid 12;
    procedure Encode; dispid 13;
    property Data: WideString readonly dispid 14;
    property LastError: Integer readonly dispid 15;
  end;

// *********************************************************************//
// Interface: IDemoAccount
// Flags:     (4544) Dual NonExtensible OleAutomation Dispatchable
// GUID:      {231F4503-C639-479F-B799-4C9FCE0BDF9C}
// *********************************************************************//
  IDemoAccount = interface(IDispatch)
    ['{231F4503-C639-479F-B799-4C9FCE0BDF9C}']
    function Get_SystemId: WideString; safecall;
    function Get_Password: WideString; safecall;
    property SystemId: WideString read Get_SystemId;
    property Password: WideString read Get_Password;
  end;

// *********************************************************************//
// DispIntf:  IDemoAccountDisp
// Flags:     (4544) Dual NonExtensible OleAutomation Dispatchable
// GUID:      {231F4503-C639-479F-B799-4C9FCE0BDF9C}
// *********************************************************************//
  IDemoAccountDisp = dispinterface
    ['{231F4503-C639-479F-B799-4C9FCE0BDF9C}']
    property SystemId: WideString readonly dispid 1;
    property Password: WideString readonly dispid 2;
  end;

// *********************************************************************//
// The Class CoConstants provides a Create and CreateRemote method to          
// create instances of the default interface IConstants exposed by              
// the CoClass Constants. The functions are intended to be used by             
// clients wishing to automate the CoClass objects exposed by the         
// server of this typelibrary.                                            
// *********************************************************************//
  CoConstants = class
    class function Create: IConstants;
    class function CreateRemote(const MachineName: string): IConstants;
  end;

// *********************************************************************//
// The Class CoMessage provides a Create and CreateRemote method to          
// create instances of the default interface IMessage exposed by              
// the CoClass Message. The functions are intended to be used by             
// clients wishing to automate the CoClass objects exposed by the         
// server of this typelibrary.                                            
// *********************************************************************//
  CoMessage = class
    class function Create: IMessage;
    class function CreateRemote(const MachineName: string): IMessage;
  end;

// *********************************************************************//
// The Class CoTlv provides a Create and CreateRemote method to          
// create instances of the default interface ITlv exposed by              
// the CoClass Tlv. The functions are intended to be used by             
// clients wishing to automate the CoClass objects exposed by the         
// server of this typelibrary.                                            
// *********************************************************************//
  CoTlv = class
    class function Create: ITlv;
    class function CreateRemote(const MachineName: string): ITlv;
  end;

// *********************************************************************//
// The Class CoGsmDeliveryReport provides a Create and CreateRemote method to          
// create instances of the default interface IGsmDeliveryReport exposed by              
// the CoClass GsmDeliveryReport. The functions are intended to be used by             
// clients wishing to automate the CoClass objects exposed by the         
// server of this typelibrary.                                            
// *********************************************************************//
  CoGsmDeliveryReport = class
    class function Create: IGsmDeliveryReport;
    class function CreateRemote(const MachineName: string): IGsmDeliveryReport;
  end;

// *********************************************************************//
// The Class CoDialup provides a Create and CreateRemote method to          
// create instances of the default interface IDialup exposed by              
// the CoClass Dialup. The functions are intended to be used by             
// clients wishing to automate the CoClass objects exposed by the         
// server of this typelibrary.                                            
// *********************************************************************//
  CoDialup = class
    class function Create: IDialup;
    class function CreateRemote(const MachineName: string): IDialup;
  end;

// *********************************************************************//
// The Class CoAndroid provides a Create and CreateRemote method to          
// create instances of the default interface IAndroid exposed by              
// the CoClass Android. The functions are intended to be used by             
// clients wishing to automate the CoClass objects exposed by the         
// server of this typelibrary.                                            
// *********************************************************************//
  CoAndroid = class
    class function Create: IAndroid;
    class function CreateRemote(const MachineName: string): IAndroid;
  end;

// *********************************************************************//
// The Class CoGsm provides a Create and CreateRemote method to          
// create instances of the default interface IGsm exposed by              
// the CoClass Gsm. The functions are intended to be used by             
// clients wishing to automate the CoClass objects exposed by the         
// server of this typelibrary.                                            
// *********************************************************************//
  CoGsm = class
    class function Create: IGsm;
    class function CreateRemote(const MachineName: string): IGsm;
  end;

// *********************************************************************//
// The Class CoHttpServer provides a Create and CreateRemote method to          
// create instances of the default interface IHttpServer exposed by              
// the CoClass HttpServer. The functions are intended to be used by             
// clients wishing to automate the CoClass objects exposed by the         
// server of this typelibrary.                                            
// *********************************************************************//
  CoHttpServer = class
    class function Create: IHttpServer;
    class function CreateRemote(const MachineName: string): IHttpServer;
  end;

// *********************************************************************//
// The Class CoHttp provides a Create and CreateRemote method to          
// create instances of the default interface IHttp exposed by              
// the CoClass Http. The functions are intended to be used by             
// clients wishing to automate the CoClass objects exposed by the         
// server of this typelibrary.                                            
// *********************************************************************//
  CoHttp = class
    class function Create: IHttp;
    class function CreateRemote(const MachineName: string): IHttp;
  end;

// *********************************************************************//
// The Class CoSnpp provides a Create and CreateRemote method to          
// create instances of the default interface ISnpp exposed by              
// the CoClass Snpp. The functions are intended to be used by             
// clients wishing to automate the CoClass objects exposed by the         
// server of this typelibrary.                                            
// *********************************************************************//
  CoSnpp = class
    class function Create: ISnpp;
    class function CreateRemote(const MachineName: string): ISnpp;
  end;

// *********************************************************************//
// The Class CoSmpp provides a Create and CreateRemote method to          
// create instances of the default interface ISmpp exposed by              
// the CoClass Smpp. The functions are intended to be used by             
// clients wishing to automate the CoClass objects exposed by the         
// server of this typelibrary.                                            
// *********************************************************************//
  CoSmpp = class
    class function Create: ISmpp;
    class function CreateRemote(const MachineName: string): ISmpp;
  end;

// *********************************************************************//
// The Class CoSmppServer provides a Create and CreateRemote method to          
// create instances of the default interface ISmppServer exposed by              
// the CoClass SmppServer. The functions are intended to be used by             
// clients wishing to automate the CoClass objects exposed by the         
// server of this typelibrary.                                            
// *********************************************************************//
  CoSmppServer = class
    class function Create: ISmppServer;
    class function CreateRemote(const MachineName: string): ISmppServer;
  end;

// *********************************************************************//
// The Class CoSmppSession provides a Create and CreateRemote method to          
// create instances of the default interface ISmppSession exposed by              
// the CoClass SmppSession. The functions are intended to be used by             
// clients wishing to automate the CoClass objects exposed by the         
// server of this typelibrary.                                            
// *********************************************************************//
  CoSmppSession = class
    class function Create: ISmppSession;
    class function CreateRemote(const MachineName: string): ISmppSession;
  end;

// *********************************************************************//
// The Class CoTemplateWapPush provides a Create and CreateRemote method to          
// create instances of the default interface ITemplateWapPush exposed by              
// the CoClass TemplateWapPush. The functions are intended to be used by             
// clients wishing to automate the CoClass objects exposed by the         
// server of this typelibrary.                                            
// *********************************************************************//
  CoTemplateWapPush = class
    class function Create: ITemplateWapPush;
    class function CreateRemote(const MachineName: string): ITemplateWapPush;
  end;

// *********************************************************************//
// The Class CoTemplatevCard provides a Create and CreateRemote method to          
// create instances of the default interface ITemplatevCard exposed by              
// the CoClass TemplatevCard. The functions are intended to be used by             
// clients wishing to automate the CoClass objects exposed by the         
// server of this typelibrary.                                            
// *********************************************************************//
  CoTemplatevCard = class
    class function Create: ITemplatevCard;
    class function CreateRemote(const MachineName: string): ITemplatevCard;
  end;

// *********************************************************************//
// The Class CoDemoAccount provides a Create and CreateRemote method to          
// create instances of the default interface IDemoAccount exposed by              
// the CoClass DemoAccount. The functions are intended to be used by             
// clients wishing to automate the CoClass objects exposed by the         
// server of this typelibrary.                                            
// *********************************************************************//
  CoDemoAccount = class
    class function Create: IDemoAccount;
    class function CreateRemote(const MachineName: string): IDemoAccount;
  end;

implementation

uses ComObj;

class function CoConstants.Create: IConstants;
begin
  Result := CreateComObject(CLASS_Constants) as IConstants;
end;

class function CoConstants.CreateRemote(const MachineName: string): IConstants;
begin
  Result := CreateRemoteComObject(MachineName, CLASS_Constants) as IConstants;
end;

class function CoMessage.Create: IMessage;
begin
  Result := CreateComObject(CLASS_Message) as IMessage;
end;

class function CoMessage.CreateRemote(const MachineName: string): IMessage;
begin
  Result := CreateRemoteComObject(MachineName, CLASS_Message) as IMessage;
end;

class function CoTlv.Create: ITlv;
begin
  Result := CreateComObject(CLASS_Tlv) as ITlv;
end;

class function CoTlv.CreateRemote(const MachineName: string): ITlv;
begin
  Result := CreateRemoteComObject(MachineName, CLASS_Tlv) as ITlv;
end;

class function CoGsmDeliveryReport.Create: IGsmDeliveryReport;
begin
  Result := CreateComObject(CLASS_GsmDeliveryReport) as IGsmDeliveryReport;
end;

class function CoGsmDeliveryReport.CreateRemote(const MachineName: string): IGsmDeliveryReport;
begin
  Result := CreateRemoteComObject(MachineName, CLASS_GsmDeliveryReport) as IGsmDeliveryReport;
end;

class function CoDialup.Create: IDialup;
begin
  Result := CreateComObject(CLASS_Dialup) as IDialup;
end;

class function CoDialup.CreateRemote(const MachineName: string): IDialup;
begin
  Result := CreateRemoteComObject(MachineName, CLASS_Dialup) as IDialup;
end;

class function CoAndroid.Create: IAndroid;
begin
  Result := CreateComObject(CLASS_Android) as IAndroid;
end;

class function CoAndroid.CreateRemote(const MachineName: string): IAndroid;
begin
  Result := CreateRemoteComObject(MachineName, CLASS_Android) as IAndroid;
end;

class function CoGsm.Create: IGsm;
begin
  Result := CreateComObject(CLASS_Gsm) as IGsm;
end;

class function CoGsm.CreateRemote(const MachineName: string): IGsm;
begin
  Result := CreateRemoteComObject(MachineName, CLASS_Gsm) as IGsm;
end;

class function CoHttpServer.Create: IHttpServer;
begin
  Result := CreateComObject(CLASS_HttpServer) as IHttpServer;
end;

class function CoHttpServer.CreateRemote(const MachineName: string): IHttpServer;
begin
  Result := CreateRemoteComObject(MachineName, CLASS_HttpServer) as IHttpServer;
end;

class function CoHttp.Create: IHttp;
begin
  Result := CreateComObject(CLASS_Http) as IHttp;
end;

class function CoHttp.CreateRemote(const MachineName: string): IHttp;
begin
  Result := CreateRemoteComObject(MachineName, CLASS_Http) as IHttp;
end;

class function CoSnpp.Create: ISnpp;
begin
  Result := CreateComObject(CLASS_Snpp) as ISnpp;
end;

class function CoSnpp.CreateRemote(const MachineName: string): ISnpp;
begin
  Result := CreateRemoteComObject(MachineName, CLASS_Snpp) as ISnpp;
end;

class function CoSmpp.Create: ISmpp;
begin
  Result := CreateComObject(CLASS_Smpp) as ISmpp;
end;

class function CoSmpp.CreateRemote(const MachineName: string): ISmpp;
begin
  Result := CreateRemoteComObject(MachineName, CLASS_Smpp) as ISmpp;
end;

class function CoSmppServer.Create: ISmppServer;
begin
  Result := CreateComObject(CLASS_SmppServer) as ISmppServer;
end;

class function CoSmppServer.CreateRemote(const MachineName: string): ISmppServer;
begin
  Result := CreateRemoteComObject(MachineName, CLASS_SmppServer) as ISmppServer;
end;

class function CoSmppSession.Create: ISmppSession;
begin
  Result := CreateComObject(CLASS_SmppSession) as ISmppSession;
end;

class function CoSmppSession.CreateRemote(const MachineName: string): ISmppSession;
begin
  Result := CreateRemoteComObject(MachineName, CLASS_SmppSession) as ISmppSession;
end;

class function CoTemplateWapPush.Create: ITemplateWapPush;
begin
  Result := CreateComObject(CLASS_TemplateWapPush) as ITemplateWapPush;
end;

class function CoTemplateWapPush.CreateRemote(const MachineName: string): ITemplateWapPush;
begin
  Result := CreateRemoteComObject(MachineName, CLASS_TemplateWapPush) as ITemplateWapPush;
end;

class function CoTemplatevCard.Create: ITemplatevCard;
begin
  Result := CreateComObject(CLASS_TemplatevCard) as ITemplatevCard;
end;

class function CoTemplatevCard.CreateRemote(const MachineName: string): ITemplatevCard;
begin
  Result := CreateRemoteComObject(MachineName, CLASS_TemplatevCard) as ITemplatevCard;
end;

class function CoDemoAccount.Create: IDemoAccount;
begin
  Result := CreateComObject(CLASS_DemoAccount) as IDemoAccount;
end;

class function CoDemoAccount.CreateRemote(const MachineName: string): IDemoAccount;
begin
  Result := CreateRemoteComObject(MachineName, CLASS_DemoAccount) as IDemoAccount;
end;

end.
