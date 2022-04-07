# ********************************************************************
#
# Auron SMS Component
#
# Lists a few SmsConstants
#
# (c) Copyright Auron Software - www.auronsoftware.com
#
# ********************************************************************

# Create objects
$objSmsConstants = new-object -comobject AxSms.Constants


write-host "#####################SMPP TLV definitions#########################"
write-host ""
write-host "SMPP_TLV_DEST_ADDR_SUBUNIT:             " $objSmsConstants.SMPP_TLV_DEST_ADDR_SUBUNIT
write-host "SMPP_TLV_DEST_NETWORK_TYPE:             " $objSmsConstants.SMPP_TLV_DEST_NETWORK_TYPE
write-host "SMPP_TLV_DEST_BEARER_TYPE:              " $objSmsConstants.SMPP_TLV_DEST_BEARER_TYPE
write-host "SMPP_TLV_DEST_TELEMATICS_ID:            " $objSmsConstants.SMPP_TLV_DEST_TELEMATICS_ID
write-host "SMPP_TLV_SOURCE_ADDR_SUBUNIT:           " $objSmsConstants.SMPP_TLV_SOURCE_ADDR_SUBUNIT
write-host "SMPP_TLV_SOURCE_NETWORK_TYPE:           " $objSmsConstants.SMPP_TLV_SOURCE_NETWORK_TYPE
write-host "SMPP_TLV_SOURCE_BEARER_TYPE:            " $objSmsConstants.SMPP_TLV_SOURCE_BEARER_TYPE
write-host "SMPP_TLV_SOURCE_TELEMATICS_ID:          " $objSmsConstants.SMPP_TLV_SOURCE_TELEMATICS_ID
write-host "SMPP_TLV_QOS_TIME_TO_LIVE:              " $objSmsConstants.SMPP_TLV_QOS_TIME_TO_LIVE
write-host "SMPP_TLV_PAYLOAD_TYPE:                  " $objSmsConstants.SMPP_TLV_PAYLOAD_TYPE
write-host "SMPP_TLV_ADDITIONAL_STATUS_INFO_TEXT:   " $objSmsConstants.SMPP_TLV_ADDITIONAL_STATUS_INFO_TEXT
write-host "SMPP_TLV_RECEIPTED_MESSAGE_ID:          " $objSmsConstants.SMPP_TLV_RECEIPTED_MESSAGE_ID
write-host "SMPP_TLV_MS_MSG_WAIT_FACILITIES:        " $objSmsConstants.SMPP_TLV_MS_MSG_WAIT_FACILITIES
write-host "SMPP_TLV_PRIVACY_INDICATOR:             " $objSmsConstants.SMPP_TLV_PRIVACY_INDICATOR
write-host "SMPP_TLV_SOURCE_SUBADDRESS:             " $objSmsConstants.SMPP_TLV_SOURCE_SUBADDRESS
write-host "SMPP_TLV_DEST_SUBADDRESS:               " $objSmsConstants.SMPP_TLV_DEST_SUBADDRESS
write-host "SMPP_TLV_USER_MESSAGE_REFERENCE:        " $objSmsConstants.SMPP_TLV_USER_MESSAGE_REFERENCE
write-host "SMPP_TLV_USER_RESPONSE_CODE:            " $objSmsConstants.SMPP_TLV_USER_RESPONSE_CODE
write-host "SMPP_TLV_SOURCE_PORT:                   " $objSmsConstants.SMPP_TLV_SOURCE_PORT
write-host "SMPP_TLV_DESTINATION_PORT:              " $objSmsConstants.SMPP_TLV_DESTINATION_PORT
write-host "SMPP_TLV_SAR_MSG_REF_NUM:               " $objSmsConstants.SMPP_TLV_SAR_MSG_REF_NUM
write-host "SMPP_TLV_LANGUAGE_INDICATOR:            " $objSmsConstants.SMPP_TLV_LANGUAGE_INDICATOR
write-host "SMPP_TLV_SAR_TOTAL_SEGMENTS:            " $objSmsConstants.SMPP_TLV_SAR_TOTAL_SEGMENTS
write-host "SMPP_TLV_SAR_SEGMENT_SEQNUM:            " $objSmsConstants.SMPP_TLV_SAR_SEGMENT_SEQNUM
write-host "SMPP_TLV_SC_INTERFACE_VERSION:          " $objSmsConstants.SMPP_TLV_SC_INTERFACE_VERSION
write-host "SMPP_TLV_CALLBACK_NUM_PRES_IND:         " $objSmsConstants.SMPP_TLV_CALLBACK_NUM_PRES_IND
write-host "SMPP_TLV_CALLBACK_NUM_ATAG:             " $objSmsConstants.SMPP_TLV_CALLBACK_NUM_ATAG
write-host "SMPP_TLV_NUMBER_OF_MESSAGES:            " $objSmsConstants.SMPP_TLV_NUMBER_OF_MESSAGES
write-host "SMPP_TLV_CALLBACK_NUM:                  " $objSmsConstants.SMPP_TLV_CALLBACK_NUM
write-host "SMPP_TLV_DPF_RESULT:                    " $objSmsConstants.SMPP_TLV_DPF_RESULT
write-host "SMPP_TLV_SET_DPF:                       " $objSmsConstants.SMPP_TLV_SET_DPF
write-host "SMPP_TLV_MS_AVAILABILITY_STATUS:        " $objSmsConstants.SMPP_TLV_MS_AVAILABILITY_STATUS
write-host "SMPP_TLV_NETWORK_ERROR_CODE:            " $objSmsConstants.SMPP_TLV_NETWORK_ERROR_CODE
write-host "SMPP_TLV_MESSAGE_PAYLOAD:               " $objSmsConstants.SMPP_TLV_MESSAGE_PAYLOAD
write-host "SMPP_TLV_DELIVERY_FAILURE_REASON:       " $objSmsConstants.SMPP_TLV_DELIVERY_FAILURE_REASON
write-host "SMPP_TLV_MORE_MESSAGES_TO_SEND:         " $objSmsConstants.SMPP_TLV_MORE_MESSAGES_TO_SEND
write-host "SMPP_TLV_MESSAGE_STATE:                 " $objSmsConstants.SMPP_TLV_MESSAGE_STATE
write-host "SMPP_TLV_USSD_SERVICE_OP:               " $objSmsConstants.SMPP_TLV_USSD_SERVICE_OP
write-host "SMPP_TLV_DISPLAY_TIME:                  " $objSmsConstants.SMPP_TLV_DISPLAY_TIME
write-host "SMPP_TLV_SMS_SIGNAL:                    " $objSmsConstants.SMPP_TLV_SMS_SIGNAL
write-host "SMPP_TLV_MS_VALIDITY:                   " $objSmsConstants.SMPP_TLV_MS_VALIDITY
write-host "SMPP_TLV_ALERT_ON_MESSAGE_DELIVERY:     " $objSmsConstants.SMPP_TLV_ALERT_ON_MESSAGE_DELIVERY
write-host "SMPP_TLV_ITS_REPLY_TYPE:                " $objSmsConstants.SMPP_TLV_ITS_REPLY_TYPE
write-host "SMPP_TLV_ITS_SESSION_INFO:              " $objSmsConstants.SMPP_TLV_ITS_SESSION_INFO

write-host ""
write-host "For more constants please visit the following webpage:"
write-host "https://www.auronsoftware.com/knowledge-base/#sms-component#API_Reference_SmsConstants"











