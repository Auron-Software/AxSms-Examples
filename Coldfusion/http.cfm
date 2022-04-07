<cfobject type="com" Action="Create" class="AxSms.Http" name="objHttp" >
<cfobject type="com" Action="Create" class="AxSms.Constants" name="objSmsConstants">
<cfobject type="com" Action="Create" class="AxSms.Message" name="objSmsMessage">
<cfobject type="com" Action="Create" class="AxSms.DemoAccount" name="objDemoAccount">

<cfregistry action = "get" 
  branch = "HKEY_LOCAL_MACHINE\SOFTWARE\Auron\SMS Component"
  entry = "InstallRoot"
  variable = "strInstrallRoot"
  type = "string"> 

<cfscript> 
  strResult = "n/a";
  strLastResponse = "";
  objHttp.LogFile = "C:\Windows\Temp\Http.log";
  
  if (IsDefined("Form.btnSendMessage"))
  {
    objSmsMessage.Clear();   

    objSmsMessage.BodyFormat = objSmsConstants.BODYFORMAT_TEXT;
    
    objSmsMessage.Body = Form.txtBody;
    objSmsMessage.ToAddress = Form.txtToAddress;
    
    objHttp.Clear();
    objHttp.Url = Form.txtUrl;
         
    obj = objSmsMessage;
    objHttp.SendSms(obj, objSmsConstants.MULTIPART_ACCEPT);
    
    strResult = objHttp.LastError & ': ' & objHttp.GetErrorDescription(objHttp.LastError);
    strLastResponse = objHttp.LastResponseCode;    
  }
  
  function GetSmsDemoAccountInfo ()
  {
    // NOTE: during installation of the SMS Component, a unique login and password is created for you.
    // This login and password can be used to send a few SMS messages through the gateway.auronsoftware.com gateway, for free
    // The 'GetSmsDemoAccountInfo' reads the unique account info from a file that was created during installation    

    strAccount = objDemoAccount.SystemId;
    strPassword = objDemoAccount.Password;
    
    strInfo = "https://gateway.auronsoftware.com:8181/sendsms/default.asp";
    strInfo = strInfo & "?username=" & strAccount;
    strInfo = strInfo & "&password=" & strPassword;
    strInfo = strInfo & "&text=" & objSmsConstants.HTTP_PLACEHOLDER_BODY;
    strInfo = strInfo & "&to=" & objSmsConstants.HTTP_PLACEHOLDER_TOADDRESS;
    
    return strInfo;
  }
</cfscript> 

<!--- HTML-CSS layout includes, no code there! --->
<cfinclude template = "css/Header.html">
<cfinclude template = "css/Menu.html">
    <div class="container">
      <h1>SMS Component Coldfusion HTTP Sample</h1>
      <hr />
      <p>
        The HTTP protocol is used for medium volume SMS messaging. Messages are first routed to the service provider via Internet/VPN. The provider delivers the messages to the recipient's phone. If you are not subscribed to a provider, use the Auron gateway to send 10 SMS messages for free. 
      </p>
      <form action="http.cfm" method="post">
      <cfoutput>
        <h2>SMS Component:</h2>
        <h3>Build: #objHttp.Build#; Module: #objHttp.Module#</h3>
      
        <!-- Connection URL -->
        <label for="Url">Connection URL:</label>
        <p>
          <input type="text" id="Url" name="txtUrl" class="FullWidth" value="#GetSmsDemoAccountInfo()#" />
        </p>
        
        <!-- Empty row -->
        <div class="clearRow"></div>
        
        <!-- ToAddress -->
        <label for="ToAddress">ToAddress:</label>
        <p>
          <input type="text" id="ToAddress" name="txtToAddress" value="[ToAddress]" />
          <a href="https://www.auronsoftware.com/knowledge-base/##sms-component" target="_blank">Recipient number format</a>
        </p>
        
        <!-- Body -->
        <label for="Body">Body:</label>
        <p>
          <textarea id="Body" name="txtBody" style="height:55px;">Hello world send from Auron SMS Component!</textarea>
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
        
        <!-- Last Response -->
        <label for="Response">Last Response:</label>
        <p>
          <input type="text" id="Response" name="txtLastResponse" class="FullWidth" value="#strLastResponse#" />
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