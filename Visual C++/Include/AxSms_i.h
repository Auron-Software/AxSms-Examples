

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Sun Jun 19 23:40:22 2022
 */
/* Compiler settings for AxSms.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __AxSms_i_h__
#define __AxSms_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IConstants_FWD_DEFINED__
#define __IConstants_FWD_DEFINED__
typedef interface IConstants IConstants;
#endif 	/* __IConstants_FWD_DEFINED__ */


#ifndef __ITlv_FWD_DEFINED__
#define __ITlv_FWD_DEFINED__
typedef interface ITlv ITlv;
#endif 	/* __ITlv_FWD_DEFINED__ */


#ifndef __IMessage_FWD_DEFINED__
#define __IMessage_FWD_DEFINED__
typedef interface IMessage IMessage;
#endif 	/* __IMessage_FWD_DEFINED__ */


#ifndef __IGsmDeliveryReport_FWD_DEFINED__
#define __IGsmDeliveryReport_FWD_DEFINED__
typedef interface IGsmDeliveryReport IGsmDeliveryReport;
#endif 	/* __IGsmDeliveryReport_FWD_DEFINED__ */


#ifndef __IDialup_FWD_DEFINED__
#define __IDialup_FWD_DEFINED__
typedef interface IDialup IDialup;
#endif 	/* __IDialup_FWD_DEFINED__ */


#ifndef __IAndroid_FWD_DEFINED__
#define __IAndroid_FWD_DEFINED__
typedef interface IAndroid IAndroid;
#endif 	/* __IAndroid_FWD_DEFINED__ */


#ifndef __IGsm_FWD_DEFINED__
#define __IGsm_FWD_DEFINED__
typedef interface IGsm IGsm;
#endif 	/* __IGsm_FWD_DEFINED__ */


#ifndef __IHttpServer_FWD_DEFINED__
#define __IHttpServer_FWD_DEFINED__
typedef interface IHttpServer IHttpServer;
#endif 	/* __IHttpServer_FWD_DEFINED__ */


#ifndef __IHttp_FWD_DEFINED__
#define __IHttp_FWD_DEFINED__
typedef interface IHttp IHttp;
#endif 	/* __IHttp_FWD_DEFINED__ */


#ifndef __ISnpp_FWD_DEFINED__
#define __ISnpp_FWD_DEFINED__
typedef interface ISnpp ISnpp;
#endif 	/* __ISnpp_FWD_DEFINED__ */


#ifndef __ISmpp_FWD_DEFINED__
#define __ISmpp_FWD_DEFINED__
typedef interface ISmpp ISmpp;
#endif 	/* __ISmpp_FWD_DEFINED__ */


#ifndef __ISmppSession_FWD_DEFINED__
#define __ISmppSession_FWD_DEFINED__
typedef interface ISmppSession ISmppSession;
#endif 	/* __ISmppSession_FWD_DEFINED__ */


#ifndef __ISmppServer_FWD_DEFINED__
#define __ISmppServer_FWD_DEFINED__
typedef interface ISmppServer ISmppServer;
#endif 	/* __ISmppServer_FWD_DEFINED__ */


#ifndef __ITemplateWapPush_FWD_DEFINED__
#define __ITemplateWapPush_FWD_DEFINED__
typedef interface ITemplateWapPush ITemplateWapPush;
#endif 	/* __ITemplateWapPush_FWD_DEFINED__ */


#ifndef __ITemplatevCard_FWD_DEFINED__
#define __ITemplatevCard_FWD_DEFINED__
typedef interface ITemplatevCard ITemplatevCard;
#endif 	/* __ITemplatevCard_FWD_DEFINED__ */


#ifndef __IDemoAccount_FWD_DEFINED__
#define __IDemoAccount_FWD_DEFINED__
typedef interface IDemoAccount IDemoAccount;
#endif 	/* __IDemoAccount_FWD_DEFINED__ */


#ifndef __Constants_FWD_DEFINED__
#define __Constants_FWD_DEFINED__

#ifdef __cplusplus
typedef class Constants Constants;
#else
typedef struct Constants Constants;
#endif /* __cplusplus */

#endif 	/* __Constants_FWD_DEFINED__ */


#ifndef __Message_FWD_DEFINED__
#define __Message_FWD_DEFINED__

#ifdef __cplusplus
typedef class Message Message;
#else
typedef struct Message Message;
#endif /* __cplusplus */

#endif 	/* __Message_FWD_DEFINED__ */


#ifndef __Tlv_FWD_DEFINED__
#define __Tlv_FWD_DEFINED__

#ifdef __cplusplus
typedef class Tlv Tlv;
#else
typedef struct Tlv Tlv;
#endif /* __cplusplus */

#endif 	/* __Tlv_FWD_DEFINED__ */


#ifndef __GsmDeliveryReport_FWD_DEFINED__
#define __GsmDeliveryReport_FWD_DEFINED__

#ifdef __cplusplus
typedef class GsmDeliveryReport GsmDeliveryReport;
#else
typedef struct GsmDeliveryReport GsmDeliveryReport;
#endif /* __cplusplus */

#endif 	/* __GsmDeliveryReport_FWD_DEFINED__ */


#ifndef __Dialup_FWD_DEFINED__
#define __Dialup_FWD_DEFINED__

#ifdef __cplusplus
typedef class Dialup Dialup;
#else
typedef struct Dialup Dialup;
#endif /* __cplusplus */

#endif 	/* __Dialup_FWD_DEFINED__ */


#ifndef __Android_FWD_DEFINED__
#define __Android_FWD_DEFINED__

#ifdef __cplusplus
typedef class Android Android;
#else
typedef struct Android Android;
#endif /* __cplusplus */

#endif 	/* __Android_FWD_DEFINED__ */


#ifndef __Gsm_FWD_DEFINED__
#define __Gsm_FWD_DEFINED__

#ifdef __cplusplus
typedef class Gsm Gsm;
#else
typedef struct Gsm Gsm;
#endif /* __cplusplus */

#endif 	/* __Gsm_FWD_DEFINED__ */


#ifndef __HttpServer_FWD_DEFINED__
#define __HttpServer_FWD_DEFINED__

#ifdef __cplusplus
typedef class HttpServer HttpServer;
#else
typedef struct HttpServer HttpServer;
#endif /* __cplusplus */

#endif 	/* __HttpServer_FWD_DEFINED__ */


#ifndef __Http_FWD_DEFINED__
#define __Http_FWD_DEFINED__

#ifdef __cplusplus
typedef class Http Http;
#else
typedef struct Http Http;
#endif /* __cplusplus */

#endif 	/* __Http_FWD_DEFINED__ */


#ifndef __Snpp_FWD_DEFINED__
#define __Snpp_FWD_DEFINED__

#ifdef __cplusplus
typedef class Snpp Snpp;
#else
typedef struct Snpp Snpp;
#endif /* __cplusplus */

#endif 	/* __Snpp_FWD_DEFINED__ */


#ifndef __Smpp_FWD_DEFINED__
#define __Smpp_FWD_DEFINED__

#ifdef __cplusplus
typedef class Smpp Smpp;
#else
typedef struct Smpp Smpp;
#endif /* __cplusplus */

#endif 	/* __Smpp_FWD_DEFINED__ */


#ifndef __SmppServer_FWD_DEFINED__
#define __SmppServer_FWD_DEFINED__

#ifdef __cplusplus
typedef class SmppServer SmppServer;
#else
typedef struct SmppServer SmppServer;
#endif /* __cplusplus */

#endif 	/* __SmppServer_FWD_DEFINED__ */


#ifndef __SmppSession_FWD_DEFINED__
#define __SmppSession_FWD_DEFINED__

#ifdef __cplusplus
typedef class SmppSession SmppSession;
#else
typedef struct SmppSession SmppSession;
#endif /* __cplusplus */

#endif 	/* __SmppSession_FWD_DEFINED__ */


#ifndef __TemplateWapPush_FWD_DEFINED__
#define __TemplateWapPush_FWD_DEFINED__

#ifdef __cplusplus
typedef class TemplateWapPush TemplateWapPush;
#else
typedef struct TemplateWapPush TemplateWapPush;
#endif /* __cplusplus */

#endif 	/* __TemplateWapPush_FWD_DEFINED__ */


#ifndef __TemplatevCard_FWD_DEFINED__
#define __TemplatevCard_FWD_DEFINED__

#ifdef __cplusplus
typedef class TemplatevCard TemplatevCard;
#else
typedef struct TemplatevCard TemplatevCard;
#endif /* __cplusplus */

#endif 	/* __TemplatevCard_FWD_DEFINED__ */


#ifndef __DemoAccount_FWD_DEFINED__
#define __DemoAccount_FWD_DEFINED__

#ifdef __cplusplus
typedef class DemoAccount DemoAccount;
#else
typedef struct DemoAccount DemoAccount;
#endif /* __cplusplus */

#endif 	/* __DemoAccount_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IConstants_INTERFACE_DEFINED__
#define __IConstants_INTERFACE_DEFINED__

/* interface IConstants */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IConstants;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7D47E1D0-4B72-4A5D-B174-A0E82AF73892")
    IConstants : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_BIND_TRANSMITTER( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_BIND_TRANSCEIVER( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_BIND_RECEIVER( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_VERSION_33( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_VERSION_34( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_VERSION_50( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_TON_UNKNOWN( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_TON_INTERNATIONAL( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_TON_NATIONAL( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_TON_NETWORK_SPECIFIC( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_TON_SUBSCRIBER_NUMBER( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_TON_ALPHANUMERIC( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_TON_ABBREVIATED( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_NPI_UNKNOWN( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_NPI_ISDN( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_NPI_DATA( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_NPI_TELEX( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_NPI_NATIONAL( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_NPI_PRIVATE( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_NPI_ERMES( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_NPI_INTERNET( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_NPI_LAND_MOBILE( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MULTIPART_ACCEPT( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MULTIPART_TRUNCATE( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MULTIPART_REJECT( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_BODYFORMAT_TEXT( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_BODYFORMAT_HEX( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESM_2ESME_DEFAULT( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESM_2ESME_DELIVERY_RECEIPT( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESM_2ESME_DELIVERY_ACK( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESM_2ESME_MANUAL_ACK( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESM_2ESME_CONVERSATION_ABORT( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESM_2ESME_INTERMEDIATE_DELIVERY_NOTIFY( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESM_2SMSC_MODE_DEFAULT( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESM_2SMSC_MODE_STOREFORWARD( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESM_2SMSC_MODE_DATAGRAM( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESM_2SMSC_MODE_FORWARD( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESM_2SMSC_TYPE_DEFAULT( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESM_2SMSC_TYPE_DELIVERY_ACK( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESM_2SMSC_TYPE_MANUAL_ACK( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESM_2SMSC_FEAT_NOTHING( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESM_2SMSC_FEAT_UDHI( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESM_2SMSC_FEAT_SRP( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_USEGSMENCODING_DISABLED( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_USEGSMENCODING_INANDOUT( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_USEGSMENCODING_INCOMING( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_USEGSMENCODING_OUTGOING( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_DATACODING_ASCII( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_DATACODING_OCTET_UNSPEC( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_DATACODING_LATIN( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_DATACODING_JIS_KANJI( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_DATACODING_CYRILLIC( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_DATACODING_LATIN_HEBREW( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_DATACODING_PICTOGRAM( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_DATACODING_ISO_2022_JP( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_DATACODING_EXTENDED_KANJI_JIS( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_DATACODING_KS_C_5601( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_PRIORITYFLAG_BULK( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_PRIORITYFLAG_NORMAL( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_PRIORITYFLAG_URGENT( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_PRIORITYFLAG_VERY_URGENT( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_MESSAGESTATE_AX_WAITRESP( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_MESSAGESTATE_ENROUTE( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_MESSAGESTATE_DELIVERED( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_MESSAGESTATE_EXPIRED( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_MESSAGESTATE_DELETED( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_MESSAGESTATE_UNDELIVERABLE( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_MESSAGESTATE_ACCEPTED( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_MESSAGESTATE_UNKNOWN( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_MESSAGESTATE_REJECTED( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_MESSAGESTATE_AX_RESPERROR( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_MESSAGESTATE_AX_NOCREDITS( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_MESSAGESTATE_AX_RESPTO( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_MESSAGESTATE_AX_RESPONDED( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_SESSIONSTATE_CONNECTED( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_SESSIONSTATE_DISCONNECTED( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_SESSIONSTATE_BINDING( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_SESSIONSTATE_BOUND_TX( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_SESSIONSTATE_BOUND_RX( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_SESSIONSTATE_BOUND_TRX( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_TLV_DEST_ADDR_SUBUNIT( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_TLV_DEST_NETWORK_TYPE( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_TLV_DEST_BEARER_TYPE( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_TLV_DEST_TELEMATICS_ID( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_TLV_SOURCE_ADDR_SUBUNIT( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_TLV_SOURCE_NETWORK_TYPE( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_TLV_SOURCE_BEARER_TYPE( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_TLV_SOURCE_TELEMATICS_ID( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_TLV_QOS_TIME_TO_LIVE( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_TLV_PAYLOAD_TYPE( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_TLV_ADDITIONAL_STATUS_INFO_TEXT( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_TLV_RECEIPTED_MESSAGE_ID( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_TLV_MS_MSG_WAIT_FACILITIES( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_TLV_PRIVACY_INDICATOR( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_TLV_SOURCE_SUBADDRESS( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_TLV_DEST_SUBADDRESS( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_TLV_USER_MESSAGE_REFERENCE( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_TLV_USER_RESPONSE_CODE( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_TLV_SOURCE_PORT( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_TLV_DESTINATION_PORT( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_TLV_SAR_MSG_REF_NUM( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_TLV_LANGUAGE_INDICATOR( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_TLV_SAR_TOTAL_SEGMENTS( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_TLV_SAR_SEGMENT_SEQNUM( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_TLV_SC_INTERFACE_VERSION( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_TLV_CALLBACK_NUM_PRES_IND( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_TLV_CALLBACK_NUM_ATAG( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_TLV_NUMBER_OF_MESSAGES( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_TLV_CALLBACK_NUM( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_TLV_DPF_RESULT( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_TLV_SET_DPF( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_TLV_MS_AVAILABILITY_STATUS( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_TLV_NETWORK_ERROR_CODE( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_TLV_MESSAGE_PAYLOAD( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_TLV_DELIVERY_FAILURE_REASON( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_TLV_MORE_MESSAGES_TO_SEND( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_TLV_MESSAGE_STATE( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_TLV_CONGESTION_STATE( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_TLV_USSD_SERVICE_OP( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_TLV_DISPLAY_TIME( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_TLV_SMS_SIGNAL( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_TLV_MS_VALIDITY( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_TLV_ALERT_ON_MESSAGE_DELIVERY( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_TLV_ITS_REPLY_TYPE( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_TLV_ITS_SESSION_INFO( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_MULTIPARTMODE_UDH( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_MULTIPARTMODE_UDH16BIT( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_MULTIPARTMODE_SARTLV( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_MULTIPARTMODE_PAYLOADTLV( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_LOGLEVEL_MINIMAL( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_LOGLEVEL_NORMAL( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_LOGLEVEL_VERBOSE( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_SUBMITMODE_SUBMITSM( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_SUBMITMODE_DATASM( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_DELIVERMODE_DELIVERSM( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_DELIVERMODE_DATASM( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_USEGSMENCODING_INCHARSET( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_USEGSMENCODING_OUTCHARSET( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_USEGSMENCODING_INOUTCHARS( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_IPVERSION_4( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_IPVERSION_6( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_IPVERSION_BOTH( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_CERTIFICATESTORE_LOCALMACHINE( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_CERTIFICATESTORE_CURRENTUSER( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESME_ROK( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESME_RINVMSGLEN( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESME_RINVCMDLEN( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESME_RINVCMDID( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESME_RINVBNDSTS( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESME_RALYBND( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESME_RINVPRTFLG( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESME_RINVREGDLVFLG( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESME_RSYSERR( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESME_RINVSRCADR( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESME_RINVDSTADR( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESME_RINVMSGID( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESME_RBINDFAIL( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESME_RINVPASWD( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESME_RINVSYSID( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESME_RCANCELFAIL( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESME_RREPLACEFAIL( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESME_RMSGQFUL( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESME_RINVSERTYP( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESME_RINVNUMDESTS( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESME_RINVDLNAME( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESME_RINVDESTFLAG( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESME_RINVSUBREP( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESME_RINVESMCLASS( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESME_RCNTSUBDL( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESME_RSUBMITFAIL( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESME_RINVSRCTON( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESME_RINVSRCNPI( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESME_RINVDSTTON( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESME_RINVDSTNPI( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESME_RINVSYSTYP( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESME_RINVREPFLAG( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESME_RINVNUMMSGS( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESME_RTHROTTLED( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESME_RINVSCHED( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESME_RINVEXPIRY( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESME_RINVDFTMSGID( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESME_RX_T_APPN( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESME_RX_P_APPN( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESME_RX_R_APPN( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESME_RQUERYFAIL( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESME_RINVOPTPARSTREAM( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESME_ROPTPARNOTALLWD( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESME_RINVPARLEN( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESME_RMISSINGOPTPARAM( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESME_RINVOPTPARAMVAL( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESME_RDELIVERYFAILURE( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMPP_ESME_RUNKNOWNERR( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_STATUS_MESSAGE_DELIVERED_SUCCESSFULLY( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_STATUS_FORWARDED_STATUS_UNKNOWN( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_STATUS_REPLACED( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_STATUS_CONGESTION_STILL_TRYING( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_STATUS_RECIPIENT_BUSY_STILL_TRYING( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_STATUS_NO_RESPONSE_STILL_TRYING( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_STATUS_SERVICE_REJECTED_STILL_TRYING( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_STATUS_QOS_NOT_AVAILABLE_STILL_TRYING( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_STATUS_RECIPIENT_ERROR_STILL_TRYING( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_STATUS_RPC_ERROR( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_STATUS_INCOMPATIBLE_DESTINATION( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_STATUS_CONNECTION_REJECTED( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_STATUS_NOT_OBTAINABLE( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_STATUS_QOS_NOT_AVAILABLE( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_STATUS_NO_INTERNETWORKING_AVAILABLE( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_STATUS_MESSAGE_EXPIRED( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_STATUS_MESSAGE_DELETED_BY_SENDER( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_STATUS_MESSAGE_DELETED_BY_SMSC( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_STATUS_DOES_NOT_EXIST( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_STORAGETYPE_SIM( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_STORAGETYPE_MEMORY( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_STORAGETYPE_COMBINED( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_STORAGETYPE_STATUS( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_STORAGETYPE_ALL( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_FO_REPLYPATH_EXISTS( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_FO_UDHI( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_FO_STATUS_REPORT( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_FO_VALIDITY_NONE( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_FO_VALIDITY_RELATIVE( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_FO_VALIDITY_ENHANCED( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_FO_VALIDITY_ABSOLUTE( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_FO_REJECT_DUPLICATES( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_FO_SUBMIT_SM( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_FO_DELIVER_SM( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_FO_STATUS_SM( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DATACODING_DEFAULT( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DATACODING_8BIT_DATA( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DATACODING_UNICODE( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_DATACODING_ME_SPECIFIC( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_DATACODING_SIM_SPECIFIC( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_DATACODING_TE_SPECIFIC( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DATACODING_FLASH( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_BAUDRATE_110( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_BAUDRATE_300( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_BAUDRATE_600( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_BAUDRATE_1200( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_BAUDRATE_2400( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_BAUDRATE_4800( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_BAUDRATE_9600( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_BAUDRATE_14400( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_BAUDRATE_19200( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_BAUDRATE_38400( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_BAUDRATE_56000( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_BAUDRATE_57600( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_BAUDRATE_64000( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_BAUDRATE_115200( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_BAUDRATE_128000( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_BAUDRATE_230400( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_BAUDRATE_256000( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_BAUDRATE_460800( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_BAUDRATE_921600( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_BAUDRATE_DEFAULT( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_MESSAGESTATE_RECEIVED_UNREAD( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_MESSAGESTATE_RECEIVED_READ( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_MESSAGESTATE_STORED_UNSENT( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_MESSAGESTATE_STORED_SENT( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_MESSAGESTATE_ALL( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_MESSAGEFORMAT_PDU( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_MESSAGEFORMAT_TEXT( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_MESSAGEFORMAT_AUTO( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HTTP_PLACEHOLDER_USERTAG( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HTTP_PLACEHOLDER_TOADDRESS( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HTTP_PLACEHOLDER_FROMADDRESS( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HTTP_PLACEHOLDER_BODY( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HTTP_PLACEHOLDER_BODYASHEX( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HTTP_PLACEHOLDER_BODYASBASE64( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HTTP_PLACEHOLDER_DELIVERYREPORT( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HTTP_PLACEHOLDER_TOADDRESSTON( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HTTP_PLACEHOLDER_TOADDRESSNPI( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HTTP_PLACEHOLDER_FROMADDRESSTON( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HTTP_PLACEHOLDER_FROMADDRESSNPI( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HTTP_PLACEHOLDER_PROTOCOLID( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HTTP_PLACEHOLDER_UDHI( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HTTP_PLACEHOLDER_DATACODING( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HTTP_PLACEHOLDER_USERTAGSTRING( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_PREFIXSMSC_ENABLED( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_PREFIXSMSC_DISABLED( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_PREFIXSMSC_AUTO( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_TCPMODE_RAW( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_TCPMODE_TELNET( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GSM_TCPMODE_TELNET_WITH_COMCONTROL( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_WAPPUSH_SIGNAL_NONE( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_WAPPUSH_SIGNAL_LOW( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_WAPPUSH_SIGNAL_MEDIUM( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_WAPPUSH_SIGNAL_HIGH( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_WAPPUSH_SIGNAL_DELETE( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DIALUP_PROVIDERTYPE_UCP( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DIALUP_PROVIDERTYPE_TAP_DEFAULT( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DIALUP_PROVIDERTYPE_TAP_NOLF( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DIALUP_PROVIDERTYPE_TAP_NOEOT( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DIALUP_DIALMODE_TONE( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DIALUP_DIALMODE_PULSE( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DIALUP_DEVICESETTINGS_DEFAULT( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DIALUP_DEVICESETTINGS_8N1( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DIALUP_DEVICESETTINGS_7E1( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LANGUAGE_LOCKINGSHIFT_BASIC( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LANGUAGE_LOCKINGSHIFT_TURKISH( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LANGUAGE_LOCKINGSHIFT_PORTUGUESE( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LANGUAGE_LOCKINGSHIFT_SPANISH( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LANGUAGE_LOCKINGSHIFT_BENGALI( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LANGUAGE_LOCKINGSHIFT_GUJARATI( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LANGUAGE_LOCKINGSHIFT_HINDI( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LANGUAGE_LOCKINGSHIFT_KANNADA( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LANGUAGE_LOCKINGSHIFT_MALAYALAM( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LANGUAGE_LOCKINGSHIFT_ORIYA( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LANGUAGE_LOCKINGSHIFT_PUNJABI( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LANGUAGE_LOCKINGSHIFT_TAMIL( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LANGUAGE_LOCKINGSHIFT_TELUGU( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LANGUAGE_LOCKINGSHIFT_URDU( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LANGUAGE_SINGLESHIFT_BASIC( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LANGUAGE_SINGLESHIFT_TURKISH( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LANGUAGE_SINGLESHIFT_SPANISH( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LANGUAGE_SINGLESHIFT_PORTUGUESE( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LANGUAGE_SINGLESHIFT_BENGALI( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LANGUAGE_SINGLESHIFT_GUJARATI( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LANGUAGE_SINGLESHIFT_HINDI( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LANGUAGE_SINGLESHIFT_KANNADA( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LANGUAGE_SINGLESHIFT_MALAYALAM( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LANGUAGE_SINGLESHIFT_ORIYA( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LANGUAGE_SINGLESHIFT_PUNJABI( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LANGUAGE_SINGLESHIFT_TAMIL( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LANGUAGE_SINGLESHIFT_TELUGU( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LANGUAGE_SINGLESHIFT_URDU( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SmppBindToString( 
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SmppVersionToString( 
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE TonToString( 
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE NpiToString( 
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE MultipartToString( 
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE BodyformatToString( 
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SmppEsm2SmscToString( 
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SmppEsm2EsmeToString( 
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SmppUseGsmEncodingToString( 
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SmppDataCodingToString( 
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SmppPriorityFlagToString( 
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SmppMessageStateToString( 
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SmppSessionStateToString( 
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SmppTlvToString( 
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SmppMultipartModeToString( 
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SmppSubmitModeToString( 
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SmppEsmeToString( 
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GsmStatusToString( 
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GsmStorageTypeToString( 
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GsmFoToString( 
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GsmDataCodingToString( 
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GsmBaudrateToString( 
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GsmMessageStateToString( 
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GsmMessageFormatToString( 
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GsmPrefixSmscToString( 
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE WapPushSignalToString( 
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DialupProviderTypeToString( 
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DialupDialModeToString( 
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DialupDeviceSettingsToString( 
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GsmTcpModeToString( 
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE LanguageLockingShiftToString( 
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE LanguageSingleShiftToString( 
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IConstantsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IConstants * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IConstants * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IConstants * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IConstants * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IConstants * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IConstants * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IConstants * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_BIND_TRANSMITTER )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_BIND_TRANSCEIVER )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_BIND_RECEIVER )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_VERSION_33 )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_VERSION_34 )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_VERSION_50 )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TON_UNKNOWN )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TON_INTERNATIONAL )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TON_NATIONAL )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TON_NETWORK_SPECIFIC )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TON_SUBSCRIBER_NUMBER )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TON_ALPHANUMERIC )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_TON_ABBREVIATED )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NPI_UNKNOWN )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NPI_ISDN )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NPI_DATA )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NPI_TELEX )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NPI_NATIONAL )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NPI_PRIVATE )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NPI_ERMES )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_NPI_INTERNET )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NPI_LAND_MOBILE )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MULTIPART_ACCEPT )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MULTIPART_TRUNCATE )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MULTIPART_REJECT )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BODYFORMAT_TEXT )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BODYFORMAT_HEX )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESM_2ESME_DEFAULT )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESM_2ESME_DELIVERY_RECEIPT )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESM_2ESME_DELIVERY_ACK )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESM_2ESME_MANUAL_ACK )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESM_2ESME_CONVERSATION_ABORT )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESM_2ESME_INTERMEDIATE_DELIVERY_NOTIFY )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESM_2SMSC_MODE_DEFAULT )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESM_2SMSC_MODE_STOREFORWARD )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESM_2SMSC_MODE_DATAGRAM )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESM_2SMSC_MODE_FORWARD )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESM_2SMSC_TYPE_DEFAULT )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESM_2SMSC_TYPE_DELIVERY_ACK )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESM_2SMSC_TYPE_MANUAL_ACK )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESM_2SMSC_FEAT_NOTHING )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESM_2SMSC_FEAT_UDHI )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESM_2SMSC_FEAT_SRP )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_USEGSMENCODING_DISABLED )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_USEGSMENCODING_INANDOUT )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_USEGSMENCODING_INCOMING )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_USEGSMENCODING_OUTGOING )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_DATACODING_ASCII )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_DATACODING_OCTET_UNSPEC )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_DATACODING_LATIN )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_DATACODING_JIS_KANJI )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_DATACODING_CYRILLIC )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_DATACODING_LATIN_HEBREW )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_DATACODING_PICTOGRAM )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_DATACODING_ISO_2022_JP )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_DATACODING_EXTENDED_KANJI_JIS )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_DATACODING_KS_C_5601 )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_PRIORITYFLAG_BULK )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_PRIORITYFLAG_NORMAL )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_PRIORITYFLAG_URGENT )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_PRIORITYFLAG_VERY_URGENT )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_MESSAGESTATE_AX_WAITRESP )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_MESSAGESTATE_ENROUTE )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_MESSAGESTATE_DELIVERED )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_MESSAGESTATE_EXPIRED )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_MESSAGESTATE_DELETED )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_MESSAGESTATE_UNDELIVERABLE )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_MESSAGESTATE_ACCEPTED )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_MESSAGESTATE_UNKNOWN )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_MESSAGESTATE_REJECTED )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_MESSAGESTATE_AX_RESPERROR )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_MESSAGESTATE_AX_NOCREDITS )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_MESSAGESTATE_AX_RESPTO )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_MESSAGESTATE_AX_RESPONDED )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_SESSIONSTATE_CONNECTED )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_SESSIONSTATE_DISCONNECTED )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_SESSIONSTATE_BINDING )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_SESSIONSTATE_BOUND_TX )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_SESSIONSTATE_BOUND_RX )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_SESSIONSTATE_BOUND_TRX )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_TLV_DEST_ADDR_SUBUNIT )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_TLV_DEST_NETWORK_TYPE )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_TLV_DEST_BEARER_TYPE )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_TLV_DEST_TELEMATICS_ID )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_TLV_SOURCE_ADDR_SUBUNIT )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_TLV_SOURCE_NETWORK_TYPE )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_TLV_SOURCE_BEARER_TYPE )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_TLV_SOURCE_TELEMATICS_ID )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_TLV_QOS_TIME_TO_LIVE )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_TLV_PAYLOAD_TYPE )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_TLV_ADDITIONAL_STATUS_INFO_TEXT )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_TLV_RECEIPTED_MESSAGE_ID )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_TLV_MS_MSG_WAIT_FACILITIES )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_TLV_PRIVACY_INDICATOR )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_TLV_SOURCE_SUBADDRESS )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_TLV_DEST_SUBADDRESS )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_TLV_USER_MESSAGE_REFERENCE )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_TLV_USER_RESPONSE_CODE )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_TLV_SOURCE_PORT )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_TLV_DESTINATION_PORT )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_TLV_SAR_MSG_REF_NUM )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_TLV_LANGUAGE_INDICATOR )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_TLV_SAR_TOTAL_SEGMENTS )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_TLV_SAR_SEGMENT_SEQNUM )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_TLV_SC_INTERFACE_VERSION )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_TLV_CALLBACK_NUM_PRES_IND )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_TLV_CALLBACK_NUM_ATAG )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_TLV_NUMBER_OF_MESSAGES )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_TLV_CALLBACK_NUM )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_TLV_DPF_RESULT )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_TLV_SET_DPF )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_TLV_MS_AVAILABILITY_STATUS )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_TLV_NETWORK_ERROR_CODE )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_TLV_MESSAGE_PAYLOAD )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_TLV_DELIVERY_FAILURE_REASON )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_TLV_MORE_MESSAGES_TO_SEND )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_TLV_MESSAGE_STATE )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_TLV_CONGESTION_STATE )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_TLV_USSD_SERVICE_OP )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_TLV_DISPLAY_TIME )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_TLV_SMS_SIGNAL )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_TLV_MS_VALIDITY )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_TLV_ALERT_ON_MESSAGE_DELIVERY )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_TLV_ITS_REPLY_TYPE )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_TLV_ITS_SESSION_INFO )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_MULTIPARTMODE_UDH )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_MULTIPARTMODE_UDH16BIT )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_MULTIPARTMODE_SARTLV )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_MULTIPARTMODE_PAYLOADTLV )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_LOGLEVEL_MINIMAL )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_LOGLEVEL_NORMAL )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_LOGLEVEL_VERBOSE )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_SUBMITMODE_SUBMITSM )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_SUBMITMODE_DATASM )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_DELIVERMODE_DELIVERSM )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_DELIVERMODE_DATASM )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_USEGSMENCODING_INCHARSET )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_USEGSMENCODING_OUTCHARSET )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_USEGSMENCODING_INOUTCHARS )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_IPVERSION_4 )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_IPVERSION_6 )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_IPVERSION_BOTH )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_CERTIFICATESTORE_LOCALMACHINE )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_CERTIFICATESTORE_CURRENTUSER )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESME_ROK )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESME_RINVMSGLEN )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESME_RINVCMDLEN )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESME_RINVCMDID )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESME_RINVBNDSTS )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESME_RALYBND )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESME_RINVPRTFLG )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESME_RINVREGDLVFLG )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESME_RSYSERR )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESME_RINVSRCADR )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESME_RINVDSTADR )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESME_RINVMSGID )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESME_RBINDFAIL )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESME_RINVPASWD )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESME_RINVSYSID )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESME_RCANCELFAIL )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESME_RREPLACEFAIL )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESME_RMSGQFUL )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESME_RINVSERTYP )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESME_RINVNUMDESTS )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESME_RINVDLNAME )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESME_RINVDESTFLAG )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESME_RINVSUBREP )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESME_RINVESMCLASS )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESME_RCNTSUBDL )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESME_RSUBMITFAIL )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESME_RINVSRCTON )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESME_RINVSRCNPI )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESME_RINVDSTTON )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESME_RINVDSTNPI )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESME_RINVSYSTYP )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESME_RINVREPFLAG )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESME_RINVNUMMSGS )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESME_RTHROTTLED )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESME_RINVSCHED )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESME_RINVEXPIRY )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESME_RINVDFTMSGID )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESME_RX_T_APPN )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESME_RX_P_APPN )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESME_RX_R_APPN )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESME_RQUERYFAIL )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESME_RINVOPTPARSTREAM )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESME_ROPTPARNOTALLWD )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESME_RINVPARLEN )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESME_RMISSINGOPTPARAM )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESME_RINVOPTPARAMVAL )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESME_RDELIVERYFAILURE )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMPP_ESME_RUNKNOWNERR )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_STATUS_MESSAGE_DELIVERED_SUCCESSFULLY )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_STATUS_FORWARDED_STATUS_UNKNOWN )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_STATUS_REPLACED )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_STATUS_CONGESTION_STILL_TRYING )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_STATUS_RECIPIENT_BUSY_STILL_TRYING )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_STATUS_NO_RESPONSE_STILL_TRYING )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_STATUS_SERVICE_REJECTED_STILL_TRYING )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_STATUS_QOS_NOT_AVAILABLE_STILL_TRYING )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_STATUS_RECIPIENT_ERROR_STILL_TRYING )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_STATUS_RPC_ERROR )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_STATUS_INCOMPATIBLE_DESTINATION )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_STATUS_CONNECTION_REJECTED )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_STATUS_NOT_OBTAINABLE )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_STATUS_QOS_NOT_AVAILABLE )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_STATUS_NO_INTERNETWORKING_AVAILABLE )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_STATUS_MESSAGE_EXPIRED )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_STATUS_MESSAGE_DELETED_BY_SENDER )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_STATUS_MESSAGE_DELETED_BY_SMSC )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_STATUS_DOES_NOT_EXIST )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_STORAGETYPE_SIM )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_STORAGETYPE_MEMORY )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_STORAGETYPE_COMBINED )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_STORAGETYPE_STATUS )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_STORAGETYPE_ALL )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_FO_REPLYPATH_EXISTS )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_FO_UDHI )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_FO_STATUS_REPORT )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_FO_VALIDITY_NONE )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_FO_VALIDITY_RELATIVE )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_FO_VALIDITY_ENHANCED )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_FO_VALIDITY_ABSOLUTE )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_FO_REJECT_DUPLICATES )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_FO_SUBMIT_SM )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_FO_DELIVER_SM )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_FO_STATUS_SM )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DATACODING_DEFAULT )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DATACODING_8BIT_DATA )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DATACODING_UNICODE )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_DATACODING_ME_SPECIFIC )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_DATACODING_SIM_SPECIFIC )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_DATACODING_TE_SPECIFIC )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DATACODING_FLASH )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_BAUDRATE_110 )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_BAUDRATE_300 )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_BAUDRATE_600 )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_BAUDRATE_1200 )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_BAUDRATE_2400 )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_BAUDRATE_4800 )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_BAUDRATE_9600 )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_BAUDRATE_14400 )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_BAUDRATE_19200 )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_BAUDRATE_38400 )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_BAUDRATE_56000 )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_BAUDRATE_57600 )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_BAUDRATE_64000 )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_BAUDRATE_115200 )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_BAUDRATE_128000 )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_BAUDRATE_230400 )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_BAUDRATE_256000 )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_BAUDRATE_460800 )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_BAUDRATE_921600 )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_BAUDRATE_DEFAULT )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_MESSAGESTATE_RECEIVED_UNREAD )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_MESSAGESTATE_RECEIVED_READ )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_MESSAGESTATE_STORED_UNSENT )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_MESSAGESTATE_STORED_SENT )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_MESSAGESTATE_ALL )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_MESSAGEFORMAT_PDU )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_MESSAGEFORMAT_TEXT )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_MESSAGEFORMAT_AUTO )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HTTP_PLACEHOLDER_USERTAG )( 
            IConstants * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HTTP_PLACEHOLDER_TOADDRESS )( 
            IConstants * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HTTP_PLACEHOLDER_FROMADDRESS )( 
            IConstants * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HTTP_PLACEHOLDER_BODY )( 
            IConstants * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HTTP_PLACEHOLDER_BODYASHEX )( 
            IConstants * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HTTP_PLACEHOLDER_BODYASBASE64 )( 
            IConstants * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HTTP_PLACEHOLDER_DELIVERYREPORT )( 
            IConstants * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HTTP_PLACEHOLDER_TOADDRESSTON )( 
            IConstants * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HTTP_PLACEHOLDER_TOADDRESSNPI )( 
            IConstants * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HTTP_PLACEHOLDER_FROMADDRESSTON )( 
            IConstants * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HTTP_PLACEHOLDER_FROMADDRESSNPI )( 
            IConstants * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HTTP_PLACEHOLDER_PROTOCOLID )( 
            IConstants * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HTTP_PLACEHOLDER_UDHI )( 
            IConstants * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HTTP_PLACEHOLDER_DATACODING )( 
            IConstants * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HTTP_PLACEHOLDER_USERTAGSTRING )( 
            IConstants * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_PREFIXSMSC_ENABLED )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_PREFIXSMSC_DISABLED )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_PREFIXSMSC_AUTO )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_TCPMODE_RAW )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_TCPMODE_TELNET )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GSM_TCPMODE_TELNET_WITH_COMCONTROL )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WAPPUSH_SIGNAL_NONE )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WAPPUSH_SIGNAL_LOW )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WAPPUSH_SIGNAL_MEDIUM )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WAPPUSH_SIGNAL_HIGH )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WAPPUSH_SIGNAL_DELETE )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DIALUP_PROVIDERTYPE_UCP )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DIALUP_PROVIDERTYPE_TAP_DEFAULT )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DIALUP_PROVIDERTYPE_TAP_NOLF )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DIALUP_PROVIDERTYPE_TAP_NOEOT )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DIALUP_DIALMODE_TONE )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DIALUP_DIALMODE_PULSE )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DIALUP_DEVICESETTINGS_DEFAULT )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DIALUP_DEVICESETTINGS_8N1 )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DIALUP_DEVICESETTINGS_7E1 )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LANGUAGE_LOCKINGSHIFT_BASIC )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LANGUAGE_LOCKINGSHIFT_TURKISH )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LANGUAGE_LOCKINGSHIFT_PORTUGUESE )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LANGUAGE_LOCKINGSHIFT_SPANISH )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LANGUAGE_LOCKINGSHIFT_BENGALI )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LANGUAGE_LOCKINGSHIFT_GUJARATI )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LANGUAGE_LOCKINGSHIFT_HINDI )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LANGUAGE_LOCKINGSHIFT_KANNADA )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LANGUAGE_LOCKINGSHIFT_MALAYALAM )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LANGUAGE_LOCKINGSHIFT_ORIYA )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LANGUAGE_LOCKINGSHIFT_PUNJABI )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LANGUAGE_LOCKINGSHIFT_TAMIL )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LANGUAGE_LOCKINGSHIFT_TELUGU )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LANGUAGE_LOCKINGSHIFT_URDU )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LANGUAGE_SINGLESHIFT_BASIC )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LANGUAGE_SINGLESHIFT_TURKISH )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LANGUAGE_SINGLESHIFT_SPANISH )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LANGUAGE_SINGLESHIFT_PORTUGUESE )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LANGUAGE_SINGLESHIFT_BENGALI )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LANGUAGE_SINGLESHIFT_GUJARATI )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LANGUAGE_SINGLESHIFT_HINDI )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LANGUAGE_SINGLESHIFT_KANNADA )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LANGUAGE_SINGLESHIFT_MALAYALAM )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LANGUAGE_SINGLESHIFT_ORIYA )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LANGUAGE_SINGLESHIFT_PUNJABI )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LANGUAGE_SINGLESHIFT_TAMIL )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LANGUAGE_SINGLESHIFT_TELUGU )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LANGUAGE_SINGLESHIFT_URDU )( 
            IConstants * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SmppBindToString )( 
            IConstants * This,
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SmppVersionToString )( 
            IConstants * This,
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *TonToString )( 
            IConstants * This,
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *NpiToString )( 
            IConstants * This,
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *MultipartToString )( 
            IConstants * This,
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *BodyformatToString )( 
            IConstants * This,
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SmppEsm2SmscToString )( 
            IConstants * This,
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SmppEsm2EsmeToString )( 
            IConstants * This,
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SmppUseGsmEncodingToString )( 
            IConstants * This,
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SmppDataCodingToString )( 
            IConstants * This,
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SmppPriorityFlagToString )( 
            IConstants * This,
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SmppMessageStateToString )( 
            IConstants * This,
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SmppSessionStateToString )( 
            IConstants * This,
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SmppTlvToString )( 
            IConstants * This,
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SmppMultipartModeToString )( 
            IConstants * This,
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SmppSubmitModeToString )( 
            IConstants * This,
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SmppEsmeToString )( 
            IConstants * This,
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GsmStatusToString )( 
            IConstants * This,
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GsmStorageTypeToString )( 
            IConstants * This,
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GsmFoToString )( 
            IConstants * This,
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GsmDataCodingToString )( 
            IConstants * This,
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GsmBaudrateToString )( 
            IConstants * This,
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GsmMessageStateToString )( 
            IConstants * This,
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GsmMessageFormatToString )( 
            IConstants * This,
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GsmPrefixSmscToString )( 
            IConstants * This,
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *WapPushSignalToString )( 
            IConstants * This,
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DialupProviderTypeToString )( 
            IConstants * This,
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DialupDialModeToString )( 
            IConstants * This,
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DialupDeviceSettingsToString )( 
            IConstants * This,
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GsmTcpModeToString )( 
            IConstants * This,
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *LanguageLockingShiftToString )( 
            IConstants * This,
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *LanguageSingleShiftToString )( 
            IConstants * This,
            /* [in] */ LONG lVal,
            /* [retval][out] */ BSTR *strVal);
        
        END_INTERFACE
    } IConstantsVtbl;

    interface IConstants
    {
        CONST_VTBL struct IConstantsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IConstants_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IConstants_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IConstants_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IConstants_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IConstants_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IConstants_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IConstants_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IConstants_get_SMPP_BIND_TRANSMITTER(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_BIND_TRANSMITTER(This,Val) ) 

#define IConstants_get_SMPP_BIND_TRANSCEIVER(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_BIND_TRANSCEIVER(This,Val) ) 

#define IConstants_get_SMPP_BIND_RECEIVER(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_BIND_RECEIVER(This,Val) ) 

#define IConstants_get_SMPP_VERSION_33(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_VERSION_33(This,Val) ) 

#define IConstants_get_SMPP_VERSION_34(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_VERSION_34(This,Val) ) 

#define IConstants_get_SMPP_VERSION_50(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_VERSION_50(This,Val) ) 

#define IConstants_get_TON_UNKNOWN(This,Val)	\
    ( (This)->lpVtbl -> get_TON_UNKNOWN(This,Val) ) 

#define IConstants_get_TON_INTERNATIONAL(This,Val)	\
    ( (This)->lpVtbl -> get_TON_INTERNATIONAL(This,Val) ) 

#define IConstants_get_TON_NATIONAL(This,Val)	\
    ( (This)->lpVtbl -> get_TON_NATIONAL(This,Val) ) 

#define IConstants_get_TON_NETWORK_SPECIFIC(This,Val)	\
    ( (This)->lpVtbl -> get_TON_NETWORK_SPECIFIC(This,Val) ) 

#define IConstants_get_TON_SUBSCRIBER_NUMBER(This,Val)	\
    ( (This)->lpVtbl -> get_TON_SUBSCRIBER_NUMBER(This,Val) ) 

#define IConstants_get_TON_ALPHANUMERIC(This,Val)	\
    ( (This)->lpVtbl -> get_TON_ALPHANUMERIC(This,Val) ) 

#define IConstants_get_SMPP_TON_ABBREVIATED(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_TON_ABBREVIATED(This,Val) ) 

#define IConstants_get_NPI_UNKNOWN(This,Val)	\
    ( (This)->lpVtbl -> get_NPI_UNKNOWN(This,Val) ) 

#define IConstants_get_NPI_ISDN(This,Val)	\
    ( (This)->lpVtbl -> get_NPI_ISDN(This,Val) ) 

#define IConstants_get_NPI_DATA(This,Val)	\
    ( (This)->lpVtbl -> get_NPI_DATA(This,Val) ) 

#define IConstants_get_NPI_TELEX(This,Val)	\
    ( (This)->lpVtbl -> get_NPI_TELEX(This,Val) ) 

#define IConstants_get_NPI_NATIONAL(This,Val)	\
    ( (This)->lpVtbl -> get_NPI_NATIONAL(This,Val) ) 

#define IConstants_get_NPI_PRIVATE(This,Val)	\
    ( (This)->lpVtbl -> get_NPI_PRIVATE(This,Val) ) 

#define IConstants_get_NPI_ERMES(This,Val)	\
    ( (This)->lpVtbl -> get_NPI_ERMES(This,Val) ) 

#define IConstants_get_SMPP_NPI_INTERNET(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_NPI_INTERNET(This,Val) ) 

#define IConstants_get_NPI_LAND_MOBILE(This,Val)	\
    ( (This)->lpVtbl -> get_NPI_LAND_MOBILE(This,Val) ) 

#define IConstants_get_MULTIPART_ACCEPT(This,Val)	\
    ( (This)->lpVtbl -> get_MULTIPART_ACCEPT(This,Val) ) 

#define IConstants_get_MULTIPART_TRUNCATE(This,Val)	\
    ( (This)->lpVtbl -> get_MULTIPART_TRUNCATE(This,Val) ) 

#define IConstants_get_MULTIPART_REJECT(This,Val)	\
    ( (This)->lpVtbl -> get_MULTIPART_REJECT(This,Val) ) 

#define IConstants_get_BODYFORMAT_TEXT(This,Val)	\
    ( (This)->lpVtbl -> get_BODYFORMAT_TEXT(This,Val) ) 

#define IConstants_get_BODYFORMAT_HEX(This,Val)	\
    ( (This)->lpVtbl -> get_BODYFORMAT_HEX(This,Val) ) 

#define IConstants_get_SMPP_ESM_2ESME_DEFAULT(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESM_2ESME_DEFAULT(This,Val) ) 

#define IConstants_get_SMPP_ESM_2ESME_DELIVERY_RECEIPT(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESM_2ESME_DELIVERY_RECEIPT(This,Val) ) 

#define IConstants_get_SMPP_ESM_2ESME_DELIVERY_ACK(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESM_2ESME_DELIVERY_ACK(This,Val) ) 

#define IConstants_get_SMPP_ESM_2ESME_MANUAL_ACK(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESM_2ESME_MANUAL_ACK(This,Val) ) 

#define IConstants_get_SMPP_ESM_2ESME_CONVERSATION_ABORT(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESM_2ESME_CONVERSATION_ABORT(This,Val) ) 

#define IConstants_get_SMPP_ESM_2ESME_INTERMEDIATE_DELIVERY_NOTIFY(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESM_2ESME_INTERMEDIATE_DELIVERY_NOTIFY(This,Val) ) 

#define IConstants_get_SMPP_ESM_2SMSC_MODE_DEFAULT(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESM_2SMSC_MODE_DEFAULT(This,Val) ) 

#define IConstants_get_SMPP_ESM_2SMSC_MODE_STOREFORWARD(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESM_2SMSC_MODE_STOREFORWARD(This,Val) ) 

#define IConstants_get_SMPP_ESM_2SMSC_MODE_DATAGRAM(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESM_2SMSC_MODE_DATAGRAM(This,Val) ) 

#define IConstants_get_SMPP_ESM_2SMSC_MODE_FORWARD(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESM_2SMSC_MODE_FORWARD(This,Val) ) 

#define IConstants_get_SMPP_ESM_2SMSC_TYPE_DEFAULT(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESM_2SMSC_TYPE_DEFAULT(This,Val) ) 

#define IConstants_get_SMPP_ESM_2SMSC_TYPE_DELIVERY_ACK(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESM_2SMSC_TYPE_DELIVERY_ACK(This,Val) ) 

#define IConstants_get_SMPP_ESM_2SMSC_TYPE_MANUAL_ACK(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESM_2SMSC_TYPE_MANUAL_ACK(This,Val) ) 

#define IConstants_get_SMPP_ESM_2SMSC_FEAT_NOTHING(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESM_2SMSC_FEAT_NOTHING(This,Val) ) 

#define IConstants_get_SMPP_ESM_2SMSC_FEAT_UDHI(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESM_2SMSC_FEAT_UDHI(This,Val) ) 

#define IConstants_get_SMPP_ESM_2SMSC_FEAT_SRP(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESM_2SMSC_FEAT_SRP(This,Val) ) 

#define IConstants_get_SMPP_USEGSMENCODING_DISABLED(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_USEGSMENCODING_DISABLED(This,Val) ) 

#define IConstants_get_SMPP_USEGSMENCODING_INANDOUT(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_USEGSMENCODING_INANDOUT(This,Val) ) 

#define IConstants_get_SMPP_USEGSMENCODING_INCOMING(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_USEGSMENCODING_INCOMING(This,Val) ) 

#define IConstants_get_SMPP_USEGSMENCODING_OUTGOING(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_USEGSMENCODING_OUTGOING(This,Val) ) 

#define IConstants_get_SMPP_DATACODING_ASCII(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_DATACODING_ASCII(This,Val) ) 

#define IConstants_get_SMPP_DATACODING_OCTET_UNSPEC(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_DATACODING_OCTET_UNSPEC(This,Val) ) 

#define IConstants_get_SMPP_DATACODING_LATIN(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_DATACODING_LATIN(This,Val) ) 

#define IConstants_get_SMPP_DATACODING_JIS_KANJI(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_DATACODING_JIS_KANJI(This,Val) ) 

#define IConstants_get_SMPP_DATACODING_CYRILLIC(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_DATACODING_CYRILLIC(This,Val) ) 

#define IConstants_get_SMPP_DATACODING_LATIN_HEBREW(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_DATACODING_LATIN_HEBREW(This,Val) ) 

#define IConstants_get_SMPP_DATACODING_PICTOGRAM(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_DATACODING_PICTOGRAM(This,Val) ) 

#define IConstants_get_SMPP_DATACODING_ISO_2022_JP(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_DATACODING_ISO_2022_JP(This,Val) ) 

#define IConstants_get_SMPP_DATACODING_EXTENDED_KANJI_JIS(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_DATACODING_EXTENDED_KANJI_JIS(This,Val) ) 

#define IConstants_get_SMPP_DATACODING_KS_C_5601(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_DATACODING_KS_C_5601(This,Val) ) 

#define IConstants_get_SMPP_PRIORITYFLAG_BULK(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_PRIORITYFLAG_BULK(This,Val) ) 

#define IConstants_get_SMPP_PRIORITYFLAG_NORMAL(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_PRIORITYFLAG_NORMAL(This,Val) ) 

#define IConstants_get_SMPP_PRIORITYFLAG_URGENT(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_PRIORITYFLAG_URGENT(This,Val) ) 

#define IConstants_get_SMPP_PRIORITYFLAG_VERY_URGENT(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_PRIORITYFLAG_VERY_URGENT(This,Val) ) 

#define IConstants_get_SMPP_MESSAGESTATE_AX_WAITRESP(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_MESSAGESTATE_AX_WAITRESP(This,Val) ) 

#define IConstants_get_SMPP_MESSAGESTATE_ENROUTE(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_MESSAGESTATE_ENROUTE(This,Val) ) 

#define IConstants_get_SMPP_MESSAGESTATE_DELIVERED(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_MESSAGESTATE_DELIVERED(This,Val) ) 

#define IConstants_get_SMPP_MESSAGESTATE_EXPIRED(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_MESSAGESTATE_EXPIRED(This,Val) ) 

#define IConstants_get_SMPP_MESSAGESTATE_DELETED(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_MESSAGESTATE_DELETED(This,Val) ) 

#define IConstants_get_SMPP_MESSAGESTATE_UNDELIVERABLE(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_MESSAGESTATE_UNDELIVERABLE(This,Val) ) 

#define IConstants_get_SMPP_MESSAGESTATE_ACCEPTED(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_MESSAGESTATE_ACCEPTED(This,Val) ) 

#define IConstants_get_SMPP_MESSAGESTATE_UNKNOWN(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_MESSAGESTATE_UNKNOWN(This,Val) ) 

#define IConstants_get_SMPP_MESSAGESTATE_REJECTED(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_MESSAGESTATE_REJECTED(This,Val) ) 

#define IConstants_get_SMPP_MESSAGESTATE_AX_RESPERROR(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_MESSAGESTATE_AX_RESPERROR(This,Val) ) 

#define IConstants_get_SMPP_MESSAGESTATE_AX_NOCREDITS(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_MESSAGESTATE_AX_NOCREDITS(This,Val) ) 

#define IConstants_get_SMPP_MESSAGESTATE_AX_RESPTO(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_MESSAGESTATE_AX_RESPTO(This,Val) ) 

#define IConstants_get_SMPP_MESSAGESTATE_AX_RESPONDED(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_MESSAGESTATE_AX_RESPONDED(This,Val) ) 

#define IConstants_get_SMPP_SESSIONSTATE_CONNECTED(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_SESSIONSTATE_CONNECTED(This,Val) ) 

#define IConstants_get_SMPP_SESSIONSTATE_DISCONNECTED(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_SESSIONSTATE_DISCONNECTED(This,Val) ) 

#define IConstants_get_SMPP_SESSIONSTATE_BINDING(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_SESSIONSTATE_BINDING(This,Val) ) 

#define IConstants_get_SMPP_SESSIONSTATE_BOUND_TX(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_SESSIONSTATE_BOUND_TX(This,Val) ) 

#define IConstants_get_SMPP_SESSIONSTATE_BOUND_RX(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_SESSIONSTATE_BOUND_RX(This,Val) ) 

#define IConstants_get_SMPP_SESSIONSTATE_BOUND_TRX(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_SESSIONSTATE_BOUND_TRX(This,Val) ) 

#define IConstants_get_SMPP_TLV_DEST_ADDR_SUBUNIT(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_TLV_DEST_ADDR_SUBUNIT(This,Val) ) 

#define IConstants_get_SMPP_TLV_DEST_NETWORK_TYPE(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_TLV_DEST_NETWORK_TYPE(This,Val) ) 

#define IConstants_get_SMPP_TLV_DEST_BEARER_TYPE(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_TLV_DEST_BEARER_TYPE(This,Val) ) 

#define IConstants_get_SMPP_TLV_DEST_TELEMATICS_ID(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_TLV_DEST_TELEMATICS_ID(This,Val) ) 

#define IConstants_get_SMPP_TLV_SOURCE_ADDR_SUBUNIT(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_TLV_SOURCE_ADDR_SUBUNIT(This,Val) ) 

#define IConstants_get_SMPP_TLV_SOURCE_NETWORK_TYPE(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_TLV_SOURCE_NETWORK_TYPE(This,Val) ) 

#define IConstants_get_SMPP_TLV_SOURCE_BEARER_TYPE(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_TLV_SOURCE_BEARER_TYPE(This,Val) ) 

#define IConstants_get_SMPP_TLV_SOURCE_TELEMATICS_ID(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_TLV_SOURCE_TELEMATICS_ID(This,Val) ) 

#define IConstants_get_SMPP_TLV_QOS_TIME_TO_LIVE(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_TLV_QOS_TIME_TO_LIVE(This,Val) ) 

#define IConstants_get_SMPP_TLV_PAYLOAD_TYPE(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_TLV_PAYLOAD_TYPE(This,Val) ) 

#define IConstants_get_SMPP_TLV_ADDITIONAL_STATUS_INFO_TEXT(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_TLV_ADDITIONAL_STATUS_INFO_TEXT(This,Val) ) 

#define IConstants_get_SMPP_TLV_RECEIPTED_MESSAGE_ID(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_TLV_RECEIPTED_MESSAGE_ID(This,Val) ) 

#define IConstants_get_SMPP_TLV_MS_MSG_WAIT_FACILITIES(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_TLV_MS_MSG_WAIT_FACILITIES(This,Val) ) 

#define IConstants_get_SMPP_TLV_PRIVACY_INDICATOR(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_TLV_PRIVACY_INDICATOR(This,Val) ) 

#define IConstants_get_SMPP_TLV_SOURCE_SUBADDRESS(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_TLV_SOURCE_SUBADDRESS(This,Val) ) 

#define IConstants_get_SMPP_TLV_DEST_SUBADDRESS(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_TLV_DEST_SUBADDRESS(This,Val) ) 

#define IConstants_get_SMPP_TLV_USER_MESSAGE_REFERENCE(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_TLV_USER_MESSAGE_REFERENCE(This,Val) ) 

#define IConstants_get_SMPP_TLV_USER_RESPONSE_CODE(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_TLV_USER_RESPONSE_CODE(This,Val) ) 

#define IConstants_get_SMPP_TLV_SOURCE_PORT(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_TLV_SOURCE_PORT(This,Val) ) 

#define IConstants_get_SMPP_TLV_DESTINATION_PORT(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_TLV_DESTINATION_PORT(This,Val) ) 

#define IConstants_get_SMPP_TLV_SAR_MSG_REF_NUM(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_TLV_SAR_MSG_REF_NUM(This,Val) ) 

#define IConstants_get_SMPP_TLV_LANGUAGE_INDICATOR(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_TLV_LANGUAGE_INDICATOR(This,Val) ) 

#define IConstants_get_SMPP_TLV_SAR_TOTAL_SEGMENTS(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_TLV_SAR_TOTAL_SEGMENTS(This,Val) ) 

#define IConstants_get_SMPP_TLV_SAR_SEGMENT_SEQNUM(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_TLV_SAR_SEGMENT_SEQNUM(This,Val) ) 

#define IConstants_get_SMPP_TLV_SC_INTERFACE_VERSION(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_TLV_SC_INTERFACE_VERSION(This,Val) ) 

#define IConstants_get_SMPP_TLV_CALLBACK_NUM_PRES_IND(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_TLV_CALLBACK_NUM_PRES_IND(This,Val) ) 

#define IConstants_get_SMPP_TLV_CALLBACK_NUM_ATAG(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_TLV_CALLBACK_NUM_ATAG(This,Val) ) 

#define IConstants_get_SMPP_TLV_NUMBER_OF_MESSAGES(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_TLV_NUMBER_OF_MESSAGES(This,Val) ) 

#define IConstants_get_SMPP_TLV_CALLBACK_NUM(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_TLV_CALLBACK_NUM(This,Val) ) 

#define IConstants_get_SMPP_TLV_DPF_RESULT(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_TLV_DPF_RESULT(This,Val) ) 

#define IConstants_get_SMPP_TLV_SET_DPF(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_TLV_SET_DPF(This,Val) ) 

#define IConstants_get_SMPP_TLV_MS_AVAILABILITY_STATUS(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_TLV_MS_AVAILABILITY_STATUS(This,Val) ) 

#define IConstants_get_SMPP_TLV_NETWORK_ERROR_CODE(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_TLV_NETWORK_ERROR_CODE(This,Val) ) 

#define IConstants_get_SMPP_TLV_MESSAGE_PAYLOAD(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_TLV_MESSAGE_PAYLOAD(This,Val) ) 

#define IConstants_get_SMPP_TLV_DELIVERY_FAILURE_REASON(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_TLV_DELIVERY_FAILURE_REASON(This,Val) ) 

#define IConstants_get_SMPP_TLV_MORE_MESSAGES_TO_SEND(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_TLV_MORE_MESSAGES_TO_SEND(This,Val) ) 

#define IConstants_get_SMPP_TLV_MESSAGE_STATE(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_TLV_MESSAGE_STATE(This,Val) ) 

#define IConstants_get_SMPP_TLV_CONGESTION_STATE(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_TLV_CONGESTION_STATE(This,Val) ) 

#define IConstants_get_SMPP_TLV_USSD_SERVICE_OP(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_TLV_USSD_SERVICE_OP(This,Val) ) 

#define IConstants_get_SMPP_TLV_DISPLAY_TIME(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_TLV_DISPLAY_TIME(This,Val) ) 

#define IConstants_get_SMPP_TLV_SMS_SIGNAL(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_TLV_SMS_SIGNAL(This,Val) ) 

#define IConstants_get_SMPP_TLV_MS_VALIDITY(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_TLV_MS_VALIDITY(This,Val) ) 

#define IConstants_get_SMPP_TLV_ALERT_ON_MESSAGE_DELIVERY(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_TLV_ALERT_ON_MESSAGE_DELIVERY(This,Val) ) 

#define IConstants_get_SMPP_TLV_ITS_REPLY_TYPE(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_TLV_ITS_REPLY_TYPE(This,Val) ) 

#define IConstants_get_SMPP_TLV_ITS_SESSION_INFO(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_TLV_ITS_SESSION_INFO(This,Val) ) 

#define IConstants_get_SMPP_MULTIPARTMODE_UDH(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_MULTIPARTMODE_UDH(This,Val) ) 

#define IConstants_get_SMPP_MULTIPARTMODE_UDH16BIT(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_MULTIPARTMODE_UDH16BIT(This,Val) ) 

#define IConstants_get_SMPP_MULTIPARTMODE_SARTLV(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_MULTIPARTMODE_SARTLV(This,Val) ) 

#define IConstants_get_SMPP_MULTIPARTMODE_PAYLOADTLV(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_MULTIPARTMODE_PAYLOADTLV(This,Val) ) 

#define IConstants_get_SMPP_LOGLEVEL_MINIMAL(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_LOGLEVEL_MINIMAL(This,Val) ) 

#define IConstants_get_SMPP_LOGLEVEL_NORMAL(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_LOGLEVEL_NORMAL(This,Val) ) 

#define IConstants_get_SMPP_LOGLEVEL_VERBOSE(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_LOGLEVEL_VERBOSE(This,Val) ) 

#define IConstants_get_SMPP_SUBMITMODE_SUBMITSM(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_SUBMITMODE_SUBMITSM(This,Val) ) 

#define IConstants_get_SMPP_SUBMITMODE_DATASM(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_SUBMITMODE_DATASM(This,Val) ) 

#define IConstants_get_SMPP_DELIVERMODE_DELIVERSM(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_DELIVERMODE_DELIVERSM(This,Val) ) 

#define IConstants_get_SMPP_DELIVERMODE_DATASM(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_DELIVERMODE_DATASM(This,Val) ) 

#define IConstants_get_SMPP_USEGSMENCODING_INCHARSET(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_USEGSMENCODING_INCHARSET(This,Val) ) 

#define IConstants_get_SMPP_USEGSMENCODING_OUTCHARSET(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_USEGSMENCODING_OUTCHARSET(This,Val) ) 

#define IConstants_get_SMPP_USEGSMENCODING_INOUTCHARS(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_USEGSMENCODING_INOUTCHARS(This,Val) ) 

#define IConstants_get_SMPP_IPVERSION_4(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_IPVERSION_4(This,Val) ) 

#define IConstants_get_SMPP_IPVERSION_6(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_IPVERSION_6(This,Val) ) 

#define IConstants_get_SMPP_IPVERSION_BOTH(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_IPVERSION_BOTH(This,Val) ) 

#define IConstants_get_SMPP_CERTIFICATESTORE_LOCALMACHINE(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_CERTIFICATESTORE_LOCALMACHINE(This,Val) ) 

#define IConstants_get_SMPP_CERTIFICATESTORE_CURRENTUSER(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_CERTIFICATESTORE_CURRENTUSER(This,Val) ) 

#define IConstants_get_SMPP_ESME_ROK(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESME_ROK(This,Val) ) 

#define IConstants_get_SMPP_ESME_RINVMSGLEN(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESME_RINVMSGLEN(This,Val) ) 

#define IConstants_get_SMPP_ESME_RINVCMDLEN(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESME_RINVCMDLEN(This,Val) ) 

#define IConstants_get_SMPP_ESME_RINVCMDID(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESME_RINVCMDID(This,Val) ) 

#define IConstants_get_SMPP_ESME_RINVBNDSTS(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESME_RINVBNDSTS(This,Val) ) 

#define IConstants_get_SMPP_ESME_RALYBND(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESME_RALYBND(This,Val) ) 

#define IConstants_get_SMPP_ESME_RINVPRTFLG(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESME_RINVPRTFLG(This,Val) ) 

#define IConstants_get_SMPP_ESME_RINVREGDLVFLG(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESME_RINVREGDLVFLG(This,Val) ) 

#define IConstants_get_SMPP_ESME_RSYSERR(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESME_RSYSERR(This,Val) ) 

#define IConstants_get_SMPP_ESME_RINVSRCADR(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESME_RINVSRCADR(This,Val) ) 

#define IConstants_get_SMPP_ESME_RINVDSTADR(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESME_RINVDSTADR(This,Val) ) 

#define IConstants_get_SMPP_ESME_RINVMSGID(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESME_RINVMSGID(This,Val) ) 

#define IConstants_get_SMPP_ESME_RBINDFAIL(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESME_RBINDFAIL(This,Val) ) 

#define IConstants_get_SMPP_ESME_RINVPASWD(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESME_RINVPASWD(This,Val) ) 

#define IConstants_get_SMPP_ESME_RINVSYSID(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESME_RINVSYSID(This,Val) ) 

#define IConstants_get_SMPP_ESME_RCANCELFAIL(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESME_RCANCELFAIL(This,Val) ) 

#define IConstants_get_SMPP_ESME_RREPLACEFAIL(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESME_RREPLACEFAIL(This,Val) ) 

#define IConstants_get_SMPP_ESME_RMSGQFUL(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESME_RMSGQFUL(This,Val) ) 

#define IConstants_get_SMPP_ESME_RINVSERTYP(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESME_RINVSERTYP(This,Val) ) 

#define IConstants_get_SMPP_ESME_RINVNUMDESTS(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESME_RINVNUMDESTS(This,Val) ) 

#define IConstants_get_SMPP_ESME_RINVDLNAME(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESME_RINVDLNAME(This,Val) ) 

#define IConstants_get_SMPP_ESME_RINVDESTFLAG(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESME_RINVDESTFLAG(This,Val) ) 

#define IConstants_get_SMPP_ESME_RINVSUBREP(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESME_RINVSUBREP(This,Val) ) 

#define IConstants_get_SMPP_ESME_RINVESMCLASS(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESME_RINVESMCLASS(This,Val) ) 

#define IConstants_get_SMPP_ESME_RCNTSUBDL(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESME_RCNTSUBDL(This,Val) ) 

#define IConstants_get_SMPP_ESME_RSUBMITFAIL(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESME_RSUBMITFAIL(This,Val) ) 

#define IConstants_get_SMPP_ESME_RINVSRCTON(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESME_RINVSRCTON(This,Val) ) 

#define IConstants_get_SMPP_ESME_RINVSRCNPI(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESME_RINVSRCNPI(This,Val) ) 

#define IConstants_get_SMPP_ESME_RINVDSTTON(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESME_RINVDSTTON(This,Val) ) 

#define IConstants_get_SMPP_ESME_RINVDSTNPI(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESME_RINVDSTNPI(This,Val) ) 

#define IConstants_get_SMPP_ESME_RINVSYSTYP(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESME_RINVSYSTYP(This,Val) ) 

#define IConstants_get_SMPP_ESME_RINVREPFLAG(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESME_RINVREPFLAG(This,Val) ) 

#define IConstants_get_SMPP_ESME_RINVNUMMSGS(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESME_RINVNUMMSGS(This,Val) ) 

#define IConstants_get_SMPP_ESME_RTHROTTLED(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESME_RTHROTTLED(This,Val) ) 

#define IConstants_get_SMPP_ESME_RINVSCHED(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESME_RINVSCHED(This,Val) ) 

#define IConstants_get_SMPP_ESME_RINVEXPIRY(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESME_RINVEXPIRY(This,Val) ) 

#define IConstants_get_SMPP_ESME_RINVDFTMSGID(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESME_RINVDFTMSGID(This,Val) ) 

#define IConstants_get_SMPP_ESME_RX_T_APPN(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESME_RX_T_APPN(This,Val) ) 

#define IConstants_get_SMPP_ESME_RX_P_APPN(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESME_RX_P_APPN(This,Val) ) 

#define IConstants_get_SMPP_ESME_RX_R_APPN(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESME_RX_R_APPN(This,Val) ) 

#define IConstants_get_SMPP_ESME_RQUERYFAIL(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESME_RQUERYFAIL(This,Val) ) 

#define IConstants_get_SMPP_ESME_RINVOPTPARSTREAM(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESME_RINVOPTPARSTREAM(This,Val) ) 

#define IConstants_get_SMPP_ESME_ROPTPARNOTALLWD(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESME_ROPTPARNOTALLWD(This,Val) ) 

#define IConstants_get_SMPP_ESME_RINVPARLEN(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESME_RINVPARLEN(This,Val) ) 

#define IConstants_get_SMPP_ESME_RMISSINGOPTPARAM(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESME_RMISSINGOPTPARAM(This,Val) ) 

#define IConstants_get_SMPP_ESME_RINVOPTPARAMVAL(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESME_RINVOPTPARAMVAL(This,Val) ) 

#define IConstants_get_SMPP_ESME_RDELIVERYFAILURE(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESME_RDELIVERYFAILURE(This,Val) ) 

#define IConstants_get_SMPP_ESME_RUNKNOWNERR(This,Val)	\
    ( (This)->lpVtbl -> get_SMPP_ESME_RUNKNOWNERR(This,Val) ) 

#define IConstants_get_GSM_STATUS_MESSAGE_DELIVERED_SUCCESSFULLY(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_STATUS_MESSAGE_DELIVERED_SUCCESSFULLY(This,Val) ) 

#define IConstants_get_GSM_STATUS_FORWARDED_STATUS_UNKNOWN(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_STATUS_FORWARDED_STATUS_UNKNOWN(This,Val) ) 

#define IConstants_get_GSM_STATUS_REPLACED(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_STATUS_REPLACED(This,Val) ) 

#define IConstants_get_GSM_STATUS_CONGESTION_STILL_TRYING(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_STATUS_CONGESTION_STILL_TRYING(This,Val) ) 

#define IConstants_get_GSM_STATUS_RECIPIENT_BUSY_STILL_TRYING(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_STATUS_RECIPIENT_BUSY_STILL_TRYING(This,Val) ) 

#define IConstants_get_GSM_STATUS_NO_RESPONSE_STILL_TRYING(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_STATUS_NO_RESPONSE_STILL_TRYING(This,Val) ) 

#define IConstants_get_GSM_STATUS_SERVICE_REJECTED_STILL_TRYING(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_STATUS_SERVICE_REJECTED_STILL_TRYING(This,Val) ) 

#define IConstants_get_GSM_STATUS_QOS_NOT_AVAILABLE_STILL_TRYING(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_STATUS_QOS_NOT_AVAILABLE_STILL_TRYING(This,Val) ) 

#define IConstants_get_GSM_STATUS_RECIPIENT_ERROR_STILL_TRYING(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_STATUS_RECIPIENT_ERROR_STILL_TRYING(This,Val) ) 

#define IConstants_get_GSM_STATUS_RPC_ERROR(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_STATUS_RPC_ERROR(This,Val) ) 

#define IConstants_get_GSM_STATUS_INCOMPATIBLE_DESTINATION(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_STATUS_INCOMPATIBLE_DESTINATION(This,Val) ) 

#define IConstants_get_GSM_STATUS_CONNECTION_REJECTED(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_STATUS_CONNECTION_REJECTED(This,Val) ) 

#define IConstants_get_GSM_STATUS_NOT_OBTAINABLE(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_STATUS_NOT_OBTAINABLE(This,Val) ) 

#define IConstants_get_GSM_STATUS_QOS_NOT_AVAILABLE(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_STATUS_QOS_NOT_AVAILABLE(This,Val) ) 

#define IConstants_get_GSM_STATUS_NO_INTERNETWORKING_AVAILABLE(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_STATUS_NO_INTERNETWORKING_AVAILABLE(This,Val) ) 

#define IConstants_get_GSM_STATUS_MESSAGE_EXPIRED(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_STATUS_MESSAGE_EXPIRED(This,Val) ) 

#define IConstants_get_GSM_STATUS_MESSAGE_DELETED_BY_SENDER(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_STATUS_MESSAGE_DELETED_BY_SENDER(This,Val) ) 

#define IConstants_get_GSM_STATUS_MESSAGE_DELETED_BY_SMSC(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_STATUS_MESSAGE_DELETED_BY_SMSC(This,Val) ) 

#define IConstants_get_GSM_STATUS_DOES_NOT_EXIST(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_STATUS_DOES_NOT_EXIST(This,Val) ) 

#define IConstants_get_GSM_STORAGETYPE_SIM(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_STORAGETYPE_SIM(This,Val) ) 

#define IConstants_get_GSM_STORAGETYPE_MEMORY(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_STORAGETYPE_MEMORY(This,Val) ) 

#define IConstants_get_GSM_STORAGETYPE_COMBINED(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_STORAGETYPE_COMBINED(This,Val) ) 

#define IConstants_get_GSM_STORAGETYPE_STATUS(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_STORAGETYPE_STATUS(This,Val) ) 

#define IConstants_get_GSM_STORAGETYPE_ALL(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_STORAGETYPE_ALL(This,Val) ) 

#define IConstants_get_GSM_FO_REPLYPATH_EXISTS(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_FO_REPLYPATH_EXISTS(This,Val) ) 

#define IConstants_get_GSM_FO_UDHI(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_FO_UDHI(This,Val) ) 

#define IConstants_get_GSM_FO_STATUS_REPORT(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_FO_STATUS_REPORT(This,Val) ) 

#define IConstants_get_GSM_FO_VALIDITY_NONE(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_FO_VALIDITY_NONE(This,Val) ) 

#define IConstants_get_GSM_FO_VALIDITY_RELATIVE(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_FO_VALIDITY_RELATIVE(This,Val) ) 

#define IConstants_get_GSM_FO_VALIDITY_ENHANCED(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_FO_VALIDITY_ENHANCED(This,Val) ) 

#define IConstants_get_GSM_FO_VALIDITY_ABSOLUTE(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_FO_VALIDITY_ABSOLUTE(This,Val) ) 

#define IConstants_get_GSM_FO_REJECT_DUPLICATES(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_FO_REJECT_DUPLICATES(This,Val) ) 

#define IConstants_get_GSM_FO_SUBMIT_SM(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_FO_SUBMIT_SM(This,Val) ) 

#define IConstants_get_GSM_FO_DELIVER_SM(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_FO_DELIVER_SM(This,Val) ) 

#define IConstants_get_GSM_FO_STATUS_SM(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_FO_STATUS_SM(This,Val) ) 

#define IConstants_get_DATACODING_DEFAULT(This,Val)	\
    ( (This)->lpVtbl -> get_DATACODING_DEFAULT(This,Val) ) 

#define IConstants_get_DATACODING_8BIT_DATA(This,Val)	\
    ( (This)->lpVtbl -> get_DATACODING_8BIT_DATA(This,Val) ) 

#define IConstants_get_DATACODING_UNICODE(This,Val)	\
    ( (This)->lpVtbl -> get_DATACODING_UNICODE(This,Val) ) 

#define IConstants_get_GSM_DATACODING_ME_SPECIFIC(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_DATACODING_ME_SPECIFIC(This,Val) ) 

#define IConstants_get_GSM_DATACODING_SIM_SPECIFIC(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_DATACODING_SIM_SPECIFIC(This,Val) ) 

#define IConstants_get_GSM_DATACODING_TE_SPECIFIC(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_DATACODING_TE_SPECIFIC(This,Val) ) 

#define IConstants_get_DATACODING_FLASH(This,Val)	\
    ( (This)->lpVtbl -> get_DATACODING_FLASH(This,Val) ) 

#define IConstants_get_GSM_BAUDRATE_110(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_BAUDRATE_110(This,Val) ) 

#define IConstants_get_GSM_BAUDRATE_300(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_BAUDRATE_300(This,Val) ) 

#define IConstants_get_GSM_BAUDRATE_600(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_BAUDRATE_600(This,Val) ) 

#define IConstants_get_GSM_BAUDRATE_1200(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_BAUDRATE_1200(This,Val) ) 

#define IConstants_get_GSM_BAUDRATE_2400(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_BAUDRATE_2400(This,Val) ) 

#define IConstants_get_GSM_BAUDRATE_4800(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_BAUDRATE_4800(This,Val) ) 

#define IConstants_get_GSM_BAUDRATE_9600(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_BAUDRATE_9600(This,Val) ) 

#define IConstants_get_GSM_BAUDRATE_14400(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_BAUDRATE_14400(This,Val) ) 

#define IConstants_get_GSM_BAUDRATE_19200(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_BAUDRATE_19200(This,Val) ) 

#define IConstants_get_GSM_BAUDRATE_38400(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_BAUDRATE_38400(This,Val) ) 

#define IConstants_get_GSM_BAUDRATE_56000(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_BAUDRATE_56000(This,Val) ) 

#define IConstants_get_GSM_BAUDRATE_57600(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_BAUDRATE_57600(This,Val) ) 

#define IConstants_get_GSM_BAUDRATE_64000(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_BAUDRATE_64000(This,Val) ) 

#define IConstants_get_GSM_BAUDRATE_115200(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_BAUDRATE_115200(This,Val) ) 

#define IConstants_get_GSM_BAUDRATE_128000(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_BAUDRATE_128000(This,Val) ) 

#define IConstants_get_GSM_BAUDRATE_230400(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_BAUDRATE_230400(This,Val) ) 

#define IConstants_get_GSM_BAUDRATE_256000(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_BAUDRATE_256000(This,Val) ) 

#define IConstants_get_GSM_BAUDRATE_460800(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_BAUDRATE_460800(This,Val) ) 

#define IConstants_get_GSM_BAUDRATE_921600(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_BAUDRATE_921600(This,Val) ) 

#define IConstants_get_GSM_BAUDRATE_DEFAULT(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_BAUDRATE_DEFAULT(This,Val) ) 

#define IConstants_get_GSM_MESSAGESTATE_RECEIVED_UNREAD(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_MESSAGESTATE_RECEIVED_UNREAD(This,Val) ) 

#define IConstants_get_GSM_MESSAGESTATE_RECEIVED_READ(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_MESSAGESTATE_RECEIVED_READ(This,Val) ) 

#define IConstants_get_GSM_MESSAGESTATE_STORED_UNSENT(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_MESSAGESTATE_STORED_UNSENT(This,Val) ) 

#define IConstants_get_GSM_MESSAGESTATE_STORED_SENT(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_MESSAGESTATE_STORED_SENT(This,Val) ) 

#define IConstants_get_GSM_MESSAGESTATE_ALL(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_MESSAGESTATE_ALL(This,Val) ) 

#define IConstants_get_GSM_MESSAGEFORMAT_PDU(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_MESSAGEFORMAT_PDU(This,Val) ) 

#define IConstants_get_GSM_MESSAGEFORMAT_TEXT(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_MESSAGEFORMAT_TEXT(This,Val) ) 

#define IConstants_get_GSM_MESSAGEFORMAT_AUTO(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_MESSAGEFORMAT_AUTO(This,Val) ) 

#define IConstants_get_HTTP_PLACEHOLDER_USERTAG(This,Val)	\
    ( (This)->lpVtbl -> get_HTTP_PLACEHOLDER_USERTAG(This,Val) ) 

#define IConstants_get_HTTP_PLACEHOLDER_TOADDRESS(This,Val)	\
    ( (This)->lpVtbl -> get_HTTP_PLACEHOLDER_TOADDRESS(This,Val) ) 

#define IConstants_get_HTTP_PLACEHOLDER_FROMADDRESS(This,Val)	\
    ( (This)->lpVtbl -> get_HTTP_PLACEHOLDER_FROMADDRESS(This,Val) ) 

#define IConstants_get_HTTP_PLACEHOLDER_BODY(This,Val)	\
    ( (This)->lpVtbl -> get_HTTP_PLACEHOLDER_BODY(This,Val) ) 

#define IConstants_get_HTTP_PLACEHOLDER_BODYASHEX(This,Val)	\
    ( (This)->lpVtbl -> get_HTTP_PLACEHOLDER_BODYASHEX(This,Val) ) 

#define IConstants_get_HTTP_PLACEHOLDER_BODYASBASE64(This,Val)	\
    ( (This)->lpVtbl -> get_HTTP_PLACEHOLDER_BODYASBASE64(This,Val) ) 

#define IConstants_get_HTTP_PLACEHOLDER_DELIVERYREPORT(This,Val)	\
    ( (This)->lpVtbl -> get_HTTP_PLACEHOLDER_DELIVERYREPORT(This,Val) ) 

#define IConstants_get_HTTP_PLACEHOLDER_TOADDRESSTON(This,Val)	\
    ( (This)->lpVtbl -> get_HTTP_PLACEHOLDER_TOADDRESSTON(This,Val) ) 

#define IConstants_get_HTTP_PLACEHOLDER_TOADDRESSNPI(This,Val)	\
    ( (This)->lpVtbl -> get_HTTP_PLACEHOLDER_TOADDRESSNPI(This,Val) ) 

#define IConstants_get_HTTP_PLACEHOLDER_FROMADDRESSTON(This,Val)	\
    ( (This)->lpVtbl -> get_HTTP_PLACEHOLDER_FROMADDRESSTON(This,Val) ) 

#define IConstants_get_HTTP_PLACEHOLDER_FROMADDRESSNPI(This,Val)	\
    ( (This)->lpVtbl -> get_HTTP_PLACEHOLDER_FROMADDRESSNPI(This,Val) ) 

#define IConstants_get_HTTP_PLACEHOLDER_PROTOCOLID(This,Val)	\
    ( (This)->lpVtbl -> get_HTTP_PLACEHOLDER_PROTOCOLID(This,Val) ) 

#define IConstants_get_HTTP_PLACEHOLDER_UDHI(This,Val)	\
    ( (This)->lpVtbl -> get_HTTP_PLACEHOLDER_UDHI(This,Val) ) 

#define IConstants_get_HTTP_PLACEHOLDER_DATACODING(This,Val)	\
    ( (This)->lpVtbl -> get_HTTP_PLACEHOLDER_DATACODING(This,Val) ) 

#define IConstants_get_HTTP_PLACEHOLDER_USERTAGSTRING(This,Val)	\
    ( (This)->lpVtbl -> get_HTTP_PLACEHOLDER_USERTAGSTRING(This,Val) ) 

#define IConstants_get_GSM_PREFIXSMSC_ENABLED(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_PREFIXSMSC_ENABLED(This,Val) ) 

#define IConstants_get_GSM_PREFIXSMSC_DISABLED(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_PREFIXSMSC_DISABLED(This,Val) ) 

#define IConstants_get_GSM_PREFIXSMSC_AUTO(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_PREFIXSMSC_AUTO(This,Val) ) 

#define IConstants_get_GSM_TCPMODE_RAW(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_TCPMODE_RAW(This,Val) ) 

#define IConstants_get_GSM_TCPMODE_TELNET(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_TCPMODE_TELNET(This,Val) ) 

#define IConstants_get_GSM_TCPMODE_TELNET_WITH_COMCONTROL(This,Val)	\
    ( (This)->lpVtbl -> get_GSM_TCPMODE_TELNET_WITH_COMCONTROL(This,Val) ) 

#define IConstants_get_WAPPUSH_SIGNAL_NONE(This,Val)	\
    ( (This)->lpVtbl -> get_WAPPUSH_SIGNAL_NONE(This,Val) ) 

#define IConstants_get_WAPPUSH_SIGNAL_LOW(This,Val)	\
    ( (This)->lpVtbl -> get_WAPPUSH_SIGNAL_LOW(This,Val) ) 

#define IConstants_get_WAPPUSH_SIGNAL_MEDIUM(This,Val)	\
    ( (This)->lpVtbl -> get_WAPPUSH_SIGNAL_MEDIUM(This,Val) ) 

#define IConstants_get_WAPPUSH_SIGNAL_HIGH(This,Val)	\
    ( (This)->lpVtbl -> get_WAPPUSH_SIGNAL_HIGH(This,Val) ) 

#define IConstants_get_WAPPUSH_SIGNAL_DELETE(This,Val)	\
    ( (This)->lpVtbl -> get_WAPPUSH_SIGNAL_DELETE(This,Val) ) 

#define IConstants_get_DIALUP_PROVIDERTYPE_UCP(This,Val)	\
    ( (This)->lpVtbl -> get_DIALUP_PROVIDERTYPE_UCP(This,Val) ) 

#define IConstants_get_DIALUP_PROVIDERTYPE_TAP_DEFAULT(This,Val)	\
    ( (This)->lpVtbl -> get_DIALUP_PROVIDERTYPE_TAP_DEFAULT(This,Val) ) 

#define IConstants_get_DIALUP_PROVIDERTYPE_TAP_NOLF(This,Val)	\
    ( (This)->lpVtbl -> get_DIALUP_PROVIDERTYPE_TAP_NOLF(This,Val) ) 

#define IConstants_get_DIALUP_PROVIDERTYPE_TAP_NOEOT(This,Val)	\
    ( (This)->lpVtbl -> get_DIALUP_PROVIDERTYPE_TAP_NOEOT(This,Val) ) 

#define IConstants_get_DIALUP_DIALMODE_TONE(This,Val)	\
    ( (This)->lpVtbl -> get_DIALUP_DIALMODE_TONE(This,Val) ) 

#define IConstants_get_DIALUP_DIALMODE_PULSE(This,Val)	\
    ( (This)->lpVtbl -> get_DIALUP_DIALMODE_PULSE(This,Val) ) 

#define IConstants_get_DIALUP_DEVICESETTINGS_DEFAULT(This,Val)	\
    ( (This)->lpVtbl -> get_DIALUP_DEVICESETTINGS_DEFAULT(This,Val) ) 

#define IConstants_get_DIALUP_DEVICESETTINGS_8N1(This,Val)	\
    ( (This)->lpVtbl -> get_DIALUP_DEVICESETTINGS_8N1(This,Val) ) 

#define IConstants_get_DIALUP_DEVICESETTINGS_7E1(This,Val)	\
    ( (This)->lpVtbl -> get_DIALUP_DEVICESETTINGS_7E1(This,Val) ) 

#define IConstants_get_LANGUAGE_LOCKINGSHIFT_BASIC(This,Val)	\
    ( (This)->lpVtbl -> get_LANGUAGE_LOCKINGSHIFT_BASIC(This,Val) ) 

#define IConstants_get_LANGUAGE_LOCKINGSHIFT_TURKISH(This,Val)	\
    ( (This)->lpVtbl -> get_LANGUAGE_LOCKINGSHIFT_TURKISH(This,Val) ) 

#define IConstants_get_LANGUAGE_LOCKINGSHIFT_PORTUGUESE(This,Val)	\
    ( (This)->lpVtbl -> get_LANGUAGE_LOCKINGSHIFT_PORTUGUESE(This,Val) ) 

#define IConstants_get_LANGUAGE_LOCKINGSHIFT_SPANISH(This,Val)	\
    ( (This)->lpVtbl -> get_LANGUAGE_LOCKINGSHIFT_SPANISH(This,Val) ) 

#define IConstants_get_LANGUAGE_LOCKINGSHIFT_BENGALI(This,Val)	\
    ( (This)->lpVtbl -> get_LANGUAGE_LOCKINGSHIFT_BENGALI(This,Val) ) 

#define IConstants_get_LANGUAGE_LOCKINGSHIFT_GUJARATI(This,Val)	\
    ( (This)->lpVtbl -> get_LANGUAGE_LOCKINGSHIFT_GUJARATI(This,Val) ) 

#define IConstants_get_LANGUAGE_LOCKINGSHIFT_HINDI(This,Val)	\
    ( (This)->lpVtbl -> get_LANGUAGE_LOCKINGSHIFT_HINDI(This,Val) ) 

#define IConstants_get_LANGUAGE_LOCKINGSHIFT_KANNADA(This,Val)	\
    ( (This)->lpVtbl -> get_LANGUAGE_LOCKINGSHIFT_KANNADA(This,Val) ) 

#define IConstants_get_LANGUAGE_LOCKINGSHIFT_MALAYALAM(This,Val)	\
    ( (This)->lpVtbl -> get_LANGUAGE_LOCKINGSHIFT_MALAYALAM(This,Val) ) 

#define IConstants_get_LANGUAGE_LOCKINGSHIFT_ORIYA(This,Val)	\
    ( (This)->lpVtbl -> get_LANGUAGE_LOCKINGSHIFT_ORIYA(This,Val) ) 

#define IConstants_get_LANGUAGE_LOCKINGSHIFT_PUNJABI(This,Val)	\
    ( (This)->lpVtbl -> get_LANGUAGE_LOCKINGSHIFT_PUNJABI(This,Val) ) 

#define IConstants_get_LANGUAGE_LOCKINGSHIFT_TAMIL(This,Val)	\
    ( (This)->lpVtbl -> get_LANGUAGE_LOCKINGSHIFT_TAMIL(This,Val) ) 

#define IConstants_get_LANGUAGE_LOCKINGSHIFT_TELUGU(This,Val)	\
    ( (This)->lpVtbl -> get_LANGUAGE_LOCKINGSHIFT_TELUGU(This,Val) ) 

#define IConstants_get_LANGUAGE_LOCKINGSHIFT_URDU(This,Val)	\
    ( (This)->lpVtbl -> get_LANGUAGE_LOCKINGSHIFT_URDU(This,Val) ) 

#define IConstants_get_LANGUAGE_SINGLESHIFT_BASIC(This,Val)	\
    ( (This)->lpVtbl -> get_LANGUAGE_SINGLESHIFT_BASIC(This,Val) ) 

#define IConstants_get_LANGUAGE_SINGLESHIFT_TURKISH(This,Val)	\
    ( (This)->lpVtbl -> get_LANGUAGE_SINGLESHIFT_TURKISH(This,Val) ) 

#define IConstants_get_LANGUAGE_SINGLESHIFT_SPANISH(This,Val)	\
    ( (This)->lpVtbl -> get_LANGUAGE_SINGLESHIFT_SPANISH(This,Val) ) 

#define IConstants_get_LANGUAGE_SINGLESHIFT_PORTUGUESE(This,Val)	\
    ( (This)->lpVtbl -> get_LANGUAGE_SINGLESHIFT_PORTUGUESE(This,Val) ) 

#define IConstants_get_LANGUAGE_SINGLESHIFT_BENGALI(This,Val)	\
    ( (This)->lpVtbl -> get_LANGUAGE_SINGLESHIFT_BENGALI(This,Val) ) 

#define IConstants_get_LANGUAGE_SINGLESHIFT_GUJARATI(This,Val)	\
    ( (This)->lpVtbl -> get_LANGUAGE_SINGLESHIFT_GUJARATI(This,Val) ) 

#define IConstants_get_LANGUAGE_SINGLESHIFT_HINDI(This,Val)	\
    ( (This)->lpVtbl -> get_LANGUAGE_SINGLESHIFT_HINDI(This,Val) ) 

#define IConstants_get_LANGUAGE_SINGLESHIFT_KANNADA(This,Val)	\
    ( (This)->lpVtbl -> get_LANGUAGE_SINGLESHIFT_KANNADA(This,Val) ) 

#define IConstants_get_LANGUAGE_SINGLESHIFT_MALAYALAM(This,Val)	\
    ( (This)->lpVtbl -> get_LANGUAGE_SINGLESHIFT_MALAYALAM(This,Val) ) 

#define IConstants_get_LANGUAGE_SINGLESHIFT_ORIYA(This,Val)	\
    ( (This)->lpVtbl -> get_LANGUAGE_SINGLESHIFT_ORIYA(This,Val) ) 

#define IConstants_get_LANGUAGE_SINGLESHIFT_PUNJABI(This,Val)	\
    ( (This)->lpVtbl -> get_LANGUAGE_SINGLESHIFT_PUNJABI(This,Val) ) 

#define IConstants_get_LANGUAGE_SINGLESHIFT_TAMIL(This,Val)	\
    ( (This)->lpVtbl -> get_LANGUAGE_SINGLESHIFT_TAMIL(This,Val) ) 

#define IConstants_get_LANGUAGE_SINGLESHIFT_TELUGU(This,Val)	\
    ( (This)->lpVtbl -> get_LANGUAGE_SINGLESHIFT_TELUGU(This,Val) ) 

#define IConstants_get_LANGUAGE_SINGLESHIFT_URDU(This,Val)	\
    ( (This)->lpVtbl -> get_LANGUAGE_SINGLESHIFT_URDU(This,Val) ) 

#define IConstants_SmppBindToString(This,lVal,strVal)	\
    ( (This)->lpVtbl -> SmppBindToString(This,lVal,strVal) ) 

#define IConstants_SmppVersionToString(This,lVal,strVal)	\
    ( (This)->lpVtbl -> SmppVersionToString(This,lVal,strVal) ) 

#define IConstants_TonToString(This,lVal,strVal)	\
    ( (This)->lpVtbl -> TonToString(This,lVal,strVal) ) 

#define IConstants_NpiToString(This,lVal,strVal)	\
    ( (This)->lpVtbl -> NpiToString(This,lVal,strVal) ) 

#define IConstants_MultipartToString(This,lVal,strVal)	\
    ( (This)->lpVtbl -> MultipartToString(This,lVal,strVal) ) 

#define IConstants_BodyformatToString(This,lVal,strVal)	\
    ( (This)->lpVtbl -> BodyformatToString(This,lVal,strVal) ) 

#define IConstants_SmppEsm2SmscToString(This,lVal,strVal)	\
    ( (This)->lpVtbl -> SmppEsm2SmscToString(This,lVal,strVal) ) 

#define IConstants_SmppEsm2EsmeToString(This,lVal,strVal)	\
    ( (This)->lpVtbl -> SmppEsm2EsmeToString(This,lVal,strVal) ) 

#define IConstants_SmppUseGsmEncodingToString(This,lVal,strVal)	\
    ( (This)->lpVtbl -> SmppUseGsmEncodingToString(This,lVal,strVal) ) 

#define IConstants_SmppDataCodingToString(This,lVal,strVal)	\
    ( (This)->lpVtbl -> SmppDataCodingToString(This,lVal,strVal) ) 

#define IConstants_SmppPriorityFlagToString(This,lVal,strVal)	\
    ( (This)->lpVtbl -> SmppPriorityFlagToString(This,lVal,strVal) ) 

#define IConstants_SmppMessageStateToString(This,lVal,strVal)	\
    ( (This)->lpVtbl -> SmppMessageStateToString(This,lVal,strVal) ) 

#define IConstants_SmppSessionStateToString(This,lVal,strVal)	\
    ( (This)->lpVtbl -> SmppSessionStateToString(This,lVal,strVal) ) 

#define IConstants_SmppTlvToString(This,lVal,strVal)	\
    ( (This)->lpVtbl -> SmppTlvToString(This,lVal,strVal) ) 

#define IConstants_SmppMultipartModeToString(This,lVal,strVal)	\
    ( (This)->lpVtbl -> SmppMultipartModeToString(This,lVal,strVal) ) 

#define IConstants_SmppSubmitModeToString(This,lVal,strVal)	\
    ( (This)->lpVtbl -> SmppSubmitModeToString(This,lVal,strVal) ) 

#define IConstants_SmppEsmeToString(This,lVal,strVal)	\
    ( (This)->lpVtbl -> SmppEsmeToString(This,lVal,strVal) ) 

#define IConstants_GsmStatusToString(This,lVal,strVal)	\
    ( (This)->lpVtbl -> GsmStatusToString(This,lVal,strVal) ) 

#define IConstants_GsmStorageTypeToString(This,lVal,strVal)	\
    ( (This)->lpVtbl -> GsmStorageTypeToString(This,lVal,strVal) ) 

#define IConstants_GsmFoToString(This,lVal,strVal)	\
    ( (This)->lpVtbl -> GsmFoToString(This,lVal,strVal) ) 

#define IConstants_GsmDataCodingToString(This,lVal,strVal)	\
    ( (This)->lpVtbl -> GsmDataCodingToString(This,lVal,strVal) ) 

#define IConstants_GsmBaudrateToString(This,lVal,strVal)	\
    ( (This)->lpVtbl -> GsmBaudrateToString(This,lVal,strVal) ) 

#define IConstants_GsmMessageStateToString(This,lVal,strVal)	\
    ( (This)->lpVtbl -> GsmMessageStateToString(This,lVal,strVal) ) 

#define IConstants_GsmMessageFormatToString(This,lVal,strVal)	\
    ( (This)->lpVtbl -> GsmMessageFormatToString(This,lVal,strVal) ) 

#define IConstants_GsmPrefixSmscToString(This,lVal,strVal)	\
    ( (This)->lpVtbl -> GsmPrefixSmscToString(This,lVal,strVal) ) 

#define IConstants_WapPushSignalToString(This,lVal,strVal)	\
    ( (This)->lpVtbl -> WapPushSignalToString(This,lVal,strVal) ) 

#define IConstants_DialupProviderTypeToString(This,lVal,strVal)	\
    ( (This)->lpVtbl -> DialupProviderTypeToString(This,lVal,strVal) ) 

#define IConstants_DialupDialModeToString(This,lVal,strVal)	\
    ( (This)->lpVtbl -> DialupDialModeToString(This,lVal,strVal) ) 

#define IConstants_DialupDeviceSettingsToString(This,lVal,strVal)	\
    ( (This)->lpVtbl -> DialupDeviceSettingsToString(This,lVal,strVal) ) 

#define IConstants_GsmTcpModeToString(This,lVal,strVal)	\
    ( (This)->lpVtbl -> GsmTcpModeToString(This,lVal,strVal) ) 

#define IConstants_LanguageLockingShiftToString(This,lVal,strVal)	\
    ( (This)->lpVtbl -> LanguageLockingShiftToString(This,lVal,strVal) ) 

#define IConstants_LanguageSingleShiftToString(This,lVal,strVal)	\
    ( (This)->lpVtbl -> LanguageSingleShiftToString(This,lVal,strVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_TLV_MS_VALIDITY_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_TLV_MS_VALIDITY_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_TLV_ALERT_ON_MESSAGE_DELIVERY_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_TLV_ALERT_ON_MESSAGE_DELIVERY_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_TLV_ITS_REPLY_TYPE_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_TLV_ITS_REPLY_TYPE_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_TLV_ITS_SESSION_INFO_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_TLV_ITS_SESSION_INFO_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_MULTIPARTMODE_UDH_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_MULTIPARTMODE_UDH_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_MULTIPARTMODE_UDH16BIT_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_MULTIPARTMODE_UDH16BIT_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_MULTIPARTMODE_SARTLV_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_MULTIPARTMODE_SARTLV_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_MULTIPARTMODE_PAYLOADTLV_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_MULTIPARTMODE_PAYLOADTLV_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_LOGLEVEL_MINIMAL_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_LOGLEVEL_MINIMAL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_LOGLEVEL_NORMAL_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_LOGLEVEL_NORMAL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_LOGLEVEL_VERBOSE_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_LOGLEVEL_VERBOSE_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_SUBMITMODE_SUBMITSM_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_SUBMITMODE_SUBMITSM_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_SUBMITMODE_DATASM_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_SUBMITMODE_DATASM_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_DELIVERMODE_DELIVERSM_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_DELIVERMODE_DELIVERSM_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_DELIVERMODE_DATASM_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_DELIVERMODE_DATASM_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_USEGSMENCODING_INCHARSET_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_USEGSMENCODING_INCHARSET_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_USEGSMENCODING_OUTCHARSET_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_USEGSMENCODING_OUTCHARSET_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_USEGSMENCODING_INOUTCHARS_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_USEGSMENCODING_INOUTCHARS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_IPVERSION_4_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_IPVERSION_4_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_IPVERSION_6_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_IPVERSION_6_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_IPVERSION_BOTH_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_IPVERSION_BOTH_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_CERTIFICATESTORE_LOCALMACHINE_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_CERTIFICATESTORE_LOCALMACHINE_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_CERTIFICATESTORE_CURRENTUSER_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_CERTIFICATESTORE_CURRENTUSER_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_ESME_ROK_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_ESME_ROK_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_ESME_RINVMSGLEN_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_ESME_RINVMSGLEN_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_ESME_RINVCMDLEN_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_ESME_RINVCMDLEN_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_ESME_RINVCMDID_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_ESME_RINVCMDID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_ESME_RINVBNDSTS_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_ESME_RINVBNDSTS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_ESME_RALYBND_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_ESME_RALYBND_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_ESME_RINVPRTFLG_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_ESME_RINVPRTFLG_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_ESME_RINVREGDLVFLG_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_ESME_RINVREGDLVFLG_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_ESME_RSYSERR_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_ESME_RSYSERR_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_ESME_RINVSRCADR_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_ESME_RINVSRCADR_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_ESME_RINVDSTADR_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_ESME_RINVDSTADR_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_ESME_RINVMSGID_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_ESME_RINVMSGID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_ESME_RBINDFAIL_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_ESME_RBINDFAIL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_ESME_RINVPASWD_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_ESME_RINVPASWD_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_ESME_RINVSYSID_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_ESME_RINVSYSID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_ESME_RCANCELFAIL_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_ESME_RCANCELFAIL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_ESME_RREPLACEFAIL_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_ESME_RREPLACEFAIL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_ESME_RMSGQFUL_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_ESME_RMSGQFUL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_ESME_RINVSERTYP_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_ESME_RINVSERTYP_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_ESME_RINVNUMDESTS_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_ESME_RINVNUMDESTS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_ESME_RINVDLNAME_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_ESME_RINVDLNAME_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_ESME_RINVDESTFLAG_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_ESME_RINVDESTFLAG_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_ESME_RINVSUBREP_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_ESME_RINVSUBREP_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_ESME_RINVESMCLASS_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_ESME_RINVESMCLASS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_ESME_RCNTSUBDL_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_ESME_RCNTSUBDL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_ESME_RSUBMITFAIL_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_ESME_RSUBMITFAIL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_ESME_RINVSRCTON_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_ESME_RINVSRCTON_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_ESME_RINVSRCNPI_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_ESME_RINVSRCNPI_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_ESME_RINVDSTTON_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_ESME_RINVDSTTON_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_ESME_RINVDSTNPI_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_ESME_RINVDSTNPI_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_ESME_RINVSYSTYP_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_ESME_RINVSYSTYP_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_ESME_RINVREPFLAG_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_ESME_RINVREPFLAG_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_ESME_RINVNUMMSGS_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_ESME_RINVNUMMSGS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_ESME_RTHROTTLED_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_ESME_RTHROTTLED_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_ESME_RINVSCHED_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_ESME_RINVSCHED_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_ESME_RINVEXPIRY_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_ESME_RINVEXPIRY_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_ESME_RINVDFTMSGID_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_ESME_RINVDFTMSGID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_ESME_RX_T_APPN_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_ESME_RX_T_APPN_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_ESME_RX_P_APPN_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_ESME_RX_P_APPN_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_ESME_RX_R_APPN_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_ESME_RX_R_APPN_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_ESME_RQUERYFAIL_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_ESME_RQUERYFAIL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_ESME_RINVOPTPARSTREAM_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_ESME_RINVOPTPARSTREAM_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_ESME_ROPTPARNOTALLWD_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_ESME_ROPTPARNOTALLWD_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_ESME_RINVPARLEN_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_ESME_RINVPARLEN_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_ESME_RMISSINGOPTPARAM_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_ESME_RMISSINGOPTPARAM_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_ESME_RINVOPTPARAMVAL_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_ESME_RINVOPTPARAMVAL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_ESME_RDELIVERYFAILURE_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_ESME_RDELIVERYFAILURE_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_SMPP_ESME_RUNKNOWNERR_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_SMPP_ESME_RUNKNOWNERR_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_STATUS_MESSAGE_DELIVERED_SUCCESSFULLY_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_STATUS_MESSAGE_DELIVERED_SUCCESSFULLY_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_STATUS_FORWARDED_STATUS_UNKNOWN_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_STATUS_FORWARDED_STATUS_UNKNOWN_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_STATUS_REPLACED_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_STATUS_REPLACED_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_STATUS_CONGESTION_STILL_TRYING_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_STATUS_CONGESTION_STILL_TRYING_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_STATUS_RECIPIENT_BUSY_STILL_TRYING_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_STATUS_RECIPIENT_BUSY_STILL_TRYING_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_STATUS_NO_RESPONSE_STILL_TRYING_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_STATUS_NO_RESPONSE_STILL_TRYING_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_STATUS_SERVICE_REJECTED_STILL_TRYING_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_STATUS_SERVICE_REJECTED_STILL_TRYING_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_STATUS_QOS_NOT_AVAILABLE_STILL_TRYING_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_STATUS_QOS_NOT_AVAILABLE_STILL_TRYING_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_STATUS_RECIPIENT_ERROR_STILL_TRYING_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_STATUS_RECIPIENT_ERROR_STILL_TRYING_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_STATUS_RPC_ERROR_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_STATUS_RPC_ERROR_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_STATUS_INCOMPATIBLE_DESTINATION_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_STATUS_INCOMPATIBLE_DESTINATION_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_STATUS_CONNECTION_REJECTED_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_STATUS_CONNECTION_REJECTED_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_STATUS_NOT_OBTAINABLE_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_STATUS_NOT_OBTAINABLE_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_STATUS_QOS_NOT_AVAILABLE_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_STATUS_QOS_NOT_AVAILABLE_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_STATUS_NO_INTERNETWORKING_AVAILABLE_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_STATUS_NO_INTERNETWORKING_AVAILABLE_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_STATUS_MESSAGE_EXPIRED_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_STATUS_MESSAGE_EXPIRED_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_STATUS_MESSAGE_DELETED_BY_SENDER_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_STATUS_MESSAGE_DELETED_BY_SENDER_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_STATUS_MESSAGE_DELETED_BY_SMSC_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_STATUS_MESSAGE_DELETED_BY_SMSC_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_STATUS_DOES_NOT_EXIST_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_STATUS_DOES_NOT_EXIST_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_STORAGETYPE_SIM_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_STORAGETYPE_SIM_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_STORAGETYPE_MEMORY_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_STORAGETYPE_MEMORY_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_STORAGETYPE_COMBINED_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_STORAGETYPE_COMBINED_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_STORAGETYPE_STATUS_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_STORAGETYPE_STATUS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_STORAGETYPE_ALL_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_STORAGETYPE_ALL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_FO_REPLYPATH_EXISTS_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_FO_REPLYPATH_EXISTS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_FO_UDHI_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_FO_UDHI_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_FO_STATUS_REPORT_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_FO_STATUS_REPORT_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_FO_VALIDITY_NONE_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_FO_VALIDITY_NONE_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_FO_VALIDITY_RELATIVE_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_FO_VALIDITY_RELATIVE_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_FO_VALIDITY_ENHANCED_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_FO_VALIDITY_ENHANCED_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_FO_VALIDITY_ABSOLUTE_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_FO_VALIDITY_ABSOLUTE_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_FO_REJECT_DUPLICATES_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_FO_REJECT_DUPLICATES_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_FO_SUBMIT_SM_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_FO_SUBMIT_SM_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_FO_DELIVER_SM_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_FO_DELIVER_SM_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_FO_STATUS_SM_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_FO_STATUS_SM_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_DATACODING_DEFAULT_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_DATACODING_DEFAULT_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_DATACODING_8BIT_DATA_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_DATACODING_8BIT_DATA_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_DATACODING_UNICODE_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_DATACODING_UNICODE_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_DATACODING_ME_SPECIFIC_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_DATACODING_ME_SPECIFIC_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_DATACODING_SIM_SPECIFIC_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_DATACODING_SIM_SPECIFIC_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_DATACODING_TE_SPECIFIC_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_DATACODING_TE_SPECIFIC_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_DATACODING_FLASH_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_DATACODING_FLASH_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_BAUDRATE_110_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_BAUDRATE_110_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_BAUDRATE_300_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_BAUDRATE_300_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_BAUDRATE_600_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_BAUDRATE_600_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_BAUDRATE_1200_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_BAUDRATE_1200_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_BAUDRATE_2400_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_BAUDRATE_2400_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_BAUDRATE_4800_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_BAUDRATE_4800_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_BAUDRATE_9600_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_BAUDRATE_9600_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_BAUDRATE_14400_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_BAUDRATE_14400_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_BAUDRATE_19200_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_BAUDRATE_19200_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_BAUDRATE_38400_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_BAUDRATE_38400_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_BAUDRATE_56000_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_BAUDRATE_56000_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_BAUDRATE_57600_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_BAUDRATE_57600_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_BAUDRATE_64000_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_BAUDRATE_64000_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_BAUDRATE_115200_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_BAUDRATE_115200_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_BAUDRATE_128000_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_BAUDRATE_128000_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_BAUDRATE_230400_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_BAUDRATE_230400_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_BAUDRATE_256000_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_BAUDRATE_256000_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_BAUDRATE_460800_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_BAUDRATE_460800_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_BAUDRATE_921600_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_BAUDRATE_921600_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_BAUDRATE_DEFAULT_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_BAUDRATE_DEFAULT_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_MESSAGESTATE_RECEIVED_UNREAD_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_MESSAGESTATE_RECEIVED_UNREAD_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_MESSAGESTATE_RECEIVED_READ_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_MESSAGESTATE_RECEIVED_READ_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_MESSAGESTATE_STORED_UNSENT_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_MESSAGESTATE_STORED_UNSENT_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_MESSAGESTATE_STORED_SENT_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_MESSAGESTATE_STORED_SENT_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_MESSAGESTATE_ALL_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_MESSAGESTATE_ALL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_MESSAGEFORMAT_PDU_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_MESSAGEFORMAT_PDU_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_MESSAGEFORMAT_TEXT_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_MESSAGEFORMAT_TEXT_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_MESSAGEFORMAT_AUTO_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_MESSAGEFORMAT_AUTO_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_HTTP_PLACEHOLDER_USERTAG_Proxy( 
    IConstants * This,
    /* [retval][out] */ BSTR *Val);


void __RPC_STUB IConstants_get_HTTP_PLACEHOLDER_USERTAG_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_HTTP_PLACEHOLDER_TOADDRESS_Proxy( 
    IConstants * This,
    /* [retval][out] */ BSTR *Val);


void __RPC_STUB IConstants_get_HTTP_PLACEHOLDER_TOADDRESS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_HTTP_PLACEHOLDER_FROMADDRESS_Proxy( 
    IConstants * This,
    /* [retval][out] */ BSTR *Val);


void __RPC_STUB IConstants_get_HTTP_PLACEHOLDER_FROMADDRESS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_HTTP_PLACEHOLDER_BODY_Proxy( 
    IConstants * This,
    /* [retval][out] */ BSTR *Val);


void __RPC_STUB IConstants_get_HTTP_PLACEHOLDER_BODY_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_HTTP_PLACEHOLDER_BODYASHEX_Proxy( 
    IConstants * This,
    /* [retval][out] */ BSTR *Val);


void __RPC_STUB IConstants_get_HTTP_PLACEHOLDER_BODYASHEX_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_HTTP_PLACEHOLDER_BODYASBASE64_Proxy( 
    IConstants * This,
    /* [retval][out] */ BSTR *Val);


void __RPC_STUB IConstants_get_HTTP_PLACEHOLDER_BODYASBASE64_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_HTTP_PLACEHOLDER_DELIVERYREPORT_Proxy( 
    IConstants * This,
    /* [retval][out] */ BSTR *Val);


void __RPC_STUB IConstants_get_HTTP_PLACEHOLDER_DELIVERYREPORT_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_HTTP_PLACEHOLDER_TOADDRESSTON_Proxy( 
    IConstants * This,
    /* [retval][out] */ BSTR *Val);


void __RPC_STUB IConstants_get_HTTP_PLACEHOLDER_TOADDRESSTON_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_HTTP_PLACEHOLDER_TOADDRESSNPI_Proxy( 
    IConstants * This,
    /* [retval][out] */ BSTR *Val);


void __RPC_STUB IConstants_get_HTTP_PLACEHOLDER_TOADDRESSNPI_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_HTTP_PLACEHOLDER_FROMADDRESSTON_Proxy( 
    IConstants * This,
    /* [retval][out] */ BSTR *Val);


void __RPC_STUB IConstants_get_HTTP_PLACEHOLDER_FROMADDRESSTON_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_HTTP_PLACEHOLDER_FROMADDRESSNPI_Proxy( 
    IConstants * This,
    /* [retval][out] */ BSTR *Val);


void __RPC_STUB IConstants_get_HTTP_PLACEHOLDER_FROMADDRESSNPI_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_HTTP_PLACEHOLDER_PROTOCOLID_Proxy( 
    IConstants * This,
    /* [retval][out] */ BSTR *Val);


void __RPC_STUB IConstants_get_HTTP_PLACEHOLDER_PROTOCOLID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_HTTP_PLACEHOLDER_UDHI_Proxy( 
    IConstants * This,
    /* [retval][out] */ BSTR *Val);


void __RPC_STUB IConstants_get_HTTP_PLACEHOLDER_UDHI_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_HTTP_PLACEHOLDER_DATACODING_Proxy( 
    IConstants * This,
    /* [retval][out] */ BSTR *Val);


void __RPC_STUB IConstants_get_HTTP_PLACEHOLDER_DATACODING_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_HTTP_PLACEHOLDER_USERTAGSTRING_Proxy( 
    IConstants * This,
    /* [retval][out] */ BSTR *Val);


void __RPC_STUB IConstants_get_HTTP_PLACEHOLDER_USERTAGSTRING_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_PREFIXSMSC_ENABLED_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_PREFIXSMSC_ENABLED_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_PREFIXSMSC_DISABLED_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_PREFIXSMSC_DISABLED_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_PREFIXSMSC_AUTO_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_PREFIXSMSC_AUTO_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_TCPMODE_RAW_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_TCPMODE_RAW_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_TCPMODE_TELNET_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_TCPMODE_TELNET_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_GSM_TCPMODE_TELNET_WITH_COMCONTROL_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_GSM_TCPMODE_TELNET_WITH_COMCONTROL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_WAPPUSH_SIGNAL_NONE_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_WAPPUSH_SIGNAL_NONE_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_WAPPUSH_SIGNAL_LOW_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_WAPPUSH_SIGNAL_LOW_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_WAPPUSH_SIGNAL_MEDIUM_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_WAPPUSH_SIGNAL_MEDIUM_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_WAPPUSH_SIGNAL_HIGH_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_WAPPUSH_SIGNAL_HIGH_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_WAPPUSH_SIGNAL_DELETE_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_WAPPUSH_SIGNAL_DELETE_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_DIALUP_PROVIDERTYPE_UCP_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_DIALUP_PROVIDERTYPE_UCP_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_DIALUP_PROVIDERTYPE_TAP_DEFAULT_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_DIALUP_PROVIDERTYPE_TAP_DEFAULT_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_DIALUP_PROVIDERTYPE_TAP_NOLF_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_DIALUP_PROVIDERTYPE_TAP_NOLF_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_DIALUP_PROVIDERTYPE_TAP_NOEOT_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_DIALUP_PROVIDERTYPE_TAP_NOEOT_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_DIALUP_DIALMODE_TONE_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_DIALUP_DIALMODE_TONE_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_DIALUP_DIALMODE_PULSE_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_DIALUP_DIALMODE_PULSE_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_DIALUP_DEVICESETTINGS_DEFAULT_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_DIALUP_DEVICESETTINGS_DEFAULT_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_DIALUP_DEVICESETTINGS_8N1_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_DIALUP_DEVICESETTINGS_8N1_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_DIALUP_DEVICESETTINGS_7E1_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_DIALUP_DEVICESETTINGS_7E1_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_LANGUAGE_LOCKINGSHIFT_BASIC_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_LANGUAGE_LOCKINGSHIFT_BASIC_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_LANGUAGE_LOCKINGSHIFT_TURKISH_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_LANGUAGE_LOCKINGSHIFT_TURKISH_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_LANGUAGE_LOCKINGSHIFT_PORTUGUESE_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_LANGUAGE_LOCKINGSHIFT_PORTUGUESE_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_LANGUAGE_LOCKINGSHIFT_SPANISH_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_LANGUAGE_LOCKINGSHIFT_SPANISH_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_LANGUAGE_LOCKINGSHIFT_BENGALI_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_LANGUAGE_LOCKINGSHIFT_BENGALI_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_LANGUAGE_LOCKINGSHIFT_GUJARATI_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_LANGUAGE_LOCKINGSHIFT_GUJARATI_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_LANGUAGE_LOCKINGSHIFT_HINDI_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_LANGUAGE_LOCKINGSHIFT_HINDI_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_LANGUAGE_LOCKINGSHIFT_KANNADA_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_LANGUAGE_LOCKINGSHIFT_KANNADA_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_LANGUAGE_LOCKINGSHIFT_MALAYALAM_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_LANGUAGE_LOCKINGSHIFT_MALAYALAM_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_LANGUAGE_LOCKINGSHIFT_ORIYA_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_LANGUAGE_LOCKINGSHIFT_ORIYA_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_LANGUAGE_LOCKINGSHIFT_PUNJABI_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_LANGUAGE_LOCKINGSHIFT_PUNJABI_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_LANGUAGE_LOCKINGSHIFT_TAMIL_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_LANGUAGE_LOCKINGSHIFT_TAMIL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_LANGUAGE_LOCKINGSHIFT_TELUGU_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_LANGUAGE_LOCKINGSHIFT_TELUGU_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_LANGUAGE_LOCKINGSHIFT_URDU_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_LANGUAGE_LOCKINGSHIFT_URDU_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_LANGUAGE_SINGLESHIFT_BASIC_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_LANGUAGE_SINGLESHIFT_BASIC_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_LANGUAGE_SINGLESHIFT_TURKISH_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_LANGUAGE_SINGLESHIFT_TURKISH_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_LANGUAGE_SINGLESHIFT_SPANISH_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_LANGUAGE_SINGLESHIFT_SPANISH_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_LANGUAGE_SINGLESHIFT_PORTUGUESE_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_LANGUAGE_SINGLESHIFT_PORTUGUESE_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_LANGUAGE_SINGLESHIFT_BENGALI_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_LANGUAGE_SINGLESHIFT_BENGALI_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_LANGUAGE_SINGLESHIFT_GUJARATI_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_LANGUAGE_SINGLESHIFT_GUJARATI_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_LANGUAGE_SINGLESHIFT_HINDI_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_LANGUAGE_SINGLESHIFT_HINDI_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_LANGUAGE_SINGLESHIFT_KANNADA_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_LANGUAGE_SINGLESHIFT_KANNADA_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_LANGUAGE_SINGLESHIFT_MALAYALAM_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_LANGUAGE_SINGLESHIFT_MALAYALAM_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_LANGUAGE_SINGLESHIFT_ORIYA_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_LANGUAGE_SINGLESHIFT_ORIYA_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_LANGUAGE_SINGLESHIFT_PUNJABI_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_LANGUAGE_SINGLESHIFT_PUNJABI_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_LANGUAGE_SINGLESHIFT_TAMIL_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_LANGUAGE_SINGLESHIFT_TAMIL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_LANGUAGE_SINGLESHIFT_TELUGU_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_LANGUAGE_SINGLESHIFT_TELUGU_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IConstants_get_LANGUAGE_SINGLESHIFT_URDU_Proxy( 
    IConstants * This,
    /* [retval][out] */ LONG *Val);


void __RPC_STUB IConstants_get_LANGUAGE_SINGLESHIFT_URDU_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IConstants_SmppBindToString_Proxy( 
    IConstants * This,
    /* [in] */ LONG lVal,
    /* [retval][out] */ BSTR *strVal);


void __RPC_STUB IConstants_SmppBindToString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IConstants_SmppVersionToString_Proxy( 
    IConstants * This,
    /* [in] */ LONG lVal,
    /* [retval][out] */ BSTR *strVal);


void __RPC_STUB IConstants_SmppVersionToString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IConstants_TonToString_Proxy( 
    IConstants * This,
    /* [in] */ LONG lVal,
    /* [retval][out] */ BSTR *strVal);


void __RPC_STUB IConstants_TonToString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IConstants_NpiToString_Proxy( 
    IConstants * This,
    /* [in] */ LONG lVal,
    /* [retval][out] */ BSTR *strVal);


void __RPC_STUB IConstants_NpiToString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IConstants_MultipartToString_Proxy( 
    IConstants * This,
    /* [in] */ LONG lVal,
    /* [retval][out] */ BSTR *strVal);


void __RPC_STUB IConstants_MultipartToString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IConstants_BodyformatToString_Proxy( 
    IConstants * This,
    /* [in] */ LONG lVal,
    /* [retval][out] */ BSTR *strVal);


void __RPC_STUB IConstants_BodyformatToString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IConstants_SmppEsm2SmscToString_Proxy( 
    IConstants * This,
    /* [in] */ LONG lVal,
    /* [retval][out] */ BSTR *strVal);


void __RPC_STUB IConstants_SmppEsm2SmscToString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IConstants_SmppEsm2EsmeToString_Proxy( 
    IConstants * This,
    /* [in] */ LONG lVal,
    /* [retval][out] */ BSTR *strVal);


void __RPC_STUB IConstants_SmppEsm2EsmeToString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IConstants_SmppUseGsmEncodingToString_Proxy( 
    IConstants * This,
    /* [in] */ LONG lVal,
    /* [retval][out] */ BSTR *strVal);


void __RPC_STUB IConstants_SmppUseGsmEncodingToString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IConstants_SmppDataCodingToString_Proxy( 
    IConstants * This,
    /* [in] */ LONG lVal,
    /* [retval][out] */ BSTR *strVal);


void __RPC_STUB IConstants_SmppDataCodingToString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IConstants_SmppPriorityFlagToString_Proxy( 
    IConstants * This,
    /* [in] */ LONG lVal,
    /* [retval][out] */ BSTR *strVal);


void __RPC_STUB IConstants_SmppPriorityFlagToString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IConstants_SmppMessageStateToString_Proxy( 
    IConstants * This,
    /* [in] */ LONG lVal,
    /* [retval][out] */ BSTR *strVal);


void __RPC_STUB IConstants_SmppMessageStateToString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IConstants_SmppSessionStateToString_Proxy( 
    IConstants * This,
    /* [in] */ LONG lVal,
    /* [retval][out] */ BSTR *strVal);


void __RPC_STUB IConstants_SmppSessionStateToString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IConstants_SmppTlvToString_Proxy( 
    IConstants * This,
    /* [in] */ LONG lVal,
    /* [retval][out] */ BSTR *strVal);


void __RPC_STUB IConstants_SmppTlvToString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IConstants_SmppMultipartModeToString_Proxy( 
    IConstants * This,
    /* [in] */ LONG lVal,
    /* [retval][out] */ BSTR *strVal);


void __RPC_STUB IConstants_SmppMultipartModeToString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IConstants_SmppSubmitModeToString_Proxy( 
    IConstants * This,
    /* [in] */ LONG lVal,
    /* [retval][out] */ BSTR *strVal);


void __RPC_STUB IConstants_SmppSubmitModeToString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IConstants_SmppEsmeToString_Proxy( 
    IConstants * This,
    /* [in] */ LONG lVal,
    /* [retval][out] */ BSTR *strVal);


void __RPC_STUB IConstants_SmppEsmeToString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IConstants_GsmStatusToString_Proxy( 
    IConstants * This,
    /* [in] */ LONG lVal,
    /* [retval][out] */ BSTR *strVal);


void __RPC_STUB IConstants_GsmStatusToString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IConstants_GsmStorageTypeToString_Proxy( 
    IConstants * This,
    /* [in] */ LONG lVal,
    /* [retval][out] */ BSTR *strVal);


void __RPC_STUB IConstants_GsmStorageTypeToString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IConstants_GsmFoToString_Proxy( 
    IConstants * This,
    /* [in] */ LONG lVal,
    /* [retval][out] */ BSTR *strVal);


void __RPC_STUB IConstants_GsmFoToString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IConstants_GsmDataCodingToString_Proxy( 
    IConstants * This,
    /* [in] */ LONG lVal,
    /* [retval][out] */ BSTR *strVal);


void __RPC_STUB IConstants_GsmDataCodingToString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IConstants_GsmBaudrateToString_Proxy( 
    IConstants * This,
    /* [in] */ LONG lVal,
    /* [retval][out] */ BSTR *strVal);


void __RPC_STUB IConstants_GsmBaudrateToString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IConstants_GsmMessageStateToString_Proxy( 
    IConstants * This,
    /* [in] */ LONG lVal,
    /* [retval][out] */ BSTR *strVal);


void __RPC_STUB IConstants_GsmMessageStateToString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IConstants_GsmMessageFormatToString_Proxy( 
    IConstants * This,
    /* [in] */ LONG lVal,
    /* [retval][out] */ BSTR *strVal);


void __RPC_STUB IConstants_GsmMessageFormatToString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IConstants_GsmPrefixSmscToString_Proxy( 
    IConstants * This,
    /* [in] */ LONG lVal,
    /* [retval][out] */ BSTR *strVal);


void __RPC_STUB IConstants_GsmPrefixSmscToString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IConstants_WapPushSignalToString_Proxy( 
    IConstants * This,
    /* [in] */ LONG lVal,
    /* [retval][out] */ BSTR *strVal);


void __RPC_STUB IConstants_WapPushSignalToString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IConstants_DialupProviderTypeToString_Proxy( 
    IConstants * This,
    /* [in] */ LONG lVal,
    /* [retval][out] */ BSTR *strVal);


void __RPC_STUB IConstants_DialupProviderTypeToString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IConstants_DialupDialModeToString_Proxy( 
    IConstants * This,
    /* [in] */ LONG lVal,
    /* [retval][out] */ BSTR *strVal);


void __RPC_STUB IConstants_DialupDialModeToString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IConstants_DialupDeviceSettingsToString_Proxy( 
    IConstants * This,
    /* [in] */ LONG lVal,
    /* [retval][out] */ BSTR *strVal);


void __RPC_STUB IConstants_DialupDeviceSettingsToString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IConstants_GsmTcpModeToString_Proxy( 
    IConstants * This,
    /* [in] */ LONG lVal,
    /* [retval][out] */ BSTR *strVal);


void __RPC_STUB IConstants_GsmTcpModeToString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IConstants_LanguageLockingShiftToString_Proxy( 
    IConstants * This,
    /* [in] */ LONG lVal,
    /* [retval][out] */ BSTR *strVal);


void __RPC_STUB IConstants_LanguageLockingShiftToString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IConstants_LanguageSingleShiftToString_Proxy( 
    IConstants * This,
    /* [in] */ LONG lVal,
    /* [retval][out] */ BSTR *strVal);


void __RPC_STUB IConstants_LanguageSingleShiftToString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IConstants_INTERFACE_DEFINED__ */


#ifndef __ITlv_INTERFACE_DEFINED__
#define __ITlv_INTERFACE_DEFINED__

/* interface ITlv */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ITlv;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4687CEE3-3966-46A2-AEE3-5A747F455B84")
    ITlv : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Tag( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Tag( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ValueAsString( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ValueAsString( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ValueAsHexString( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ValueAsHexString( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ValueAsInt32( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ValueAsInt32( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ValueAsInt16( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ValueAsInt16( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ValueAsInt8( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ValueAsInt8( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Length( 
            /* [retval][out] */ LONG *Val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITlvVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITlv * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITlv * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITlv * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITlv * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITlv * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITlv * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITlv * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ITlv * This);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Tag )( 
            ITlv * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Tag )( 
            ITlv * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ValueAsString )( 
            ITlv * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ValueAsString )( 
            ITlv * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ValueAsHexString )( 
            ITlv * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ValueAsHexString )( 
            ITlv * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ValueAsInt32 )( 
            ITlv * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ValueAsInt32 )( 
            ITlv * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ValueAsInt16 )( 
            ITlv * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ValueAsInt16 )( 
            ITlv * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ValueAsInt8 )( 
            ITlv * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ValueAsInt8 )( 
            ITlv * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Length )( 
            ITlv * This,
            /* [retval][out] */ LONG *Val);
        
        END_INTERFACE
    } ITlvVtbl;

    interface ITlv
    {
        CONST_VTBL struct ITlvVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITlv_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITlv_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITlv_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITlv_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITlv_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITlv_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITlv_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITlv_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define ITlv_get_Tag(This,Val)	\
    ( (This)->lpVtbl -> get_Tag(This,Val) ) 

#define ITlv_put_Tag(This,newVal)	\
    ( (This)->lpVtbl -> put_Tag(This,newVal) ) 

#define ITlv_get_ValueAsString(This,Val)	\
    ( (This)->lpVtbl -> get_ValueAsString(This,Val) ) 

#define ITlv_put_ValueAsString(This,newVal)	\
    ( (This)->lpVtbl -> put_ValueAsString(This,newVal) ) 

#define ITlv_get_ValueAsHexString(This,Val)	\
    ( (This)->lpVtbl -> get_ValueAsHexString(This,Val) ) 

#define ITlv_put_ValueAsHexString(This,newVal)	\
    ( (This)->lpVtbl -> put_ValueAsHexString(This,newVal) ) 

#define ITlv_get_ValueAsInt32(This,Val)	\
    ( (This)->lpVtbl -> get_ValueAsInt32(This,Val) ) 

#define ITlv_put_ValueAsInt32(This,newVal)	\
    ( (This)->lpVtbl -> put_ValueAsInt32(This,newVal) ) 

#define ITlv_get_ValueAsInt16(This,Val)	\
    ( (This)->lpVtbl -> get_ValueAsInt16(This,Val) ) 

#define ITlv_put_ValueAsInt16(This,newVal)	\
    ( (This)->lpVtbl -> put_ValueAsInt16(This,newVal) ) 

#define ITlv_get_ValueAsInt8(This,Val)	\
    ( (This)->lpVtbl -> get_ValueAsInt8(This,Val) ) 

#define ITlv_put_ValueAsInt8(This,newVal)	\
    ( (This)->lpVtbl -> put_ValueAsInt8(This,newVal) ) 

#define ITlv_get_Length(This,Val)	\
    ( (This)->lpVtbl -> get_Length(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITlv_INTERFACE_DEFINED__ */


#ifndef __IMessage_INTERFACE_DEFINED__
#define __IMessage_INTERFACE_DEFINED__

/* interface IMessage */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IMessage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DFD486FC-45B4-49AB-AD5A-98256AE057FC")
    IMessage : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_UserTag( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_UserTag( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ToAddress( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ToAddress( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_FromAddress( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_FromAddress( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Body( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Body( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RequestDeliveryReport( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_RequestDeliveryReport( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ToAddressTON( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ToAddressTON( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ToAddressNPI( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ToAddressNPI( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_FromAddressTON( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_FromAddressTON( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_FromAddressNPI( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_FromAddressNPI( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProtocolId( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProtocolId( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ValidityPeriod( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ValidityPeriod( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Reference( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Reference( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DataCoding( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DataCoding( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_BodyFormat( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_BodyFormat( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_TotalParts( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_PartNumber( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ReceiveTime( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ReceiveTimeInSeconds( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HasUdh( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_HasUdh( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Incomplete( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MultipartRef( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LanguageLockingShift( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LanguageLockingShift( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LanguageSingleShift( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LanguageSingleShift( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GsmFirstOctet( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_GsmFirstOctet( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GsmSmscAddress( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GsmSmscAddressTON( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GsmSmscAddressNPI( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GsmMemoryIndex( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_GsmMemoryIndex( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GsmMemoryLocation( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_GsmMemoryLocation( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SmppPriority( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_SmppPriority( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SmppServiceType( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_SmppServiceType( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SmppEsmClass( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_SmppEsmClass( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SmppIsDeliveryReport( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_SmppIsDeliveryReport( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SmppStatus( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_SmppStatus( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SmppError( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_SmppError( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SmppCommandStatus( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_SmppCommandStatus( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_SmppSequenceNumber( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SmppSequenceNumber( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SmppServerSubmitDate( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SmppServerFinalDate( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_UserTagString( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_UserTagString( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SmppAddTlv( 
            /* [in] */ ITlv *Tlv) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SmppGetFirstTlv( 
            /* [retval][out] */ ITlv **Tlv) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SmppGetNextTlv( 
            /* [retval][out] */ ITlv **Tlv) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SmppGetTlv( 
            /* [in] */ LONG lTag,
            /* [retval][out] */ ITlv **Tlv) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SmppDeleteTlv( 
            /* [in] */ LONG lTag) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            /* [in] */ LONG Error,
            /* [retval][out] */ BSTR *strDescription) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ToJSon( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE FromJSon( 
            /* [in] */ BSTR Val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMessageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMessage * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMessage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMessage * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMessage * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMessage * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMessage * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMessage * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IMessage * This);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UserTag )( 
            IMessage * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UserTag )( 
            IMessage * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ToAddress )( 
            IMessage * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ToAddress )( 
            IMessage * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FromAddress )( 
            IMessage * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FromAddress )( 
            IMessage * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Body )( 
            IMessage * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Body )( 
            IMessage * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RequestDeliveryReport )( 
            IMessage * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RequestDeliveryReport )( 
            IMessage * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ToAddressTON )( 
            IMessage * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ToAddressTON )( 
            IMessage * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ToAddressNPI )( 
            IMessage * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ToAddressNPI )( 
            IMessage * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FromAddressTON )( 
            IMessage * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FromAddressTON )( 
            IMessage * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FromAddressNPI )( 
            IMessage * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FromAddressNPI )( 
            IMessage * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProtocolId )( 
            IMessage * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProtocolId )( 
            IMessage * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ValidityPeriod )( 
            IMessage * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ValidityPeriod )( 
            IMessage * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Reference )( 
            IMessage * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Reference )( 
            IMessage * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataCoding )( 
            IMessage * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataCoding )( 
            IMessage * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BodyFormat )( 
            IMessage * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BodyFormat )( 
            IMessage * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TotalParts )( 
            IMessage * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PartNumber )( 
            IMessage * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReceiveTime )( 
            IMessage * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReceiveTimeInSeconds )( 
            IMessage * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasUdh )( 
            IMessage * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HasUdh )( 
            IMessage * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Incomplete )( 
            IMessage * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MultipartRef )( 
            IMessage * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LanguageLockingShift )( 
            IMessage * This,
            /* [in] */ LONG Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LanguageLockingShift )( 
            IMessage * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LanguageSingleShift )( 
            IMessage * This,
            /* [in] */ LONG Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LanguageSingleShift )( 
            IMessage * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GsmFirstOctet )( 
            IMessage * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_GsmFirstOctet )( 
            IMessage * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GsmSmscAddress )( 
            IMessage * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GsmSmscAddressTON )( 
            IMessage * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GsmSmscAddressNPI )( 
            IMessage * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GsmMemoryIndex )( 
            IMessage * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_GsmMemoryIndex )( 
            IMessage * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GsmMemoryLocation )( 
            IMessage * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_GsmMemoryLocation )( 
            IMessage * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SmppPriority )( 
            IMessage * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SmppPriority )( 
            IMessage * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SmppServiceType )( 
            IMessage * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SmppServiceType )( 
            IMessage * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SmppEsmClass )( 
            IMessage * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SmppEsmClass )( 
            IMessage * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SmppIsDeliveryReport )( 
            IMessage * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SmppIsDeliveryReport )( 
            IMessage * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SmppStatus )( 
            IMessage * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SmppStatus )( 
            IMessage * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SmppError )( 
            IMessage * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SmppError )( 
            IMessage * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SmppCommandStatus )( 
            IMessage * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SmppCommandStatus )( 
            IMessage * This,
            /* [in] */ LONG newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SmppSequenceNumber )( 
            IMessage * This,
            /* [in] */ LONG Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SmppSequenceNumber )( 
            IMessage * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SmppServerSubmitDate )( 
            IMessage * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SmppServerFinalDate )( 
            IMessage * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UserTagString )( 
            IMessage * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UserTagString )( 
            IMessage * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SmppAddTlv )( 
            IMessage * This,
            /* [in] */ ITlv *Tlv);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SmppGetFirstTlv )( 
            IMessage * This,
            /* [retval][out] */ ITlv **Tlv);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SmppGetNextTlv )( 
            IMessage * This,
            /* [retval][out] */ ITlv **Tlv);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SmppGetTlv )( 
            IMessage * This,
            /* [in] */ LONG lTag,
            /* [retval][out] */ ITlv **Tlv);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SmppDeleteTlv )( 
            IMessage * This,
            /* [in] */ LONG lTag);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            IMessage * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            IMessage * This,
            /* [in] */ LONG Error,
            /* [retval][out] */ BSTR *strDescription);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ToJSon )( 
            IMessage * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FromJSon )( 
            IMessage * This,
            /* [in] */ BSTR Val);
        
        END_INTERFACE
    } IMessageVtbl;

    interface IMessage
    {
        CONST_VTBL struct IMessageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMessage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMessage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMessage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMessage_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMessage_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMessage_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMessage_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMessage_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IMessage_get_UserTag(This,Val)	\
    ( (This)->lpVtbl -> get_UserTag(This,Val) ) 

#define IMessage_put_UserTag(This,newVal)	\
    ( (This)->lpVtbl -> put_UserTag(This,newVal) ) 

#define IMessage_get_ToAddress(This,Val)	\
    ( (This)->lpVtbl -> get_ToAddress(This,Val) ) 

#define IMessage_put_ToAddress(This,newVal)	\
    ( (This)->lpVtbl -> put_ToAddress(This,newVal) ) 

#define IMessage_get_FromAddress(This,Val)	\
    ( (This)->lpVtbl -> get_FromAddress(This,Val) ) 

#define IMessage_put_FromAddress(This,newVal)	\
    ( (This)->lpVtbl -> put_FromAddress(This,newVal) ) 

#define IMessage_get_Body(This,Val)	\
    ( (This)->lpVtbl -> get_Body(This,Val) ) 

#define IMessage_put_Body(This,newVal)	\
    ( (This)->lpVtbl -> put_Body(This,newVal) ) 

#define IMessage_get_RequestDeliveryReport(This,Val)	\
    ( (This)->lpVtbl -> get_RequestDeliveryReport(This,Val) ) 

#define IMessage_put_RequestDeliveryReport(This,newVal)	\
    ( (This)->lpVtbl -> put_RequestDeliveryReport(This,newVal) ) 

#define IMessage_get_ToAddressTON(This,Val)	\
    ( (This)->lpVtbl -> get_ToAddressTON(This,Val) ) 

#define IMessage_put_ToAddressTON(This,newVal)	\
    ( (This)->lpVtbl -> put_ToAddressTON(This,newVal) ) 

#define IMessage_get_ToAddressNPI(This,Val)	\
    ( (This)->lpVtbl -> get_ToAddressNPI(This,Val) ) 

#define IMessage_put_ToAddressNPI(This,newVal)	\
    ( (This)->lpVtbl -> put_ToAddressNPI(This,newVal) ) 

#define IMessage_get_FromAddressTON(This,Val)	\
    ( (This)->lpVtbl -> get_FromAddressTON(This,Val) ) 

#define IMessage_put_FromAddressTON(This,newVal)	\
    ( (This)->lpVtbl -> put_FromAddressTON(This,newVal) ) 

#define IMessage_get_FromAddressNPI(This,Val)	\
    ( (This)->lpVtbl -> get_FromAddressNPI(This,Val) ) 

#define IMessage_put_FromAddressNPI(This,newVal)	\
    ( (This)->lpVtbl -> put_FromAddressNPI(This,newVal) ) 

#define IMessage_get_ProtocolId(This,Val)	\
    ( (This)->lpVtbl -> get_ProtocolId(This,Val) ) 

#define IMessage_put_ProtocolId(This,newVal)	\
    ( (This)->lpVtbl -> put_ProtocolId(This,newVal) ) 

#define IMessage_get_ValidityPeriod(This,Val)	\
    ( (This)->lpVtbl -> get_ValidityPeriod(This,Val) ) 

#define IMessage_put_ValidityPeriod(This,newVal)	\
    ( (This)->lpVtbl -> put_ValidityPeriod(This,newVal) ) 

#define IMessage_get_Reference(This,Val)	\
    ( (This)->lpVtbl -> get_Reference(This,Val) ) 

#define IMessage_put_Reference(This,newVal)	\
    ( (This)->lpVtbl -> put_Reference(This,newVal) ) 

#define IMessage_get_DataCoding(This,Val)	\
    ( (This)->lpVtbl -> get_DataCoding(This,Val) ) 

#define IMessage_put_DataCoding(This,newVal)	\
    ( (This)->lpVtbl -> put_DataCoding(This,newVal) ) 

#define IMessage_get_BodyFormat(This,Val)	\
    ( (This)->lpVtbl -> get_BodyFormat(This,Val) ) 

#define IMessage_put_BodyFormat(This,newVal)	\
    ( (This)->lpVtbl -> put_BodyFormat(This,newVal) ) 

#define IMessage_get_TotalParts(This,Val)	\
    ( (This)->lpVtbl -> get_TotalParts(This,Val) ) 

#define IMessage_get_PartNumber(This,Val)	\
    ( (This)->lpVtbl -> get_PartNumber(This,Val) ) 

#define IMessage_get_ReceiveTime(This,Val)	\
    ( (This)->lpVtbl -> get_ReceiveTime(This,Val) ) 

#define IMessage_get_ReceiveTimeInSeconds(This,Val)	\
    ( (This)->lpVtbl -> get_ReceiveTimeInSeconds(This,Val) ) 

#define IMessage_get_HasUdh(This,Val)	\
    ( (This)->lpVtbl -> get_HasUdh(This,Val) ) 

#define IMessage_put_HasUdh(This,newVal)	\
    ( (This)->lpVtbl -> put_HasUdh(This,newVal) ) 

#define IMessage_get_Incomplete(This,Val)	\
    ( (This)->lpVtbl -> get_Incomplete(This,Val) ) 

#define IMessage_get_MultipartRef(This,Val)	\
    ( (This)->lpVtbl -> get_MultipartRef(This,Val) ) 

#define IMessage_put_LanguageLockingShift(This,Val)	\
    ( (This)->lpVtbl -> put_LanguageLockingShift(This,Val) ) 

#define IMessage_get_LanguageLockingShift(This,Val)	\
    ( (This)->lpVtbl -> get_LanguageLockingShift(This,Val) ) 

#define IMessage_put_LanguageSingleShift(This,Val)	\
    ( (This)->lpVtbl -> put_LanguageSingleShift(This,Val) ) 

#define IMessage_get_LanguageSingleShift(This,Val)	\
    ( (This)->lpVtbl -> get_LanguageSingleShift(This,Val) ) 

#define IMessage_get_GsmFirstOctet(This,Val)	\
    ( (This)->lpVtbl -> get_GsmFirstOctet(This,Val) ) 

#define IMessage_put_GsmFirstOctet(This,newVal)	\
    ( (This)->lpVtbl -> put_GsmFirstOctet(This,newVal) ) 

#define IMessage_get_GsmSmscAddress(This,Val)	\
    ( (This)->lpVtbl -> get_GsmSmscAddress(This,Val) ) 

#define IMessage_get_GsmSmscAddressTON(This,Val)	\
    ( (This)->lpVtbl -> get_GsmSmscAddressTON(This,Val) ) 

#define IMessage_get_GsmSmscAddressNPI(This,Val)	\
    ( (This)->lpVtbl -> get_GsmSmscAddressNPI(This,Val) ) 

#define IMessage_get_GsmMemoryIndex(This,Val)	\
    ( (This)->lpVtbl -> get_GsmMemoryIndex(This,Val) ) 

#define IMessage_put_GsmMemoryIndex(This,newVal)	\
    ( (This)->lpVtbl -> put_GsmMemoryIndex(This,newVal) ) 

#define IMessage_get_GsmMemoryLocation(This,Val)	\
    ( (This)->lpVtbl -> get_GsmMemoryLocation(This,Val) ) 

#define IMessage_put_GsmMemoryLocation(This,newVal)	\
    ( (This)->lpVtbl -> put_GsmMemoryLocation(This,newVal) ) 

#define IMessage_get_SmppPriority(This,Val)	\
    ( (This)->lpVtbl -> get_SmppPriority(This,Val) ) 

#define IMessage_put_SmppPriority(This,newVal)	\
    ( (This)->lpVtbl -> put_SmppPriority(This,newVal) ) 

#define IMessage_get_SmppServiceType(This,Val)	\
    ( (This)->lpVtbl -> get_SmppServiceType(This,Val) ) 

#define IMessage_put_SmppServiceType(This,newVal)	\
    ( (This)->lpVtbl -> put_SmppServiceType(This,newVal) ) 

#define IMessage_get_SmppEsmClass(This,Val)	\
    ( (This)->lpVtbl -> get_SmppEsmClass(This,Val) ) 

#define IMessage_put_SmppEsmClass(This,newVal)	\
    ( (This)->lpVtbl -> put_SmppEsmClass(This,newVal) ) 

#define IMessage_get_SmppIsDeliveryReport(This,Val)	\
    ( (This)->lpVtbl -> get_SmppIsDeliveryReport(This,Val) ) 

#define IMessage_put_SmppIsDeliveryReport(This,newVal)	\
    ( (This)->lpVtbl -> put_SmppIsDeliveryReport(This,newVal) ) 

#define IMessage_get_SmppStatus(This,Val)	\
    ( (This)->lpVtbl -> get_SmppStatus(This,Val) ) 

#define IMessage_put_SmppStatus(This,newVal)	\
    ( (This)->lpVtbl -> put_SmppStatus(This,newVal) ) 

#define IMessage_get_SmppError(This,Val)	\
    ( (This)->lpVtbl -> get_SmppError(This,Val) ) 

#define IMessage_put_SmppError(This,newVal)	\
    ( (This)->lpVtbl -> put_SmppError(This,newVal) ) 

#define IMessage_get_SmppCommandStatus(This,Val)	\
    ( (This)->lpVtbl -> get_SmppCommandStatus(This,Val) ) 

#define IMessage_put_SmppCommandStatus(This,newVal)	\
    ( (This)->lpVtbl -> put_SmppCommandStatus(This,newVal) ) 

#define IMessage_put_SmppSequenceNumber(This,Val)	\
    ( (This)->lpVtbl -> put_SmppSequenceNumber(This,Val) ) 

#define IMessage_get_SmppSequenceNumber(This,Val)	\
    ( (This)->lpVtbl -> get_SmppSequenceNumber(This,Val) ) 

#define IMessage_get_SmppServerSubmitDate(This,Val)	\
    ( (This)->lpVtbl -> get_SmppServerSubmitDate(This,Val) ) 

#define IMessage_get_SmppServerFinalDate(This,Val)	\
    ( (This)->lpVtbl -> get_SmppServerFinalDate(This,Val) ) 

#define IMessage_get_UserTagString(This,Val)	\
    ( (This)->lpVtbl -> get_UserTagString(This,Val) ) 

#define IMessage_put_UserTagString(This,newVal)	\
    ( (This)->lpVtbl -> put_UserTagString(This,newVal) ) 

#define IMessage_SmppAddTlv(This,Tlv)	\
    ( (This)->lpVtbl -> SmppAddTlv(This,Tlv) ) 

#define IMessage_SmppGetFirstTlv(This,Tlv)	\
    ( (This)->lpVtbl -> SmppGetFirstTlv(This,Tlv) ) 

#define IMessage_SmppGetNextTlv(This,Tlv)	\
    ( (This)->lpVtbl -> SmppGetNextTlv(This,Tlv) ) 

#define IMessage_SmppGetTlv(This,lTag,Tlv)	\
    ( (This)->lpVtbl -> SmppGetTlv(This,lTag,Tlv) ) 

#define IMessage_SmppDeleteTlv(This,lTag)	\
    ( (This)->lpVtbl -> SmppDeleteTlv(This,lTag) ) 

#define IMessage_get_LastError(This,Val)	\
    ( (This)->lpVtbl -> get_LastError(This,Val) ) 

#define IMessage_GetErrorDescription(This,Error,strDescription)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,Error,strDescription) ) 

#define IMessage_ToJSon(This,Val)	\
    ( (This)->lpVtbl -> ToJSon(This,Val) ) 

#define IMessage_FromJSon(This,Val)	\
    ( (This)->lpVtbl -> FromJSon(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMessage_INTERFACE_DEFINED__ */


#ifndef __IGsmDeliveryReport_INTERFACE_DEFINED__
#define __IGsmDeliveryReport_INTERFACE_DEFINED__

/* interface IGsmDeliveryReport */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IGsmDeliveryReport;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6962C3D8-88FE-4660-A4EC-901A244A57D2")
    IGsmDeliveryReport : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Reference( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_UserTag( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_UserTag( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SmscAddress( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SmscTime( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SmscTimeInSeconds( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DischargeTime( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DischargeTimeInSeconds( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MemoryIndex( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_FirstOctet( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SmscTON( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SmscNPI( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_TON( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_NPI( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Status( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_FromAddress( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MemoryLocation( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_UserTagString( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_UserTagString( 
            /* [in] */ BSTR newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IGsmDeliveryReportVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IGsmDeliveryReport * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IGsmDeliveryReport * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IGsmDeliveryReport * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IGsmDeliveryReport * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IGsmDeliveryReport * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IGsmDeliveryReport * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IGsmDeliveryReport * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IGsmDeliveryReport * This);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Reference )( 
            IGsmDeliveryReport * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UserTag )( 
            IGsmDeliveryReport * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UserTag )( 
            IGsmDeliveryReport * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SmscAddress )( 
            IGsmDeliveryReport * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SmscTime )( 
            IGsmDeliveryReport * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SmscTimeInSeconds )( 
            IGsmDeliveryReport * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DischargeTime )( 
            IGsmDeliveryReport * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DischargeTimeInSeconds )( 
            IGsmDeliveryReport * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MemoryIndex )( 
            IGsmDeliveryReport * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FirstOctet )( 
            IGsmDeliveryReport * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SmscTON )( 
            IGsmDeliveryReport * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SmscNPI )( 
            IGsmDeliveryReport * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TON )( 
            IGsmDeliveryReport * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NPI )( 
            IGsmDeliveryReport * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Status )( 
            IGsmDeliveryReport * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FromAddress )( 
            IGsmDeliveryReport * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MemoryLocation )( 
            IGsmDeliveryReport * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UserTagString )( 
            IGsmDeliveryReport * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UserTagString )( 
            IGsmDeliveryReport * This,
            /* [in] */ BSTR newVal);
        
        END_INTERFACE
    } IGsmDeliveryReportVtbl;

    interface IGsmDeliveryReport
    {
        CONST_VTBL struct IGsmDeliveryReportVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGsmDeliveryReport_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IGsmDeliveryReport_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IGsmDeliveryReport_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IGsmDeliveryReport_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IGsmDeliveryReport_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IGsmDeliveryReport_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IGsmDeliveryReport_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IGsmDeliveryReport_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IGsmDeliveryReport_get_Reference(This,Val)	\
    ( (This)->lpVtbl -> get_Reference(This,Val) ) 

#define IGsmDeliveryReport_get_UserTag(This,Val)	\
    ( (This)->lpVtbl -> get_UserTag(This,Val) ) 

#define IGsmDeliveryReport_put_UserTag(This,newVal)	\
    ( (This)->lpVtbl -> put_UserTag(This,newVal) ) 

#define IGsmDeliveryReport_get_SmscAddress(This,Val)	\
    ( (This)->lpVtbl -> get_SmscAddress(This,Val) ) 

#define IGsmDeliveryReport_get_SmscTime(This,Val)	\
    ( (This)->lpVtbl -> get_SmscTime(This,Val) ) 

#define IGsmDeliveryReport_get_SmscTimeInSeconds(This,Val)	\
    ( (This)->lpVtbl -> get_SmscTimeInSeconds(This,Val) ) 

#define IGsmDeliveryReport_get_DischargeTime(This,Val)	\
    ( (This)->lpVtbl -> get_DischargeTime(This,Val) ) 

#define IGsmDeliveryReport_get_DischargeTimeInSeconds(This,Val)	\
    ( (This)->lpVtbl -> get_DischargeTimeInSeconds(This,Val) ) 

#define IGsmDeliveryReport_get_MemoryIndex(This,Val)	\
    ( (This)->lpVtbl -> get_MemoryIndex(This,Val) ) 

#define IGsmDeliveryReport_get_FirstOctet(This,Val)	\
    ( (This)->lpVtbl -> get_FirstOctet(This,Val) ) 

#define IGsmDeliveryReport_get_SmscTON(This,Val)	\
    ( (This)->lpVtbl -> get_SmscTON(This,Val) ) 

#define IGsmDeliveryReport_get_SmscNPI(This,Val)	\
    ( (This)->lpVtbl -> get_SmscNPI(This,Val) ) 

#define IGsmDeliveryReport_get_TON(This,Val)	\
    ( (This)->lpVtbl -> get_TON(This,Val) ) 

#define IGsmDeliveryReport_get_NPI(This,Val)	\
    ( (This)->lpVtbl -> get_NPI(This,Val) ) 

#define IGsmDeliveryReport_get_Status(This,Val)	\
    ( (This)->lpVtbl -> get_Status(This,Val) ) 

#define IGsmDeliveryReport_get_FromAddress(This,Val)	\
    ( (This)->lpVtbl -> get_FromAddress(This,Val) ) 

#define IGsmDeliveryReport_get_MemoryLocation(This,Val)	\
    ( (This)->lpVtbl -> get_MemoryLocation(This,Val) ) 

#define IGsmDeliveryReport_get_UserTagString(This,Val)	\
    ( (This)->lpVtbl -> get_UserTagString(This,Val) ) 

#define IGsmDeliveryReport_put_UserTagString(This,newVal)	\
    ( (This)->lpVtbl -> put_UserTagString(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IGsmDeliveryReport_INTERFACE_DEFINED__ */


#ifndef __IDialup_INTERFACE_DEFINED__
#define __IDialup_INTERFACE_DEFINED__

/* interface IDialup */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IDialup;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3E9851DF-D82F-4806-8716-769C015C23F2")
    IDialup : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *Version) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Build( 
            /* [retval][out] */ BSTR *Build) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Module( 
            /* [retval][out] */ BSTR *Module) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LicenseStatus( 
            /* [retval][out] */ BSTR *LicenseStatus) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LicenseKey( 
            /* [retval][out] */ BSTR *LicenseKey) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LicenseKey( 
            /* [in] */ BSTR LicenseKey) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SaveLicenseKey( void) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LogFile( 
            /* [retval][out] */ BSTR *Logfile) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LogFile( 
            /* [in] */ BSTR Logfile) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Sleep( 
            LONG Ms) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ LONG *LastError) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            /* [in] */ LONG ErrorCode,
            /* [retval][out] */ BSTR *Description) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Device( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Device( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DeviceSpeed( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DeviceSpeed( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DeviceSettings( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DeviceSettings( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DeviceInitString( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DeviceInitString( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DialMode( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DialMode( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderDialString( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProviderDialString( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderPassword( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProviderPassword( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderType( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProviderType( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderResponse( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AdvancedSettings( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_AdvancedSettings( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetDeviceCount( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetDevice( 
            LONG lIndex,
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Send( 
            IMessage *Message) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ProviderLoadConfig( 
            BSTR FileName) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ProviderSaveConfig( 
            BSTR FileName) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDialupVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDialup * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDialup * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDialup * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDialup * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDialup * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDialup * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDialup * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IDialup * This,
            /* [retval][out] */ BSTR *Version);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Build )( 
            IDialup * This,
            /* [retval][out] */ BSTR *Build);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Module )( 
            IDialup * This,
            /* [retval][out] */ BSTR *Module);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LicenseStatus )( 
            IDialup * This,
            /* [retval][out] */ BSTR *LicenseStatus);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LicenseKey )( 
            IDialup * This,
            /* [retval][out] */ BSTR *LicenseKey);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LicenseKey )( 
            IDialup * This,
            /* [in] */ BSTR LicenseKey);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SaveLicenseKey )( 
            IDialup * This);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogFile )( 
            IDialup * This,
            /* [retval][out] */ BSTR *Logfile);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LogFile )( 
            IDialup * This,
            /* [in] */ BSTR Logfile);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Sleep )( 
            IDialup * This,
            LONG Ms);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IDialup * This);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            IDialup * This,
            /* [retval][out] */ LONG *LastError);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            IDialup * This,
            /* [in] */ LONG ErrorCode,
            /* [retval][out] */ BSTR *Description);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Device )( 
            IDialup * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Device )( 
            IDialup * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DeviceSpeed )( 
            IDialup * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DeviceSpeed )( 
            IDialup * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DeviceSettings )( 
            IDialup * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DeviceSettings )( 
            IDialup * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DeviceInitString )( 
            IDialup * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DeviceInitString )( 
            IDialup * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DialMode )( 
            IDialup * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DialMode )( 
            IDialup * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderDialString )( 
            IDialup * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProviderDialString )( 
            IDialup * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderPassword )( 
            IDialup * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProviderPassword )( 
            IDialup * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderType )( 
            IDialup * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProviderType )( 
            IDialup * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderResponse )( 
            IDialup * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings )( 
            IDialup * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AdvancedSettings )( 
            IDialup * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetDeviceCount )( 
            IDialup * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetDevice )( 
            IDialup * This,
            LONG lIndex,
            /* [retval][out] */ BSTR *Val);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Send )( 
            IDialup * This,
            IMessage *Message);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ProviderLoadConfig )( 
            IDialup * This,
            BSTR FileName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ProviderSaveConfig )( 
            IDialup * This,
            BSTR FileName);
        
        END_INTERFACE
    } IDialupVtbl;

    interface IDialup
    {
        CONST_VTBL struct IDialupVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDialup_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDialup_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDialup_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDialup_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDialup_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDialup_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDialup_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDialup_get_Version(This,Version)	\
    ( (This)->lpVtbl -> get_Version(This,Version) ) 

#define IDialup_get_Build(This,Build)	\
    ( (This)->lpVtbl -> get_Build(This,Build) ) 

#define IDialup_get_Module(This,Module)	\
    ( (This)->lpVtbl -> get_Module(This,Module) ) 

#define IDialup_get_LicenseStatus(This,LicenseStatus)	\
    ( (This)->lpVtbl -> get_LicenseStatus(This,LicenseStatus) ) 

#define IDialup_get_LicenseKey(This,LicenseKey)	\
    ( (This)->lpVtbl -> get_LicenseKey(This,LicenseKey) ) 

#define IDialup_put_LicenseKey(This,LicenseKey)	\
    ( (This)->lpVtbl -> put_LicenseKey(This,LicenseKey) ) 

#define IDialup_SaveLicenseKey(This)	\
    ( (This)->lpVtbl -> SaveLicenseKey(This) ) 

#define IDialup_get_LogFile(This,Logfile)	\
    ( (This)->lpVtbl -> get_LogFile(This,Logfile) ) 

#define IDialup_put_LogFile(This,Logfile)	\
    ( (This)->lpVtbl -> put_LogFile(This,Logfile) ) 

#define IDialup_Sleep(This,Ms)	\
    ( (This)->lpVtbl -> Sleep(This,Ms) ) 

#define IDialup_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IDialup_get_LastError(This,LastError)	\
    ( (This)->lpVtbl -> get_LastError(This,LastError) ) 

#define IDialup_GetErrorDescription(This,ErrorCode,Description)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,ErrorCode,Description) ) 

#define IDialup_get_Device(This,Val)	\
    ( (This)->lpVtbl -> get_Device(This,Val) ) 

#define IDialup_put_Device(This,newVal)	\
    ( (This)->lpVtbl -> put_Device(This,newVal) ) 

#define IDialup_get_DeviceSpeed(This,Val)	\
    ( (This)->lpVtbl -> get_DeviceSpeed(This,Val) ) 

#define IDialup_put_DeviceSpeed(This,newVal)	\
    ( (This)->lpVtbl -> put_DeviceSpeed(This,newVal) ) 

#define IDialup_get_DeviceSettings(This,Val)	\
    ( (This)->lpVtbl -> get_DeviceSettings(This,Val) ) 

#define IDialup_put_DeviceSettings(This,newVal)	\
    ( (This)->lpVtbl -> put_DeviceSettings(This,newVal) ) 

#define IDialup_get_DeviceInitString(This,Val)	\
    ( (This)->lpVtbl -> get_DeviceInitString(This,Val) ) 

#define IDialup_put_DeviceInitString(This,newVal)	\
    ( (This)->lpVtbl -> put_DeviceInitString(This,newVal) ) 

#define IDialup_get_DialMode(This,Val)	\
    ( (This)->lpVtbl -> get_DialMode(This,Val) ) 

#define IDialup_put_DialMode(This,newVal)	\
    ( (This)->lpVtbl -> put_DialMode(This,newVal) ) 

#define IDialup_get_ProviderDialString(This,Val)	\
    ( (This)->lpVtbl -> get_ProviderDialString(This,Val) ) 

#define IDialup_put_ProviderDialString(This,newVal)	\
    ( (This)->lpVtbl -> put_ProviderDialString(This,newVal) ) 

#define IDialup_get_ProviderPassword(This,Val)	\
    ( (This)->lpVtbl -> get_ProviderPassword(This,Val) ) 

#define IDialup_put_ProviderPassword(This,newVal)	\
    ( (This)->lpVtbl -> put_ProviderPassword(This,newVal) ) 

#define IDialup_get_ProviderType(This,Val)	\
    ( (This)->lpVtbl -> get_ProviderType(This,Val) ) 

#define IDialup_put_ProviderType(This,newVal)	\
    ( (This)->lpVtbl -> put_ProviderType(This,newVal) ) 

#define IDialup_get_ProviderResponse(This,Val)	\
    ( (This)->lpVtbl -> get_ProviderResponse(This,Val) ) 

#define IDialup_get_AdvancedSettings(This,Val)	\
    ( (This)->lpVtbl -> get_AdvancedSettings(This,Val) ) 

#define IDialup_put_AdvancedSettings(This,newVal)	\
    ( (This)->lpVtbl -> put_AdvancedSettings(This,newVal) ) 

#define IDialup_GetDeviceCount(This,Val)	\
    ( (This)->lpVtbl -> GetDeviceCount(This,Val) ) 

#define IDialup_GetDevice(This,lIndex,Val)	\
    ( (This)->lpVtbl -> GetDevice(This,lIndex,Val) ) 

#define IDialup_Send(This,Message)	\
    ( (This)->lpVtbl -> Send(This,Message) ) 

#define IDialup_ProviderLoadConfig(This,FileName)	\
    ( (This)->lpVtbl -> ProviderLoadConfig(This,FileName) ) 

#define IDialup_ProviderSaveConfig(This,FileName)	\
    ( (This)->lpVtbl -> ProviderSaveConfig(This,FileName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDialup_INTERFACE_DEFINED__ */


#ifndef __IAndroid_INTERFACE_DEFINED__
#define __IAndroid_INTERFACE_DEFINED__

/* interface IAndroid */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IAndroid;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6AEF9B37-E65E-4FEB-971A-0659DE7B931E")
    IAndroid : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *Version) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Build( 
            /* [retval][out] */ BSTR *Build) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Module( 
            /* [retval][out] */ BSTR *Module) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LicenseStatus( 
            /* [retval][out] */ BSTR *LicenseStatus) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LicenseKey( 
            /* [retval][out] */ BSTR *LicenseKey) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LicenseKey( 
            /* [in] */ BSTR LicenseKey) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SaveLicenseKey( void) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LogFile( 
            /* [retval][out] */ BSTR *Logfile) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LogFile( 
            /* [in] */ BSTR Logfile) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ActivityFile( 
            /* [retval][out] */ BSTR *ActivityFile) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ActivityFile( 
            /* [in] */ BSTR ActivityFile) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Sleep( 
            LONG Ms) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ LONG *LastError) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            /* [in] */ LONG ErrorCode,
            /* [retval][out] */ BSTR *Description) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Connect( 
            /* [in] */ BSTR Host,
            /* [defaultvalue][in] */ LONG Port = 7770) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Disconnect( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SendSms( 
            /* [in] */ IMessage *Message) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ReceiveSms( 
            /* [retval][out] */ IMessage **Message) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DeviceInfo( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AppVersion( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_IsConnected( 
            /* [retval][out] */ VARIANT_BOOL *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SendSmsTimeoutMs( 
            /* [retval][out] */ LONG *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ConnectTimeoutMs( 
            /* [retval][out] */ LONG *Value) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_CommandTimeoutMs( 
            /* [retval][out] */ LONG *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_SendSmsTimeoutMs( 
            /* [in] */ LONG Value) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ConnectTimeoutMs( 
            /* [in] */ LONG Value) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_CommandTimeoutMs( 
            /* [in] */ LONG Value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAndroidVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAndroid * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAndroid * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAndroid * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAndroid * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAndroid * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAndroid * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAndroid * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IAndroid * This,
            /* [retval][out] */ BSTR *Version);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Build )( 
            IAndroid * This,
            /* [retval][out] */ BSTR *Build);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Module )( 
            IAndroid * This,
            /* [retval][out] */ BSTR *Module);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LicenseStatus )( 
            IAndroid * This,
            /* [retval][out] */ BSTR *LicenseStatus);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LicenseKey )( 
            IAndroid * This,
            /* [retval][out] */ BSTR *LicenseKey);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LicenseKey )( 
            IAndroid * This,
            /* [in] */ BSTR LicenseKey);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SaveLicenseKey )( 
            IAndroid * This);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogFile )( 
            IAndroid * This,
            /* [retval][out] */ BSTR *Logfile);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LogFile )( 
            IAndroid * This,
            /* [in] */ BSTR Logfile);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActivityFile )( 
            IAndroid * This,
            /* [retval][out] */ BSTR *ActivityFile);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ActivityFile )( 
            IAndroid * This,
            /* [in] */ BSTR ActivityFile);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Sleep )( 
            IAndroid * This,
            LONG Ms);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IAndroid * This);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            IAndroid * This,
            /* [retval][out] */ LONG *LastError);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            IAndroid * This,
            /* [in] */ LONG ErrorCode,
            /* [retval][out] */ BSTR *Description);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Connect )( 
            IAndroid * This,
            /* [in] */ BSTR Host,
            /* [defaultvalue][in] */ LONG Port);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Disconnect )( 
            IAndroid * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendSms )( 
            IAndroid * This,
            /* [in] */ IMessage *Message);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ReceiveSms )( 
            IAndroid * This,
            /* [retval][out] */ IMessage **Message);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DeviceInfo )( 
            IAndroid * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AppVersion )( 
            IAndroid * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsConnected )( 
            IAndroid * This,
            /* [retval][out] */ VARIANT_BOOL *Value);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SendSmsTimeoutMs )( 
            IAndroid * This,
            /* [retval][out] */ LONG *Value);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectTimeoutMs )( 
            IAndroid * This,
            /* [retval][out] */ LONG *Value);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CommandTimeoutMs )( 
            IAndroid * This,
            /* [retval][out] */ LONG *Value);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SendSmsTimeoutMs )( 
            IAndroid * This,
            /* [in] */ LONG Value);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectTimeoutMs )( 
            IAndroid * This,
            /* [in] */ LONG Value);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CommandTimeoutMs )( 
            IAndroid * This,
            /* [in] */ LONG Value);
        
        END_INTERFACE
    } IAndroidVtbl;

    interface IAndroid
    {
        CONST_VTBL struct IAndroidVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAndroid_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAndroid_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAndroid_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAndroid_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAndroid_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAndroid_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAndroid_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAndroid_get_Version(This,Version)	\
    ( (This)->lpVtbl -> get_Version(This,Version) ) 

#define IAndroid_get_Build(This,Build)	\
    ( (This)->lpVtbl -> get_Build(This,Build) ) 

#define IAndroid_get_Module(This,Module)	\
    ( (This)->lpVtbl -> get_Module(This,Module) ) 

#define IAndroid_get_LicenseStatus(This,LicenseStatus)	\
    ( (This)->lpVtbl -> get_LicenseStatus(This,LicenseStatus) ) 

#define IAndroid_get_LicenseKey(This,LicenseKey)	\
    ( (This)->lpVtbl -> get_LicenseKey(This,LicenseKey) ) 

#define IAndroid_put_LicenseKey(This,LicenseKey)	\
    ( (This)->lpVtbl -> put_LicenseKey(This,LicenseKey) ) 

#define IAndroid_SaveLicenseKey(This)	\
    ( (This)->lpVtbl -> SaveLicenseKey(This) ) 

#define IAndroid_get_LogFile(This,Logfile)	\
    ( (This)->lpVtbl -> get_LogFile(This,Logfile) ) 

#define IAndroid_put_LogFile(This,Logfile)	\
    ( (This)->lpVtbl -> put_LogFile(This,Logfile) ) 

#define IAndroid_get_ActivityFile(This,ActivityFile)	\
    ( (This)->lpVtbl -> get_ActivityFile(This,ActivityFile) ) 

#define IAndroid_put_ActivityFile(This,ActivityFile)	\
    ( (This)->lpVtbl -> put_ActivityFile(This,ActivityFile) ) 

#define IAndroid_Sleep(This,Ms)	\
    ( (This)->lpVtbl -> Sleep(This,Ms) ) 

#define IAndroid_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IAndroid_get_LastError(This,LastError)	\
    ( (This)->lpVtbl -> get_LastError(This,LastError) ) 

#define IAndroid_GetErrorDescription(This,ErrorCode,Description)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,ErrorCode,Description) ) 

#define IAndroid_Connect(This,Host,Port)	\
    ( (This)->lpVtbl -> Connect(This,Host,Port) ) 

#define IAndroid_Disconnect(This)	\
    ( (This)->lpVtbl -> Disconnect(This) ) 

#define IAndroid_SendSms(This,Message)	\
    ( (This)->lpVtbl -> SendSms(This,Message) ) 

#define IAndroid_ReceiveSms(This,Message)	\
    ( (This)->lpVtbl -> ReceiveSms(This,Message) ) 

#define IAndroid_get_DeviceInfo(This,Value)	\
    ( (This)->lpVtbl -> get_DeviceInfo(This,Value) ) 

#define IAndroid_get_AppVersion(This,Value)	\
    ( (This)->lpVtbl -> get_AppVersion(This,Value) ) 

#define IAndroid_get_IsConnected(This,Value)	\
    ( (This)->lpVtbl -> get_IsConnected(This,Value) ) 

#define IAndroid_get_SendSmsTimeoutMs(This,Value)	\
    ( (This)->lpVtbl -> get_SendSmsTimeoutMs(This,Value) ) 

#define IAndroid_get_ConnectTimeoutMs(This,Value)	\
    ( (This)->lpVtbl -> get_ConnectTimeoutMs(This,Value) ) 

#define IAndroid_get_CommandTimeoutMs(This,Value)	\
    ( (This)->lpVtbl -> get_CommandTimeoutMs(This,Value) ) 

#define IAndroid_put_SendSmsTimeoutMs(This,Value)	\
    ( (This)->lpVtbl -> put_SendSmsTimeoutMs(This,Value) ) 

#define IAndroid_put_ConnectTimeoutMs(This,Value)	\
    ( (This)->lpVtbl -> put_ConnectTimeoutMs(This,Value) ) 

#define IAndroid_put_CommandTimeoutMs(This,Value)	\
    ( (This)->lpVtbl -> put_CommandTimeoutMs(This,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAndroid_INTERFACE_DEFINED__ */


#ifndef __IGsm_INTERFACE_DEFINED__
#define __IGsm_INTERFACE_DEFINED__

/* interface IGsm */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IGsm;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B25B188D-42A8-45EF-887F-653CBC9E234B")
    IGsm : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *Version) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Build( 
            /* [retval][out] */ BSTR *Build) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Module( 
            /* [retval][out] */ BSTR *Module) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LicenseStatus( 
            /* [retval][out] */ BSTR *LicenseStatus) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LicenseKey( 
            /* [retval][out] */ BSTR *LicenseKey) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LicenseKey( 
            /* [in] */ BSTR LicenseKey) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SaveLicenseKey( void) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LogFile( 
            /* [retval][out] */ BSTR *Logfile) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LogFile( 
            /* [in] */ BSTR Logfile) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ActivityFile( 
            /* [retval][out] */ BSTR *ActivityFile) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ActivityFile( 
            /* [in] */ BSTR ActivityFile) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Sleep( 
            LONG Ms) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ LONG *LastError) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            /* [in] */ LONG ErrorCode,
            /* [retval][out] */ BSTR *Description) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE FindFirstPort( 
            /* [retval][out] */ BSTR *strName) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE FindNextPort( 
            /* [retval][out] */ BSTR *strName) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE FindFirstDevice( 
            /* [retval][out] */ BSTR *strName) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE FindNextDevice( 
            /* [retval][out] */ BSTR *strName) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Open( 
            /* [in] */ BSTR strName,
            /* [defaultvalue][in] */ BSTR strPin = L"",
            /* [defaultvalue][in] */ LONG lBaudrate = 0) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Close( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SendCommand( 
            /* [in] */ BSTR strCommand) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ReadResponse( 
            /* [defaultvalue][in] */ LONG lTimeout,
            /* [retval][out] */ BSTR *strReponse) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ResetCom( void) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Manufacturer( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Model( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Revision( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SerialNr( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SendEnabled( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ReceiveEnabled( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ReportEnabled( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SendSms( 
            /* [in] */ IMessage *Val,
            /* [defaultvalue][in] */ LONG lMultipartFlag,
            /* [defaultvalue][in] */ LONG lTimeout,
            /* [retval][out] */ BSTR *pRef) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Receive( 
            /* [in] */ LONG lType,
            /* [defaultvalue][in] */ VARIANT_BOOL bDelete = ( VARIANT_BOOL  )0,
            /* [defaultvalue][in] */ LONG lStorageType = 0,
            /* [defaultvalue][in] */ LONG lTimeout = 15000) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetFirstSms( 
            /* [retval][out] */ IMessage **pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetNextSms( 
            /* [retval][out] */ IMessage **pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetFirstReport( 
            /* [retval][out] */ IGsmDeliveryReport **pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetNextReport( 
            /* [retval][out] */ IGsmDeliveryReport **pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DeleteSms( 
            /* [in] */ IMessage *pSms) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DeleteReport( 
            /* [in] */ IGsmDeliveryReport *pReport) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ExtractApplicationPort( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ExtractApplicationPort( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AssembleMultipart( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_AssembleMultipart( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MessageMode( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_MessageMode( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_PrefixSmscMode( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_PrefixSmscMode( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_NetworkTimeout( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_NetworkTimeout( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_InterCommandDelay( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_InterCommandDelay( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_InterCharacterDelay( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_InterCharacterDelay( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_WaitForNetwork( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_WaitForNetwork( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_PreferredSmsc( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_PreferredSmsc( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_CommandTimeout( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_CommandTimeout( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_KeepUnusedUdh( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_KeepUnusedUdh( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_OverrideFeatureCheck( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_OverrideFeatureCheck( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ExtractLanguageShift( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ExtractLanguageShift( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_TcpMode( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_TcpMode( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_IsOpen( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IGsmVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IGsm * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IGsm * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IGsm * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IGsm * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IGsm * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IGsm * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IGsm * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IGsm * This,
            /* [retval][out] */ BSTR *Version);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Build )( 
            IGsm * This,
            /* [retval][out] */ BSTR *Build);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Module )( 
            IGsm * This,
            /* [retval][out] */ BSTR *Module);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LicenseStatus )( 
            IGsm * This,
            /* [retval][out] */ BSTR *LicenseStatus);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LicenseKey )( 
            IGsm * This,
            /* [retval][out] */ BSTR *LicenseKey);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LicenseKey )( 
            IGsm * This,
            /* [in] */ BSTR LicenseKey);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SaveLicenseKey )( 
            IGsm * This);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogFile )( 
            IGsm * This,
            /* [retval][out] */ BSTR *Logfile);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LogFile )( 
            IGsm * This,
            /* [in] */ BSTR Logfile);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActivityFile )( 
            IGsm * This,
            /* [retval][out] */ BSTR *ActivityFile);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ActivityFile )( 
            IGsm * This,
            /* [in] */ BSTR ActivityFile);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Sleep )( 
            IGsm * This,
            LONG Ms);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IGsm * This);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            IGsm * This,
            /* [retval][out] */ LONG *LastError);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            IGsm * This,
            /* [in] */ LONG ErrorCode,
            /* [retval][out] */ BSTR *Description);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FindFirstPort )( 
            IGsm * This,
            /* [retval][out] */ BSTR *strName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FindNextPort )( 
            IGsm * This,
            /* [retval][out] */ BSTR *strName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FindFirstDevice )( 
            IGsm * This,
            /* [retval][out] */ BSTR *strName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FindNextDevice )( 
            IGsm * This,
            /* [retval][out] */ BSTR *strName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Open )( 
            IGsm * This,
            /* [in] */ BSTR strName,
            /* [defaultvalue][in] */ BSTR strPin,
            /* [defaultvalue][in] */ LONG lBaudrate);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            IGsm * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendCommand )( 
            IGsm * This,
            /* [in] */ BSTR strCommand);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ReadResponse )( 
            IGsm * This,
            /* [defaultvalue][in] */ LONG lTimeout,
            /* [retval][out] */ BSTR *strReponse);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ResetCom )( 
            IGsm * This);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Manufacturer )( 
            IGsm * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Model )( 
            IGsm * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Revision )( 
            IGsm * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SerialNr )( 
            IGsm * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SendEnabled )( 
            IGsm * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReceiveEnabled )( 
            IGsm * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReportEnabled )( 
            IGsm * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendSms )( 
            IGsm * This,
            /* [in] */ IMessage *Val,
            /* [defaultvalue][in] */ LONG lMultipartFlag,
            /* [defaultvalue][in] */ LONG lTimeout,
            /* [retval][out] */ BSTR *pRef);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Receive )( 
            IGsm * This,
            /* [in] */ LONG lType,
            /* [defaultvalue][in] */ VARIANT_BOOL bDelete,
            /* [defaultvalue][in] */ LONG lStorageType,
            /* [defaultvalue][in] */ LONG lTimeout);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetFirstSms )( 
            IGsm * This,
            /* [retval][out] */ IMessage **pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetNextSms )( 
            IGsm * This,
            /* [retval][out] */ IMessage **pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetFirstReport )( 
            IGsm * This,
            /* [retval][out] */ IGsmDeliveryReport **pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetNextReport )( 
            IGsm * This,
            /* [retval][out] */ IGsmDeliveryReport **pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DeleteSms )( 
            IGsm * This,
            /* [in] */ IMessage *pSms);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DeleteReport )( 
            IGsm * This,
            /* [in] */ IGsmDeliveryReport *pReport);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExtractApplicationPort )( 
            IGsm * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExtractApplicationPort )( 
            IGsm * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AssembleMultipart )( 
            IGsm * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AssembleMultipart )( 
            IGsm * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MessageMode )( 
            IGsm * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MessageMode )( 
            IGsm * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PrefixSmscMode )( 
            IGsm * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PrefixSmscMode )( 
            IGsm * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NetworkTimeout )( 
            IGsm * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NetworkTimeout )( 
            IGsm * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InterCommandDelay )( 
            IGsm * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_InterCommandDelay )( 
            IGsm * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InterCharacterDelay )( 
            IGsm * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_InterCharacterDelay )( 
            IGsm * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WaitForNetwork )( 
            IGsm * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_WaitForNetwork )( 
            IGsm * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PreferredSmsc )( 
            IGsm * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PreferredSmsc )( 
            IGsm * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CommandTimeout )( 
            IGsm * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CommandTimeout )( 
            IGsm * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeepUnusedUdh )( 
            IGsm * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeepUnusedUdh )( 
            IGsm * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OverrideFeatureCheck )( 
            IGsm * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OverrideFeatureCheck )( 
            IGsm * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExtractLanguageShift )( 
            IGsm * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExtractLanguageShift )( 
            IGsm * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TcpMode )( 
            IGsm * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TcpMode )( 
            IGsm * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsOpen )( 
            IGsm * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        END_INTERFACE
    } IGsmVtbl;

    interface IGsm
    {
        CONST_VTBL struct IGsmVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGsm_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IGsm_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IGsm_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IGsm_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IGsm_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IGsm_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IGsm_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IGsm_get_Version(This,Version)	\
    ( (This)->lpVtbl -> get_Version(This,Version) ) 

#define IGsm_get_Build(This,Build)	\
    ( (This)->lpVtbl -> get_Build(This,Build) ) 

#define IGsm_get_Module(This,Module)	\
    ( (This)->lpVtbl -> get_Module(This,Module) ) 

#define IGsm_get_LicenseStatus(This,LicenseStatus)	\
    ( (This)->lpVtbl -> get_LicenseStatus(This,LicenseStatus) ) 

#define IGsm_get_LicenseKey(This,LicenseKey)	\
    ( (This)->lpVtbl -> get_LicenseKey(This,LicenseKey) ) 

#define IGsm_put_LicenseKey(This,LicenseKey)	\
    ( (This)->lpVtbl -> put_LicenseKey(This,LicenseKey) ) 

#define IGsm_SaveLicenseKey(This)	\
    ( (This)->lpVtbl -> SaveLicenseKey(This) ) 

#define IGsm_get_LogFile(This,Logfile)	\
    ( (This)->lpVtbl -> get_LogFile(This,Logfile) ) 

#define IGsm_put_LogFile(This,Logfile)	\
    ( (This)->lpVtbl -> put_LogFile(This,Logfile) ) 

#define IGsm_get_ActivityFile(This,ActivityFile)	\
    ( (This)->lpVtbl -> get_ActivityFile(This,ActivityFile) ) 

#define IGsm_put_ActivityFile(This,ActivityFile)	\
    ( (This)->lpVtbl -> put_ActivityFile(This,ActivityFile) ) 

#define IGsm_Sleep(This,Ms)	\
    ( (This)->lpVtbl -> Sleep(This,Ms) ) 

#define IGsm_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IGsm_get_LastError(This,LastError)	\
    ( (This)->lpVtbl -> get_LastError(This,LastError) ) 

#define IGsm_GetErrorDescription(This,ErrorCode,Description)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,ErrorCode,Description) ) 

#define IGsm_FindFirstPort(This,strName)	\
    ( (This)->lpVtbl -> FindFirstPort(This,strName) ) 

#define IGsm_FindNextPort(This,strName)	\
    ( (This)->lpVtbl -> FindNextPort(This,strName) ) 

#define IGsm_FindFirstDevice(This,strName)	\
    ( (This)->lpVtbl -> FindFirstDevice(This,strName) ) 

#define IGsm_FindNextDevice(This,strName)	\
    ( (This)->lpVtbl -> FindNextDevice(This,strName) ) 

#define IGsm_Open(This,strName,strPin,lBaudrate)	\
    ( (This)->lpVtbl -> Open(This,strName,strPin,lBaudrate) ) 

#define IGsm_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 

#define IGsm_SendCommand(This,strCommand)	\
    ( (This)->lpVtbl -> SendCommand(This,strCommand) ) 

#define IGsm_ReadResponse(This,lTimeout,strReponse)	\
    ( (This)->lpVtbl -> ReadResponse(This,lTimeout,strReponse) ) 

#define IGsm_ResetCom(This)	\
    ( (This)->lpVtbl -> ResetCom(This) ) 

#define IGsm_get_Manufacturer(This,Val)	\
    ( (This)->lpVtbl -> get_Manufacturer(This,Val) ) 

#define IGsm_get_Model(This,Val)	\
    ( (This)->lpVtbl -> get_Model(This,Val) ) 

#define IGsm_get_Revision(This,Val)	\
    ( (This)->lpVtbl -> get_Revision(This,Val) ) 

#define IGsm_get_SerialNr(This,Val)	\
    ( (This)->lpVtbl -> get_SerialNr(This,Val) ) 

#define IGsm_get_SendEnabled(This,Val)	\
    ( (This)->lpVtbl -> get_SendEnabled(This,Val) ) 

#define IGsm_get_ReceiveEnabled(This,Val)	\
    ( (This)->lpVtbl -> get_ReceiveEnabled(This,Val) ) 

#define IGsm_get_ReportEnabled(This,Val)	\
    ( (This)->lpVtbl -> get_ReportEnabled(This,Val) ) 

#define IGsm_SendSms(This,Val,lMultipartFlag,lTimeout,pRef)	\
    ( (This)->lpVtbl -> SendSms(This,Val,lMultipartFlag,lTimeout,pRef) ) 

#define IGsm_Receive(This,lType,bDelete,lStorageType,lTimeout)	\
    ( (This)->lpVtbl -> Receive(This,lType,bDelete,lStorageType,lTimeout) ) 

#define IGsm_GetFirstSms(This,pVal)	\
    ( (This)->lpVtbl -> GetFirstSms(This,pVal) ) 

#define IGsm_GetNextSms(This,pVal)	\
    ( (This)->lpVtbl -> GetNextSms(This,pVal) ) 

#define IGsm_GetFirstReport(This,pVal)	\
    ( (This)->lpVtbl -> GetFirstReport(This,pVal) ) 

#define IGsm_GetNextReport(This,pVal)	\
    ( (This)->lpVtbl -> GetNextReport(This,pVal) ) 

#define IGsm_DeleteSms(This,pSms)	\
    ( (This)->lpVtbl -> DeleteSms(This,pSms) ) 

#define IGsm_DeleteReport(This,pReport)	\
    ( (This)->lpVtbl -> DeleteReport(This,pReport) ) 

#define IGsm_get_ExtractApplicationPort(This,Val)	\
    ( (This)->lpVtbl -> get_ExtractApplicationPort(This,Val) ) 

#define IGsm_put_ExtractApplicationPort(This,newVal)	\
    ( (This)->lpVtbl -> put_ExtractApplicationPort(This,newVal) ) 

#define IGsm_get_AssembleMultipart(This,Val)	\
    ( (This)->lpVtbl -> get_AssembleMultipart(This,Val) ) 

#define IGsm_put_AssembleMultipart(This,newVal)	\
    ( (This)->lpVtbl -> put_AssembleMultipart(This,newVal) ) 

#define IGsm_get_MessageMode(This,Val)	\
    ( (This)->lpVtbl -> get_MessageMode(This,Val) ) 

#define IGsm_put_MessageMode(This,newVal)	\
    ( (This)->lpVtbl -> put_MessageMode(This,newVal) ) 

#define IGsm_get_PrefixSmscMode(This,Val)	\
    ( (This)->lpVtbl -> get_PrefixSmscMode(This,Val) ) 

#define IGsm_put_PrefixSmscMode(This,newVal)	\
    ( (This)->lpVtbl -> put_PrefixSmscMode(This,newVal) ) 

#define IGsm_get_NetworkTimeout(This,Val)	\
    ( (This)->lpVtbl -> get_NetworkTimeout(This,Val) ) 

#define IGsm_put_NetworkTimeout(This,newVal)	\
    ( (This)->lpVtbl -> put_NetworkTimeout(This,newVal) ) 

#define IGsm_get_InterCommandDelay(This,Val)	\
    ( (This)->lpVtbl -> get_InterCommandDelay(This,Val) ) 

#define IGsm_put_InterCommandDelay(This,newVal)	\
    ( (This)->lpVtbl -> put_InterCommandDelay(This,newVal) ) 

#define IGsm_get_InterCharacterDelay(This,Val)	\
    ( (This)->lpVtbl -> get_InterCharacterDelay(This,Val) ) 

#define IGsm_put_InterCharacterDelay(This,newVal)	\
    ( (This)->lpVtbl -> put_InterCharacterDelay(This,newVal) ) 

#define IGsm_get_WaitForNetwork(This,Val)	\
    ( (This)->lpVtbl -> get_WaitForNetwork(This,Val) ) 

#define IGsm_put_WaitForNetwork(This,newVal)	\
    ( (This)->lpVtbl -> put_WaitForNetwork(This,newVal) ) 

#define IGsm_get_PreferredSmsc(This,Val)	\
    ( (This)->lpVtbl -> get_PreferredSmsc(This,Val) ) 

#define IGsm_put_PreferredSmsc(This,newVal)	\
    ( (This)->lpVtbl -> put_PreferredSmsc(This,newVal) ) 

#define IGsm_get_CommandTimeout(This,Val)	\
    ( (This)->lpVtbl -> get_CommandTimeout(This,Val) ) 

#define IGsm_put_CommandTimeout(This,newVal)	\
    ( (This)->lpVtbl -> put_CommandTimeout(This,newVal) ) 

#define IGsm_get_KeepUnusedUdh(This,Val)	\
    ( (This)->lpVtbl -> get_KeepUnusedUdh(This,Val) ) 

#define IGsm_put_KeepUnusedUdh(This,newVal)	\
    ( (This)->lpVtbl -> put_KeepUnusedUdh(This,newVal) ) 

#define IGsm_get_OverrideFeatureCheck(This,Val)	\
    ( (This)->lpVtbl -> get_OverrideFeatureCheck(This,Val) ) 

#define IGsm_put_OverrideFeatureCheck(This,newVal)	\
    ( (This)->lpVtbl -> put_OverrideFeatureCheck(This,newVal) ) 

#define IGsm_get_ExtractLanguageShift(This,Val)	\
    ( (This)->lpVtbl -> get_ExtractLanguageShift(This,Val) ) 

#define IGsm_put_ExtractLanguageShift(This,newVal)	\
    ( (This)->lpVtbl -> put_ExtractLanguageShift(This,newVal) ) 

#define IGsm_get_TcpMode(This,Val)	\
    ( (This)->lpVtbl -> get_TcpMode(This,Val) ) 

#define IGsm_put_TcpMode(This,newVal)	\
    ( (This)->lpVtbl -> put_TcpMode(This,newVal) ) 

#define IGsm_get_IsOpen(This,Val)	\
    ( (This)->lpVtbl -> get_IsOpen(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IGsm_INTERFACE_DEFINED__ */


#ifndef __IHttpServer_INTERFACE_DEFINED__
#define __IHttpServer_INTERFACE_DEFINED__

/* interface IHttpServer */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IHttpServer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("356CDE23-BC03-4283-9F64-AF3D0F49100A")
    IHttpServer : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *Version) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Build( 
            /* [retval][out] */ BSTR *Build) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Module( 
            /* [retval][out] */ BSTR *Module) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LicenseStatus( 
            /* [retval][out] */ BSTR *LicenseStatus) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LicenseKey( 
            /* [retval][out] */ BSTR *LicenseKey) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LicenseKey( 
            /* [in] */ BSTR LicenseKey) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SaveLicenseKey( void) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LogFile( 
            /* [retval][out] */ BSTR *Logfile) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LogFile( 
            /* [in] */ BSTR Logfile) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ActivityFile( 
            /* [retval][out] */ BSTR *ActivityFile) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ActivityFile( 
            /* [in] */ BSTR ActivityFile) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Sleep( 
            LONG Ms) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ LONG *LastError) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            /* [in] */ LONG ErrorCode,
            /* [retval][out] */ BSTR *Description) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_IsStarted( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AddUrl( 
            /* [in] */ BSTR url) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Startup( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Shutdown( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE WaitForRequest( 
            /* [in] */ LONG Timeout) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SendResponse( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ClearResponse( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SaveRequestBody( 
            /* [in] */ BSTR Path) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE LoadResponseBody( 
            /* [in] */ BSTR Path,
            /* [in] */ VARIANT_BOOL bIsText) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetResponseBodyFromBase64( 
            /* [in] */ BSTR b64string) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetRequestHeader( 
            /* [in] */ BSTR Key,
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetResponseHeader( 
            /* [in] */ BSTR Key,
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetResponseHeader( 
            /* [in] */ BSTR Key,
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxRequestSizeBytes( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_MaxRequestSizeBytes( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_NumRequestQueues( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ResponseTimeoutMs( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RequestUrl( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RequestUrlPath( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RequestUrlHost( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RequestUrlQueryString( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RequestVerb( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RequestBodyString( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RequestBodyBase64( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RequestBodyIsBinary( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RequestIp( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RequestPort( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RequestHeaders( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ResponseCode( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ResponseReason( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ResponseHeaders( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ResponseBodyString( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ResponseBodyBase64( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_NumRequestQueues( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ResponseTimeoutMs( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ResponseCode( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ResponseReason( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ResponseBodyString( 
            /* [in] */ BSTR Val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IHttpServerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IHttpServer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IHttpServer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IHttpServer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IHttpServer * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IHttpServer * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IHttpServer * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IHttpServer * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IHttpServer * This,
            /* [retval][out] */ BSTR *Version);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Build )( 
            IHttpServer * This,
            /* [retval][out] */ BSTR *Build);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Module )( 
            IHttpServer * This,
            /* [retval][out] */ BSTR *Module);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LicenseStatus )( 
            IHttpServer * This,
            /* [retval][out] */ BSTR *LicenseStatus);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LicenseKey )( 
            IHttpServer * This,
            /* [retval][out] */ BSTR *LicenseKey);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LicenseKey )( 
            IHttpServer * This,
            /* [in] */ BSTR LicenseKey);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SaveLicenseKey )( 
            IHttpServer * This);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogFile )( 
            IHttpServer * This,
            /* [retval][out] */ BSTR *Logfile);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LogFile )( 
            IHttpServer * This,
            /* [in] */ BSTR Logfile);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActivityFile )( 
            IHttpServer * This,
            /* [retval][out] */ BSTR *ActivityFile);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ActivityFile )( 
            IHttpServer * This,
            /* [in] */ BSTR ActivityFile);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Sleep )( 
            IHttpServer * This,
            LONG Ms);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IHttpServer * This);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            IHttpServer * This,
            /* [retval][out] */ LONG *LastError);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            IHttpServer * This,
            /* [in] */ LONG ErrorCode,
            /* [retval][out] */ BSTR *Description);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsStarted )( 
            IHttpServer * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *AddUrl )( 
            IHttpServer * This,
            /* [in] */ BSTR url);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Startup )( 
            IHttpServer * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Shutdown )( 
            IHttpServer * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *WaitForRequest )( 
            IHttpServer * This,
            /* [in] */ LONG Timeout);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendResponse )( 
            IHttpServer * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ClearResponse )( 
            IHttpServer * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SaveRequestBody )( 
            IHttpServer * This,
            /* [in] */ BSTR Path);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *LoadResponseBody )( 
            IHttpServer * This,
            /* [in] */ BSTR Path,
            /* [in] */ VARIANT_BOOL bIsText);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetResponseBodyFromBase64 )( 
            IHttpServer * This,
            /* [in] */ BSTR b64string);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetRequestHeader )( 
            IHttpServer * This,
            /* [in] */ BSTR Key,
            /* [retval][out] */ BSTR *Value);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetResponseHeader )( 
            IHttpServer * This,
            /* [in] */ BSTR Key,
            /* [retval][out] */ BSTR *Value);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetResponseHeader )( 
            IHttpServer * This,
            /* [in] */ BSTR Key,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxRequestSizeBytes )( 
            IHttpServer * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaxRequestSizeBytes )( 
            IHttpServer * This,
            /* [in] */ LONG Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumRequestQueues )( 
            IHttpServer * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ResponseTimeoutMs )( 
            IHttpServer * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RequestUrl )( 
            IHttpServer * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RequestUrlPath )( 
            IHttpServer * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RequestUrlHost )( 
            IHttpServer * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RequestUrlQueryString )( 
            IHttpServer * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RequestVerb )( 
            IHttpServer * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RequestBodyString )( 
            IHttpServer * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RequestBodyBase64 )( 
            IHttpServer * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RequestBodyIsBinary )( 
            IHttpServer * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RequestIp )( 
            IHttpServer * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RequestPort )( 
            IHttpServer * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RequestHeaders )( 
            IHttpServer * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ResponseCode )( 
            IHttpServer * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ResponseReason )( 
            IHttpServer * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ResponseHeaders )( 
            IHttpServer * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ResponseBodyString )( 
            IHttpServer * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ResponseBodyBase64 )( 
            IHttpServer * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NumRequestQueues )( 
            IHttpServer * This,
            /* [in] */ LONG Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ResponseTimeoutMs )( 
            IHttpServer * This,
            /* [in] */ LONG Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ResponseCode )( 
            IHttpServer * This,
            /* [in] */ LONG Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ResponseReason )( 
            IHttpServer * This,
            /* [in] */ BSTR Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ResponseBodyString )( 
            IHttpServer * This,
            /* [in] */ BSTR Val);
        
        END_INTERFACE
    } IHttpServerVtbl;

    interface IHttpServer
    {
        CONST_VTBL struct IHttpServerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IHttpServer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IHttpServer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IHttpServer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IHttpServer_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IHttpServer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IHttpServer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IHttpServer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IHttpServer_get_Version(This,Version)	\
    ( (This)->lpVtbl -> get_Version(This,Version) ) 

#define IHttpServer_get_Build(This,Build)	\
    ( (This)->lpVtbl -> get_Build(This,Build) ) 

#define IHttpServer_get_Module(This,Module)	\
    ( (This)->lpVtbl -> get_Module(This,Module) ) 

#define IHttpServer_get_LicenseStatus(This,LicenseStatus)	\
    ( (This)->lpVtbl -> get_LicenseStatus(This,LicenseStatus) ) 

#define IHttpServer_get_LicenseKey(This,LicenseKey)	\
    ( (This)->lpVtbl -> get_LicenseKey(This,LicenseKey) ) 

#define IHttpServer_put_LicenseKey(This,LicenseKey)	\
    ( (This)->lpVtbl -> put_LicenseKey(This,LicenseKey) ) 

#define IHttpServer_SaveLicenseKey(This)	\
    ( (This)->lpVtbl -> SaveLicenseKey(This) ) 

#define IHttpServer_get_LogFile(This,Logfile)	\
    ( (This)->lpVtbl -> get_LogFile(This,Logfile) ) 

#define IHttpServer_put_LogFile(This,Logfile)	\
    ( (This)->lpVtbl -> put_LogFile(This,Logfile) ) 

#define IHttpServer_get_ActivityFile(This,ActivityFile)	\
    ( (This)->lpVtbl -> get_ActivityFile(This,ActivityFile) ) 

#define IHttpServer_put_ActivityFile(This,ActivityFile)	\
    ( (This)->lpVtbl -> put_ActivityFile(This,ActivityFile) ) 

#define IHttpServer_Sleep(This,Ms)	\
    ( (This)->lpVtbl -> Sleep(This,Ms) ) 

#define IHttpServer_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IHttpServer_get_LastError(This,LastError)	\
    ( (This)->lpVtbl -> get_LastError(This,LastError) ) 

#define IHttpServer_GetErrorDescription(This,ErrorCode,Description)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,ErrorCode,Description) ) 

#define IHttpServer_get_IsStarted(This,Val)	\
    ( (This)->lpVtbl -> get_IsStarted(This,Val) ) 

#define IHttpServer_AddUrl(This,url)	\
    ( (This)->lpVtbl -> AddUrl(This,url) ) 

#define IHttpServer_Startup(This)	\
    ( (This)->lpVtbl -> Startup(This) ) 

#define IHttpServer_Shutdown(This)	\
    ( (This)->lpVtbl -> Shutdown(This) ) 

#define IHttpServer_WaitForRequest(This,Timeout)	\
    ( (This)->lpVtbl -> WaitForRequest(This,Timeout) ) 

#define IHttpServer_SendResponse(This)	\
    ( (This)->lpVtbl -> SendResponse(This) ) 

#define IHttpServer_ClearResponse(This)	\
    ( (This)->lpVtbl -> ClearResponse(This) ) 

#define IHttpServer_SaveRequestBody(This,Path)	\
    ( (This)->lpVtbl -> SaveRequestBody(This,Path) ) 

#define IHttpServer_LoadResponseBody(This,Path,bIsText)	\
    ( (This)->lpVtbl -> LoadResponseBody(This,Path,bIsText) ) 

#define IHttpServer_SetResponseBodyFromBase64(This,b64string)	\
    ( (This)->lpVtbl -> SetResponseBodyFromBase64(This,b64string) ) 

#define IHttpServer_GetRequestHeader(This,Key,Value)	\
    ( (This)->lpVtbl -> GetRequestHeader(This,Key,Value) ) 

#define IHttpServer_GetResponseHeader(This,Key,Value)	\
    ( (This)->lpVtbl -> GetResponseHeader(This,Key,Value) ) 

#define IHttpServer_SetResponseHeader(This,Key,Value)	\
    ( (This)->lpVtbl -> SetResponseHeader(This,Key,Value) ) 

#define IHttpServer_get_MaxRequestSizeBytes(This,Val)	\
    ( (This)->lpVtbl -> get_MaxRequestSizeBytes(This,Val) ) 

#define IHttpServer_put_MaxRequestSizeBytes(This,Val)	\
    ( (This)->lpVtbl -> put_MaxRequestSizeBytes(This,Val) ) 

#define IHttpServer_get_NumRequestQueues(This,Val)	\
    ( (This)->lpVtbl -> get_NumRequestQueues(This,Val) ) 

#define IHttpServer_get_ResponseTimeoutMs(This,Val)	\
    ( (This)->lpVtbl -> get_ResponseTimeoutMs(This,Val) ) 

#define IHttpServer_get_RequestUrl(This,Val)	\
    ( (This)->lpVtbl -> get_RequestUrl(This,Val) ) 

#define IHttpServer_get_RequestUrlPath(This,Val)	\
    ( (This)->lpVtbl -> get_RequestUrlPath(This,Val) ) 

#define IHttpServer_get_RequestUrlHost(This,Val)	\
    ( (This)->lpVtbl -> get_RequestUrlHost(This,Val) ) 

#define IHttpServer_get_RequestUrlQueryString(This,Val)	\
    ( (This)->lpVtbl -> get_RequestUrlQueryString(This,Val) ) 

#define IHttpServer_get_RequestVerb(This,Val)	\
    ( (This)->lpVtbl -> get_RequestVerb(This,Val) ) 

#define IHttpServer_get_RequestBodyString(This,Val)	\
    ( (This)->lpVtbl -> get_RequestBodyString(This,Val) ) 

#define IHttpServer_get_RequestBodyBase64(This,Val)	\
    ( (This)->lpVtbl -> get_RequestBodyBase64(This,Val) ) 

#define IHttpServer_get_RequestBodyIsBinary(This,Val)	\
    ( (This)->lpVtbl -> get_RequestBodyIsBinary(This,Val) ) 

#define IHttpServer_get_RequestIp(This,Val)	\
    ( (This)->lpVtbl -> get_RequestIp(This,Val) ) 

#define IHttpServer_get_RequestPort(This,Val)	\
    ( (This)->lpVtbl -> get_RequestPort(This,Val) ) 

#define IHttpServer_get_RequestHeaders(This,Val)	\
    ( (This)->lpVtbl -> get_RequestHeaders(This,Val) ) 

#define IHttpServer_get_ResponseCode(This,Val)	\
    ( (This)->lpVtbl -> get_ResponseCode(This,Val) ) 

#define IHttpServer_get_ResponseReason(This,Val)	\
    ( (This)->lpVtbl -> get_ResponseReason(This,Val) ) 

#define IHttpServer_get_ResponseHeaders(This,Val)	\
    ( (This)->lpVtbl -> get_ResponseHeaders(This,Val) ) 

#define IHttpServer_get_ResponseBodyString(This,Val)	\
    ( (This)->lpVtbl -> get_ResponseBodyString(This,Val) ) 

#define IHttpServer_get_ResponseBodyBase64(This,Val)	\
    ( (This)->lpVtbl -> get_ResponseBodyBase64(This,Val) ) 

#define IHttpServer_put_NumRequestQueues(This,Val)	\
    ( (This)->lpVtbl -> put_NumRequestQueues(This,Val) ) 

#define IHttpServer_put_ResponseTimeoutMs(This,Val)	\
    ( (This)->lpVtbl -> put_ResponseTimeoutMs(This,Val) ) 

#define IHttpServer_put_ResponseCode(This,Val)	\
    ( (This)->lpVtbl -> put_ResponseCode(This,Val) ) 

#define IHttpServer_put_ResponseReason(This,Val)	\
    ( (This)->lpVtbl -> put_ResponseReason(This,Val) ) 

#define IHttpServer_put_ResponseBodyString(This,Val)	\
    ( (This)->lpVtbl -> put_ResponseBodyString(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IHttpServer_INTERFACE_DEFINED__ */


#ifndef __IHttp_INTERFACE_DEFINED__
#define __IHttp_INTERFACE_DEFINED__

/* interface IHttp */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IHttp;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1825A7C6-DBAB-4B99-AAA1-FDEDF36A4982")
    IHttp : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *Version) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Build( 
            /* [retval][out] */ BSTR *Build) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Module( 
            /* [retval][out] */ BSTR *Module) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LicenseStatus( 
            /* [retval][out] */ BSTR *LicenseStatus) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LicenseKey( 
            /* [retval][out] */ BSTR *LicenseKey) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LicenseKey( 
            /* [in] */ BSTR LicenseKey) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SaveLicenseKey( void) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LogFile( 
            /* [retval][out] */ BSTR *Logfile) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LogFile( 
            /* [in] */ BSTR Logfile) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ActivityFile( 
            /* [retval][out] */ BSTR *ActivityFile) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ActivityFile( 
            /* [in] */ BSTR ActivityFile) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LogDetails( 
            /* [retval][out] */ VARIANT_BOOL *Logfile) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LogDetails( 
            /* [in] */ VARIANT_BOOL Logfile) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Sleep( 
            LONG Ms) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ LONG *LastError) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            /* [in] */ LONG ErrorCode,
            /* [retval][out] */ BSTR *Description) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Get( 
            /* [in] */ BSTR strUrl,
            /* [retval][out] */ BSTR *strResponse) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Post( 
            /* [in] */ BSTR strUrl,
            /* [in] */ BSTR strPostBody,
            /* [retval][out] */ BSTR *strReponse) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Download( 
            /* [in] */ BSTR strUrl,
            /* [in] */ BSTR strTargetPath) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Url( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Url( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_PostBody( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_PostBody( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SendSms( 
            /* [in] */ IMessage *Sms,
            /* [defaultvalue][in] */ LONG MultipartFlag,
            /* [retval][out] */ BSTR *Reponse) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_WebAccount( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_WebAccount( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_WebPassword( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_WebPassword( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProxyServer( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProxyServer( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProxyAccount( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProxyAccount( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProxyPassword( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProxyPassword( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RequestTimeout( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_RequestTimeout( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetHeader( 
            /* [in] */ BSTR Header,
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastResponseCode( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastResponseText( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE UrlEncode( 
            /* [in] */ BSTR In,
            /* [retval][out] */ BSTR *Out) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Base64Encode( 
            /* [in] */ BSTR In,
            /* [retval][out] */ BSTR *Out) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Base64EncodeFile( 
            /* [in] */ BSTR Filename,
            /* [retval][out] */ BSTR *sOut) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE HexEncode( 
            /* [in] */ BSTR In,
            /* [retval][out] */ BSTR *Out) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IHttpVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IHttp * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IHttp * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IHttp * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IHttp * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IHttp * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IHttp * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IHttp * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IHttp * This,
            /* [retval][out] */ BSTR *Version);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Build )( 
            IHttp * This,
            /* [retval][out] */ BSTR *Build);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Module )( 
            IHttp * This,
            /* [retval][out] */ BSTR *Module);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LicenseStatus )( 
            IHttp * This,
            /* [retval][out] */ BSTR *LicenseStatus);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LicenseKey )( 
            IHttp * This,
            /* [retval][out] */ BSTR *LicenseKey);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LicenseKey )( 
            IHttp * This,
            /* [in] */ BSTR LicenseKey);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SaveLicenseKey )( 
            IHttp * This);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogFile )( 
            IHttp * This,
            /* [retval][out] */ BSTR *Logfile);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LogFile )( 
            IHttp * This,
            /* [in] */ BSTR Logfile);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActivityFile )( 
            IHttp * This,
            /* [retval][out] */ BSTR *ActivityFile);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ActivityFile )( 
            IHttp * This,
            /* [in] */ BSTR ActivityFile);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogDetails )( 
            IHttp * This,
            /* [retval][out] */ VARIANT_BOOL *Logfile);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LogDetails )( 
            IHttp * This,
            /* [in] */ VARIANT_BOOL Logfile);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Sleep )( 
            IHttp * This,
            LONG Ms);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IHttp * This);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            IHttp * This,
            /* [retval][out] */ LONG *LastError);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            IHttp * This,
            /* [in] */ LONG ErrorCode,
            /* [retval][out] */ BSTR *Description);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Get )( 
            IHttp * This,
            /* [in] */ BSTR strUrl,
            /* [retval][out] */ BSTR *strResponse);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Post )( 
            IHttp * This,
            /* [in] */ BSTR strUrl,
            /* [in] */ BSTR strPostBody,
            /* [retval][out] */ BSTR *strReponse);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Download )( 
            IHttp * This,
            /* [in] */ BSTR strUrl,
            /* [in] */ BSTR strTargetPath);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Url )( 
            IHttp * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Url )( 
            IHttp * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PostBody )( 
            IHttp * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PostBody )( 
            IHttp * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendSms )( 
            IHttp * This,
            /* [in] */ IMessage *Sms,
            /* [defaultvalue][in] */ LONG MultipartFlag,
            /* [retval][out] */ BSTR *Reponse);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WebAccount )( 
            IHttp * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_WebAccount )( 
            IHttp * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WebPassword )( 
            IHttp * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_WebPassword )( 
            IHttp * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProxyServer )( 
            IHttp * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProxyServer )( 
            IHttp * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProxyAccount )( 
            IHttp * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProxyAccount )( 
            IHttp * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProxyPassword )( 
            IHttp * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProxyPassword )( 
            IHttp * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RequestTimeout )( 
            IHttp * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RequestTimeout )( 
            IHttp * This,
            /* [in] */ LONG newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetHeader )( 
            IHttp * This,
            /* [in] */ BSTR Header,
            /* [in] */ BSTR Value);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastResponseCode )( 
            IHttp * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastResponseText )( 
            IHttp * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *UrlEncode )( 
            IHttp * This,
            /* [in] */ BSTR In,
            /* [retval][out] */ BSTR *Out);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Base64Encode )( 
            IHttp * This,
            /* [in] */ BSTR In,
            /* [retval][out] */ BSTR *Out);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Base64EncodeFile )( 
            IHttp * This,
            /* [in] */ BSTR Filename,
            /* [retval][out] */ BSTR *sOut);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *HexEncode )( 
            IHttp * This,
            /* [in] */ BSTR In,
            /* [retval][out] */ BSTR *Out);
        
        END_INTERFACE
    } IHttpVtbl;

    interface IHttp
    {
        CONST_VTBL struct IHttpVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IHttp_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IHttp_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IHttp_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IHttp_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IHttp_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IHttp_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IHttp_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IHttp_get_Version(This,Version)	\
    ( (This)->lpVtbl -> get_Version(This,Version) ) 

#define IHttp_get_Build(This,Build)	\
    ( (This)->lpVtbl -> get_Build(This,Build) ) 

#define IHttp_get_Module(This,Module)	\
    ( (This)->lpVtbl -> get_Module(This,Module) ) 

#define IHttp_get_LicenseStatus(This,LicenseStatus)	\
    ( (This)->lpVtbl -> get_LicenseStatus(This,LicenseStatus) ) 

#define IHttp_get_LicenseKey(This,LicenseKey)	\
    ( (This)->lpVtbl -> get_LicenseKey(This,LicenseKey) ) 

#define IHttp_put_LicenseKey(This,LicenseKey)	\
    ( (This)->lpVtbl -> put_LicenseKey(This,LicenseKey) ) 

#define IHttp_SaveLicenseKey(This)	\
    ( (This)->lpVtbl -> SaveLicenseKey(This) ) 

#define IHttp_get_LogFile(This,Logfile)	\
    ( (This)->lpVtbl -> get_LogFile(This,Logfile) ) 

#define IHttp_put_LogFile(This,Logfile)	\
    ( (This)->lpVtbl -> put_LogFile(This,Logfile) ) 

#define IHttp_get_ActivityFile(This,ActivityFile)	\
    ( (This)->lpVtbl -> get_ActivityFile(This,ActivityFile) ) 

#define IHttp_put_ActivityFile(This,ActivityFile)	\
    ( (This)->lpVtbl -> put_ActivityFile(This,ActivityFile) ) 

#define IHttp_get_LogDetails(This,Logfile)	\
    ( (This)->lpVtbl -> get_LogDetails(This,Logfile) ) 

#define IHttp_put_LogDetails(This,Logfile)	\
    ( (This)->lpVtbl -> put_LogDetails(This,Logfile) ) 

#define IHttp_Sleep(This,Ms)	\
    ( (This)->lpVtbl -> Sleep(This,Ms) ) 

#define IHttp_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IHttp_get_LastError(This,LastError)	\
    ( (This)->lpVtbl -> get_LastError(This,LastError) ) 

#define IHttp_GetErrorDescription(This,ErrorCode,Description)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,ErrorCode,Description) ) 

#define IHttp_Get(This,strUrl,strResponse)	\
    ( (This)->lpVtbl -> Get(This,strUrl,strResponse) ) 

#define IHttp_Post(This,strUrl,strPostBody,strReponse)	\
    ( (This)->lpVtbl -> Post(This,strUrl,strPostBody,strReponse) ) 

#define IHttp_Download(This,strUrl,strTargetPath)	\
    ( (This)->lpVtbl -> Download(This,strUrl,strTargetPath) ) 

#define IHttp_get_Url(This,Val)	\
    ( (This)->lpVtbl -> get_Url(This,Val) ) 

#define IHttp_put_Url(This,newVal)	\
    ( (This)->lpVtbl -> put_Url(This,newVal) ) 

#define IHttp_get_PostBody(This,Val)	\
    ( (This)->lpVtbl -> get_PostBody(This,Val) ) 

#define IHttp_put_PostBody(This,newVal)	\
    ( (This)->lpVtbl -> put_PostBody(This,newVal) ) 

#define IHttp_SendSms(This,Sms,MultipartFlag,Reponse)	\
    ( (This)->lpVtbl -> SendSms(This,Sms,MultipartFlag,Reponse) ) 

#define IHttp_get_WebAccount(This,Val)	\
    ( (This)->lpVtbl -> get_WebAccount(This,Val) ) 

#define IHttp_put_WebAccount(This,newVal)	\
    ( (This)->lpVtbl -> put_WebAccount(This,newVal) ) 

#define IHttp_get_WebPassword(This,Val)	\
    ( (This)->lpVtbl -> get_WebPassword(This,Val) ) 

#define IHttp_put_WebPassword(This,newVal)	\
    ( (This)->lpVtbl -> put_WebPassword(This,newVal) ) 

#define IHttp_get_ProxyServer(This,Val)	\
    ( (This)->lpVtbl -> get_ProxyServer(This,Val) ) 

#define IHttp_put_ProxyServer(This,newVal)	\
    ( (This)->lpVtbl -> put_ProxyServer(This,newVal) ) 

#define IHttp_get_ProxyAccount(This,Val)	\
    ( (This)->lpVtbl -> get_ProxyAccount(This,Val) ) 

#define IHttp_put_ProxyAccount(This,newVal)	\
    ( (This)->lpVtbl -> put_ProxyAccount(This,newVal) ) 

#define IHttp_get_ProxyPassword(This,Val)	\
    ( (This)->lpVtbl -> get_ProxyPassword(This,Val) ) 

#define IHttp_put_ProxyPassword(This,newVal)	\
    ( (This)->lpVtbl -> put_ProxyPassword(This,newVal) ) 

#define IHttp_get_RequestTimeout(This,Val)	\
    ( (This)->lpVtbl -> get_RequestTimeout(This,Val) ) 

#define IHttp_put_RequestTimeout(This,newVal)	\
    ( (This)->lpVtbl -> put_RequestTimeout(This,newVal) ) 

#define IHttp_SetHeader(This,Header,Value)	\
    ( (This)->lpVtbl -> SetHeader(This,Header,Value) ) 

#define IHttp_get_LastResponseCode(This,Val)	\
    ( (This)->lpVtbl -> get_LastResponseCode(This,Val) ) 

#define IHttp_get_LastResponseText(This,Val)	\
    ( (This)->lpVtbl -> get_LastResponseText(This,Val) ) 

#define IHttp_UrlEncode(This,In,Out)	\
    ( (This)->lpVtbl -> UrlEncode(This,In,Out) ) 

#define IHttp_Base64Encode(This,In,Out)	\
    ( (This)->lpVtbl -> Base64Encode(This,In,Out) ) 

#define IHttp_Base64EncodeFile(This,Filename,sOut)	\
    ( (This)->lpVtbl -> Base64EncodeFile(This,Filename,sOut) ) 

#define IHttp_HexEncode(This,In,Out)	\
    ( (This)->lpVtbl -> HexEncode(This,In,Out) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IHttp_INTERFACE_DEFINED__ */


#ifndef __ISnpp_INTERFACE_DEFINED__
#define __ISnpp_INTERFACE_DEFINED__

/* interface ISnpp */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISnpp;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C4AAB6D2-F834-4FE6-A4AE-B1D5794BC3B4")
    ISnpp : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *Version) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Build( 
            /* [retval][out] */ BSTR *Build) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Module( 
            /* [retval][out] */ BSTR *Module) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LicenseStatus( 
            /* [retval][out] */ BSTR *LicenseStatus) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LicenseKey( 
            /* [retval][out] */ BSTR *LicenseKey) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LicenseKey( 
            /* [in] */ BSTR LicenseKey) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SaveLicenseKey( void) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LogFile( 
            /* [retval][out] */ BSTR *Logfile) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LogFile( 
            /* [in] */ BSTR Logfile) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ LONG *LastError) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            /* [in] */ LONG ErrorCode,
            /* [retval][out] */ BSTR *Description) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Server( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Server( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ServerPort( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ServerPort( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ServerTimeout( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ServerTimeout( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderPassword( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProviderPassword( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderUsername( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProviderUsername( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderResponse( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MultilineEnabled( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_MultilineEnabled( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Send( 
            /* [in] */ BSTR ToAddress,
            /* [in] */ BSTR Message) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISnppVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISnpp * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISnpp * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISnpp * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISnpp * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISnpp * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISnpp * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISnpp * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            ISnpp * This,
            /* [retval][out] */ BSTR *Version);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Build )( 
            ISnpp * This,
            /* [retval][out] */ BSTR *Build);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Module )( 
            ISnpp * This,
            /* [retval][out] */ BSTR *Module);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LicenseStatus )( 
            ISnpp * This,
            /* [retval][out] */ BSTR *LicenseStatus);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LicenseKey )( 
            ISnpp * This,
            /* [retval][out] */ BSTR *LicenseKey);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LicenseKey )( 
            ISnpp * This,
            /* [in] */ BSTR LicenseKey);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SaveLicenseKey )( 
            ISnpp * This);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogFile )( 
            ISnpp * This,
            /* [retval][out] */ BSTR *Logfile);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LogFile )( 
            ISnpp * This,
            /* [in] */ BSTR Logfile);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ISnpp * This);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            ISnpp * This,
            /* [retval][out] */ LONG *LastError);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            ISnpp * This,
            /* [in] */ LONG ErrorCode,
            /* [retval][out] */ BSTR *Description);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Server )( 
            ISnpp * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Server )( 
            ISnpp * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ServerPort )( 
            ISnpp * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ServerPort )( 
            ISnpp * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ServerTimeout )( 
            ISnpp * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ServerTimeout )( 
            ISnpp * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderPassword )( 
            ISnpp * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProviderPassword )( 
            ISnpp * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderUsername )( 
            ISnpp * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProviderUsername )( 
            ISnpp * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderResponse )( 
            ISnpp * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MultilineEnabled )( 
            ISnpp * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MultilineEnabled )( 
            ISnpp * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Send )( 
            ISnpp * This,
            /* [in] */ BSTR ToAddress,
            /* [in] */ BSTR Message);
        
        END_INTERFACE
    } ISnppVtbl;

    interface ISnpp
    {
        CONST_VTBL struct ISnppVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISnpp_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISnpp_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISnpp_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISnpp_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISnpp_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISnpp_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISnpp_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISnpp_get_Version(This,Version)	\
    ( (This)->lpVtbl -> get_Version(This,Version) ) 

#define ISnpp_get_Build(This,Build)	\
    ( (This)->lpVtbl -> get_Build(This,Build) ) 

#define ISnpp_get_Module(This,Module)	\
    ( (This)->lpVtbl -> get_Module(This,Module) ) 

#define ISnpp_get_LicenseStatus(This,LicenseStatus)	\
    ( (This)->lpVtbl -> get_LicenseStatus(This,LicenseStatus) ) 

#define ISnpp_get_LicenseKey(This,LicenseKey)	\
    ( (This)->lpVtbl -> get_LicenseKey(This,LicenseKey) ) 

#define ISnpp_put_LicenseKey(This,LicenseKey)	\
    ( (This)->lpVtbl -> put_LicenseKey(This,LicenseKey) ) 

#define ISnpp_SaveLicenseKey(This)	\
    ( (This)->lpVtbl -> SaveLicenseKey(This) ) 

#define ISnpp_get_LogFile(This,Logfile)	\
    ( (This)->lpVtbl -> get_LogFile(This,Logfile) ) 

#define ISnpp_put_LogFile(This,Logfile)	\
    ( (This)->lpVtbl -> put_LogFile(This,Logfile) ) 

#define ISnpp_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define ISnpp_get_LastError(This,LastError)	\
    ( (This)->lpVtbl -> get_LastError(This,LastError) ) 

#define ISnpp_GetErrorDescription(This,ErrorCode,Description)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,ErrorCode,Description) ) 

#define ISnpp_get_Server(This,Val)	\
    ( (This)->lpVtbl -> get_Server(This,Val) ) 

#define ISnpp_put_Server(This,newVal)	\
    ( (This)->lpVtbl -> put_Server(This,newVal) ) 

#define ISnpp_get_ServerPort(This,Val)	\
    ( (This)->lpVtbl -> get_ServerPort(This,Val) ) 

#define ISnpp_put_ServerPort(This,newVal)	\
    ( (This)->lpVtbl -> put_ServerPort(This,newVal) ) 

#define ISnpp_get_ServerTimeout(This,Val)	\
    ( (This)->lpVtbl -> get_ServerTimeout(This,Val) ) 

#define ISnpp_put_ServerTimeout(This,newVal)	\
    ( (This)->lpVtbl -> put_ServerTimeout(This,newVal) ) 

#define ISnpp_get_ProviderPassword(This,Val)	\
    ( (This)->lpVtbl -> get_ProviderPassword(This,Val) ) 

#define ISnpp_put_ProviderPassword(This,newVal)	\
    ( (This)->lpVtbl -> put_ProviderPassword(This,newVal) ) 

#define ISnpp_get_ProviderUsername(This,Val)	\
    ( (This)->lpVtbl -> get_ProviderUsername(This,Val) ) 

#define ISnpp_put_ProviderUsername(This,newVal)	\
    ( (This)->lpVtbl -> put_ProviderUsername(This,newVal) ) 

#define ISnpp_get_ProviderResponse(This,Val)	\
    ( (This)->lpVtbl -> get_ProviderResponse(This,Val) ) 

#define ISnpp_get_MultilineEnabled(This,Val)	\
    ( (This)->lpVtbl -> get_MultilineEnabled(This,Val) ) 

#define ISnpp_put_MultilineEnabled(This,newVal)	\
    ( (This)->lpVtbl -> put_MultilineEnabled(This,newVal) ) 

#define ISnpp_Send(This,ToAddress,Message)	\
    ( (This)->lpVtbl -> Send(This,ToAddress,Message) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISnpp_INTERFACE_DEFINED__ */


#ifndef __ISmpp_INTERFACE_DEFINED__
#define __ISmpp_INTERFACE_DEFINED__

/* interface ISmpp */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISmpp;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9E5FC25E-613A-4951-9C8F-37923C7AE7AE")
    ISmpp : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *Version) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Build( 
            /* [retval][out] */ BSTR *Build) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Module( 
            /* [retval][out] */ BSTR *Module) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LicenseStatus( 
            /* [retval][out] */ BSTR *LicenseStatus) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LicenseKey( 
            /* [retval][out] */ BSTR *LicenseKey) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LicenseKey( 
            /* [in] */ BSTR LicenseKey) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SaveLicenseKey( void) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LogFile( 
            /* [retval][out] */ BSTR *Logfile) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LogFile( 
            /* [in] */ BSTR Logfile) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ActivityFile( 
            /* [retval][out] */ BSTR *ActivityFile) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ActivityFile( 
            /* [in] */ BSTR ActivityFile) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LogPduDetails( 
            /* [retval][out] */ VARIANT_BOOL *LogDetails) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LogPduDetails( 
            /* [in] */ VARIANT_BOOL LogDetails) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LogLevel( 
            /* [retval][out] */ LONG *pLevel) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LogLevel( 
            /* [in] */ LONG Level) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Sleep( 
            LONG Ms) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ LONG *LastError) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            /* [in] */ LONG ErrorCode,
            /* [retval][out] */ BSTR *Description) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Connect( 
            /* [in] */ BSTR Host,
            /* [in] */ LONG Port,
            /* [in] */ LONG Timeout,
            /* [defaultvalue][in] */ VARIANT_BOOL Secure = 0) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Bind( 
            /* [in] */ LONG Type,
            /* [in] */ BSTR SystemId,
            /* [in] */ BSTR SystemPassword,
            /* [in] */ BSTR SystemType,
            /* [in] */ LONG Version,
            /* [in] */ LONG Ton,
            /* [in] */ LONG Npi,
            /* [in] */ BSTR AddressRange,
            /* [in] */ LONG Timeout) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Unbind( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Disconnect( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AddBindTlv( 
            /* [in] */ ITlv *Tlv) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DeleteBindTlv( 
            /* [in] */ LONG lTag) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetFirstBindTlv( 
            /* [retval][out] */ ITlv **Tlv) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetNextBindTlv( 
            /* [retval][out] */ ITlv **Tlv) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetBindTlv( 
            /* [in] */ LONG lTag,
            /* [retval][out] */ ITlv **Tlv) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SubmitSms( 
            /* [in] */ IMessage *Sms,
            /* [defaultvalue][in] */ LONG MultipartFlag,
            /* [retval][out] */ LONG *Parts) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE WaitForSmsUpdate( 
            /* [defaultvalue][in] */ LONG TimeoutMs,
            /* [retval][out] */ VARIANT_BOOL *Updated) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE FetchSmsUpdate( 
            /* [retval][out] */ IMessage **Sms) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE QuerySms( 
            /* [in] */ IMessage *Sms) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ReceiveMessage( 
            /* [retval][out] */ IMessage **Sms) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE CountSmsReceived( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE CountSmsSubmitSpace( 
            /* [retval][out] */ LONG *Count) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE CountSmsQuerySpace( 
            /* [retval][out] */ LONG *Count) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_IsConnected( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_IsBound( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxOutPendingPdus( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_MaxOutPendingPdus( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxSmsSubmissions( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_MaxSmsSubmissions( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxSmsQueries( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_MaxSmsQueries( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_PduTimeout( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_PduTimeout( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_EnquireInterval( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_EnquireInterval( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MultipartTimeout( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_MultipartTimeout( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_UseGsmEncoding( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_UseGsmEncoding( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AssembleMultipart( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_AssembleMultipart( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MultipartMode( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_MultipartMode( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ExtractApplicationPort( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ExtractApplicationPort( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxSmsReceived( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_MaxSmsReceived( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SubmitMode( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_SubmitMode( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_KeepUnusedUdh( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_KeepUnusedUdh( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ExtractLanguageShift( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ExtractLanguageShift( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LocalIpAddress( 
            /* [retval][out] */ BSTR *Ip) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LocalIpAddress( 
            /* [in] */ BSTR Ip) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SmsSentPerSecond( 
            /* [retval][out] */ LONG *Count) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SmsReceivedPerSecond( 
            /* [retval][out] */ LONG *Count) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetFirstPart( 
            /* [in] */ IMessage *Sms,
            /* [retval][out] */ IMessage **ppVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetNextPart( 
            /* [retval][out] */ IMessage **ppVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE CountParts( 
            /* [in] */ IMessage *Sms,
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AssembleSms( 
            /* [in] */ IMessage *Part) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetAssembledSms( 
            /* [defaultvalue][in] */ VARIANT_BOOL Force,
            /* [retval][out] */ IMessage **ppVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ResetSmsAssembler( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE FetchNotUpdated( 
            /* [retval][out] */ IMessage **ppVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE FetchNotSubmitted( 
            /* [retval][out] */ IMessage **ppVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISmppVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISmpp * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISmpp * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISmpp * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISmpp * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISmpp * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISmpp * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISmpp * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            ISmpp * This,
            /* [retval][out] */ BSTR *Version);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Build )( 
            ISmpp * This,
            /* [retval][out] */ BSTR *Build);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Module )( 
            ISmpp * This,
            /* [retval][out] */ BSTR *Module);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LicenseStatus )( 
            ISmpp * This,
            /* [retval][out] */ BSTR *LicenseStatus);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LicenseKey )( 
            ISmpp * This,
            /* [retval][out] */ BSTR *LicenseKey);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LicenseKey )( 
            ISmpp * This,
            /* [in] */ BSTR LicenseKey);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SaveLicenseKey )( 
            ISmpp * This);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogFile )( 
            ISmpp * This,
            /* [retval][out] */ BSTR *Logfile);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LogFile )( 
            ISmpp * This,
            /* [in] */ BSTR Logfile);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActivityFile )( 
            ISmpp * This,
            /* [retval][out] */ BSTR *ActivityFile);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ActivityFile )( 
            ISmpp * This,
            /* [in] */ BSTR ActivityFile);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogPduDetails )( 
            ISmpp * This,
            /* [retval][out] */ VARIANT_BOOL *LogDetails);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LogPduDetails )( 
            ISmpp * This,
            /* [in] */ VARIANT_BOOL LogDetails);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogLevel )( 
            ISmpp * This,
            /* [retval][out] */ LONG *pLevel);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LogLevel )( 
            ISmpp * This,
            /* [in] */ LONG Level);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Sleep )( 
            ISmpp * This,
            LONG Ms);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ISmpp * This);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            ISmpp * This,
            /* [retval][out] */ LONG *LastError);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            ISmpp * This,
            /* [in] */ LONG ErrorCode,
            /* [retval][out] */ BSTR *Description);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Connect )( 
            ISmpp * This,
            /* [in] */ BSTR Host,
            /* [in] */ LONG Port,
            /* [in] */ LONG Timeout,
            /* [defaultvalue][in] */ VARIANT_BOOL Secure);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Bind )( 
            ISmpp * This,
            /* [in] */ LONG Type,
            /* [in] */ BSTR SystemId,
            /* [in] */ BSTR SystemPassword,
            /* [in] */ BSTR SystemType,
            /* [in] */ LONG Version,
            /* [in] */ LONG Ton,
            /* [in] */ LONG Npi,
            /* [in] */ BSTR AddressRange,
            /* [in] */ LONG Timeout);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Unbind )( 
            ISmpp * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Disconnect )( 
            ISmpp * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *AddBindTlv )( 
            ISmpp * This,
            /* [in] */ ITlv *Tlv);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DeleteBindTlv )( 
            ISmpp * This,
            /* [in] */ LONG lTag);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetFirstBindTlv )( 
            ISmpp * This,
            /* [retval][out] */ ITlv **Tlv);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetNextBindTlv )( 
            ISmpp * This,
            /* [retval][out] */ ITlv **Tlv);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetBindTlv )( 
            ISmpp * This,
            /* [in] */ LONG lTag,
            /* [retval][out] */ ITlv **Tlv);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SubmitSms )( 
            ISmpp * This,
            /* [in] */ IMessage *Sms,
            /* [defaultvalue][in] */ LONG MultipartFlag,
            /* [retval][out] */ LONG *Parts);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *WaitForSmsUpdate )( 
            ISmpp * This,
            /* [defaultvalue][in] */ LONG TimeoutMs,
            /* [retval][out] */ VARIANT_BOOL *Updated);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FetchSmsUpdate )( 
            ISmpp * This,
            /* [retval][out] */ IMessage **Sms);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *QuerySms )( 
            ISmpp * This,
            /* [in] */ IMessage *Sms);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ReceiveMessage )( 
            ISmpp * This,
            /* [retval][out] */ IMessage **Sms);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CountSmsReceived )( 
            ISmpp * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CountSmsSubmitSpace )( 
            ISmpp * This,
            /* [retval][out] */ LONG *Count);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CountSmsQuerySpace )( 
            ISmpp * This,
            /* [retval][out] */ LONG *Count);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsConnected )( 
            ISmpp * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsBound )( 
            ISmpp * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxOutPendingPdus )( 
            ISmpp * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaxOutPendingPdus )( 
            ISmpp * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxSmsSubmissions )( 
            ISmpp * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaxSmsSubmissions )( 
            ISmpp * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxSmsQueries )( 
            ISmpp * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaxSmsQueries )( 
            ISmpp * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PduTimeout )( 
            ISmpp * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PduTimeout )( 
            ISmpp * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnquireInterval )( 
            ISmpp * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EnquireInterval )( 
            ISmpp * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MultipartTimeout )( 
            ISmpp * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MultipartTimeout )( 
            ISmpp * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UseGsmEncoding )( 
            ISmpp * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UseGsmEncoding )( 
            ISmpp * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AssembleMultipart )( 
            ISmpp * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AssembleMultipart )( 
            ISmpp * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MultipartMode )( 
            ISmpp * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MultipartMode )( 
            ISmpp * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExtractApplicationPort )( 
            ISmpp * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExtractApplicationPort )( 
            ISmpp * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxSmsReceived )( 
            ISmpp * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaxSmsReceived )( 
            ISmpp * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SubmitMode )( 
            ISmpp * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SubmitMode )( 
            ISmpp * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeepUnusedUdh )( 
            ISmpp * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeepUnusedUdh )( 
            ISmpp * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExtractLanguageShift )( 
            ISmpp * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExtractLanguageShift )( 
            ISmpp * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LocalIpAddress )( 
            ISmpp * This,
            /* [retval][out] */ BSTR *Ip);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LocalIpAddress )( 
            ISmpp * This,
            /* [in] */ BSTR Ip);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SmsSentPerSecond )( 
            ISmpp * This,
            /* [retval][out] */ LONG *Count);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SmsReceivedPerSecond )( 
            ISmpp * This,
            /* [retval][out] */ LONG *Count);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetFirstPart )( 
            ISmpp * This,
            /* [in] */ IMessage *Sms,
            /* [retval][out] */ IMessage **ppVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetNextPart )( 
            ISmpp * This,
            /* [retval][out] */ IMessage **ppVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CountParts )( 
            ISmpp * This,
            /* [in] */ IMessage *Sms,
            /* [retval][out] */ LONG *Val);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *AssembleSms )( 
            ISmpp * This,
            /* [in] */ IMessage *Part);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetAssembledSms )( 
            ISmpp * This,
            /* [defaultvalue][in] */ VARIANT_BOOL Force,
            /* [retval][out] */ IMessage **ppVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ResetSmsAssembler )( 
            ISmpp * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FetchNotUpdated )( 
            ISmpp * This,
            /* [retval][out] */ IMessage **ppVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FetchNotSubmitted )( 
            ISmpp * This,
            /* [retval][out] */ IMessage **ppVal);
        
        END_INTERFACE
    } ISmppVtbl;

    interface ISmpp
    {
        CONST_VTBL struct ISmppVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISmpp_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISmpp_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISmpp_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISmpp_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISmpp_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISmpp_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISmpp_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISmpp_get_Version(This,Version)	\
    ( (This)->lpVtbl -> get_Version(This,Version) ) 

#define ISmpp_get_Build(This,Build)	\
    ( (This)->lpVtbl -> get_Build(This,Build) ) 

#define ISmpp_get_Module(This,Module)	\
    ( (This)->lpVtbl -> get_Module(This,Module) ) 

#define ISmpp_get_LicenseStatus(This,LicenseStatus)	\
    ( (This)->lpVtbl -> get_LicenseStatus(This,LicenseStatus) ) 

#define ISmpp_get_LicenseKey(This,LicenseKey)	\
    ( (This)->lpVtbl -> get_LicenseKey(This,LicenseKey) ) 

#define ISmpp_put_LicenseKey(This,LicenseKey)	\
    ( (This)->lpVtbl -> put_LicenseKey(This,LicenseKey) ) 

#define ISmpp_SaveLicenseKey(This)	\
    ( (This)->lpVtbl -> SaveLicenseKey(This) ) 

#define ISmpp_get_LogFile(This,Logfile)	\
    ( (This)->lpVtbl -> get_LogFile(This,Logfile) ) 

#define ISmpp_put_LogFile(This,Logfile)	\
    ( (This)->lpVtbl -> put_LogFile(This,Logfile) ) 

#define ISmpp_get_ActivityFile(This,ActivityFile)	\
    ( (This)->lpVtbl -> get_ActivityFile(This,ActivityFile) ) 

#define ISmpp_put_ActivityFile(This,ActivityFile)	\
    ( (This)->lpVtbl -> put_ActivityFile(This,ActivityFile) ) 

#define ISmpp_get_LogPduDetails(This,LogDetails)	\
    ( (This)->lpVtbl -> get_LogPduDetails(This,LogDetails) ) 

#define ISmpp_put_LogPduDetails(This,LogDetails)	\
    ( (This)->lpVtbl -> put_LogPduDetails(This,LogDetails) ) 

#define ISmpp_get_LogLevel(This,pLevel)	\
    ( (This)->lpVtbl -> get_LogLevel(This,pLevel) ) 

#define ISmpp_put_LogLevel(This,Level)	\
    ( (This)->lpVtbl -> put_LogLevel(This,Level) ) 

#define ISmpp_Sleep(This,Ms)	\
    ( (This)->lpVtbl -> Sleep(This,Ms) ) 

#define ISmpp_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define ISmpp_get_LastError(This,LastError)	\
    ( (This)->lpVtbl -> get_LastError(This,LastError) ) 

#define ISmpp_GetErrorDescription(This,ErrorCode,Description)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,ErrorCode,Description) ) 

#define ISmpp_Connect(This,Host,Port,Timeout,Secure)	\
    ( (This)->lpVtbl -> Connect(This,Host,Port,Timeout,Secure) ) 

#define ISmpp_Bind(This,Type,SystemId,SystemPassword,SystemType,Version,Ton,Npi,AddressRange,Timeout)	\
    ( (This)->lpVtbl -> Bind(This,Type,SystemId,SystemPassword,SystemType,Version,Ton,Npi,AddressRange,Timeout) ) 

#define ISmpp_Unbind(This)	\
    ( (This)->lpVtbl -> Unbind(This) ) 

#define ISmpp_Disconnect(This)	\
    ( (This)->lpVtbl -> Disconnect(This) ) 

#define ISmpp_AddBindTlv(This,Tlv)	\
    ( (This)->lpVtbl -> AddBindTlv(This,Tlv) ) 

#define ISmpp_DeleteBindTlv(This,lTag)	\
    ( (This)->lpVtbl -> DeleteBindTlv(This,lTag) ) 

#define ISmpp_GetFirstBindTlv(This,Tlv)	\
    ( (This)->lpVtbl -> GetFirstBindTlv(This,Tlv) ) 

#define ISmpp_GetNextBindTlv(This,Tlv)	\
    ( (This)->lpVtbl -> GetNextBindTlv(This,Tlv) ) 

#define ISmpp_GetBindTlv(This,lTag,Tlv)	\
    ( (This)->lpVtbl -> GetBindTlv(This,lTag,Tlv) ) 

#define ISmpp_SubmitSms(This,Sms,MultipartFlag,Parts)	\
    ( (This)->lpVtbl -> SubmitSms(This,Sms,MultipartFlag,Parts) ) 

#define ISmpp_WaitForSmsUpdate(This,TimeoutMs,Updated)	\
    ( (This)->lpVtbl -> WaitForSmsUpdate(This,TimeoutMs,Updated) ) 

#define ISmpp_FetchSmsUpdate(This,Sms)	\
    ( (This)->lpVtbl -> FetchSmsUpdate(This,Sms) ) 

#define ISmpp_QuerySms(This,Sms)	\
    ( (This)->lpVtbl -> QuerySms(This,Sms) ) 

#define ISmpp_ReceiveMessage(This,Sms)	\
    ( (This)->lpVtbl -> ReceiveMessage(This,Sms) ) 

#define ISmpp_CountSmsReceived(This,Val)	\
    ( (This)->lpVtbl -> CountSmsReceived(This,Val) ) 

#define ISmpp_CountSmsSubmitSpace(This,Count)	\
    ( (This)->lpVtbl -> CountSmsSubmitSpace(This,Count) ) 

#define ISmpp_CountSmsQuerySpace(This,Count)	\
    ( (This)->lpVtbl -> CountSmsQuerySpace(This,Count) ) 

#define ISmpp_get_IsConnected(This,Val)	\
    ( (This)->lpVtbl -> get_IsConnected(This,Val) ) 

#define ISmpp_get_IsBound(This,Val)	\
    ( (This)->lpVtbl -> get_IsBound(This,Val) ) 

#define ISmpp_get_MaxOutPendingPdus(This,Val)	\
    ( (This)->lpVtbl -> get_MaxOutPendingPdus(This,Val) ) 

#define ISmpp_put_MaxOutPendingPdus(This,newVal)	\
    ( (This)->lpVtbl -> put_MaxOutPendingPdus(This,newVal) ) 

#define ISmpp_get_MaxSmsSubmissions(This,Val)	\
    ( (This)->lpVtbl -> get_MaxSmsSubmissions(This,Val) ) 

#define ISmpp_put_MaxSmsSubmissions(This,newVal)	\
    ( (This)->lpVtbl -> put_MaxSmsSubmissions(This,newVal) ) 

#define ISmpp_get_MaxSmsQueries(This,Val)	\
    ( (This)->lpVtbl -> get_MaxSmsQueries(This,Val) ) 

#define ISmpp_put_MaxSmsQueries(This,newVal)	\
    ( (This)->lpVtbl -> put_MaxSmsQueries(This,newVal) ) 

#define ISmpp_get_PduTimeout(This,Val)	\
    ( (This)->lpVtbl -> get_PduTimeout(This,Val) ) 

#define ISmpp_put_PduTimeout(This,newVal)	\
    ( (This)->lpVtbl -> put_PduTimeout(This,newVal) ) 

#define ISmpp_get_EnquireInterval(This,Val)	\
    ( (This)->lpVtbl -> get_EnquireInterval(This,Val) ) 

#define ISmpp_put_EnquireInterval(This,newVal)	\
    ( (This)->lpVtbl -> put_EnquireInterval(This,newVal) ) 

#define ISmpp_get_MultipartTimeout(This,Val)	\
    ( (This)->lpVtbl -> get_MultipartTimeout(This,Val) ) 

#define ISmpp_put_MultipartTimeout(This,newVal)	\
    ( (This)->lpVtbl -> put_MultipartTimeout(This,newVal) ) 

#define ISmpp_get_UseGsmEncoding(This,Val)	\
    ( (This)->lpVtbl -> get_UseGsmEncoding(This,Val) ) 

#define ISmpp_put_UseGsmEncoding(This,newVal)	\
    ( (This)->lpVtbl -> put_UseGsmEncoding(This,newVal) ) 

#define ISmpp_get_AssembleMultipart(This,Val)	\
    ( (This)->lpVtbl -> get_AssembleMultipart(This,Val) ) 

#define ISmpp_put_AssembleMultipart(This,newVal)	\
    ( (This)->lpVtbl -> put_AssembleMultipart(This,newVal) ) 

#define ISmpp_get_MultipartMode(This,Val)	\
    ( (This)->lpVtbl -> get_MultipartMode(This,Val) ) 

#define ISmpp_put_MultipartMode(This,newVal)	\
    ( (This)->lpVtbl -> put_MultipartMode(This,newVal) ) 

#define ISmpp_get_ExtractApplicationPort(This,Val)	\
    ( (This)->lpVtbl -> get_ExtractApplicationPort(This,Val) ) 

#define ISmpp_put_ExtractApplicationPort(This,newVal)	\
    ( (This)->lpVtbl -> put_ExtractApplicationPort(This,newVal) ) 

#define ISmpp_get_MaxSmsReceived(This,Val)	\
    ( (This)->lpVtbl -> get_MaxSmsReceived(This,Val) ) 

#define ISmpp_put_MaxSmsReceived(This,newVal)	\
    ( (This)->lpVtbl -> put_MaxSmsReceived(This,newVal) ) 

#define ISmpp_get_SubmitMode(This,Val)	\
    ( (This)->lpVtbl -> get_SubmitMode(This,Val) ) 

#define ISmpp_put_SubmitMode(This,newVal)	\
    ( (This)->lpVtbl -> put_SubmitMode(This,newVal) ) 

#define ISmpp_get_KeepUnusedUdh(This,Val)	\
    ( (This)->lpVtbl -> get_KeepUnusedUdh(This,Val) ) 

#define ISmpp_put_KeepUnusedUdh(This,newVal)	\
    ( (This)->lpVtbl -> put_KeepUnusedUdh(This,newVal) ) 

#define ISmpp_get_ExtractLanguageShift(This,Val)	\
    ( (This)->lpVtbl -> get_ExtractLanguageShift(This,Val) ) 

#define ISmpp_put_ExtractLanguageShift(This,newVal)	\
    ( (This)->lpVtbl -> put_ExtractLanguageShift(This,newVal) ) 

#define ISmpp_get_LocalIpAddress(This,Ip)	\
    ( (This)->lpVtbl -> get_LocalIpAddress(This,Ip) ) 

#define ISmpp_put_LocalIpAddress(This,Ip)	\
    ( (This)->lpVtbl -> put_LocalIpAddress(This,Ip) ) 

#define ISmpp_get_SmsSentPerSecond(This,Count)	\
    ( (This)->lpVtbl -> get_SmsSentPerSecond(This,Count) ) 

#define ISmpp_get_SmsReceivedPerSecond(This,Count)	\
    ( (This)->lpVtbl -> get_SmsReceivedPerSecond(This,Count) ) 

#define ISmpp_GetFirstPart(This,Sms,ppVal)	\
    ( (This)->lpVtbl -> GetFirstPart(This,Sms,ppVal) ) 

#define ISmpp_GetNextPart(This,ppVal)	\
    ( (This)->lpVtbl -> GetNextPart(This,ppVal) ) 

#define ISmpp_CountParts(This,Sms,Val)	\
    ( (This)->lpVtbl -> CountParts(This,Sms,Val) ) 

#define ISmpp_AssembleSms(This,Part)	\
    ( (This)->lpVtbl -> AssembleSms(This,Part) ) 

#define ISmpp_GetAssembledSms(This,Force,ppVal)	\
    ( (This)->lpVtbl -> GetAssembledSms(This,Force,ppVal) ) 

#define ISmpp_ResetSmsAssembler(This)	\
    ( (This)->lpVtbl -> ResetSmsAssembler(This) ) 

#define ISmpp_FetchNotUpdated(This,ppVal)	\
    ( (This)->lpVtbl -> FetchNotUpdated(This,ppVal) ) 

#define ISmpp_FetchNotSubmitted(This,ppVal)	\
    ( (This)->lpVtbl -> FetchNotSubmitted(This,ppVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISmpp_INTERFACE_DEFINED__ */


#ifndef __ISmppSession_INTERFACE_DEFINED__
#define __ISmppSession_INTERFACE_DEFINED__

/* interface ISmppSession */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISmppSession;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3E1FF0C2-4F98-4FA2-954B-BF5730FB6CF9")
    ISmppSession : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LogFile( 
            /* [retval][out] */ BSTR *Logfile) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LogFile( 
            /* [in] */ BSTR Logfile) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ActivityFile( 
            /* [retval][out] */ BSTR *ActivityFile) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ActivityFile( 
            /* [in] */ BSTR ActivityFile) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LogPduDetails( 
            /* [retval][out] */ VARIANT_BOOL *LogDetails) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LogPduDetails( 
            /* [in] */ VARIANT_BOOL LogDetails) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LogLevel( 
            /* [retval][out] */ LONG *pLevel) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LogLevel( 
            /* [in] */ LONG Level) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ LONG *LastError) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            /* [in] */ LONG ErrorCode,
            /* [retval][out] */ BSTR *Description) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Ip( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Port( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SystemId( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Password( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SystemType( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AddressRange( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AddressRangeNpi( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AddressRangeTon( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ConnectionState( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RequestedBind( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Id( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE RespondToBind( 
            /* [in] */ LONG Status) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE RespondToSubmitSms( 
            /* [in] */ IMessage *Sms) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ReceiveSubmitSms( 
            /* [retval][out] */ IMessage **Sms) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE RespondToQuerySms( 
            /* [in] */ IMessage *Sms) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ReceiveQuerySms( 
            /* [retval][out] */ IMessage **Sms) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DeliverSms( 
            /* [in] */ IMessage *Sms,
            /* [defaultvalue][in] */ LONG MultipartFlag,
            /* [retval][out] */ LONG *Parts) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DeliverReport( 
            /* [in] */ IMessage *Sms) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ReceiveDeliverResponse( 
            /* [retval][out] */ IMessage **Sms) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetFirstBindTlv( 
            /* [retval][out] */ ITlv **Tlv) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetNextBindTlv( 
            /* [retval][out] */ ITlv **Tlv) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetBindTlv( 
            /* [in] */ LONG lTag,
            /* [retval][out] */ ITlv **Tlv) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Disconnect( void) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxSmsDeliveries( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_MaxSmsDeliveries( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxSmsSubmission( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_MaxSmsSubmission( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxSmsQueries( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_MaxSmsQueries( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxOutPendingPdus( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_MaxOutPendingPdus( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_PduTimeout( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_PduTimeout( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_EnquireInterval( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_EnquireInterval( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MultipartTimeout( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_MultipartTimeout( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_UseGsmEncoding( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_UseGsmEncoding( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MultipartMode( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_MultipartMode( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ExtractApplicationPort( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ExtractApplicationPort( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DeliverMode( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DeliverMode( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_KeepUnusedUdh( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_KeepUnusedUdh( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ExtractLanguageShift( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ExtractLanguageShift( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE CountSmsSubmissions( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE CountSmsQueries( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE CountSmsDeliverySpace( 
            /* [retval][out] */ LONG *Count) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SmsSentPerSecond( 
            /* [retval][out] */ LONG *Count) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SmsReceivedPerSecond( 
            /* [retval][out] */ LONG *Count) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetFirstPart( 
            /* [in] */ IMessage *Sms,
            /* [retval][out] */ IMessage **pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetNextPart( 
            /* [retval][out] */ IMessage **pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE CountParts( 
            /* [in] */ IMessage *Sms,
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AssembleSms( 
            /* [in] */ IMessage *Part) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetAssembledSms( 
            /* [in] */ VARIANT_BOOL Force,
            /* [retval][out] */ IMessage **ppVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE FetchNotResponded( 
            /* [retval][out] */ IMessage **ppVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE FetchNotDelivered( 
            /* [retval][out] */ IMessage **ppVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_IsConnected( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_IsBound( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISmppSessionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISmppSession * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISmppSession * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISmppSession * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISmppSession * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISmppSession * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISmppSession * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISmppSession * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogFile )( 
            ISmppSession * This,
            /* [retval][out] */ BSTR *Logfile);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LogFile )( 
            ISmppSession * This,
            /* [in] */ BSTR Logfile);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActivityFile )( 
            ISmppSession * This,
            /* [retval][out] */ BSTR *ActivityFile);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ActivityFile )( 
            ISmppSession * This,
            /* [in] */ BSTR ActivityFile);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogPduDetails )( 
            ISmppSession * This,
            /* [retval][out] */ VARIANT_BOOL *LogDetails);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LogPduDetails )( 
            ISmppSession * This,
            /* [in] */ VARIANT_BOOL LogDetails);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogLevel )( 
            ISmppSession * This,
            /* [retval][out] */ LONG *pLevel);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LogLevel )( 
            ISmppSession * This,
            /* [in] */ LONG Level);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            ISmppSession * This,
            /* [retval][out] */ LONG *LastError);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            ISmppSession * This,
            /* [in] */ LONG ErrorCode,
            /* [retval][out] */ BSTR *Description);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Ip )( 
            ISmppSession * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Port )( 
            ISmppSession * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            ISmppSession * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SystemId )( 
            ISmppSession * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Password )( 
            ISmppSession * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SystemType )( 
            ISmppSession * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AddressRange )( 
            ISmppSession * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AddressRangeNpi )( 
            ISmppSession * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AddressRangeTon )( 
            ISmppSession * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectionState )( 
            ISmppSession * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RequestedBind )( 
            ISmppSession * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Id )( 
            ISmppSession * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RespondToBind )( 
            ISmppSession * This,
            /* [in] */ LONG Status);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RespondToSubmitSms )( 
            ISmppSession * This,
            /* [in] */ IMessage *Sms);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ReceiveSubmitSms )( 
            ISmppSession * This,
            /* [retval][out] */ IMessage **Sms);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RespondToQuerySms )( 
            ISmppSession * This,
            /* [in] */ IMessage *Sms);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ReceiveQuerySms )( 
            ISmppSession * This,
            /* [retval][out] */ IMessage **Sms);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DeliverSms )( 
            ISmppSession * This,
            /* [in] */ IMessage *Sms,
            /* [defaultvalue][in] */ LONG MultipartFlag,
            /* [retval][out] */ LONG *Parts);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DeliverReport )( 
            ISmppSession * This,
            /* [in] */ IMessage *Sms);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ReceiveDeliverResponse )( 
            ISmppSession * This,
            /* [retval][out] */ IMessage **Sms);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetFirstBindTlv )( 
            ISmppSession * This,
            /* [retval][out] */ ITlv **Tlv);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetNextBindTlv )( 
            ISmppSession * This,
            /* [retval][out] */ ITlv **Tlv);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetBindTlv )( 
            ISmppSession * This,
            /* [in] */ LONG lTag,
            /* [retval][out] */ ITlv **Tlv);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Disconnect )( 
            ISmppSession * This);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxSmsDeliveries )( 
            ISmppSession * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaxSmsDeliveries )( 
            ISmppSession * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxSmsSubmission )( 
            ISmppSession * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaxSmsSubmission )( 
            ISmppSession * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxSmsQueries )( 
            ISmppSession * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaxSmsQueries )( 
            ISmppSession * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxOutPendingPdus )( 
            ISmppSession * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaxOutPendingPdus )( 
            ISmppSession * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PduTimeout )( 
            ISmppSession * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PduTimeout )( 
            ISmppSession * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnquireInterval )( 
            ISmppSession * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EnquireInterval )( 
            ISmppSession * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MultipartTimeout )( 
            ISmppSession * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MultipartTimeout )( 
            ISmppSession * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UseGsmEncoding )( 
            ISmppSession * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UseGsmEncoding )( 
            ISmppSession * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MultipartMode )( 
            ISmppSession * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MultipartMode )( 
            ISmppSession * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExtractApplicationPort )( 
            ISmppSession * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExtractApplicationPort )( 
            ISmppSession * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DeliverMode )( 
            ISmppSession * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DeliverMode )( 
            ISmppSession * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeepUnusedUdh )( 
            ISmppSession * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeepUnusedUdh )( 
            ISmppSession * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExtractLanguageShift )( 
            ISmppSession * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExtractLanguageShift )( 
            ISmppSession * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CountSmsSubmissions )( 
            ISmppSession * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CountSmsQueries )( 
            ISmppSession * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CountSmsDeliverySpace )( 
            ISmppSession * This,
            /* [retval][out] */ LONG *Count);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SmsSentPerSecond )( 
            ISmppSession * This,
            /* [retval][out] */ LONG *Count);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SmsReceivedPerSecond )( 
            ISmppSession * This,
            /* [retval][out] */ LONG *Count);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetFirstPart )( 
            ISmppSession * This,
            /* [in] */ IMessage *Sms,
            /* [retval][out] */ IMessage **pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetNextPart )( 
            ISmppSession * This,
            /* [retval][out] */ IMessage **pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CountParts )( 
            ISmppSession * This,
            /* [in] */ IMessage *Sms,
            /* [retval][out] */ LONG *Val);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *AssembleSms )( 
            ISmppSession * This,
            /* [in] */ IMessage *Part);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetAssembledSms )( 
            ISmppSession * This,
            /* [in] */ VARIANT_BOOL Force,
            /* [retval][out] */ IMessage **ppVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FetchNotResponded )( 
            ISmppSession * This,
            /* [retval][out] */ IMessage **ppVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FetchNotDelivered )( 
            ISmppSession * This,
            /* [retval][out] */ IMessage **ppVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsConnected )( 
            ISmppSession * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsBound )( 
            ISmppSession * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        END_INTERFACE
    } ISmppSessionVtbl;

    interface ISmppSession
    {
        CONST_VTBL struct ISmppSessionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISmppSession_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISmppSession_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISmppSession_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISmppSession_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISmppSession_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISmppSession_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISmppSession_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISmppSession_get_LogFile(This,Logfile)	\
    ( (This)->lpVtbl -> get_LogFile(This,Logfile) ) 

#define ISmppSession_put_LogFile(This,Logfile)	\
    ( (This)->lpVtbl -> put_LogFile(This,Logfile) ) 

#define ISmppSession_get_ActivityFile(This,ActivityFile)	\
    ( (This)->lpVtbl -> get_ActivityFile(This,ActivityFile) ) 

#define ISmppSession_put_ActivityFile(This,ActivityFile)	\
    ( (This)->lpVtbl -> put_ActivityFile(This,ActivityFile) ) 

#define ISmppSession_get_LogPduDetails(This,LogDetails)	\
    ( (This)->lpVtbl -> get_LogPduDetails(This,LogDetails) ) 

#define ISmppSession_put_LogPduDetails(This,LogDetails)	\
    ( (This)->lpVtbl -> put_LogPduDetails(This,LogDetails) ) 

#define ISmppSession_get_LogLevel(This,pLevel)	\
    ( (This)->lpVtbl -> get_LogLevel(This,pLevel) ) 

#define ISmppSession_put_LogLevel(This,Level)	\
    ( (This)->lpVtbl -> put_LogLevel(This,Level) ) 

#define ISmppSession_get_LastError(This,LastError)	\
    ( (This)->lpVtbl -> get_LastError(This,LastError) ) 

#define ISmppSession_GetErrorDescription(This,ErrorCode,Description)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,ErrorCode,Description) ) 

#define ISmppSession_get_Ip(This,Val)	\
    ( (This)->lpVtbl -> get_Ip(This,Val) ) 

#define ISmppSession_get_Port(This,Val)	\
    ( (This)->lpVtbl -> get_Port(This,Val) ) 

#define ISmppSession_get_Version(This,Val)	\
    ( (This)->lpVtbl -> get_Version(This,Val) ) 

#define ISmppSession_get_SystemId(This,Val)	\
    ( (This)->lpVtbl -> get_SystemId(This,Val) ) 

#define ISmppSession_get_Password(This,Val)	\
    ( (This)->lpVtbl -> get_Password(This,Val) ) 

#define ISmppSession_get_SystemType(This,Val)	\
    ( (This)->lpVtbl -> get_SystemType(This,Val) ) 

#define ISmppSession_get_AddressRange(This,Val)	\
    ( (This)->lpVtbl -> get_AddressRange(This,Val) ) 

#define ISmppSession_get_AddressRangeNpi(This,Val)	\
    ( (This)->lpVtbl -> get_AddressRangeNpi(This,Val) ) 

#define ISmppSession_get_AddressRangeTon(This,Val)	\
    ( (This)->lpVtbl -> get_AddressRangeTon(This,Val) ) 

#define ISmppSession_get_ConnectionState(This,Val)	\
    ( (This)->lpVtbl -> get_ConnectionState(This,Val) ) 

#define ISmppSession_get_RequestedBind(This,Val)	\
    ( (This)->lpVtbl -> get_RequestedBind(This,Val) ) 

#define ISmppSession_get_Id(This,Val)	\
    ( (This)->lpVtbl -> get_Id(This,Val) ) 

#define ISmppSession_RespondToBind(This,Status)	\
    ( (This)->lpVtbl -> RespondToBind(This,Status) ) 

#define ISmppSession_RespondToSubmitSms(This,Sms)	\
    ( (This)->lpVtbl -> RespondToSubmitSms(This,Sms) ) 

#define ISmppSession_ReceiveSubmitSms(This,Sms)	\
    ( (This)->lpVtbl -> ReceiveSubmitSms(This,Sms) ) 

#define ISmppSession_RespondToQuerySms(This,Sms)	\
    ( (This)->lpVtbl -> RespondToQuerySms(This,Sms) ) 

#define ISmppSession_ReceiveQuerySms(This,Sms)	\
    ( (This)->lpVtbl -> ReceiveQuerySms(This,Sms) ) 

#define ISmppSession_DeliverSms(This,Sms,MultipartFlag,Parts)	\
    ( (This)->lpVtbl -> DeliverSms(This,Sms,MultipartFlag,Parts) ) 

#define ISmppSession_DeliverReport(This,Sms)	\
    ( (This)->lpVtbl -> DeliverReport(This,Sms) ) 

#define ISmppSession_ReceiveDeliverResponse(This,Sms)	\
    ( (This)->lpVtbl -> ReceiveDeliverResponse(This,Sms) ) 

#define ISmppSession_GetFirstBindTlv(This,Tlv)	\
    ( (This)->lpVtbl -> GetFirstBindTlv(This,Tlv) ) 

#define ISmppSession_GetNextBindTlv(This,Tlv)	\
    ( (This)->lpVtbl -> GetNextBindTlv(This,Tlv) ) 

#define ISmppSession_GetBindTlv(This,lTag,Tlv)	\
    ( (This)->lpVtbl -> GetBindTlv(This,lTag,Tlv) ) 

#define ISmppSession_Disconnect(This)	\
    ( (This)->lpVtbl -> Disconnect(This) ) 

#define ISmppSession_get_MaxSmsDeliveries(This,Val)	\
    ( (This)->lpVtbl -> get_MaxSmsDeliveries(This,Val) ) 

#define ISmppSession_put_MaxSmsDeliveries(This,newVal)	\
    ( (This)->lpVtbl -> put_MaxSmsDeliveries(This,newVal) ) 

#define ISmppSession_get_MaxSmsSubmission(This,Val)	\
    ( (This)->lpVtbl -> get_MaxSmsSubmission(This,Val) ) 

#define ISmppSession_put_MaxSmsSubmission(This,newVal)	\
    ( (This)->lpVtbl -> put_MaxSmsSubmission(This,newVal) ) 

#define ISmppSession_get_MaxSmsQueries(This,Val)	\
    ( (This)->lpVtbl -> get_MaxSmsQueries(This,Val) ) 

#define ISmppSession_put_MaxSmsQueries(This,newVal)	\
    ( (This)->lpVtbl -> put_MaxSmsQueries(This,newVal) ) 

#define ISmppSession_get_MaxOutPendingPdus(This,Val)	\
    ( (This)->lpVtbl -> get_MaxOutPendingPdus(This,Val) ) 

#define ISmppSession_put_MaxOutPendingPdus(This,newVal)	\
    ( (This)->lpVtbl -> put_MaxOutPendingPdus(This,newVal) ) 

#define ISmppSession_get_PduTimeout(This,Val)	\
    ( (This)->lpVtbl -> get_PduTimeout(This,Val) ) 

#define ISmppSession_put_PduTimeout(This,newVal)	\
    ( (This)->lpVtbl -> put_PduTimeout(This,newVal) ) 

#define ISmppSession_get_EnquireInterval(This,Val)	\
    ( (This)->lpVtbl -> get_EnquireInterval(This,Val) ) 

#define ISmppSession_put_EnquireInterval(This,newVal)	\
    ( (This)->lpVtbl -> put_EnquireInterval(This,newVal) ) 

#define ISmppSession_get_MultipartTimeout(This,Val)	\
    ( (This)->lpVtbl -> get_MultipartTimeout(This,Val) ) 

#define ISmppSession_put_MultipartTimeout(This,newVal)	\
    ( (This)->lpVtbl -> put_MultipartTimeout(This,newVal) ) 

#define ISmppSession_get_UseGsmEncoding(This,Val)	\
    ( (This)->lpVtbl -> get_UseGsmEncoding(This,Val) ) 

#define ISmppSession_put_UseGsmEncoding(This,newVal)	\
    ( (This)->lpVtbl -> put_UseGsmEncoding(This,newVal) ) 

#define ISmppSession_get_MultipartMode(This,Val)	\
    ( (This)->lpVtbl -> get_MultipartMode(This,Val) ) 

#define ISmppSession_put_MultipartMode(This,newVal)	\
    ( (This)->lpVtbl -> put_MultipartMode(This,newVal) ) 

#define ISmppSession_get_ExtractApplicationPort(This,Val)	\
    ( (This)->lpVtbl -> get_ExtractApplicationPort(This,Val) ) 

#define ISmppSession_put_ExtractApplicationPort(This,newVal)	\
    ( (This)->lpVtbl -> put_ExtractApplicationPort(This,newVal) ) 

#define ISmppSession_get_DeliverMode(This,Val)	\
    ( (This)->lpVtbl -> get_DeliverMode(This,Val) ) 

#define ISmppSession_put_DeliverMode(This,newVal)	\
    ( (This)->lpVtbl -> put_DeliverMode(This,newVal) ) 

#define ISmppSession_get_KeepUnusedUdh(This,Val)	\
    ( (This)->lpVtbl -> get_KeepUnusedUdh(This,Val) ) 

#define ISmppSession_put_KeepUnusedUdh(This,newVal)	\
    ( (This)->lpVtbl -> put_KeepUnusedUdh(This,newVal) ) 

#define ISmppSession_get_ExtractLanguageShift(This,Val)	\
    ( (This)->lpVtbl -> get_ExtractLanguageShift(This,Val) ) 

#define ISmppSession_put_ExtractLanguageShift(This,newVal)	\
    ( (This)->lpVtbl -> put_ExtractLanguageShift(This,newVal) ) 

#define ISmppSession_CountSmsSubmissions(This,Val)	\
    ( (This)->lpVtbl -> CountSmsSubmissions(This,Val) ) 

#define ISmppSession_CountSmsQueries(This,Val)	\
    ( (This)->lpVtbl -> CountSmsQueries(This,Val) ) 

#define ISmppSession_CountSmsDeliverySpace(This,Count)	\
    ( (This)->lpVtbl -> CountSmsDeliverySpace(This,Count) ) 

#define ISmppSession_get_SmsSentPerSecond(This,Count)	\
    ( (This)->lpVtbl -> get_SmsSentPerSecond(This,Count) ) 

#define ISmppSession_get_SmsReceivedPerSecond(This,Count)	\
    ( (This)->lpVtbl -> get_SmsReceivedPerSecond(This,Count) ) 

#define ISmppSession_GetFirstPart(This,Sms,pVal)	\
    ( (This)->lpVtbl -> GetFirstPart(This,Sms,pVal) ) 

#define ISmppSession_GetNextPart(This,pVal)	\
    ( (This)->lpVtbl -> GetNextPart(This,pVal) ) 

#define ISmppSession_CountParts(This,Sms,Val)	\
    ( (This)->lpVtbl -> CountParts(This,Sms,Val) ) 

#define ISmppSession_AssembleSms(This,Part)	\
    ( (This)->lpVtbl -> AssembleSms(This,Part) ) 

#define ISmppSession_GetAssembledSms(This,Force,ppVal)	\
    ( (This)->lpVtbl -> GetAssembledSms(This,Force,ppVal) ) 

#define ISmppSession_FetchNotResponded(This,ppVal)	\
    ( (This)->lpVtbl -> FetchNotResponded(This,ppVal) ) 

#define ISmppSession_FetchNotDelivered(This,ppVal)	\
    ( (This)->lpVtbl -> FetchNotDelivered(This,ppVal) ) 

#define ISmppSession_get_IsConnected(This,Val)	\
    ( (This)->lpVtbl -> get_IsConnected(This,Val) ) 

#define ISmppSession_get_IsBound(This,Val)	\
    ( (This)->lpVtbl -> get_IsBound(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISmppSession_INTERFACE_DEFINED__ */


#ifndef __ISmppServer_INTERFACE_DEFINED__
#define __ISmppServer_INTERFACE_DEFINED__

/* interface ISmppServer */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISmppServer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EBE10239-A8C6-46CA-BC48-0CFA6CFD835C")
    ISmppServer : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *Version) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Build( 
            /* [retval][out] */ BSTR *Build) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Module( 
            /* [retval][out] */ BSTR *Module) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LicenseStatus( 
            /* [retval][out] */ BSTR *LicenseStatus) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LicenseKey( 
            /* [retval][out] */ BSTR *LicenseKey) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LicenseKey( 
            /* [in] */ BSTR LicenseKey) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SaveLicenseKey( void) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LogFile( 
            /* [retval][out] */ BSTR *Logfile) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LogFile( 
            /* [in] */ BSTR Logfile) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ActivityFile( 
            /* [retval][out] */ BSTR *ActivityFile) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ActivityFile( 
            /* [in] */ BSTR ActivityFile) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_CertificateStore( 
            /* [retval][out] */ LONG *CertificateStore) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_CertificateStore( 
            /* [in] */ LONG CertificateStore) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ListenIpv4( 
            /* [retval][out] */ BSTR *Ip) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ListenIpv4( 
            /* [in] */ BSTR Ip) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ListenIpv6( 
            /* [retval][out] */ BSTR *Ip) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ListenIpv6( 
            /* [in] */ BSTR Ip) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Sleep( 
            LONG Ms) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ LONG *LastError) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            /* [in] */ LONG ErrorCode,
            /* [retval][out] */ BSTR *Description) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Start( 
            /* [in] */ LONG Port,
            /* [defaultvalue][in] */ LONG IpVersion = 2,
            /* [defaultvalue][in] */ BSTR Certificate = L"") = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Stop( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetFirstSession( 
            /* [retval][out] */ ISmppSession **Session) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetNextSession( 
            /* [retval][out] */ ISmppSession **Session) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetSession( 
            /* [in] */ LONG Id,
            /* [retval][out] */ ISmppSession **Session) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetClosedSession( 
            /* [retval][out] */ ISmppSession **Session) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE FindFirstMyServerCertificate( 
            /* [retval][out] */ BSTR *Certificate) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE FindNextMyServerCertificate( 
            /* [retval][out] */ BSTR *Certificate) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE FindFirstLocalIpAddress( 
            /* [defaultvalue][in] */ LONG IpVersion,
            /* [retval][out] */ BSTR *Ip) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE FindNextLocalIpAddress( 
            /* [retval][out] */ BSTR *Ip) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxClosedSessions( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_MaxClosedSessions( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_IsStarted( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastReference( 
            /* [retval][out] */ LONG *Val) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LastReference( 
            /* [in] */ LONG newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISmppServerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISmppServer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISmppServer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISmppServer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISmppServer * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISmppServer * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISmppServer * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISmppServer * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            ISmppServer * This,
            /* [retval][out] */ BSTR *Version);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Build )( 
            ISmppServer * This,
            /* [retval][out] */ BSTR *Build);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Module )( 
            ISmppServer * This,
            /* [retval][out] */ BSTR *Module);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LicenseStatus )( 
            ISmppServer * This,
            /* [retval][out] */ BSTR *LicenseStatus);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LicenseKey )( 
            ISmppServer * This,
            /* [retval][out] */ BSTR *LicenseKey);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LicenseKey )( 
            ISmppServer * This,
            /* [in] */ BSTR LicenseKey);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SaveLicenseKey )( 
            ISmppServer * This);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogFile )( 
            ISmppServer * This,
            /* [retval][out] */ BSTR *Logfile);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LogFile )( 
            ISmppServer * This,
            /* [in] */ BSTR Logfile);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActivityFile )( 
            ISmppServer * This,
            /* [retval][out] */ BSTR *ActivityFile);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ActivityFile )( 
            ISmppServer * This,
            /* [in] */ BSTR ActivityFile);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CertificateStore )( 
            ISmppServer * This,
            /* [retval][out] */ LONG *CertificateStore);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CertificateStore )( 
            ISmppServer * This,
            /* [in] */ LONG CertificateStore);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ListenIpv4 )( 
            ISmppServer * This,
            /* [retval][out] */ BSTR *Ip);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ListenIpv4 )( 
            ISmppServer * This,
            /* [in] */ BSTR Ip);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ListenIpv6 )( 
            ISmppServer * This,
            /* [retval][out] */ BSTR *Ip);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ListenIpv6 )( 
            ISmppServer * This,
            /* [in] */ BSTR Ip);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Sleep )( 
            ISmppServer * This,
            LONG Ms);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ISmppServer * This);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            ISmppServer * This,
            /* [retval][out] */ LONG *LastError);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            ISmppServer * This,
            /* [in] */ LONG ErrorCode,
            /* [retval][out] */ BSTR *Description);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Start )( 
            ISmppServer * This,
            /* [in] */ LONG Port,
            /* [defaultvalue][in] */ LONG IpVersion,
            /* [defaultvalue][in] */ BSTR Certificate);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Stop )( 
            ISmppServer * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetFirstSession )( 
            ISmppServer * This,
            /* [retval][out] */ ISmppSession **Session);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetNextSession )( 
            ISmppServer * This,
            /* [retval][out] */ ISmppSession **Session);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetSession )( 
            ISmppServer * This,
            /* [in] */ LONG Id,
            /* [retval][out] */ ISmppSession **Session);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetClosedSession )( 
            ISmppServer * This,
            /* [retval][out] */ ISmppSession **Session);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FindFirstMyServerCertificate )( 
            ISmppServer * This,
            /* [retval][out] */ BSTR *Certificate);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FindNextMyServerCertificate )( 
            ISmppServer * This,
            /* [retval][out] */ BSTR *Certificate);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FindFirstLocalIpAddress )( 
            ISmppServer * This,
            /* [defaultvalue][in] */ LONG IpVersion,
            /* [retval][out] */ BSTR *Ip);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FindNextLocalIpAddress )( 
            ISmppServer * This,
            /* [retval][out] */ BSTR *Ip);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxClosedSessions )( 
            ISmppServer * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaxClosedSessions )( 
            ISmppServer * This,
            /* [in] */ LONG Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsStarted )( 
            ISmppServer * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastReference )( 
            ISmppServer * This,
            /* [retval][out] */ LONG *Val);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LastReference )( 
            ISmppServer * This,
            /* [in] */ LONG newVal);
        
        END_INTERFACE
    } ISmppServerVtbl;

    interface ISmppServer
    {
        CONST_VTBL struct ISmppServerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISmppServer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISmppServer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISmppServer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISmppServer_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISmppServer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISmppServer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISmppServer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISmppServer_get_Version(This,Version)	\
    ( (This)->lpVtbl -> get_Version(This,Version) ) 

#define ISmppServer_get_Build(This,Build)	\
    ( (This)->lpVtbl -> get_Build(This,Build) ) 

#define ISmppServer_get_Module(This,Module)	\
    ( (This)->lpVtbl -> get_Module(This,Module) ) 

#define ISmppServer_get_LicenseStatus(This,LicenseStatus)	\
    ( (This)->lpVtbl -> get_LicenseStatus(This,LicenseStatus) ) 

#define ISmppServer_get_LicenseKey(This,LicenseKey)	\
    ( (This)->lpVtbl -> get_LicenseKey(This,LicenseKey) ) 

#define ISmppServer_put_LicenseKey(This,LicenseKey)	\
    ( (This)->lpVtbl -> put_LicenseKey(This,LicenseKey) ) 

#define ISmppServer_SaveLicenseKey(This)	\
    ( (This)->lpVtbl -> SaveLicenseKey(This) ) 

#define ISmppServer_get_LogFile(This,Logfile)	\
    ( (This)->lpVtbl -> get_LogFile(This,Logfile) ) 

#define ISmppServer_put_LogFile(This,Logfile)	\
    ( (This)->lpVtbl -> put_LogFile(This,Logfile) ) 

#define ISmppServer_get_ActivityFile(This,ActivityFile)	\
    ( (This)->lpVtbl -> get_ActivityFile(This,ActivityFile) ) 

#define ISmppServer_put_ActivityFile(This,ActivityFile)	\
    ( (This)->lpVtbl -> put_ActivityFile(This,ActivityFile) ) 

#define ISmppServer_get_CertificateStore(This,CertificateStore)	\
    ( (This)->lpVtbl -> get_CertificateStore(This,CertificateStore) ) 

#define ISmppServer_put_CertificateStore(This,CertificateStore)	\
    ( (This)->lpVtbl -> put_CertificateStore(This,CertificateStore) ) 

#define ISmppServer_get_ListenIpv4(This,Ip)	\
    ( (This)->lpVtbl -> get_ListenIpv4(This,Ip) ) 

#define ISmppServer_put_ListenIpv4(This,Ip)	\
    ( (This)->lpVtbl -> put_ListenIpv4(This,Ip) ) 

#define ISmppServer_get_ListenIpv6(This,Ip)	\
    ( (This)->lpVtbl -> get_ListenIpv6(This,Ip) ) 

#define ISmppServer_put_ListenIpv6(This,Ip)	\
    ( (This)->lpVtbl -> put_ListenIpv6(This,Ip) ) 

#define ISmppServer_Sleep(This,Ms)	\
    ( (This)->lpVtbl -> Sleep(This,Ms) ) 

#define ISmppServer_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define ISmppServer_get_LastError(This,LastError)	\
    ( (This)->lpVtbl -> get_LastError(This,LastError) ) 

#define ISmppServer_GetErrorDescription(This,ErrorCode,Description)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,ErrorCode,Description) ) 

#define ISmppServer_Start(This,Port,IpVersion,Certificate)	\
    ( (This)->lpVtbl -> Start(This,Port,IpVersion,Certificate) ) 

#define ISmppServer_Stop(This)	\
    ( (This)->lpVtbl -> Stop(This) ) 

#define ISmppServer_GetFirstSession(This,Session)	\
    ( (This)->lpVtbl -> GetFirstSession(This,Session) ) 

#define ISmppServer_GetNextSession(This,Session)	\
    ( (This)->lpVtbl -> GetNextSession(This,Session) ) 

#define ISmppServer_GetSession(This,Id,Session)	\
    ( (This)->lpVtbl -> GetSession(This,Id,Session) ) 

#define ISmppServer_GetClosedSession(This,Session)	\
    ( (This)->lpVtbl -> GetClosedSession(This,Session) ) 

#define ISmppServer_FindFirstMyServerCertificate(This,Certificate)	\
    ( (This)->lpVtbl -> FindFirstMyServerCertificate(This,Certificate) ) 

#define ISmppServer_FindNextMyServerCertificate(This,Certificate)	\
    ( (This)->lpVtbl -> FindNextMyServerCertificate(This,Certificate) ) 

#define ISmppServer_FindFirstLocalIpAddress(This,IpVersion,Ip)	\
    ( (This)->lpVtbl -> FindFirstLocalIpAddress(This,IpVersion,Ip) ) 

#define ISmppServer_FindNextLocalIpAddress(This,Ip)	\
    ( (This)->lpVtbl -> FindNextLocalIpAddress(This,Ip) ) 

#define ISmppServer_get_MaxClosedSessions(This,Val)	\
    ( (This)->lpVtbl -> get_MaxClosedSessions(This,Val) ) 

#define ISmppServer_put_MaxClosedSessions(This,Val)	\
    ( (This)->lpVtbl -> put_MaxClosedSessions(This,Val) ) 

#define ISmppServer_get_IsStarted(This,Val)	\
    ( (This)->lpVtbl -> get_IsStarted(This,Val) ) 

#define ISmppServer_get_LastReference(This,Val)	\
    ( (This)->lpVtbl -> get_LastReference(This,Val) ) 

#define ISmppServer_put_LastReference(This,newVal)	\
    ( (This)->lpVtbl -> put_LastReference(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISmppServer_INTERFACE_DEFINED__ */


#ifndef __ITemplateWapPush_INTERFACE_DEFINED__
#define __ITemplateWapPush_INTERFACE_DEFINED__

/* interface ITemplateWapPush */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ITemplateWapPush;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("54DD400B-F0D6-42AF-964B-9F38CD57D8CC")
    ITemplateWapPush : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Url( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Url( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Description( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SignalAction( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_SignalAction( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Data( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Encode( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            /* [in] */ LONG lCode,
            /* [retval][out] */ BSTR *strDescription) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITemplateWapPushVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITemplateWapPush * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITemplateWapPush * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITemplateWapPush * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITemplateWapPush * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITemplateWapPush * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITemplateWapPush * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITemplateWapPush * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Url )( 
            ITemplateWapPush * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Url )( 
            ITemplateWapPush * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            ITemplateWapPush * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Description )( 
            ITemplateWapPush * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SignalAction )( 
            ITemplateWapPush * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SignalAction )( 
            ITemplateWapPush * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Data )( 
            ITemplateWapPush * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            ITemplateWapPush * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Encode )( 
            ITemplateWapPush * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            ITemplateWapPush * This,
            /* [in] */ LONG lCode,
            /* [retval][out] */ BSTR *strDescription);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ITemplateWapPush * This);
        
        END_INTERFACE
    } ITemplateWapPushVtbl;

    interface ITemplateWapPush
    {
        CONST_VTBL struct ITemplateWapPushVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITemplateWapPush_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITemplateWapPush_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITemplateWapPush_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITemplateWapPush_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITemplateWapPush_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITemplateWapPush_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITemplateWapPush_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITemplateWapPush_get_Url(This,pVal)	\
    ( (This)->lpVtbl -> get_Url(This,pVal) ) 

#define ITemplateWapPush_put_Url(This,newVal)	\
    ( (This)->lpVtbl -> put_Url(This,newVal) ) 

#define ITemplateWapPush_get_Description(This,pVal)	\
    ( (This)->lpVtbl -> get_Description(This,pVal) ) 

#define ITemplateWapPush_put_Description(This,newVal)	\
    ( (This)->lpVtbl -> put_Description(This,newVal) ) 

#define ITemplateWapPush_get_SignalAction(This,pVal)	\
    ( (This)->lpVtbl -> get_SignalAction(This,pVal) ) 

#define ITemplateWapPush_put_SignalAction(This,newVal)	\
    ( (This)->lpVtbl -> put_SignalAction(This,newVal) ) 

#define ITemplateWapPush_get_Data(This,pVal)	\
    ( (This)->lpVtbl -> get_Data(This,pVal) ) 

#define ITemplateWapPush_get_LastError(This,pVal)	\
    ( (This)->lpVtbl -> get_LastError(This,pVal) ) 

#define ITemplateWapPush_Encode(This)	\
    ( (This)->lpVtbl -> Encode(This) ) 

#define ITemplateWapPush_GetErrorDescription(This,lCode,strDescription)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,lCode,strDescription) ) 

#define ITemplateWapPush_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITemplateWapPush_INTERFACE_DEFINED__ */


#ifndef __ITemplatevCard_INTERFACE_DEFINED__
#define __ITemplatevCard_INTERFACE_DEFINED__

/* interface ITemplatevCard */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ITemplatevCard;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FCB5DCC2-4DDD-465D-936F-40AEBDDD17C3")
    ITemplatevCard : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            /* [in] */ LONG lError,
            /* [retval][out] */ BSTR *strDescription) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Url( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Url( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Title( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Title( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_EMail( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_EMail( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Fax( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Fax( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Pager( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Pager( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Mobile( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Mobile( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_PhoneHome( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_PhoneHome( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_PhoneWork( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_PhoneWork( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Phone( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Phone( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Encode( void) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Data( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ LONG *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITemplatevCardVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITemplatevCard * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITemplatevCard * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITemplatevCard * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITemplatevCard * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITemplatevCard * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITemplatevCard * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITemplatevCard * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ITemplatevCard * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            ITemplatevCard * This,
            /* [in] */ LONG lError,
            /* [retval][out] */ BSTR *strDescription);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Url )( 
            ITemplatevCard * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Url )( 
            ITemplatevCard * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Title )( 
            ITemplatevCard * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Title )( 
            ITemplatevCard * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EMail )( 
            ITemplatevCard * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EMail )( 
            ITemplatevCard * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Fax )( 
            ITemplatevCard * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Fax )( 
            ITemplatevCard * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Pager )( 
            ITemplatevCard * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Pager )( 
            ITemplatevCard * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Mobile )( 
            ITemplatevCard * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Mobile )( 
            ITemplatevCard * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PhoneHome )( 
            ITemplatevCard * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PhoneHome )( 
            ITemplatevCard * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PhoneWork )( 
            ITemplatevCard * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PhoneWork )( 
            ITemplatevCard * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Phone )( 
            ITemplatevCard * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Phone )( 
            ITemplatevCard * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ITemplatevCard * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            ITemplatevCard * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Encode )( 
            ITemplatevCard * This);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Data )( 
            ITemplatevCard * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            ITemplatevCard * This,
            /* [retval][out] */ LONG *pVal);
        
        END_INTERFACE
    } ITemplatevCardVtbl;

    interface ITemplatevCard
    {
        CONST_VTBL struct ITemplatevCardVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITemplatevCard_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITemplatevCard_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITemplatevCard_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITemplatevCard_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITemplatevCard_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITemplatevCard_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITemplatevCard_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITemplatevCard_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define ITemplatevCard_GetErrorDescription(This,lError,strDescription)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,lError,strDescription) ) 

#define ITemplatevCard_get_Url(This,pVal)	\
    ( (This)->lpVtbl -> get_Url(This,pVal) ) 

#define ITemplatevCard_put_Url(This,newVal)	\
    ( (This)->lpVtbl -> put_Url(This,newVal) ) 

#define ITemplatevCard_get_Title(This,pVal)	\
    ( (This)->lpVtbl -> get_Title(This,pVal) ) 

#define ITemplatevCard_put_Title(This,newVal)	\
    ( (This)->lpVtbl -> put_Title(This,newVal) ) 

#define ITemplatevCard_get_EMail(This,pVal)	\
    ( (This)->lpVtbl -> get_EMail(This,pVal) ) 

#define ITemplatevCard_put_EMail(This,newVal)	\
    ( (This)->lpVtbl -> put_EMail(This,newVal) ) 

#define ITemplatevCard_get_Fax(This,pVal)	\
    ( (This)->lpVtbl -> get_Fax(This,pVal) ) 

#define ITemplatevCard_put_Fax(This,newVal)	\
    ( (This)->lpVtbl -> put_Fax(This,newVal) ) 

#define ITemplatevCard_get_Pager(This,pVal)	\
    ( (This)->lpVtbl -> get_Pager(This,pVal) ) 

#define ITemplatevCard_put_Pager(This,newVal)	\
    ( (This)->lpVtbl -> put_Pager(This,newVal) ) 

#define ITemplatevCard_get_Mobile(This,pVal)	\
    ( (This)->lpVtbl -> get_Mobile(This,pVal) ) 

#define ITemplatevCard_put_Mobile(This,newVal)	\
    ( (This)->lpVtbl -> put_Mobile(This,newVal) ) 

#define ITemplatevCard_get_PhoneHome(This,pVal)	\
    ( (This)->lpVtbl -> get_PhoneHome(This,pVal) ) 

#define ITemplatevCard_put_PhoneHome(This,newVal)	\
    ( (This)->lpVtbl -> put_PhoneHome(This,newVal) ) 

#define ITemplatevCard_get_PhoneWork(This,pVal)	\
    ( (This)->lpVtbl -> get_PhoneWork(This,pVal) ) 

#define ITemplatevCard_put_PhoneWork(This,newVal)	\
    ( (This)->lpVtbl -> put_PhoneWork(This,newVal) ) 

#define ITemplatevCard_get_Phone(This,pVal)	\
    ( (This)->lpVtbl -> get_Phone(This,pVal) ) 

#define ITemplatevCard_put_Phone(This,newVal)	\
    ( (This)->lpVtbl -> put_Phone(This,newVal) ) 

#define ITemplatevCard_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define ITemplatevCard_put_Name(This,newVal)	\
    ( (This)->lpVtbl -> put_Name(This,newVal) ) 

#define ITemplatevCard_Encode(This)	\
    ( (This)->lpVtbl -> Encode(This) ) 

#define ITemplatevCard_get_Data(This,pVal)	\
    ( (This)->lpVtbl -> get_Data(This,pVal) ) 

#define ITemplatevCard_get_LastError(This,pVal)	\
    ( (This)->lpVtbl -> get_LastError(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITemplatevCard_INTERFACE_DEFINED__ */


#ifndef __IDemoAccount_INTERFACE_DEFINED__
#define __IDemoAccount_INTERFACE_DEFINED__

/* interface IDemoAccount */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IDemoAccount;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("231F4503-C639-479F-B799-4C9FCE0BDF9C")
    IDemoAccount : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SystemId( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Password( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDemoAccountVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDemoAccount * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDemoAccount * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDemoAccount * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDemoAccount * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDemoAccount * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDemoAccount * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDemoAccount * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SystemId )( 
            IDemoAccount * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Password )( 
            IDemoAccount * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } IDemoAccountVtbl;

    interface IDemoAccount
    {
        CONST_VTBL struct IDemoAccountVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDemoAccount_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDemoAccount_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDemoAccount_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDemoAccount_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDemoAccount_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDemoAccount_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDemoAccount_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDemoAccount_get_SystemId(This,pVal)	\
    ( (This)->lpVtbl -> get_SystemId(This,pVal) ) 

#define IDemoAccount_get_Password(This,pVal)	\
    ( (This)->lpVtbl -> get_Password(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDemoAccount_INTERFACE_DEFINED__ */



#ifndef __AxSms_LIBRARY_DEFINED__
#define __AxSms_LIBRARY_DEFINED__

/* library AxSms */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_AxSms;

EXTERN_C const CLSID CLSID_Constants;

#ifdef __cplusplus

class DECLSPEC_UUID("41A6CF7D-3C5B-40B7-82AC-3AB3BBBF1A84")
Constants;
#endif

EXTERN_C const CLSID CLSID_Message;

#ifdef __cplusplus

class DECLSPEC_UUID("7524134C-0186-43C6-958C-2C3A49FE40FC")
Message;
#endif

EXTERN_C const CLSID CLSID_Tlv;

#ifdef __cplusplus

class DECLSPEC_UUID("461B017B-C733-4145-A3AA-040B3A1E86D5")
Tlv;
#endif

EXTERN_C const CLSID CLSID_GsmDeliveryReport;

#ifdef __cplusplus

class DECLSPEC_UUID("035EC473-4171-4D8C-BB09-000F1BBB79B5")
GsmDeliveryReport;
#endif

EXTERN_C const CLSID CLSID_Dialup;

#ifdef __cplusplus

class DECLSPEC_UUID("265F828D-DB37-4676-8E3E-B73B5A653A48")
Dialup;
#endif

EXTERN_C const CLSID CLSID_Android;

#ifdef __cplusplus

class DECLSPEC_UUID("370876FA-FCFB-4EE6-8316-FA0AC5A771AE")
Android;
#endif

EXTERN_C const CLSID CLSID_Gsm;

#ifdef __cplusplus

class DECLSPEC_UUID("4AB18312-548A-4607-97E1-3DE7FC27CDD2")
Gsm;
#endif

EXTERN_C const CLSID CLSID_HttpServer;

#ifdef __cplusplus

class DECLSPEC_UUID("9169AD26-4304-4B1B-8CD9-77EA2B41F3BC")
HttpServer;
#endif

EXTERN_C const CLSID CLSID_Http;

#ifdef __cplusplus

class DECLSPEC_UUID("5092DA94-3952-4FDA-9B8E-4B387F0164E6")
Http;
#endif

EXTERN_C const CLSID CLSID_Snpp;

#ifdef __cplusplus

class DECLSPEC_UUID("929AEEE5-56B2-4A67-BCC8-45E5D4FA3739")
Snpp;
#endif

EXTERN_C const CLSID CLSID_Smpp;

#ifdef __cplusplus

class DECLSPEC_UUID("A1453018-3C02-4C22-A136-3CF9B78CEAC8")
Smpp;
#endif

EXTERN_C const CLSID CLSID_SmppServer;

#ifdef __cplusplus

class DECLSPEC_UUID("6F2D0285-924E-4F76-A0EA-FC9282D4C761")
SmppServer;
#endif

EXTERN_C const CLSID CLSID_SmppSession;

#ifdef __cplusplus

class DECLSPEC_UUID("A0D488D4-C668-4346-9D44-3CD00832723E")
SmppSession;
#endif

EXTERN_C const CLSID CLSID_TemplateWapPush;

#ifdef __cplusplus

class DECLSPEC_UUID("FA1CDBE0-666B-430F-BCC5-838661432F76")
TemplateWapPush;
#endif

EXTERN_C const CLSID CLSID_TemplatevCard;

#ifdef __cplusplus

class DECLSPEC_UUID("72B516D0-8B84-4B92-A297-474353A2C90A")
TemplatevCard;
#endif

EXTERN_C const CLSID CLSID_DemoAccount;

#ifdef __cplusplus

class DECLSPEC_UUID("634B8464-5D45-4E0E-BCC7-EB04500BC159")
DemoAccount;
#endif
#endif /* __AxSms_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


