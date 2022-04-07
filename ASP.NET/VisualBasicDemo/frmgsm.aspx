<%@ Page Language="vb" MasterPageFile="Layout.Master" AutoEventWireup="false" CodeBehind="frmgsm.aspx.vb" Inherits="VisualBasicDemo.frmGsm" %>

		<asp:Content runat="server" ContentPlaceHolderID="container">
            <h1>Auron SMS Component - ASP VB.NET GSM (Serverside)</h1>
			<hr />
			<p>
				This sample requires a GSM modem or GSM phone connected to your server. A SIM card
				is required in this GSM modem. The product works with almost all available GSM modems.
			</p>
			<form id="form1" runat="server">
				<h2>Component:</h2>
				<h3><asp:Label ID="lblInfo" runat="server" CssClass="FullWidth"></asp:Label></h3>
				
				<!-- Device -->
				<asp:Label ID="lblDevice" runat="server" Text="Device:"></asp:Label>
				<p>
					<asp:DropDownList ID="ddlDevices" runat="server">
						</asp:DropDownList>
				</p>
				
				<!-- Device Speed -->
				<asp:Label ID="lblDeviceSpeed" runat="server" Text="Device Speed:"></asp:Label>
				<p>
					<asp:DropDownList ID="ddlDeviceSpeed" runat="server">
						</asp:DropDownList>
					Only applies to direct ports, i.e. COM1, COM2, etc.
				</p>
				
				<!-- Pincode -->
				<asp:Label ID="lblPincode" runat="server" Text="Pincode:"></asp:Label>
				<p>
					<asp:TextBox ID="txtPincode" runat="server" TextMode="Password"></asp:TextBox>
					Only required if SIM card has PIN code
				</p>
				
				<!-- Empty row -->
				<div class="clearRow"></div>
				
				<!-- ToAddress -->
				<asp:Label ID="lblToAddress" runat="server" Text="ToAddress:"></asp:Label>
				<p>
					<asp:TextBox ID="txtToAddress" runat="server">[ToAddress]</asp:TextBox>
					
					<asp:HyperLink ID="llblNumberFormat" runat="server" 
						NavigateUrl="https://www.auronsoftware.com/knowledge-base/#sms-component" 
						Target="_blank">Recipient number format</asp:HyperLink>
				</p>
				
				<!-- Body, Unicode -->
				<asp:Label ID="lblBody" runat="server" Text="Body:"></asp:Label>
				<p>
					<asp:TextBox ID="txtBody" runat="server"  Height="55px" 
						TextMode="MultiLine">Hello world send from Auron SMS Component!</asp:TextBox><br />
										
					<asp:CheckBox ID="cbxUnicode" CssClass="cbFix" runat="server" Text="Unicode" />
				</p>
				
				<!-- Empty row -->
				<div class="clearRow"></div>
				
				<!-- Send button -->
				<div class="clearLabel"></div>
				<p>
					<asp:Button ID="btnSendMessage" runat="server" Text="Send SMS Message!"
						onclick="btnSendMessage_Click" />
				</p>
				
				<!-- Result -->
				<asp:Label ID="lblResult" runat="server" Text="Result:" CssClass="Bold"></asp:Label>
				<p>
					<asp:TextBox ID="txtResult" CssClass="FullWidth Bold" runat="server"></asp:TextBox>
				</p>
				
				<!-- Logfile -->
				<asp:Label ID="lblLogFile" runat="server" Text="Logfile:"></asp:Label>
				<p>
				    <asp:TextBox ID="txtLogfile" runat="server" CssClass="FullWidth"></asp:TextBox>
				</p>	
			</form>
			<p>
				This demo uses the Auron SMS Component, an <a href="https://www.auronsoftware.com" target="_blank">Auron Software</a> product.<br />
				<a href="Default.aspx">Back to main page</a>
			</p>
		</asp:Content>