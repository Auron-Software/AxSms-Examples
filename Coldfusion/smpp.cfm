<cfobject type="com" Action="Create" class="AxSms.Smpp"      name="objSmpp">
<cfobject type="com" Action="Create" class="AxSms.Message"    name="objSmsMessage">
<cfobject type="com" Action="Create" class="AxSms.Constants"  name="objSmsConstants">
<cfobject type="com" Action="Create" class="AxSms.DemoAccount"     name="objDemoAccount">

<cfregistry action = "get" 
  branch = "HKEY_LOCAL_MACHINE\SOFTWARE\Auron\SMS Component"
  entry = "InstallRoot"
  variable = "strInstrallRoot"
  type = "string"> 

<cfscript> 
  strResult = "n/a";
  strLastResponse = "";
  strMessageStatus = "";
  objSmpp.LogFile = "C:\Windows\Windows\Temp\Smpp.log";
  
  ArrAccountInfo = GetSmsDemoAccountInfo();
  
  if (IsDefined("Form.btnSendMessage"))
  {
    objSmpp.Connect(Form.txtServer, Form.txtServerPort, 5000, false);
    if (objSmpp.LastError != 0)
    {
      strResult = objSmpp.LastError & ": " & objSmpp.GetErrorDescription(objSmpp.LastError);
    }
    else
    {
      iSystemMode = objSmsConstants.SMPP_BIND_TRANSCEIVER;
      iVersion = objSmsConstants.SMPP_VERSION_34;
      objSmpp.Bind(iSystemMode, Form.txtSystemID, Form.txtPassword, Form.txtSystemType, iVersion, 0, 0, "", 2000);
      
      if (objSmpp.LastError != 0)
      {
        strResult = objSmpp.LastError & ": " & objSmpp.GetErrorDescription(objSmpp.LastError);
      }
      else
      {
        bSearchDeliveryReport = true;
        objSmsMessage.Clear();
        objSmsMessage.RequestDeliveryReport = true;
        objSmsMessage.ToAddress = Form.txtToAddress;
        objSmsMessage.Body = Form.txtMessage;
        objSmsMessage.BodyFormat = objSmsConstants.BODYFORMAT_TEXT;
        
        if (IsDefined("Form.cbxFlash"))
        {
          objSmsMessage.DataCoding = objSmsMessage.DataCoding Or objSmsConstants.DATACODING_FLASH;
        }
        
        if (IsDefined("Form.cbxMultipart"))
        {
          iMultipart = objSmsConstants.MULTIPART_ACCEPT;
        }
        else
        {
          iMultipart = objSmsConstants.MULTIPART_TRUNCATE;
        }
        
        objSmpp.SubmitSms(objSmsMessage, iMultipart);
        
        if (objSmpp.LastError != 0)
        {
          strResult = objSmpp.LastError & ": " & objSmpp.GetErrorDescription(objSmpp.LastError);
        }
        else
        {
          while (objSmpp.WaitForSmsUpdate(5000))
          {
            objMessage = objSmpp.FetchSmsUpdate();
            if (objSmpp.LastError == 0)
            {
              objSmpp.Sleep(100);
              break;
            }
          }
          
          // SMPP command status codes are provider specific. The Auron SMPP Demo Gateway uses command status 1025
          // to communicate there are no more credits left for this account on the Auron SMPP Demo Gateway.
          if (objMessage.SmppCommandStatus != 0)
          {
            //1025 = nocredits  
            if (objMessage.SmppCommandStatus == 1025 && Form.txtServer == "gateway.auronsoftware.com")
            {
                strResult = "Message not sent. Reason: No credits left.";
            }
            else
            {
                strResult = "Message not sent. Reason: unspecified error [" & objMessage.SmppCommandStatus & "].";
            }
          
          }
          else
          {
          
            strMessageReference = objMessage.Reference;
            
            while (bSearchDeliveryReport)
            {
              objMessage = objSmpp.ReceiveMessage();
              while (objsmpp.LastError == 0)
              {
                if (objMessage.SmppIsDeliveryReport)
                {
                  if (strMessageReference == Mid(objMessage.Body, Find("id:", objMessage.Body) + 3, 8))
                  {
                    
                    strMessageStatus = Mid(objMessage.Body, Find("stat:", objMessage.Body) + 5, 7);
                    bSearchDeliveryReport = false;
                    
                    break;   
                  }
                }
                objMessage = objSmpp.ReceiveMessage();
              }
            }
            strResult = objSmpp.LastError & ": " & objSmpp.GetErrorDescription(objSmpp.LastError);
          }  
        }
      }
    }
  }
  
  function GetSmsDemoAccountInfo ()
  {
    // NOTE: during installation of the SMS Component, a unique login and password is created for you.
    // This login and password can be used to send a few SMS messages through the gateway.auronsoftware.com gateway, for free
    
    strArr = ArrayNew(1);    
    ArrayAppend(strArr, objDemoAccount.SystemId);
    ArrayAppend(strArr, objDemoAccount.Password);    
    return strArr;
  }
</cfscript>
  
<!--- HTML-CSS layout includes, no code there! --->
<cfinclude template = "css/Header.html">
<cfinclude template = "css/Menu.html">
    <div class="container">
      <h1>SMS Component Coldfusion SMPP Sample</h1>
      <hr />
      <p>
        This demo allows you to send SMS messages over SMPP. If you don't have an SMPP subscription,
        you can use the Auron SMPP Demo Gateway. You can send out a few SMS messages
        for free through this gateway.<br />
      </p>
      
      <form action="smpp.cfm" method="post">
      <cfoutput>
        <h2>SMS Component:</h2>
        <h3>Build: #objSmpp.Build#; Module: #objSmpp.Module#</h3>
      
        <!-- Server -->
        <label for="Server">Server:</label>
        <p>
          <input type="text" id="Server" name="txtServer" value="gateway.auronsoftware.com" />
          : <input type="text" name="txtServerPort" style="width: 75px;" value="2775" />
        </p>
        
        <!-- System ID -->
        <label for="SystemID">System ID:</label>
        <p>
          <input type="text" id="SystemID" name="txtSystemID" value="#ArrAccountInfo[1]#" />
        </p>
        
        <!-- Password -->
        <label for="Password">Password:</label>
        <p>
          <input type="text" id="Password" name="txtPassword" value="#ArrAccountInfo[2]#" />
        </p>
        
        <!-- System Type -->
        <label for="SystemType">System Type:</label>
        <p>
          <input type="text" id="SystemType" name="txtSystemType" value="SMPP" />
        </p>
        
        <!-- Recipient -->
        <label for="ToAddress">Recipient:</label>
        <p>
          <input type="text" id="ToAddress" name="txtToAddress" value="[ToAddress]" />
        </p>
        
        <!-- Message, Multipart, Flash -->  
        <label for="Message">Message:</label>
        <p>
          <textarea id="Message" name="txtMessage" style="height:45px;">Hello world send from Auron SMS Component!</textarea><br />
          
          <input type="checkbox" class="cbFix" id="Multipart" name="cbxMultipart" value="1" />
          <label for="Multipart">Allow Multipart</label><br />
          
          <input type="checkbox" class="cbFix" id="Flash" name="cbxFlash" value="1" />
          <label for="Flash">Flash</label>
        </p>
          
        <!-- Send button -->
        <div class="clearLabel"></div>
        <p>
          <input type="submit" name="btnSendMessage" value="Send SMS Message!" />
        </p>
        
        <!-- Empty row -->
        <div class="clearRow"></div>
        
        <!-- Result -->
        <label for="Result"><b>Result:</b></label>
        <p>
          <input type="text" id="Result" name="txtResult" class="FullWidth Bold" value="#strResult#" />
        </p>
        
        <!-- Message status -->
        <label for="Status">Message status:</label>
        <p>
          <input type="text" id="Status" name="txtMessageStatus" class="FullWidth" value="#strMessageStatus#" />
        </p>
      </cfoutput>
      </form>
      <p>
        This demo uses the Auron SMS Component, an <a href="https://www.auronsoftware.com" target="_blank">Auron Software</a> product.<br />
        <a href="index.cfm">Back to main page</a>
      </p>
    </div><!-- /container -->
<!--- HTML-CSS layout includes, no code there! --->
<cfinclude template = "css/Footer.html">