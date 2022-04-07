<?php
//HTML-CSS layout includes, no code there!
include('css/Header.html'); 
include('css/Menu.html'); 
?>
    <div class="container">
      <h1>Auron SMS Component PHP Samples</h1>
      <hr />
      <p>
        SMS Component can also be used client-side (i.e. connected to the client's
        PC). There's an HTML sample included with the product.<br />
        For more details, <a href="https://www.auronsoftware.com/knowledge-base/#sms-component" target="_blank">click here</a>.
      </p>
      <div class="content">
        <h1>Table of contents</h1>
        <input type="button" class="Button" onclick="window.location='gsm.php';"       value="SMS via GSM" />
        <input type="button" class="Button" onclick="window.location='http.php';"      value="SMS via HTTP" />
        <input type="button" class="Button" onclick="window.location='httpxml.php';"   value="SMS via HTTP XML" />
        <input type="button" class="Button" onclick="window.location='pagersnpp.php';" value="Paging via SNPP" />
        <input type="button" class="Button" onclick="window.location='smpp.php';"      value="SMS via SMPP" />
        <input type="button" class="Button" onclick="window.location='ussd.php';"      value="USSD Commands" />
      </div><!-- /content -->
      <p>
        This demo uses the Auron SMS Component, an <a href="https://www.auronsoftware.com" target="_blank">Auron Software</a> product.<br />
      </p>
    </div><!-- /container -->
<?php 
//HTML-CSS layout include, no code there!
include('css/Footer.html'); ?>