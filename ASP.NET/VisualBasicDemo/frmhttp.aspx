<%@ Page Language="vb" MasterPageFile="Layout.Master" AutoEventWireup="false" CodeBehind="frmhttp.aspx.vb" Inherits="VisualBasicDemo.frmhttp" %>

		<asp:Content runat="server" ContentPlaceHolderID="container">
            <h1>Auron SMS Component - ASP VB.NET HTTP (Serverside)</h1>
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
				
				<!-- Connection URL -->
				<asp:Label ID="Label1" runat="server" Text="Connection URL:"></asp:Label>
				<p>
					<asp:TextBox ID="txtUrl" runat="server" CssClass="FullWidth">[URL]</asp:TextBox>
				</p>
				
				<!-- Empty row -->
				<div class="clearRow"></div>
				
				<!-- ToAddress -->
				<asp:Label ID="Label3" runat="server" Text="ToAddress:"></asp:Label>
				<p>
					<asp:TextBox ID="txtToAddress" runat="server">[ToAddress]</asp:TextBox>
					
					<asp:HyperLink ID="llblNumberFormat" runat="server" 
								NavigateUrl="https://www.auronsoftware.com/knowledge-base/#sms-component" 
								Target="_blank">Recipient number format</asp:HyperLink>
				</p>
				
				<!-- Body -->
				<asp:Label ID="Label2" runat="server" Text="Body:"></asp:Label>
				<p>
					<asp:TextBox ID="txtBody" runat="server" Height="55px" 
						TextMode="MultiLine">Hello world send from Auron SMS Component!</asp:TextBox>
				</p>
				
				<!-- Send button -->
				<div class="clearLabel"></div>
				<p>
					<asp:Button ID="btnSend" runat="server" onclick="btnSend_Click" Text="Send SMS Message!" />
				</p>
				
				<!-- Empty row -->
				<div class="clearRow"></div>
				
				<!-- Result -->
				<asp:Label ID="Label4" runat="server" Font-Bold="true" Text="Result:"></asp:Label>
				<p>
					<asp:TextBox ID="txtResult" runat="server" CssClass="FullWidth Bold"></asp:TextBox>
				</p>
				
				<!-- Last Response -->
				<asp:Label ID="Label5" runat="server" Text="Last Response:"></asp:Label>
				<p>
					<asp:TextBox ID="txtLastResponse" runat="server" CssClass="FullWidth"></asp:TextBox>
				</p>
				
				<!-- Logfile -->
				<asp:Label ID="lblLogFile" runat="server" Text="Logfile:""></asp:Label>
				<p>
				    <asp:TextBox ID="txtLogfile" runat="server" CssClass="FullWidth"></asp:TextBox>
				</p>
			</form>
			<p>
				This demo uses the Auron SMS Component, an <a href="https://www.auronsoftware.com" target="_blank">Auron Software</a> product.<br />
				<a href="Default.aspx">Back to main page</a>
			</p>
		</asp:Content>