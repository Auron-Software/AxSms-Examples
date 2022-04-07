<?php
  $strXmlResult = "";
  $strServerResponse = "";
  
  $strSystemID = "";
  $strPassword = "";    
  
  $strUrl = "https://gateway.auronsoftware.com:8181/sendsms/sendsmsHttpXML.asp";
  
  $strXmlTemplate = "";
  
  $objHttp = new COM("AxSms.Http");
  $objSmsConstants = new COM("AxSms.Constants");
  
  GetSmsDemoAccountInfo($strSystemID, $strPassword);
  
  if ($strSystemID == "")
  {
    $strSystemID = "[SystemId]";
    $strPassword = "[Password]";
  }   
  
  //Create XML
  $xmlDoc = new DOMDocument();
  
  $xmlRoot = $xmlDoc->createElement("httpmessage");
  $xmlDoc->appendChild($xmlRoot);
  
  $xmlCredentials = $xmlDoc->createElement("credentials");
  $xmlCredentials->setAttribute("systemid", $strSystemID);
  $xmlCredentials->setAttribute("password", $strPassword);
  $xmlRoot->appendChild($xmlCredentials);
  
  $xmlSettings = $xmlDoc->createElement("settings");
  $xmlSettings->SetAttribute("bodyformat", $objSmsConstants->BODYFORMAT_TEXT);
  $xmlSettings->SetAttribute("datacoding", $objSmsConstants->DATACODING_DEFAULT);
  $xmlRoot->AppendChild($xmlSettings);

  $xmlMessage = $xmlDoc->CreateElement("message");
  $xmlMessage->SetAttribute("toaddress", $objSmsConstants->HTTP_PLACEHOLDER_TOADDRESS);
  $xmlRoot->AppendChild($xmlMessage);
  
  $xmlBody = $xmlDoc->CreateElement("body");
  $xmlBody->nodeValue = $objSmsConstants->HTTP_PLACEHOLDER_BODY;
  $xmlMessage->AppendChild($xmlBody);
  $xmlRoot->AppendChild($xmlMessage);

   $strXmlTemplate = $xmlDoc->saveXML(); 


  $objHttp->LogFile = sys_get_temp_dir()."HttpXml.log"; 
  // Windows default: 'C:\Windows\Temp\HttpXml.log'
  
  //Form submitted
  if (isset($_POST["btnSendMessage"]))
  {
    $objSmsMessage = new COM("AxSms.Message");
    
    $strSystemID = $_POST['txtSystemID'];
    $strPassword = $_POST['txtPassword'];
    $iDataCoding = $iDataCoding |= $objSmsConstants->DATACODING_DEFAULT;
    $iBodyFormat = $objSmsConstants->BODYFORMAT_TEXT;
    
    $strBody = $objHttp->Base64Encode($_POST['txtBody']);
    $strToAddress = $_POST['txtToAddress'];    
    $strXmlToSend = stripslashes($_POST['txtXmlTemplate']);

    $strXmlToSend = str_replace($objSmsConstants->HTTP_PLACEHOLDER_TOADDRESS, $strToAddress, $strXmlToSend);
    $strXmlToSend = str_replace($objSmsConstants->HTTP_PLACEHOLDER_BODY, $strBody, $strXmlToSend); 
   
    $strUrl = $_POST['txtHost'];
    $strServerResponse = $objHttp->Post($strUrl, $strXmlToSend);
    
    if ($objHttp->LastError != 0)
    {
      $strServerResponse = "ERROR: " + $objHttp->LastError . " " . $objHttp->GetErrorDescription($objHttp->LastError);
    }
  }
  
  function GetSmsDemoAccountInfo(&$strGwAccount, &$strGwPassword)
  {
    // NOTE: during installation of the SMS Component, a unique login and password is created for you.
    // This login and password can be used to send a few SMS messages through the gateway.auronsoftware.com gateway, for free
    
    $objDemoAccount = new COM("AxSms.DemoAccount");  
    $strGwAccount = $objDemoAccount->SystemId;
    $strGwPassword = $objDemoAccount->Password;
  }

// HTML-CSS layout includes, no code there!
include('css/Header.html'); 
include('css/Menu.html'); 
?>
    <div class="container">
      <h1>SMS Component PHP HTTP XML Sample</h1>
      <hr />
      <p>
        The HTTP protocol is used for medium volume SMS messaging. Messages are first 
        routed to the service provider via Internet/VPN. The provider delivers the 
        messages to the recipient&#39;s phone. If you are not subscribed to a provider, use 
        the Auron gateway to send 10 SMS messages for free.
      </p>
      <form action="httpxml.php" method="post">
        <h2>SMS Component:</h2>
        <h3>Build: <?php echo $objHttp->Build; ?>; Module: <?php echo $objHttp->Module; ?></h3>
        
        <!-- Host -->
        <label for="Password">Host:</label>
        <p>
          <input type="text" id="Host" name="txtHost" value="<?php if (empty($_POST['txtHost'])) echo $strUrl; else echo $_POST['txtHost'] ?>" />
        </p>
        
        <!-- XML Template -->
        <label for="XML">XML Template:</label>
        <p>
            <textarea name="txtXmlTemplate" id="xmlTemplate" style="height:100px; overflow:auto;"><?php echo (empty($_POST['txtXmlTemplate'])) ? $strXmlTemplate : stripslashes($_POST['txtXmlTemplate']); ?></textarea>
        </p><!--  -->
        
        <!-- Empty row -->
        <div class="clearRow"></div>
        
        <!-- ToAddress -->
        <label for="ToAddress">ToAddress:</label>
        <p>
          <input type="text" id="ToAddress" name="txtToAddress" value="<?php echo (empty($_POST['txtToAddress'])) ? "[ToAddress]" : $_POST['txtToAddress']; ?>" />
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
          <textarea name="txtServerResponse" id="Response" style="height:100px; overflow:auto;"><?php echo $strServerResponse; ?></textarea>
        </p>
      </form>
      <p>
        This demo uses the Auron SMS Component, an <a href="https://www.auronsoftware.com" target="_blank">Auron Software</a> product.<br />
        <a href="index.php">Back to main page</a> 
      </p>
    </div><!-- /container -->
<?php 
//HTML-CSS layout include, no code there!
include('css/Footer.html'); ?>