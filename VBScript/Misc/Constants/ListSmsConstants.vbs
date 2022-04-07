' ********************************************************************
'
' Auron SMS Component
'
' Lists a few SmsConstants
'
' (c) Copyright Auron Software - www.auronsoftware.com
'
' ********************************************************************

Option Explicit

' Declare objects
Dim objSmsConstants

' Create objects
Set objSmsConstants           = CreateObject( "AxSms.Constants" )

WScript.Echo "#####################SMPP TLV definitions#########################"
WScript.Echo ""
WScript.Echo "SMPP_TLV_DEST_ADDR_SUBUNIT:             " &  objSmsConstants.SMPP_TLV_DEST_ADDR_SUBUNIT
WScript.Echo "SMPP_TLV_DEST_NETWORK_TYPE:             " &  objSmsConstants.SMPP_TLV_DEST_NETWORK_TYPE
WScript.Echo "SMPP_TLV_DEST_BEARER_TYPE:              " &  objSmsConstants.SMPP_TLV_DEST_BEARER_TYPE
WScript.Echo "SMPP_TLV_DEST_TELEMATICS_ID:            " &  objSmsConstants.SMPP_TLV_DEST_TELEMATICS_ID
WScript.Echo "SMPP_TLV_SOURCE_ADDR_SUBUNIT:           " &  objSmsConstants.SMPP_TLV_SOURCE_ADDR_SUBUNIT
WScript.Echo "SMPP_TLV_SOURCE_NETWORK_TYPE:           " &  objSmsConstants.SMPP_TLV_SOURCE_NETWORK_TYPE
WScript.Echo "SMPP_TLV_SOURCE_BEARER_TYPE:            " &  objSmsConstants.SMPP_TLV_SOURCE_BEARER_TYPE
WScript.Echo "SMPP_TLV_SOURCE_TELEMATICS_ID:          " &  objSmsConstants.SMPP_TLV_SOURCE_TELEMATICS_ID
WScript.Echo "SMPP_TLV_QOS_TIME_TO_LIVE:              " &  objSmsConstants.SMPP_TLV_QOS_TIME_TO_LIVE
WScript.Echo "SMPP_TLV_PAYLOAD_TYPE:                  " &  objSmsConstants.SMPP_TLV_PAYLOAD_TYPE
WScript.Echo "SMPP_TLV_ADDITIONAL_STATUS_INFO_TEXT:   " &  objSmsConstants.SMPP_TLV_ADDITIONAL_STATUS_INFO_TEXT
WScript.Echo "SMPP_TLV_RECEIPTED_MESSAGE_ID:          " &  objSmsConstants.SMPP_TLV_RECEIPTED_MESSAGE_ID
WScript.Echo "SMPP_TLV_MS_MSG_WAIT_FACILITIES:        " &  objSmsConstants.SMPP_TLV_MS_MSG_WAIT_FACILITIES
WScript.Echo "SMPP_TLV_PRIVACY_INDICATOR:             " &  objSmsConstants.SMPP_TLV_PRIVACY_INDICATOR
WScript.Echo "SMPP_TLV_SOURCE_SUBADDRESS:             " &  objSmsConstants.SMPP_TLV_SOURCE_SUBADDRESS
WScript.Echo "SMPP_TLV_DEST_SUBADDRESS:               " &  objSmsConstants.SMPP_TLV_DEST_SUBADDRESS
WScript.Echo "SMPP_TLV_USER_MESSAGE_REFERENCE:        " &  objSmsConstants.SMPP_TLV_USER_MESSAGE_REFERENCE
WScript.Echo "SMPP_TLV_USER_RESPONSE_CODE:            " &  objSmsConstants.SMPP_TLV_USER_RESPONSE_CODE
WScript.Echo "SMPP_TLV_SOURCE_PORT:                   " &  objSmsConstants.SMPP_TLV_SOURCE_PORT
WScript.Echo "SMPP_TLV_DESTINATION_PORT:              " &  objSmsConstants.SMPP_TLV_DESTINATION_PORT
WScript.Echo "SMPP_TLV_SAR_MSG_REF_NUM:               " &  objSmsConstants.SMPP_TLV_SAR_MSG_REF_NUM
WScript.Echo "SMPP_TLV_LANGUAGE_INDICATOR:            " &  objSmsConstants.SMPP_TLV_LANGUAGE_INDICATOR
WScript.Echo "SMPP_TLV_SAR_TOTAL_SEGMENTS:            " &  objSmsConstants.SMPP_TLV_SAR_TOTAL_SEGMENTS
WScript.Echo "SMPP_TLV_SAR_SEGMENT_SEQNUM:            " &  objSmsConstants.SMPP_TLV_SAR_SEGMENT_SEQNUM
WScript.Echo "SMPP_TLV_SC_INTERFACE_VERSION:          " &  objSmsConstants.SMPP_TLV_SC_INTERFACE_VERSION
WScript.Echo "SMPP_TLV_CALLBACK_NUM_PRES_IND:         " &  objSmsConstants.SMPP_TLV_CALLBACK_NUM_PRES_IND
WScript.Echo "SMPP_TLV_CALLBACK_NUM_ATAG:             " &  objSmsConstants.SMPP_TLV_CALLBACK_NUM_ATAG
WScript.Echo "SMPP_TLV_NUMBER_OF_MESSAGES:            " &  objSmsConstants.SMPP_TLV_NUMBER_OF_MESSAGES
WScript.Echo "SMPP_TLV_CALLBACK_NUM:                  " &  objSmsConstants.SMPP_TLV_CALLBACK_NUM
WScript.Echo "SMPP_TLV_DPF_RESULT:                    " &  objSmsConstants.SMPP_TLV_DPF_RESULT
WScript.Echo "SMPP_TLV_SET_DPF:                       " &  objSmsConstants.SMPP_TLV_SET_DPF
WScript.Echo "SMPP_TLV_MS_AVAILABILITY_STATUS:        " &  objSmsConstants.SMPP_TLV_MS_AVAILABILITY_STATUS
WScript.Echo "SMPP_TLV_NETWORK_ERROR_CODE:            " &  objSmsConstants.SMPP_TLV_NETWORK_ERROR_CODE
WScript.Echo "SMPP_TLV_MESSAGE_PAYLOAD:               " &  objSmsConstants.SMPP_TLV_MESSAGE_PAYLOAD
WScript.Echo "SMPP_TLV_DELIVERY_FAILURE_REASON:       " &  objSmsConstants.SMPP_TLV_DELIVERY_FAILURE_REASON
WScript.Echo "SMPP_TLV_MORE_MESSAGES_TO_SEND:         " &  objSmsConstants.SMPP_TLV_MORE_MESSAGES_TO_SEND
WScript.Echo "SMPP_TLV_MESSAGE_STATE:                 " &  objSmsConstants.SMPP_TLV_MESSAGE_STATE
WScript.Echo "SMPP_TLV_USSD_SERVICE_OP:               " &  objSmsConstants.SMPP_TLV_USSD_SERVICE_OP
WScript.Echo "SMPP_TLV_DISPLAY_TIME:                  " &  objSmsConstants.SMPP_TLV_DISPLAY_TIME
WScript.Echo "SMPP_TLV_SMS_SIGNAL:                    " &  objSmsConstants.SMPP_TLV_SMS_SIGNAL
WScript.Echo "SMPP_TLV_MS_VALIDITY:                   " &  objSmsConstants.SMPP_TLV_MS_VALIDITY
WScript.Echo "SMPP_TLV_ALERT_ON_MESSAGE_DELIVERY:     " &  objSmsConstants.SMPP_TLV_ALERT_ON_MESSAGE_DELIVERY
WScript.Echo "SMPP_TLV_ITS_REPLY_TYPE:                " &  objSmsConstants.SMPP_TLV_ITS_REPLY_TYPE
WScript.Echo "SMPP_TLV_ITS_SESSION_INFO:              " &  objSmsConstants.SMPP_TLV_ITS_SESSION_INFO

WScript.Echo ""
WScript.Echo "For more constants please visit the following webpage:"
Wscript.Echo "www.auronsoftware.com/files/sms-component/manual.htm#Constants"











