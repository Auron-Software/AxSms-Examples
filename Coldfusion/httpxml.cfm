<cfobject type="com" Action="Create" class="AxSms.Http" name="objHttp" >
<cfobject type="com" Action="Create" class="AxSms.Constants" name="objSmsConstants">
<cfobject type="com" Action="Create" class="AxSms.DemoAccount" name="objDemoAccount">

<cfregistry action = "get" 
  branch = "HKEY_LOCAL_MACHINE\SOFTWARE\Auron\SMS Component"
  entry = "InstallRoot"
  variable = "strInstrallRoot"
  type = "string"> 

<cfscript> 
  strXmlResult = "";
  strServerResponse = "";
  objHttp.LogFile = "C:\Windows\Windows\Temp\HttpXml.log";
  
  ArrAccountInfo = GetSmsDemoAccountInfo();
  
  if (IsDefined("Form.btnSendMessage"))
  {
    strSystemID = Form.txtSystemID;
    strPassword = Form.txtPassword;
    iBodyFormat = objSmsConstants.BODYFORMAT_TEXT;
    iDataCoding = objSmsConstants.DATACODING_DEFAULT;
    
    strBody = objHttp.Base64Encode(Form.txtBody);
    strToAddress = Form.txtToAddress;
    
    //Create XML
    objXml = XmlNew();
    objXml.xmlRoot = XmlElemNew(objXml, "httpmessage");
    
    objXml.httpmessage.XmlChildren[1] = XmlElemNew(objXml, "credentials");
    objXml.httpmessage.XmlChildren[1].XmlAttributes.systemid = strSystemID;
    objXml.httpmessage.XmlChildren[1].XmlAttributes.password = strPassword;
    
    objXml.httpmessage.XmlChildren[2] = XmlElemNew(objXml, "settings");
    objXml.httpmessage.XmlChildren[2].XmlAttributes.bodyformat = ibodyformat;
    objXml.httpmessage.XmlChildren[2].XmlAttributes.datacoding = idatacoding;

    objXml.httpmessage.XmlChildren[3] = XmlElemNew(objXml, "message");
    objXml.httpmessage.XmlChildren[3].XmlAttributes.toaddress = strToAddress;
    
    objXml.httpmessage.XmlChildren[3].XmlChildren[1] = XmlElemNew(objXml, "body");
    objXml.httpmessage.XmlChildren[3].XmlChildren[1].xmlText = strBody;
    
    strXmlResult = toString(objXml);
    
    strUrl = "https://gateway.auronsoftware.com:8181/sendsms/sendsmsHttpXML.asp";
    strServerResponse = objHttp.Post(strUrl, strXmlResult);
    
    if (objHttp.LastError != 0)
    {
      strServerResponse = "ERROR: " & objHttp.LastError & " " & objHttp.GetErrorDescription(objHttp.LastError);
    }
  }
  
  function GetSmsDemoAccountInfo ()
  {
    // NOTE: during installation of the SMS Component, a unique login and password is created for you.
    // This login and password can be used to send a few SMS messages through the gateway.auronsoftware.com gateway, for free
    // The 'GetSmsDemoAccountInfo' reads the unique account info from a file that was created during installation
      
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
      <h1>SMS Component Coldfusion HTTP XML Sample</h1>
      <hr />
      <p>
        The HTTP protocol is used for medium volume SMS messaging. Messages are first 
        routed to the service provider via Internet/VPN. The provider delivers the 
        messages to the recipient&#39;s phone. If you are not subscribed to a provider, use 
        the Auron gateway to send 10 SMS messages for free.
      </p>
      <form action="httpxml.cfm" method="post">
      <cfoutput>
        <h2>SMS Component:</h2>
        <h3>Build: #objHttp.Build#; Module: #objHttp.Module#</h3>
        
        <!-- System ID -->
        <label for="System">System ID:</label>
        <p>
          <input type="text" id="System" name="txtSystemID" value="#ArrAccountInfo[1]#" />
        </p>
        
        <!-- Password -->
        <label for="Password">Password:</label>
        <p>
          <input type="text" id="Password" name="txtPassword" value="#ArrAccountInfo[2]#" />
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
          <textarea id="Body" name="txtBody" style="height:45px;">Hello world send from Auron SMS Component!</textarea>
        </p>
        
        <!-- Send button -->
        <div class="clearLabel"></div>
        <p>
          <input type="submit" name="btnSendMessage" value="Send SMS Message!" />
        </p>
        
        <!-- Empty row -->
        <div class="clearRow"></div>
        
        <!-- XML Document -->
        <label for="XML">XML Document:</label>
        <p>
          <textarea name="txtXml" id="XML" style="height:100px; overflow:auto;">#strXmlResult#</textarea>
        </p>
        
        <!-- Server Response -->
        <label for="Response">Server response:</label>
        <p>
          <textarea name="txtServerResponse" id="Response" style="height:100px; overflow:auto;">#strServerResponse#</textarea>
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