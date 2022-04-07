<%
' HTML-CSS layout includes below, no code there!
%>
<!-- #include file="css/Header.html" -->
<!-- #include file="css/Menu.html" -->

<%
  strResult = ""
  strLastResponse = ""
 
  Set objHttp = CreateObject("AxSms.Http")
  Set objSmsConstants = CreateObject("AxSms.Constants")
  Set objSmsMessage = CreateObject("AxSms.Message")
    
  Set objFso = CreateObject("Scripting.FileSystemObject")
  
  strLogfile = objFso.GetSpecialFolder(2) & "\Http.log"
  objHttp.LogFile = strLogfile
 
  If(Request("btnSendMessage") <> "") Then
    objSmsMessage.Clear()
    objSmsMessage.Body = Request("txtBody")
    objSmsMessage.ToAddress = Request("txtToAddress")

    objHttp.Clear()
    objHttp.Url = Request("txtUrl")

    Set obj = objSmsMessage
    objHttp.SendSms obj, objSmsConstants.MULTIPART_ACCEPT

    strResult = objHttp.LastError & ": " & objHttp.GetErrorDescription(objHttp.LastError)
    strLastResponse = objHttp.LastResponseCode

  End If

  Function GetSmsDemoAccountInfo ()

    ' NOTE: during installation of the SMS Component, a unique login and password is created for you.
    ' This login and password can be used to send a few SMS messages through the gateway.auronsoftware.com gateway, for free

    Set objDemoAccount = CreateObject("AxSms.DemoAccount")

    strInfo = "gateway.auronsoftware.com:8080/sendsms/default.asp"
    strInfo = strInfo & "?username=" & objDemoAccount.SystemId
    strInfo = strInfo & "&password=" & objDemoAccount.Password
    strInfo = strInfo & "&text=" & objSmsConstants.HTTP_PLACEHOLDER_BODY
    strInfo = strInfo & "&to=" & objSmsConstants.HTTP_PLACEHOLDER_TOADDRESS
    
    GetSmsDemoAccountInfo = strInfo
    
  End Function
%>  


<div class="container">
  <h1>Auron SMS Component ASP Sample - HTTP (ServerSide)</h1>
  <hr />
  <p>
    The HTTP protocol is used for medium volume SMS messaging. Messages are first routed to the service provider via Internet/VPN. The provider delivers the messages to the recipient's phone. If you are not subscribed to a provider, use the Auron gateway to send 10 SMS messages for free. 
  </p>
  <form action="http.asp" method="post">
    <h2>Component:</h2>
    <h3>Module [<% = objHttp.Module %>]; Build [<% = objHttp.Build %>]</h3>

    <!-- Connection URL -->
    <label for="Url">Connection URL:</label>
    <p>
      <input type="text" id="Url" name="txtUrl" class="FullWidth" value="<% = GetSmsDemoAccountInfo() %>" />
    </p>

    <!-- Empty row -->
    <div class="clearRow"></div>

    <!-- ToAddress -->
    <label for="ToAddress">ToAddress:</label>
    <p>
      <input type="text" id="ToAddress" name="txtToAddress" value="[ToAddress]" />
      <a href="https://www.auronsoftware.com/knowledge-base/#sms-component" target="_blank">Recipient number format</a>
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
      <input type="text" id="Result" name="txtResult" class="FullWidth Bold" value="<% = strResult %>" />
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