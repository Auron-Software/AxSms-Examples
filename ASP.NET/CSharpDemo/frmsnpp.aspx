<%@ Page Language="C#" MasterPageFile="Layout.Master" AutoEventWireup="true" CodeBehind="frmsnpp.aspx.cs" Inherits="CScharpDemo.frmpagersnpp" %>

		<asp:Content runat="server" ContentPlaceHolderID="container">
            <h1>Auron SMS Component - ASP .NET C# Pager SNPP (Serverside)</h1>
			<hr />
			<p>
				SNPP stands for Simple Network Pager Protocol. This protocol is used to send messages to pagers.
			</p>
			<form id="form1" runat="server">
				<h2>Component:</h2>
				<h3><asp:Label ID="lblInfo" runat="server"></asp:Label></h3>
				
				<!-- Server -->
				<asp:Label ID="lblServer" runat="server" Text="Server:"></asp:Label>
				<p>
					<asp:DropDownList ID="ddlServers" runat="server">
						</asp:DropDownList>
					For a list of recommended SNPP providers. <a href="https://www.auronsoftware.com/knowledge-base/#sms-component" target="_blank">click here</a>   
				</p>
				
				<!-- Port -->
				<asp:Label ID="lblPort" runat="server" Text="Port:"></asp:Label>
				<p>
					<asp:TextBox ID="txtPort" runat="server">444</asp:TextBox>
				</p>
				
				<!-- Empty row -->
				<div class="clearRow"></div>
				
				<!-- PagerID -->
				<asp:Label ID="lblPagerId" runat="server" Text="PagerID:"></asp:Label>
				<p>
					<asp:TextBox ID="txtPagerID" runat="server">[PagerID]</asp:TextBox>
					NOTE: Most providers require a 10 digit page number.
				</p>
				
				<!-- Message -->
				<asp:Label ID="lblMessage" runat="server" Text="Message:"></asp:Label>
				<p>
					<asp:TextBox ID="txtMessage" runat="server" TextMode="MultiLine" Height="45px">[Message]</asp:TextBox>
				</p>
				
				<!-- Send button -->
				<div class="clearLabel"></div>
				<p>
					<asp:Button ID="btnSend" runat="server" Text="Send Message" onclick="btnSend_Click" />
				</p>
				
				<!-- Empty row -->
				<div class="clearRow"></div>
				
				<!-- Result -->
				<asp:Label ID="lblResult" runat="server" CssClass="Bold" Text="Result:"></asp:Label>
				<p>
					<asp:TextBox ID="txtResult" CssClass="FullWidth Bold" runat="server"></asp:TextBox>
				</p>
				
				<!-- Last Response -->
				<asp:Label ID="lblServerResponse" runat="server" Text="Last Response:"></asp:Label>
				<p>
					<asp:TextBox ID="txtResponse" CssClass="FullWidth"  runat="server"></asp:TextBox>
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