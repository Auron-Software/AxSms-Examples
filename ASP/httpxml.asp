<%
' HTML-CSS layout includes below, no code there!
%>
<!-- #include file="css/Header.html" -->
<!-- #include file="css/Menu.html" -->

<%
  strServerResponse = ""

  Set objHttp = CreateObject("AxSms.Http")
  Set objSmsConstants = CreateObject("AxSms.Constants")
  Set objSmsMessage = CreateObject("AxSms.Message")
  
  Set objFso = CreateObject("Scripting.FileSystemObject")
  strLogfile = objFso.GetSpecialFolder(2) & "\Http.log"
  objHttp.LogFile = strLogfile
  
  strUrl = "https://gateway.auronsoftware.com:8181/sendsms/sendsmsHttpXML.asp" 

  Dim strSystemID, strPassword
  GetSmsDemoAccountInfo strSystemID, strPassword
  
  If (strSystemID = "") Then
    strSystemID = "[SystemId]"
    strPassword = "[Password]"
  End If  
  
  'Create XML
  Dim strXmlResult
  strXmlResult = ""
  Set objXml = Server.CreateObject("Microsoft.XMLDOM")
  Set xmlRoot = objXml.createElement("httpmessage")
  objXml.appendChild(xmlRoot)

  Set xmlCredentials = objXml.createElement("credentials")
  xmlCredentials.SetAttribute "systemid", strSystemID
  xmlCredentials.SetAttribute "password", strPassword
  xmlRoot.AppendChild(xmlCredentials)

  Set xmlSettings = objXml.createElement("settings")
  xmlSettings.SetAttribute "bodyformat", objSmsConstants.BODYFORMAT_TEXT
  xmlSettings.SetAttribute "datacoding", objSmsConstants.DATACODING_DEFAULT
  xmlRoot.AppendChild(xmlSettings)

  Set xmlMessage = objXml.createElement("message")
  xmlMessage.SetAttribute "toaddress", objSmsConstants.HTTP_PLACEHOLDER_TOADDRESS
  xmlRoot.AppendChild(xmlMessage)

  Set xmlBody = objXml.createElement("body")
  xmlBody.text = objSmsConstants.HTTP_PLACEHOLDER_BODY
  xmlMessage.AppendChild(xmlBody)
  xmlRoot.AppendChild(xmlMessage)
  strXmlResult = "<?xml version=""1.0""?>" & objXml.xml    

  If(Request("btnSendMessage") <> "") Then
    Dim strXmlToSend

    strBody = objHttp.Base64Encode(Request("txtBody"))
    strToAddress = Request("txtToAddress") 
    strXmlToSend = Request("txtXmlTemplate")
    bDeliveryReport = True
    
    If (bDeliveryReport) Then
      strXmlToSend = Replace(strXmlToSend, objSmsConstants.HTTP_PLACEHOLDER_DELIVERYREPORT, "True")
    Else
      strXmlToSend = strXmlToSend.Replace(objSmsConstants.HTTP_PLACEHOLDER_DELIVERYREPORT, "False")
    End If
    
    strXmlToSend = Replace(strXmlToSend, objSmsConstants.HTTP_PLACEHOLDER_TOADDRESS, strToAddress)
    strXmlToSend = Replace(strXmlToSend, objSmsConstants.HTTP_PLACEHOLDER_BODY, strBody)
             
    strServerResponse = objHttp.Post(Request("txtHost"), strXmlToSend)

    If (objHttp.LastError <> 0) Then
      strServerResponse = "ERROR: " & objHttp.LastError & " " & objHttp.GetErrorDescription(objHttp.LastError)
    End If
    
  End If

  Function GetSmsDemoAccountInfo (strGwAccount, strGwPassword)

    ' NOTE: during installation of the SMS Component, a unique login and password is created for you.
    ' This login and password can be used to send a few SMS messages through the gateway.auronsoftware.com gateway, for free
    
    Set objDemoAccount = CreateObject("AxSms.DemoAccount")
    strGwAccount = objDemoAccount.SystemId
    strGwPassword = objDemoAccount.Password
   
  End Function
%>


<div class="container">
  <h1>Auron SMS Component - ASP HTTP XML Sample</h1>
  <hr />
  <p>
    The HTTP protocol is used for medium volume SMS messaging. Messages are first 
    routed to the service provider via Internet/VPN. The provider delivers the 
    messages to the recipient&#39;s phone. If you are not subscribed to a provider, use 
    the Auron gateway to send 10 SMS messages for free.
  </p>      
  <form action="httpxml.asp" method="post">
    <h2>SMS Component:</h2>
    <h3>Module [<% = objHttp.Module %>]; Build [<% = objHttp.Build %>]</h3>
    
    <!-- Host -->
    <label for="XML">Host:</label>
    <p>
      <input type="text" name="txtHost" id="Host" value="<% 
      If (Request("txtHost") = "") Then
         response.write(strUrl)
      Else
        response.write(Request("txtHost"))
      End If %>" />
    </p>
    
     <!-- XML Template -->
    <label for="XML">XML Template:</label>
    <p>
      <textarea name="txtXmlTemplate" id="XML" style="height:100px; overflow:auto;"><%
      If (Request("txtXmlTemplate") = "") Then
         response.write(strXmlResult)
      Else
        response.write(Request("txtXmlTemplate"))
      End If %> </textarea>
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
      <textarea id="Body" name="txtBody" style="height:45px;">Hello world send from Auron SMS Component!</textarea>
    </p>

    <!-- Send button -->
    <div class="clearLabel"></div>
    <p>
      <input type="submit" name="btnSendMessage" value="Send SMS Message!" />
    </p>

    <!-- Empty row -->
    <div class="clearRow"></div>

    <!-- Server Response -->
    <label for="Response">Server response:</label>
    <p>
      <textarea name="txtServerResponse" id="Response" style="height:100px; overflow:auto;"><% = strServerResponse %></textarea>
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
