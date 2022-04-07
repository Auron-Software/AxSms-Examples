<%@LANGUAGE="VBSCRIPT" CODEPAGE="65001"%>
<%
  ' Response charset and '@language' code page should match to be able to use Unicode.
  Response.Charset = "UTF-8"
  ' HTML-CSS layout includes below, no code there!
%>
<!-- #include file="css/Header.html" -->
<!-- #include file="css/Menu.html" -->

<%
  ' A license key is required to unlock this component after the trial period has expired.
  ' Assign the LicenseKey property every time a new instance of this component is created (see code below). 
  ' Alternatively, the LicenseKey property can be set automatically. This requires the license key to be stored in the registry.
  ' For details, see manual, chapter "Product Activation".
  '
  ' objGsm.LicenseKey = "XXXXX-XXXXX-XXXXX"    
%>
<%
  strResult = ""

  Set objGsm = CreateObject("AxSms.Gsm")
  Set objSmsConstants = CreateObject("AxSms.Constants")
  Set objSmsMessage = CreateObject("AxSms.Message")
  Set objFso = CreateObject("Scripting.FileSystemObject")
  
  strLogfile = objFso.GetSpecialFolder(2) & "\Gsm.log"
  objGsm.LogFile = strLogfile

  If(Request("btnSendMessage") <> "") Then
    Dim obj, strMessageReference, strName, strPincode, iDeviceSpeed

    strName = Request("ddlDevices")
    strPincode = Request("txtPincode")
    iDeviceSpeed = Request("ddlDeviceSpeed")

    objGsm.Clear()
    objGsm.Open strName, strPincode, iDeviceSpeed

    If (objGsm.LastError <> 0) Then
      strResult = objGsm.LastError & ": " & objGsm.GetErrorDescription(objGsm.LastError)
      objGsm.Close()
    Else
      ' Message Settings
      objSmsMessage.Clear()
      objSmsMessage.ToAddress = Request("txtToAddress")
      objSmsMessage.Body = Request("txtBody")

      If (Request("cbxUnicode") <> "") Then
       objSmsMessage.DataCoding = objSmsConstants.DATACODING_UNICODE
      End If

      ' Send the message
      objGsm.SendSms objSmsMessage, objSmsConstants.MULTIPART_ACCEPT, 0

      strMessageReference = objSmsMessage.Reference
      strResult = objGsm.LastError & ": " & objGsm.GetErrorDescription(objGsm.LastError)

      objGsm.Close()      
    End If    
  End If
%>

<div class="container">
  <h1>Auron SMS Component ASP Sample - GSM (ServerSide)</h1>
  <hr />
  <p>
    This demo requires a GSM modem or GSM phone connected to your computer. A SIM card
    is required in this GSM modem. The product works with almost all available GSM modems.
  </p>
  <form action="gsm.asp" method="post">
    <h2>SMS Component:</h2>
    <h3>Module [<% = objGsm.Module %>]; Build [<% = objGsm.Build %>]</h3>

    <!-- Device -->
    <label for="Devices">Device:</label>
    <p>
      <select id="Devices" name="ddlDevices">
      <%
        Dim strDevice, strPort
        strDevice = objGsm.FindFirstDevice()
        
        While (objGsm.LastError = 0)
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
    
    <!-- Empty row -->
    <div class="clearRow"></div>

    <!-- ToAddress -->
    <label for="ToAddress">ToAddress:</label>
    <p>
      <input type="text" id="ToAddress" name="txtToAddress" value="[ToAddress]" />
      <a href="https://www.auronsoftware.com/knowledge-base/#sms-component" target="_blank">Recipient number format</a>
    </p>

    <!-- Body, Unicode -->
    <label for="Body">Body:</label>
    <p>
      <textarea id="Body" name="txtBody" style="height:55px;">Hello world send from Auron SMS Component!</textarea><br />

      <input type="checkbox" class="cbFix" id="Unicode" name="cbxUnicode" value="1" />
      <label for="Unicode">Unicode</label><br />
    </p>
    
    <!-- Empty row -->
    <div class="clearRow"></div>

    <!-- Send button -->
    <div class="clearLabel"></div>
    <p>
      <input type="submit" name="btnSendMessage" value="Send SMS Message!" />
    </p>

    <!-- Result -->
    <label for="Result"><b>Result:</b></label>
    <p>
      <input type="text" id="Result" name="txtResult" class="FullWidth" style="font-weight: bold;" value="<% = strResult %>" />
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
