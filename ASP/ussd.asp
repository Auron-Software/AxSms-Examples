<%
  strResult   = ""
  strResponse = ""
  
  Set objGsm = CreateObject("AxSms.Gsm")
  Set objSmsConstants = CreateObject("AxSms.Constants")
  
  Set objFso = CreateObject("Scripting.FileSystemObject")
  
  strLogfile = objFso.GetSpecialFolder(2) & "\Gsm.log"  
  objGsm.LogFile = strLogfile

  If(Request("btnSendMessage") <> "") Then
    strCommand = "AT+CUSD=1,""" & Request("txtCommand") & """,15"
    strName = Request("ddlDevices")
    strPincode = Request("txtPincode")
    iDeviceSpeed = Request("ddlDeviceSpeed")

    objGsm.Open strName, strPincode, iDeviceSpeed
	
    If (objGsm.LastError = 0) Then
      objGsm.SendCommand strCommand
    End If   
    
    If (objGsm.LastError = 0) Then
      strResponse = objGsm.ReadResponse( 10000 )
    End If		
    
    If (objGsm.LastError = 0) Then
      If (InStr(strResponse, "OK") > 1) Then 'Response should be OK
        objGsm.SendCommand "" 
        strResponse = objGsm.ReadResponse( 10000 )

        If (InStr(strResponse, "+CUSD:") > 1) Then
          strFields = Split(strResponse, "\")
        
          If (UBound(strFields) > 1) Then
            strResponse = strFields(1)
          Else
            strResponse = strFields(0)
          End If
        End If
      End If
    End If
    
    If (objGsm.LastError <> 0) Then
      strResponse = objGsm.GetErrorDescription(objGsm.LastError)
    End If
    
    strResult = objGsm.LastError & ": " & objGsm.GetErrorDescription(objGsm.LastError)
    objGsm.Close

  End If
%>

<%
' HTML-CSS layout includes below, no code there!
%>
<!-- #include file="css/Header.html" -->
<!-- #include file="css/Menu.html" -->
    <div class="container">
      <h1><b>SMS Component ASP USSD Sample</b></h1>
      <hr />
      <p>
        USSD stands for Unstructured Supplementary Services Data. It is a way of sending 
        short commands from the mobile phone to the GSM network. It uses, like SMS, the 
        signalling channel of the GSM connection. Unlike SMS, it does not use a store 
        and forward architecture, but a session oriented connection. USSD text messages 
        can be up to 182 bytes in length. Messages received on the mobile phone are not 
        stored.
      </p>
      <form action="ussd.asp" method="post">
        <h2>SMS Component:</h2>
        <h3>Build: <% = objGsm.Build %>; Module: <% = objGsm.Module %></h3>

        <!-- Device -->
        <label for="Devices">Device:</label>
        <p>
          <select id="Devices" name="ddlDevices">
          <%
            Dim strDevice
            strDevice = objGsm.FindFirstDevice()
            
            while (objGsm.LastError = 0)
              Response.Write "<option value=""" & strDevice & """>" & strDevice & "</option>"
              strDevice = objGsm.FindNextDevice()
            Wend
            
            ' Add COM ports.
            ' Gets first COM port.
            strPort = objGsm.FindFirstPort()
            While (objGsm.LastError = 0)
                Response.Write "<option value=""" & strPort & """>" & strPort & "</option>"
                'Gets next COM port.
                strPort = objGsm.FindNextPort()
            Wend
          %>
          </select>
        </p>

        <!-- Device Speed -->
        <label for="DeviceSpeed">Device Speed:</label>
        <p>
          <select id="DeviceSpeed" name="ddlDeviceSpeed">
            <option value="<% = objSmsConstants.GSM_BAUDRATE_DEFAULT %>">Default</option>
            <option value="<% = objSmsConstants.GSM_BAUDRATE_110 %>">110</option>
            <option value="<% = objSmsConstants.GSM_BAUDRATE_300 %>">300</option>
            <option value="<% = objSmsConstants.GSM_BAUDRATE_600 %>">600</option>
            <option value="<% = objSmsConstants.GSM_BAUDRATE_1200 %>">1200</option>
            <option value="<% = objSmsConstants.GSM_BAUDRATE_2400 %>">2400</option>
            <option value="<% = objSmsConstants.GSM_BAUDRATE_4800 %>">4800</option>
            <option value="<% = objSmsConstants.GSM_BAUDRATE_9600 %>">9600</option>
            <option value="<% = objSmsConstants.GSM_BAUDRATE_14400 %>">14400</option>
            <option value="<% = objSmsConstants.GSM_BAUDRATE_19200 %>">19200</option>
            <option value="<% = objSmsConstants.GSM_BAUDRATE_38400 %>">38400</option>
            <option value="<% = objSmsConstants.GSM_BAUDRATE_56000 %>">56000</option>
            <option value="<% = objSmsConstants.GSM_BAUDRATE_57600 %>">57600</option>
            <option value="<% = objSmsConstants.GSM_BAUDRATE_64000 %>">64000</option>
            <option value="<% = objSmsConstants.GSM_BAUDRATE_115200 %>">115200</option>
            <option value="<% = objSmsConstants.GSM_BAUDRATE_128000 %>">128000</option>
            <option value="<% = objSmsConstants.GSM_BAUDRATE_230400 %>">230400</option>
            <option value="<% = objSmsConstants.GSM_BAUDRATE_256000 %>">256000</option>
            <option value="<% = objSmsConstants.GSM_BAUDRATE_460800 %>">460800</option>
            <option value="<% = objSmsConstants.GSM_BAUDRATE_921600 %>">921600</option>
          </select>
          Only applies to direct ports, i.e. COM1, COM2, etc.
        </p>

        <!-- Pincode -->
        <label for="Pincode">Pincode:</label>
        <p>
          <input type="password" id="Pincode" name="txtPincode" />
          Only required if SIM card has PIN code
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
          <input type="text" id="Result" name="txtResult" class="FullWidth Bold" value="<% = strResult %>" />
        </p>

        <!-- Response -->
        <label for="Response">Response:</label>
        <p>
          <input type="text" id="Response" name="txtResponse" class="FullWidth" value="<% = strResponse %>" />
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