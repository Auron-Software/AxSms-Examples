<%@ Page Language="C#" MasterPageFile="Layout.Master" AutoEventWireup="true" CodeBehind="frmsmpp.aspx.cs" Inherits="CScharpDemo.frmsmpp" %>

		<asp:Content runat="server" ContentPlaceHolderID="container">
            <h1>Auron SMS Component - ASP .NET C# SMPP (Serverside)</h1>
			<hr />
			<p>
				This sample allows you to send SMS messages over SMPP. If you don't have an SMPP subscription,
				you can use the Auron SMPP Demo Gateway. You can send out a few SMS messages
				for free through this gateway.<br />
				For more details about using SMS Component with ASP .NET, 
				<a href="https://www.auronsoftware.com/knowledge-base/#sms-component" target="_blank">click here</a>.
			</p>
			<form id="form1" runat="server">
				<h2>Component:</h2>
				<h3><asp:Label ID="lblInfo" runat="server"></asp:Label></h3>
				
				<!-- Server -->
				<asp:Label ID="lblServer" runat="server" Text="Server:"></asp:Label>
				<p>
					<asp:TextBox ID="txtServer" runat="server">gateway.auronsoftware.com</asp:TextBox>
					: <asp:TextBox ID="txtServerPort" runat="server" Width="75px">2775</asp:TextBox>
				</p>
				
				<!-- System ID -->
				<asp:Label ID="lblSystemID" runat="server" Text="System ID:"></asp:Label>
				<p>
					<asp:TextBox ID="txtSystemID" runat="server"></asp:TextBox>
				</p>
				
				<!-- Password -->
				<asp:Label ID="lblPassword" runat="server" Text="Password:"></asp:Label>
				<p>
					<asp:TextBox ID="txtPassword" runat="server"></asp:TextBox>
				</p>
				
				<!-- System Type -->
				<asp:Label ID="lblSystemType" runat="server" Text="System Type:"></asp:Label>
				<p>
					<asp:TextBox ID="txtSystemType" runat="server">SMPP</asp:TextBox>
				</p>				
				
				<!-- Recipient -->
				<asp:Label ID="lblRecipient" runat="server" Text="Recipient:"></asp:Label>
				<p>
					<asp:TextBox ID="txtToAddress" runat="server">[ToAddress]</asp:TextBox>
				</p>
				
				<!-- Message -->
				<asp:Label ID="lblMessage" runat="server" Text="Message:"></asp:Label>
				<p>
					<asp:TextBox ID="txtMessage" runat="server" Height="45px" 
						TextMode="MultiLine">Hello world send from Auron SMS Component!</asp:TextBox><br />
					
					<asp:CheckBox ID="cbxUnicode" runat="server" CssClass="cbFix" Text="Unicode" />
				</p>
				
				<!-- Send button -->
				<div class="clearLabel"></div>
				<p>
					<asp:Button ID="btnSend" runat="server" onclick="btnSend_Click" Text="Send SMS Message!" />
				</p>
				
				<!-- Empty row -->
				<div class="clearRow"></div>
				
				<!-- Result: -->
				<asp:Label ID="lblResult" runat="server" Text="Result:" CssClass="Bold"></asp:Label>
				<p>
					<asp:TextBox ID="txtResult" runat="server" CssClass="FullWidth Bold"></asp:TextBox>
				</p>
				
				<!-- Message status: -->
				<asp:Label ID="lblMessageStatus" runat="server" Text="Message status:"></asp:Label>
				<p>
					<asp:TextBox ID="txtMessageStatus" runat="server" CssClass="FullWidth"></asp:TextBox>
				</p>
				
				<!-- Log File-->
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