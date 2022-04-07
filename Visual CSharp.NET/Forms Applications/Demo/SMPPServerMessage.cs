using System;
using System.Collections.Generic;
using System.Text;
using AxSms;

namespace Demo
{
    class SMPPServerMessage
    {
        private string strSystemID;
        private AxSms.Message objMessageToSend;

        public string SystemID
        {
            get { return strSystemID; }
            set { strSystemID = value; }
        }        

        public AxSms.Message MessageToSend
        {
            get { return objMessageToSend; }
            set { objMessageToSend = value; }
        }

        public SMPPServerMessage(string strSystemID, AxSms.Message objMessageToSend)
        {
            this.strSystemID = strSystemID;
            this.objMessageToSend = objMessageToSend;
        }

    }
}
