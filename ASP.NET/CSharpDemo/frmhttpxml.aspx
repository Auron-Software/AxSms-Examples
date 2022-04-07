<%@ Page Language="C#" MasterPageFile="Layout.Master" AutoEventWireup="true" CodeBehind="frmhttpxml.aspx.cs" ValidateRequest="false" Inherits="CScharpDemo.frmhtmlxml" %>

		<asp:Content runat="server" ContentPlaceHolderID="container">
            <h1>Auron SMS Component - ASP .NET C# HTTP XML (Serverside)</h1>
			<hr />
			<p>
				The HTTP protocol is used for medium volume SMS messaging. Messages are first 
				routed to the service provider via Internet/VPN. The provider delivers the 
				messages to the recipient&#39;s phone. If you are not subscribed to a provider, use 
				the Auron gateway to send 10 SMS messages for free.<br />
			</p>
			<form id="form1" runat="server">
				<h2>Component:</h2>
				<h3><asp:Label ID="lblInfo" runat="server"></asp:Label></h3>			
				
				<!--- Host -->
				<asp:Label ID="lblHost" runat="server" Text="Host:"></asp:Label>
				<p>
					<asp:TextBox ID="txtHost" runat="server">https://gateway.auronsoftware.com:8181/sendsms/sendsmsHttpXML.asp</asp:TextBox>
				</p>
				
				<!-- XML Template -->
				<asp:Label ID="lblXmlTemplate" runat="server" Text="XML Template:"></asp:Label>
				<p>
					<asp:TextBox ID="txtXmlTemplate" runat="server" Rows="7" TextMode="MultiLine"></asp:TextBox>
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
				
				<!-- Body -->
				<asp:Label ID="lblBody" runat="server" Text="Body:"></asp:Label>
				<p>
					<asp:TextBox ID="txtBody" runat="server" Height="45px" TextMode="MultiLine">Hello world send from Auron SMS Component!</asp:TextBox>
				</p>
				
				<!-- Send button -->
				<div class="clearLabel"></div>
				<p>
					<asp:Button ID="btnSendMessage" runat="server" onclick="btnSendMessage_Click" Text="Send SMS Message!" />
				</p>
				
				<!-- Empty row -->
				<div class="clearRow"></div>
								
				<!-- Server response -->
				<asp:Label ID="lblServerResponse" runat="server" Text="Server response:"></asp:Label>
				<p>
					<asp:TextBox ID="txtServerResponse" runat="server" Height="100px"
						TextMode="MultiLine"></asp:TextBox>
				</p>
				
				<!-- Logfile -->
				<asp:Label ID="lblLogFile" runat="server" Text="Logfile:"></asp:Label>
				<p>
				    <asp:TextBox ID="txtLogFile" runat="server" CssClass="FullWidth"></asp:TextBox>
				</p>
			</form>
			<p>
				This demo uses the Auron SMS Component, an <a href="https://www.auronsoftware.com" target="_blank">Auron Software</a> product.<br />
				<a href="Default.aspx">Back to main page</a> 
			</p>
		</asp:Content>