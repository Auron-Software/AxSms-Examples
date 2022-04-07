<%
' HTML-CSS layout includes below, no code there!
%>
<!-- #include file="css/Header.html" -->
<!-- #include file="css/Menu.html" -->

<%
  strLastError = ""
  strLastResponse = ""

  Set objSnpp = CreateObject("AxSms.Snpp")
  Set objFso = CreateObject("Scripting.FileSystemObject")
  strLogfile = objFso.GetSpecialFolder(2) & "\Snpp.log"
  objSnpp.LogFile = strLogfile

  If(Request("btnSendMessage") <> "") Then

    objSnpp.Clear()
    objSnpp.Server = Request("ddlServers")
    objSnpp.ServerPort = Request("txtPort")
    objSnpp.ServerTimeout = 2000

    objSnpp.Send Request("txtPagerID"), Request("txtMessage")

    strLastError = objSnpp.LastError & ": " & objSnpp.GetErrorDescription(objSnpp.LastError)
    strLastResponse = objSnpp.ProviderResponse

  End If
%>


<div class="container">
  <h1>Auron SMS Component ASP Sample - SNPP</h1>
  <hr />
  <p>
    SNPP stands for Simple Network Pager Protocol. This protocol is used to send messages to pagers. 
  </p>
  <form action="pagersnpp.asp" method="post">
    <h2>Component:</h2>
    <h3>Module [<% = objSnpp.Module %>]; Build [<% = objSnpp.Build %>]</h3>

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
      For a list of recommended SNPP providers. <a href="https://www.auronsoftware.com/knowledge-base" target="_blank">Click here</a>
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
      <input type="text" id="Result" name="txtResult" class="FullWidth Bold" value="<% = strLastError %>" />
    </p>

    <!-- Last Response -->
    <label for="Response">Last Response:</label> 
    <p>
      <input type="text" id="Response" name="txtLastResponse" class="FullWidth" value="<% = strLastResponse %>" />
    </p>
    
    <!-- Logfile -->
    <label for="Logfile">Logfile:</label>
    <p>
      <input type="text" id="LogFile" name="txtLogFile" class="FullWidth" value="<% = strLogfile %>" />
    </p>
  </form>
  <p>
    This sample is based on Auron SMS Component, an <a href="https://www.auronsoftware.com" target="_blank">Auron Software</a> product.<br />
    <a href="Default.asp">Back to main page</a>
  </p>
</div><!-- /container -->
<%
' HTML-CSS layout include below, no code there!
%>
<!-- #include file="css/Footer.html" -->