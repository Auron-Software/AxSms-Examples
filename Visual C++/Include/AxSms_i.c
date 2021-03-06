

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IConstants,0x7D47E1D0,0x4B72,0x4A5D,0xB1,0x74,0xA0,0xE8,0x2A,0xF7,0x38,0x92);


MIDL_DEFINE_GUID(IID, IID_ITlv,0x4687CEE3,0x3966,0x46A2,0xAE,0xE3,0x5A,0x74,0x7F,0x45,0x5B,0x84);


MIDL_DEFINE_GUID(IID, IID_IMessage,0xDFD486FC,0x45B4,0x49AB,0xAD,0x5A,0x98,0x25,0x6A,0xE0,0x57,0xFC);


MIDL_DEFINE_GUID(IID, IID_IGsmDeliveryReport,0x6962C3D8,0x88FE,0x4660,0xA4,0xEC,0x90,0x1A,0x24,0x4A,0x57,0xD2);


MIDL_DEFINE_GUID(IID, IID_IDialup,0x3E9851DF,0xD82F,0x4806,0x87,0x16,0x76,0x9C,0x01,0x5C,0x23,0xF2);


MIDL_DEFINE_GUID(IID, IID_IAndroid,0x6AEF9B37,0xE65E,0x4FEB,0x97,0x1A,0x06,0x59,0xDE,0x7B,0x93,0x1E);


MIDL_DEFINE_GUID(IID, IID_IGsm,0xB25B188D,0x42A8,0x45EF,0x88,0x7F,0x65,0x3C,0xBC,0x9E,0x23,0x4B);


MIDL_DEFINE_GUID(IID, IID_IHttpServer,0x356CDE23,0xBC03,0x4283,0x9F,0x64,0xAF,0x3D,0x0F,0x49,0x10,0x0A);


MIDL_DEFINE_GUID(IID, IID_IHttp,0x1825A7C6,0xDBAB,0x4B99,0xAA,0xA1,0xFD,0xED,0xF3,0x6A,0x49,0x82);


MIDL_DEFINE_GUID(IID, IID_ISnpp,0xC4AAB6D2,0xF834,0x4FE6,0xA4,0xAE,0xB1,0xD5,0x79,0x4B,0xC3,0xB4);


MIDL_DEFINE_GUID(IID, IID_ISmpp,0x9E5FC25E,0x613A,0x4951,0x9C,0x8F,0x37,0x92,0x3C,0x7A,0xE7,0xAE);


MIDL_DEFINE_GUID(IID, IID_ISmppSession,0x3E1FF0C2,0x4F98,0x4FA2,0x95,0x4B,0xBF,0x57,0x30,0xFB,0x6C,0xF9);


MIDL_DEFINE_GUID(IID, IID_ISmppServer,0xEBE10239,0xA8C6,0x46CA,0xBC,0x48,0x0C,0xFA,0x6C,0xFD,0x83,0x5C);


MIDL_DEFINE_GUID(IID, IID_ITemplateWapPush,0x54DD400B,0xF0D6,0x42AF,0x96,0x4B,0x9F,0x38,0xCD,0x57,0xD8,0xCC);


MIDL_DEFINE_GUID(IID, IID_ITemplatevCard,0xFCB5DCC2,0x4DDD,0x465D,0x93,0x6F,0x40,0xAE,0xBD,0xDD,0x17,0xC3);


MIDL_DEFINE_GUID(IID, IID_IDemoAccount,0x231F4503,0xC639,0x479F,0xB7,0x99,0x4C,0x9F,0xCE,0x0B,0xDF,0x9C);


MIDL_DEFINE_GUID(IID, LIBID_AxSms,0xB00F4729,0xF464,0x4690,0x88,0xA0,0xE0,0x59,0x48,0x9A,0xF0,0x63);


MIDL_DEFINE_GUID(CLSID, CLSID_Constants,0x41A6CF7D,0x3C5B,0x40B7,0x82,0xAC,0x3A,0xB3,0xBB,0xBF,0x1A,0x84);


MIDL_DEFINE_GUID(CLSID, CLSID_Message,0x7524134C,0x0186,0x43C6,0x95,0x8C,0x2C,0x3A,0x49,0xFE,0x40,0xFC);


MIDL_DEFINE_GUID(CLSID, CLSID_Tlv,0x461B017B,0xC733,0x4145,0xA3,0xAA,0x04,0x0B,0x3A,0x1E,0x86,0xD5);


MIDL_DEFINE_GUID(CLSID, CLSID_GsmDeliveryReport,0x035EC473,0x4171,0x4D8C,0xBB,0x09,0x00,0x0F,0x1B,0xBB,0x79,0xB5);


MIDL_DEFINE_GUID(CLSID, CLSID_Dialup,0x265F828D,0xDB37,0x4676,0x8E,0x3E,0xB7,0x3B,0x5A,0x65,0x3A,0x48);


MIDL_DEFINE_GUID(CLSID, CLSID_Android,0x370876FA,0xFCFB,0x4EE6,0x83,0x16,0xFA,0x0A,0xC5,0xA7,0x71,0xAE);


MIDL_DEFINE_GUID(CLSID, CLSID_Gsm,0x4AB18312,0x548A,0x4607,0x97,0xE1,0x3D,0xE7,0xFC,0x27,0xCD,0xD2);


MIDL_DEFINE_GUID(CLSID, CLSID_HttpServer,0x9169AD26,0x4304,0x4B1B,0x8C,0xD9,0x77,0xEA,0x2B,0x41,0xF3,0xBC);


MIDL_DEFINE_GUID(CLSID, CLSID_Http,0x5092DA94,0x3952,0x4FDA,0x9B,0x8E,0x4B,0x38,0x7F,0x01,0x64,0xE6);


MIDL_DEFINE_GUID(CLSID, CLSID_Snpp,0x929AEEE5,0x56B2,0x4A67,0xBC,0xC8,0x45,0xE5,0xD4,0xFA,0x37,0x39);


MIDL_DEFINE_GUID(CLSID, CLSID_Smpp,0xA1453018,0x3C02,0x4C22,0xA1,0x36,0x3C,0xF9,0xB7,0x8C,0xEA,0xC8);


MIDL_DEFINE_GUID(CLSID, CLSID_SmppServer,0x6F2D0285,0x924E,0x4F76,0xA0,0xEA,0xFC,0x92,0x82,0xD4,0xC7,0x61);


MIDL_DEFINE_GUID(CLSID, CLSID_SmppSession,0xA0D488D4,0xC668,0x4346,0x9D,0x44,0x3C,0xD0,0x08,0x32,0x72,0x3E);


MIDL_DEFINE_GUID(CLSID, CLSID_TemplateWapPush,0xFA1CDBE0,0x666B,0x430F,0xBC,0xC5,0x83,0x86,0x61,0x43,0x2F,0x76);


MIDL_DEFINE_GUID(CLSID, CLSID_TemplatevCard,0x72B516D0,0x8B84,0x4B92,0xA2,0x97,0x47,0x43,0x53,0xA2,0xC9,0x0A);


MIDL_DEFINE_GUID(CLSID, CLSID_DemoAccount,0x634B8464,0x5D45,0x4E0E,0xBC,0xC7,0xEB,0x04,0x50,0x0B,0xC1,0x59);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



