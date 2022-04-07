<%@ Page Language="vb" AutoEventWireup="false" MasterPageFile="Layout.Master" CodeBehind="Default.aspx.vb" Inherits="VisualBasicDemo._Default" %>

		<asp:Content runat="server" ContentPlaceHolderID="container">
            <h1>Auron SMS Component - ASP .NET VB Samples (Serverside)</h1>
			<hr />
			<p>Auron SMS Component can also be used client-side (i.e. connected to the client's PC).
			 There's an HTML sample included with the product.<br />
			 For more details, <a href="https://www.auronsoftware.com/knowledge-base/#sms-component" target="_blank">click here</a>.
			</p>
			<div class="content">
				<h1>Table of contents</h1>
				
				<button onclick="window.location='frmgsm.aspx'" 
					class="Button" type="button">SMS via GSM</button>
				
				<button onclick="window.location='frmhttp.aspx'" 
					class="Button" type="button">SMS via HTTP</button>
				
				<button onclick="window.location='frmhttpxml.aspx'" 
					class="Button" type="button">SMS Via HTTP XML</button>
				
				<button onclick="window.location='frmsnpp.aspx'" 
					class="Button" type="button">Paging via SNPP</button>
				
				<button onclick="window.location='frmsmpp.aspx'" 
					class="Button" type="button">SMS via SMPP</button>
				
				<button onclick="window.location='frmussd.aspx'" 
					class="Button" type="button">USSD Commands</button>
				
			</div>
			<p>
				This demo uses the Auron SMS Component, an <a href="https://www.auronsoftware.com" target="_blank">Auron Software</a> product.
			</p>
		</asp:Content>