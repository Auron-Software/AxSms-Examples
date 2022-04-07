<!--- HTML-CSS layout includes, no code there! --->
<cfinclude template = "css/Header.html">
<cfinclude template = "css/Menu.html">
    <div class="container">
      <h1>Auron SMS Component Coldfusion Samples</h1>
      <hr />
      <p>
        SMS Component can also be used client-side (i.e. connected to the client's
        PC). There's an HTML sample included with the product.<br />
        For more details, <a href="https://www.auronsoftware.com/knowledge-base/##sms-component" target="_blank">click here</a>.
      </p>
      <div class="content">
        <h1>Table of contents</h1>
        <input type="button" class="Button" onclick="window.location='gsm.cfm';"       value="SMS via GSM" />
        <input type="button" class="Button" onclick="window.location='http.cfm';"      value="SMS via HTTP" />
        <input type="button" class="Button" onclick="window.location='httpxml.cfm';"   value="SMS via HTTP XML" />
        <input type="button" class="Button" onclick="window.location='pagersnpp.cfm';" value="Paging via SNPP" />
        <input type="button" class="Button" onclick="window.location='smpp.cfm';"      value="SMS via SMPP" />
        <input type="button" class="Button" onclick="window.location='ussd.cfm';"      value="USSD Commands" />
      </div><!-- /content -->
      <p>
        This demo uses the Auron SMS Component, an <a href="https://www.auronsoftware.com" target="_blank">Auron Software</a> product.<br />
      </p>
    </div><!-- /container -->
<!--- HTML-CSS layout includes, no code there! --->
<cfinclude template = "css/Footer.html">