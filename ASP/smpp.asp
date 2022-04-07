<%@LANGUAGE="VBSCRIPT" CODEPAGE="65001"%>
<%
  ' Response charset and '@language' code page should match to be able to use Unicode.
  Response.Charset = "UTF-8"
  ' HTML-CSS layout includes below, no code there!
%>
<!-- #include file="css/Header.html" -->
<!-- #include file="css/Menu.html" -->

<%
  strResult = ""
  strLastResponse = ""

  Set objSmpp = CreateObject("AxSms.Smpp")
  Set objSmsConstants = CreateObject("AxSms.Constants")
  Set objSmsMessage = CreateObject("AxSms.Message")
  Set objDemoAccount = CreateObject("AxSms.DemoAccount")
  
  Set objFso = CreateObject("Scripting.FileSystemObject")
  strLogfile = objFso.GetSpecialFolder(2) & "\Smpp.log"
  
  objSmpp.LogFile = strLogfile

  Dim strAccount, strPassword
  strAccount = objDemoAccount.SystemId
  strPassword = objDemoAccount.Password

  If(Request("btnSendMessage") <> "") Then
    objSmpp.Connect Request("txtServer"), Request("txtServerPort"), 5000, False

    If (objSmpp.LastError <> 0 ) Then
      strResult = objSmpp.LastError & ": " & objSmpp.GetErrorDescription(objSmpp.LastError)
    Else

      iSystemMode = objSmsConstants.SMPP_BIND_TRANSCEIVER
      iVersion = objSmsConstants.SMPP_VERSION_34
      objSmpp.Bind iSystemMode, Request("txtSystemID"), Request("txtPassword"), Request("txtSystemType"), iVersion, 0, 0, Request("txtFromAddress"), 2000

      If (objSmpp.LastError <> 0) Then
        strResult = objSmpp.LastError & ": " & objSmpp.GetErrorDescription(objSmpp.LastError)
      Else
        objSmsMessage.Clear()
        objSmsMessage.ToAddress = Request("txtToAddress")
        objSmsMessage.Body = Request("txtMessage")

        If (Request("cbxUnicode") <> 0) Then
          objSmsMessage.DataCoding = objSmsConstants.DATACODING_UNICODE
        End If

        objSmpp.SubmitSms objSmsMessage, objSmsConstants.MULTIPART_ACCEPT
        strResult = objSmpp.LastError & ": " & objSmpp.GetErrorDescription(objSmpp.LastError)
        
        objSmpp.WaitForSmsUpdate(3000)
        Set objMessage = objSmpp.FetchSmsUpdate()
          
        If objSmpp.LastError = 0 Then
          ' SMPP command status codes are provider specific. The Auron SMPP Demo Gateway uses command status 1025
          ' to communicate there are no more credits left for this account on the Auron SMPP Demo Gateway.
          If (objMessage.SmppCommandStatus <> 0) Then
            If (objMessage.SmppCommandStatus = 1025 And Request("txtServer") = "gateway.auronsoftware.com") Then
                strResult = "Message not sent. Reason: No credits left."
            Else
                strResult = "Message not sent. Reason: unspecified error [" & objMessage.SmppCommandStatus & "]."
            End If    
          End If
        End If

      End If
    End If
  End If  

%>

 
<div class="container">
  <h1><b>Auron SMS Component ASP Sample - SMPP</b></h1>
  <hr />
  <p>
    This demo allows you to send SMS messages over SMPP. If you don't have an SMPP subscription,
    you can use the Auron SMPP Demo Gateway. You can send out a few SMS messages
    for free through this gateway.<br />
  </p>
  <form action="smpp.asp" method="post">
    <h2>Component:</h2>
    <h3>Module [<% = objSmpp.Module %>]; Build [<% = objSmpp.Build %>]</h3>

    <!-- Server -->
    <label for="Server">Server:</label>
    <p>
      <input type="text" id="Server" name="txtServer" value="gateway.auronsoftware.com" />
      : <input type="text" name="txtServerPort" style="width: 75px;" value="2775" />
    </p>

    <!-- System ID -->
    <label for="SystemID">System ID:</label>
    <p>
      <input type="text" id="SystemID" name="txtSystemID" value="<% = strAccount %>" />
    </p>

    <!-- Password -->
    <label for="Password">Password:</label>
    <p>
      <input type="text" id="Password" name="txtPassword" value="<% = strPassword %>" />
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

      <input type="checkbox" class="cbFix" id="Unicode" name="cbxUnicode" value="1" />
      <label for="Unicode">Unicode</label>
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
      <input type="text" id="Result" name="txtResult" class="FullWidth" style="font-weight: bold;" value="<% = strResult %>" />
    </p>

    <!-- Message status -->
    <label for="Status">Message status:</label>
    <p>
      <input type="text" id="Status" name="txtMessageStatus" class="FullWidth" value="<% = strMessageStatus %>" />
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