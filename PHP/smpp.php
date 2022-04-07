<?php
  // Clear Fields
  $strResult = "n/a";
  $strMessageStatus = "";
  
  // Default Values
  $strServer = "gateway.auronsoftware.com";
  $strPort = "2775";
  $strAccount = "[SystemId]";
  $strPassword = "[Password]";
  $strRecipient = "[ToAddress]";
  $strSystemType = "SMPP";
  
  GetSmsDemoAccountInfo($strAccount, $strPassword);
  
  $objSmpp = new COM("AxSms.Smpp");
  $objSmpp->LogFile = sys_get_temp_dir()."Auron.Smpp.log"; 
  // Windows default: 'C:\Windows\Temp\Auron.Smpp.log'
  
  // Form submitted
  if (isset($_POST["btnSendMessage"]))
  {  
    $objSmsMessage   = new COM("AxSms.Message",   NULL, CP_UTF8 );
    $objSmsConstants = new COM("AxSms.Constants", NULL, CP_UTF8 );
    
    $strServer = $_POST['txtServer'];
    $strPort = $_POST['txtServerPort'];
    
    $objSmpp->Connect( $strServer, intval ( $strPort ), 5000, false);
    
    if ($objSmpp->LastError != 0)
    {
      $strResult = $objSmpp->LastError.": " . $objSmpp->GetErrorDescription($objSmpp->LastError);
    }
    else
    {
      $strAccount = $_POST['txtSystemID'];
      $strPassword = $_POST['txtPassword'];
      $strSystemType = $_POST['txtSystemType'];
      $strRecipient = $_POST['txtToAddress'];
      
      $iSystemMode = $objSmsConstants->SMPP_BIND_TRANSCEIVER;
      $iVersion = $objSmsConstants->SMPP_VERSION_34;
      
      $objSmpp->Bind($iSystemMode, $strAccount, $strPassword, $strSystemType, $iVersion, 0, 0, "", 0);
      
      if ($objSmpp->LastError != 0)
      {
        $strResult = $objSmpp->LastError.": " . $objSmpp->GetErrorDescription($objSmpp->LastError);
      }
      else
      {
        $objSmsMessage->Clear();
        $objSmsMessage->ToAddress = $strRecipient;		  
        $objSmsMessage->Body = $_POST["txtMessage"];
        
        if (isset($_POST['cbxUnicode']))
        {
          $objSmsMessage->DataCoding = $objSmsConstants->DATACODING_UNICODE;
        }

        $objSmpp->SubmitSms($objSmsMessage, $objSmsConstants->MULTIPART_TRUNCATE);
        $strResult = $objSmpp->LastError . ": " . $objSmpp->GetErrorDescription($objSmpp->LastError);                
        
        if ($objSmpp->LastError != 0)
        {
          $strResult = $objSmpp->LastError . ": " . $objSmpp->GetErrorDescription($objSmpp->LastError);                
        }
        else
        {
          if ($objSmpp->WaitForSmsUpdate(3000))
          $objSmsMessage = $objSmpp->FetchSmsUpdate();
          
          if ($objSmpp->LastError == 0)
          {
            // SMPP command status codes are provider specific. The Auron SMPP Demo Gateway uses command status 1025
            // to communicate there are no more credits left for this account on the Auron SMPP Demo Gateway.
            if ($objSmsMessage->SmppCommandStatus != 0)
            {
              if ($objSmsMessage->SmppCommandStatus == 1025 AND $strServer == "gateway.auronsoftware.com")
                $strResult = "Message not send. Reason: No credits left.";
              else
                $strResult = "Message not sent. Reason: server error [" . $objSmsMessage->SmppCommandStatus . "].";
            }
          }
        }
        
        $objSmpp->Disconnect();
      }      
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
  
//HTML-CSS layout includes, no code there!
include('css/Header.html'); 
include('css/Menu.html'); 
?>
    <div class="container">
      <h1>SMS Component PHP SMPP Sample</h1>
      <hr />
      <p>
        This demo allows you to send SMS messages over SMPP. If you don't have an SMPP subscription,
        you can use the Auron SMPP Demo Gateway. You can send out a few SMS messages
        for free through this gateway.
      </p>
      <form action="smpp.php" method="post">
        <h2>SMS Component:</h2>
        <h3>Build: <?php echo $objSmpp->Build; ?>; Module: <?php echo $objSmpp->Module; ?></h3>
        
        <!-- Server -->
        <label for="Server">Server:</label>
        <p>
          <input type="text" id="Server" name="txtServer" value="<?php echo $strServer; ?>" />
          : <input type="text" name="txtServerPort" style="width: 75px;" value="<?php echo $strPort; ?>" />
        </p>
        
        <!-- System ID -->
        <label for="SystemID">System ID:</label>
        <p>
          <input type="text" id="SystemID" name="txtSystemID" value="<?php echo $strAccount; ?>" />
        </p>
        
        <!-- Password -->
        <label for="Password">Password:</label>
        <p>
          <input type="text" id="Password" name="txtPassword" value="<?php echo $strPassword; ?>" />
        </p>
        
        <!-- System Type -->
        <label for="SystemType">System Type:</label>
        <p>
          <input type="text" id="SystemType" name="txtSystemType" value="<?php echo $strSystemType; ?>" />
        </p>
        
        <!-- Recipient -->
        <label for="ToAddress">Recipient:</label>
        <p>
          <input type="text" id="ToAddress" name="txtToAddress" value="<?php echo $strRecipient; ?>" />
        </p>
        
        <!-- Message, Multipart, Flash -->
        <label for="Message">Message:</label>
        <p>
          <textarea id="Message" name="txtMessage" style="height:45px;"><?php if (!empty ($_POST['txtMessage'])) echo $_POST['txtMessage']; else echo "Hello world send from Auron SMS Component!" ?></textarea><br />
          
          <input type="checkbox" class="cbFix" id="Unicode" name="cbxUnicode" <?php if (isset($_POST['cbxUnicode'])) echo "checked=\"yes\""; ?> />
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
          <input type="text" id="Result" name="txtResult" class="FullWidth Bold" value="<?php echo $strResult; ?>" />
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