<%@ Page Language="vb" MasterPageFile="Layout.Master" AutoEventWireup="false" CodeBehind="frmussd.aspx.vb" Inherits="VisualBasicDemo.frmussd" %>

		<asp:Content runat="server" ContentPlaceHolderID="container">
            <h1>Auron SMS Component - ASP VB.NET USSD (Serverside)</h1>
			<hr />
			<p>
				USSD stands for Unstructured Supplementary Services Data. It is a way of sending 
				short commands from the mobile phone to the GSM network. It uses, like SMS, the 
				signalling channel of the GSM connection. Unlike SMS, it does not use a store 
				and forward architecture, but a session oriented connection. USSD text messages 
				can be up to 182 bytes in length. Messages received on the mobile phone are not 
				stored.
			</p>
			<form id="form1" runat="server">
				<h2>Component:</h2>
				<h3><asp:Label ID="lblInfo" runat="server"></asp:Label></h3>
				
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
					(only applies to direct ports, i.e. COM1, COM2, etc.)
				</p>
				
				<!-- Pincode -->
				<asp:Label ID="lblPincode" runat="server" Text="Pincode:"></asp:Label>
				<p>
					<asp:TextBox ID="txtPincode" runat="server" TextMode="Password"></asp:TextBox>
					(only required if SIM card has PIN code)
				</p>
				
				<!-- Command -->
				<asp:Label ID="lblCommand" runat="server" Text="Command:"></asp:Label>
				<p>
					<asp:TextBox ID="txtCommand" runat="server">[Command]</asp:TextBox>
				</p>
				
				<!-- Send button -->
				<div class="clearLabel"></div>
				<p>
					<asp:Button ID="btnSend" runat="server" onclick="btnSend_Click" Text="Send USSD Command" />
				</p>	
				
				<!-- Empty row -->
				<div class="clearRow"></div>
				
				<!-- Result -->
				<asp:Label ID="lblResult" Font-Bold="true"  runat="server" Text="Result:"></asp:Label>
				<p>
					<asp:TextBox ID="txtResult" CssClass="FullWidth Bold" runat="server"></asp:TextBox>
				</p>
				
				<!-- Response -->
				<asp:Label ID="lblResponse" runat="server" Text="Response:"></asp:Label>
				<p>
					<asp:TextBox ID="txtResponse" CssClass="FullWidth" runat="server"></asp:TextBox>
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