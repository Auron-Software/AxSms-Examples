<?php
  $strResponse = "";
  $strResult = "n/a";
  $objGsm = new COM("AxSms.Gsm"); 
  $objGsm->LogFile = sys_get_temp_dir()."Ussd.log"; 
  // Windows default: 'C:\Windows\Temp\Ussd.log'
  
  // Form submitted
  if (isset($_POST["btnSendMessage"]))
  {
    $objSmsConstans = new COM("AxSms.Constants");
    
    $strCommand = 'AT+CUSD=1,"'.$_POST['txtCommand'].'",15';
    $strFields = array();
    $strName = $_POST['ddlDevices'];
    $strPincode = $_POST['txtPincode'];
    $iDeviceSpeed = $_POST['ddlDeviceSpeed'];
    
    $objGsm->Open($strName, $strPincode, $iDeviceSpeed);
    $strResponse = $objGsm->GetErrorDescription($objGsm->LastError);
    
    if ($objGsm->LastError == 0)
    {
      $objGsm->SendCommand($strCommand);
      $strResponse = $objGsm->ReadResponse(0);
      
      if (strpos($strResponse, "OK") != false) //Response should be OK
      {
        $objGsm->SendCommand("");
        $strResponse = $objGsm->ReadResponse(0);
        
        if (strpos($strResponse, "+CUSD:") !== false)
        {
          $strFields = explode("\\", $strResponse);
          
          $strResponse = (count($strFields) > 1) ?
            $strFields[1] : $strFields[0];
        }
      }
    
      if ($objGsm->LastError != 0)
      {
        $strResponse = $objGsm->GetErrorDescription($objGsm->LastError);
      }
          
      $objGsm->Close();
    }    
  }

// HTML-CSS layout includes, no code there!
include('css/Header.html'); 
include('css/Menu.html'); 
?>
    <div class="container">
      <h1>SMS Component PHP USSD Sample</h1>
      <hr />
      <p>
        USSD stands for Unstructured Supplementary Services Data. It is a way of sending 
        short commands from the mobile phone to the GSM network. It uses, like SMS, the 
        signalling channel of the GSM connection. Unlike SMS, it does not use a store 
        and forward architecture, but a session oriented connection. USSD text messages 
        can be up to 182 bytes in length. Messages received on the mobile phone are not 
        stored.
      </p>
      <form action="ussd.php" method="post">
        <h2>SMS Component:</h2>
        <h3>Build: <?php echo $objGsm->Build; ?>; Module: <?php echo $objGsm->Module; ?></h3>
        
        <!-- Device -->
        <label for="Devices">Device:</label>
        <p>
          <select id="Devices" name="ddlDevices">
          <?php
            $strDevice = $objGsm->FindFirstDevice();
            
            while ($objGsm->LastError == 0)
            {
              echo '
              <option value="'.$strDevice.'">'.$strDevice.'</option>';
              $strDevice = $objGsm->FindNextDevice();
            }
            
            $strPort = $objGsm->FindFirstPort();
            while ($objGsm->LastError == 0)
            {
              echo '
            <option value="'.$strPort.'">'.$strPort.'</option>';
              $strPort = $objGsm->FindNextPort();
            }
          ?>
          </select>
        </p>
        
        <!-- Device Speed -->
        <label for="DeviceSpeed">Device Speed:</label>
        <p>
          <select id="DeviceSpeed" name="ddlDeviceSpeed">
            <option value="0">Default</option>
            <option value="110">110</option>
            <option value="300">300</option>
            <option value="600">600</option>
            <option value="1200">1200</option>
            <option value="2400">2400</option>
            <option value="4800">4800</option>
            <option value="9600">9600</option>
            <option value="14400">14400</option>
            <option value="19200">19200</option>
            <option value="38400">38400</option>
            <option value="56000">56000</option>
            <option value="57600">57600</option>
            <option value="64000">64000</option>
            <option value="115200">115200</option>
            <option value="128000">128000</option>
            <option value="230400">230400</option>
            <option value="256000">256000</option>
            <option value="460800">460800</option>
            <option value="921600">921600</option>
          </select>
          Only applies to direct ports, i.e. COM1, COM2, etc.
        </p>
        
        <!-- Pincode -->
        <label for="Pincode">Pincode:</label>
        <p>
          <input type="password" id="Pincode" name="txtPincode" />
          Only use when SIM card requires PIN code
        </p>
        
        <!-- Command -->
        <label for="Command">Command:</label>
        <p>
          <input type="text" id="Command" name="txtCommand" value="[Command]" />
        </p>
          
        <!-- Send button -->
        <div class="clearLabel"></div>
        <p>
          <input type="submit" name="btnSendMessage" value="Send USSD Command" />
        </p>
        
        <!-- Empty row -->
        <div class="clearRow"></div>
        
        <!-- Result -->
        <label for="Result"><b>Result:</b></label>
        <p>
          <input type="text" id="Result" name="txtResult" class="FullWidth Bold" value="<?php echo $strResult; ?>" />
        </p>
        
        <!-- Response -->
        <label for="Response">Response:</label>
        <p>
          <input type="text" id="Response" name="txtResponse" class="FullWidth" value="<?php echo $strResponse; ?>" />
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