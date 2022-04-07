<cfobject type="com" Action="Create" class="AxSms.Gsm"      name="objGsm">
<cfobject type="com" Action="Create" class="AxSms.Constants"  name="objSmsConstants">

<cfscript>
  strResult = "n/a";
  strResponse =  "";
  objGsm.LogFile = "C:\Windows\Windows\Temp\Ussd.log";
  
  if (IsDefined("Form.btnSendMessage"))
  {
    strCommand = 'AT+CUSD=1,"' & Form.txtCommand & '",15';
    strName = Form.ddlDevices;
    strPincode = Form.txtPincode;
    iDeviceSpeed = Form.ddlDeviceSpeed;
    
    objGsm.Open(strName, strPincode, iDeviceSpeed);
	
    if (objGsm.LastError == 0)
    {	
      objGsm.SendCommand(strCommand);
    }
    
    if (objGsm.LastError == 0)
    {
      strResponse = objGsm.ReadResponse(10000);
      
      if (Find("OK", strResponse) > 1) //Response should be OK
      {
        objGsm.SendCommand("");
        strResponse = objGsm.ReadResponse(10000);
        
        if (Find("+CUSD:", strResponse) > 1 AND Find("/", strResponse) > 1)
        {
          iFound = Find("/", strResponse) + 1;
          strResponse = Mid(strResponse, iFound, Len(strResponse) - iFound);
        }
      }
    }
      
    if (objGsm.LastError != 0)
    {
      strResponse = objGsm.GetErrorDescription(objGsm.LastError);
    }
    
    strResult = objGsm.LastError & ": " & objGsm.GetErrorDescription(objGsm.LastError);
    objGsm.Close();    
  }
</cfscript>

<!--- HTML-CSS layout includes, no code there! --->
<cfinclude template = "css/Header.html">
<cfinclude template = "css/Menu.html">
    <div class="container">
      <h1>SMS Component Coldfusion USSD Sample</h1>
      <hr />
      <p>
        USSD stands for Unstructured Supplementary Services Data. It is a way of sending 
        short commands from the mobile phone to the GSM network. It uses, like SMS, the 
        signalling channel of the GSM connection. Unlike SMS, it does not use a store 
        and forward architecture, but a session oriented connection. USSD text messages 
        can be up to 182 bytes in length. Messages received on the mobile phone are not 
        stored.
      </p>
      <form action="ussd.cfm" method="post">
      <cfoutput>
        <h2>SMS Component:</h2>
        <h3>Build: #objGsm.Build#; Module: #objGsm.Module#</h3>
        
        <!-- Device -->
        <label for="Devices">Device:</label>
        <p>
          <select id="Devices" name="ddlDevices">
          <cfscript> 
            strDevice = objGsm.FindFirstDevice();
            
            while (objGsm.LastError LTE 0)
            {
              WriteOutput('<option value="' & strDevice & '">' & strDevice & '</option>');
              strDevice = objGsm.FindNextDevice();
            }
            
            strDevice = objGsm.FindFirstPort();
           while (objGsm.LastError LTE 0)
            {
              WriteOutput('<option value="' & strDevice & '">' & strDevice & '</option>');
              strDevice = objGsm.FindNextPort();
            }
          </cfscript> 
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
          (only applies to direct ports, i.e. COM1, COM2, etc.)
        </p>
        
        <!-- Pincode -->
        <label for="Pincode">Pincode:</label>
        <p>
          <input type="password" id="Pincode" name="txtPincode" />
          (only required if SIM card has PIN code)
        </p>
        
        <!-- Command -->
        <label for="Command">Command:</label>
        <p>
          <input type="text" id="Command" name="txtCommand" width="100%" value="[Command]" />
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
          <input type="text" id="Result" name="txtResult" class="FullWidth Bold" value="#strResult#" />
        </p>
        
        <!-- Response -->
        <label for="Response">Response:</label>
        <p>
          <input type="text" id="Response" name="txtResponse" class="FullWidth" value="#strResponse#" />
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