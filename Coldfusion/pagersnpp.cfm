<cfobject type="com" Action="Create" class="AxSms.Snpp"       name="objSnpp">

<cfscript> 
  strResult = "n/a";
  strLastResponse = "";
  objSnpp.LogFile = "C:\Windows\Windows\Temp\Snpp.log";
  
  if (IsDefined("Form.btnSendMessage"))
  {
    objSnpp.Clear();
    objSnpp.Server = Form.ddlServers;
    objSnpp.ServerPort = Form.txtPort;
    objSnpp.ServerTimeout = 2000;
    
    objSnpp.Send(Form.txtPagerID, Form.txtMessage);
    
    strResult = objSnpp.LastError & ": " & objSnpp.GetErrorDescription(objSnpp.LastError);
    strLastResponse = objSnpp.ProviderResponse;
  }
</cfscript> 

<!--- HTML-CSS layout includes, no code there! --->
<cfinclude template = "css/Header.html">
<cfinclude template = "css/Menu.html">
    <div class="container">
      <h1>SMS Component Coldfusion Pager SNPP Sample</h1>
      <hr />
      <p>
        SNPP stands for Simple Network Pager Protocol. This protocol is most used in the U.S. to send messages to pagers. 
      </p>
      <form action="pagersnpp.cfm" method="post">
      <cfoutput>
        <h2>SMS Component:</h2>
        <h3>Build: #objSnpp.Build#; Module: #objSnpp.Module#</h3>
        
        <!-- Server -->
        <label for="Server">Server:</label>
        <p>
          <select id="Server" name="ddlServers">
            <option value="snpp.myairmail.com">snpp.myairmail.com</option>
            <option value="snpp.pageallcom.com" selected="true">snpp.pageallcom.com</option>
            <option value="snpp.americanmessaging.net">snpp.americanmessaging.net</option>
            <option value="snpp.attws.net">snpp.attws.net</option>
            <option value="pmcl.net">pmcl.net</option>
            <option value="page.contactwireless.com">page.contactwireless.com</option>
            <option value="www.webpager.us">www.webpager.us</option>
            <option value="epage.graylink.com">epage.graylink.com</option>
            <option value="alphapage.cc">alphapage.cc</option>
            <option value="mail2.illinoissignal.net">mail2.illinoissignal.net</option>
            <option value="ipnpaging.com">ipnpaging.com</option>
            <option value="snpp.lauttamus.com">snpp.lauttamus.com</option>
            <option value="snpp.mobilcom.net">snpp.mobilcom.net</option>
            <option value="pecos.nextel.com">pecos.nextel.com</option>
            <option value="snpp.nextel.com">snpp.nextel.com</option>
            <option value="snpp.ucom.com">snpp.ucom.com</option>
            <option value="mail.pagerpeople.com">mail.pagerpeople.com</option>
            <option value="snpp.sbc.com">snpp.sbc.com</option>
            <option value="snpp.acswireless.com">snpp.acswireless.com</option>
          </select>
          For a list of recommended SNPP providers. <a href="https://www.auronsoftware.com/knowledge-base/##sms-component" target="_blank">Click here</a>
        </p>
        
        <!-- Port -->
        <label for="Port">Port:</label>
        <p>
          <input type="text" id="Port" name="txtPort" value="444" />
        </p>
        
        <!-- Empty row -->
        <div class="clearRow"></div>
        
        <!-- PagerID -->
        <label for="PagerID">PagerID:</label>
        <p>
          <input type="text" id="PagerID" name="txtPagerID" value="[PagerID]" />
          Note: Most providers require a 10 digit page number.
        </p>
        
        <!-- Message -->
        <label for="Message">Message:</label>
        <p>
          <textarea id="Message" name="txtMessage" style="height:45px;">[Message]</textarea>
        </p>
        
        <!-- Send button -->
        <div class="clearLabel"></div>
        <p>
          <input type="submit" name="btnSendMessage" value="Send Message" />
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