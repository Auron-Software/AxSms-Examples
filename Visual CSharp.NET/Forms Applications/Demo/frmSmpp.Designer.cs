namespace Demo
{
    partial class frmSmpp
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
      this.components = new System.ComponentModel.Container();
      this.btnAdvancedProviderSettings = new System.Windows.Forms.Button();
      this.cbxBindType = new System.Windows.Forms.ComboBox();
      this.Label5 = new System.Windows.Forms.Label();
      this.txtServerPort = new System.Windows.Forms.TextBox();
      this.Label4 = new System.Windows.Forms.Label();
      this.txtSystemPassword = new System.Windows.Forms.TextBox();
      this.txtSystemID = new System.Windows.Forms.TextBox();
      this.txtServer = new System.Windows.Forms.TextBox();
      this.Label3 = new System.Windows.Forms.Label();
      this.Label2 = new System.Windows.Forms.Label();
      this.Label1 = new System.Windows.Forms.Label();
      this.Label12 = new System.Windows.Forms.Label();
      this.llblUrlNotReceived = new System.Windows.Forms.LinkLabel();
      this.btnView = new System.Windows.Forms.Button();
      this.GroupBox5 = new System.Windows.Forms.GroupBox();
      this.btnClearReceived = new System.Windows.Forms.Button();
      this.lvReceivedMessages = new System.Windows.Forms.ListView();
      this.txtLogFile = new System.Windows.Forms.TextBox();
      this.TmrCheckReceive = new System.Windows.Forms.Timer(this.components);
      this.btnClearSent = new System.Windows.Forms.Button();
      this.txtResult = new System.Windows.Forms.TextBox();
      this.lvSentMessages = new System.Windows.Forms.ListView();
      this.GroupBox2 = new System.Windows.Forms.GroupBox();
      this.cbxDataCoding = new System.Windows.Forms.ComboBox();
      this.label11 = new System.Windows.Forms.Label();
      this.llblUrlRecipientFormat = new System.Windows.Forms.LinkLabel();
      this.btnSendOptions = new System.Windows.Forms.Button();
      this.btnSend = new System.Windows.Forms.Button();
      this.Label8 = new System.Windows.Forms.Label();
      this.txtBody = new System.Windows.Forms.TextBox();
      this.Label7 = new System.Windows.Forms.Label();
      this.txtToAddress = new System.Windows.Forms.TextBox();
      this.Label6 = new System.Windows.Forms.GroupBox();
      this.llblUrlSmppProviders = new System.Windows.Forms.LinkLabel();
      this.Label9 = new System.Windows.Forms.Label();
      this.btnDisconnect = new System.Windows.Forms.Button();
      this.btnConnect = new System.Windows.Forms.Button();
      this.GroupBox3 = new System.Windows.Forms.GroupBox();
      this.GroupBox4 = new System.Windows.Forms.GroupBox();
      this.Label10 = new System.Windows.Forms.Label();
      this.lblInfo = new System.Windows.Forms.Label();
      this.TmrCheckUpdate = new System.Windows.Forms.Timer(this.components);
      this.cbSecure = new System.Windows.Forms.CheckBox();
      this.GroupBox5.SuspendLayout();
      this.GroupBox2.SuspendLayout();
      this.Label6.SuspendLayout();
      this.GroupBox3.SuspendLayout();
      this.GroupBox4.SuspendLayout();
      this.SuspendLayout();
      // 
      // btnAdvancedProviderSettings
      // 
      this.btnAdvancedProviderSettings.Location = new System.Drawing.Point(549, 43);
      this.btnAdvancedProviderSettings.Name = "btnAdvancedProviderSettings";
      this.btnAdvancedProviderSettings.Size = new System.Drawing.Size(104, 24);
      this.btnAdvancedProviderSettings.TabIndex = 10;
      this.btnAdvancedProviderSettings.Text = "Advanced...";
      this.btnAdvancedProviderSettings.Click += new System.EventHandler(this.btnAdvancedProviderSettings_Click);
      // 
      // cbxBindType
      // 
      this.cbxBindType.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
      this.cbxBindType.Location = new System.Drawing.Point(436, 44);
      this.cbxBindType.Name = "cbxBindType";
      this.cbxBindType.Size = new System.Drawing.Size(107, 21);
      this.cbxBindType.TabIndex = 9;
      // 
      // Label5
      // 
      this.Label5.Location = new System.Drawing.Point(355, 47);
      this.Label5.Name = "Label5";
      this.Label5.Size = new System.Drawing.Size(76, 16);
      this.Label5.TabIndex = 8;
      this.Label5.Text = "B&ind type:";
      // 
      // txtServerPort
      // 
      this.txtServerPort.Location = new System.Drawing.Point(436, 20);
      this.txtServerPort.Name = "txtServerPort";
      this.txtServerPort.Size = new System.Drawing.Size(107, 20);
      this.txtServerPort.TabIndex = 3;
      this.txtServerPort.Text = "2775";
      // 
      // Label4
      // 
      this.Label4.Location = new System.Drawing.Point(354, 24);
      this.Label4.Name = "Label4";
      this.Label4.Size = new System.Drawing.Size(64, 16);
      this.Label4.TabIndex = 2;
      this.Label4.Text = "Server &Port:";
      // 
      // txtSystemPassword
      // 
      this.txtSystemPassword.Location = new System.Drawing.Point(256, 43);
      this.txtSystemPassword.Name = "txtSystemPassword";
      this.txtSystemPassword.PasswordChar = '*';
      this.txtSystemPassword.Size = new System.Drawing.Size(93, 20);
      this.txtSystemPassword.TabIndex = 7;
      // 
      // txtSystemID
      // 
      this.txtSystemID.Location = new System.Drawing.Point(91, 43);
      this.txtSystemID.Name = "txtSystemID";
      this.txtSystemID.Size = new System.Drawing.Size(93, 20);
      this.txtSystemID.TabIndex = 5;
      // 
      // txtServer
      // 
      this.txtServer.Location = new System.Drawing.Point(91, 19);
      this.txtServer.Name = "txtServer";
      this.txtServer.Size = new System.Drawing.Size(257, 20);
      this.txtServer.TabIndex = 1;
      this.txtServer.Text = "gateway.auronsoftware.com";
      // 
      // Label3
      // 
      this.Label3.Location = new System.Drawing.Point(190, 47);
      this.Label3.Name = "Label3";
      this.Label3.Size = new System.Drawing.Size(60, 20);
      this.Label3.TabIndex = 6;
      this.Label3.Text = "Password:";
      // 
      // Label2
      // 
      this.Label2.Location = new System.Drawing.Point(20, 47);
      this.Label2.Name = "Label2";
      this.Label2.Size = new System.Drawing.Size(60, 16);
      this.Label2.TabIndex = 4;
      this.Label2.Text = "System &ID:";
      // 
      // Label1
      // 
      this.Label1.Location = new System.Drawing.Point(20, 24);
      this.Label1.Name = "Label1";
      this.Label1.Size = new System.Drawing.Size(44, 16);
      this.Label1.TabIndex = 0;
      this.Label1.Text = "&Server:";
      // 
      // Label12
      // 
      this.Label12.Location = new System.Drawing.Point(20, 47);
      this.Label12.Name = "Label12";
      this.Label12.Size = new System.Drawing.Size(52, 16);
      this.Label12.TabIndex = 2;
      this.Label12.Text = "Lo&g file:";
      // 
      // llblUrlNotReceived
      // 
      this.llblUrlNotReceived.Location = new System.Drawing.Point(88, 105);
      this.llblUrlNotReceived.Name = "llblUrlNotReceived";
      this.llblUrlNotReceived.Size = new System.Drawing.Size(332, 16);
      this.llblUrlNotReceived.TabIndex = 2;
      this.llblUrlNotReceived.TabStop = true;
      this.llblUrlNotReceived.Text = "Help, I didn\'t receive the SMS message on my mobile phone";
      this.llblUrlNotReceived.LinkClicked += new System.Windows.Forms.LinkLabelLinkClickedEventHandler(this.ctlUrlNotReceived_LinkClicked);
      // 
      // btnView
      // 
      this.btnView.Location = new System.Drawing.Point(549, 43);
      this.btnView.Name = "btnView";
      this.btnView.Size = new System.Drawing.Size(104, 24);
      this.btnView.TabIndex = 4;
      this.btnView.Text = "View...";
      this.btnView.Click += new System.EventHandler(this.btnView_Click);
      // 
      // GroupBox5
      // 
      this.GroupBox5.Controls.Add(this.btnClearReceived);
      this.GroupBox5.Controls.Add(this.lvReceivedMessages);
      this.GroupBox5.Location = new System.Drawing.Point(12, 396);
      this.GroupBox5.Name = "GroupBox5";
      this.GroupBox5.Size = new System.Drawing.Size(670, 113);
      this.GroupBox5.TabIndex = 3;
      this.GroupBox5.TabStop = false;
      this.GroupBox5.Text = "Received Messages";
      // 
      // btnClearReceived
      // 
      this.btnClearReceived.Location = new System.Drawing.Point(549, 83);
      this.btnClearReceived.Name = "btnClearReceived";
      this.btnClearReceived.Size = new System.Drawing.Size(104, 24);
      this.btnClearReceived.TabIndex = 1;
      this.btnClearReceived.Text = "Clear";
      this.btnClearReceived.Click += new System.EventHandler(this.btnClearReceived_Click);
      // 
      // lvReceivedMessages
      // 
      this.lvReceivedMessages.Location = new System.Drawing.Point(91, 19);
      this.lvReceivedMessages.Name = "lvReceivedMessages";
      this.lvReceivedMessages.Size = new System.Drawing.Size(449, 86);
      this.lvReceivedMessages.TabIndex = 0;
      this.lvReceivedMessages.UseCompatibleStateImageBehavior = false;
      this.lvReceivedMessages.View = System.Windows.Forms.View.Details;
      // 
      // txtLogFile
      // 
      this.txtLogFile.Location = new System.Drawing.Point(88, 43);
      this.txtLogFile.Name = "txtLogFile";
      this.txtLogFile.Size = new System.Drawing.Size(452, 20);
      this.txtLogFile.TabIndex = 3;
      // 
      // TmrCheckReceive
      // 
      this.TmrCheckReceive.Tick += new System.EventHandler(this.TmrCheckReceive_Tick);
      // 
      // btnClearSent
      // 
      this.btnClearSent.Location = new System.Drawing.Point(546, 81);
      this.btnClearSent.Name = "btnClearSent";
      this.btnClearSent.Size = new System.Drawing.Size(104, 24);
      this.btnClearSent.TabIndex = 1;
      this.btnClearSent.Text = "Clear";
      this.btnClearSent.Click += new System.EventHandler(this.btnClearSent_Click);
      // 
      // txtResult
      // 
      this.txtResult.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
      this.txtResult.Location = new System.Drawing.Point(88, 19);
      this.txtResult.Name = "txtResult";
      this.txtResult.ReadOnly = true;
      this.txtResult.Size = new System.Drawing.Size(452, 20);
      this.txtResult.TabIndex = 1;
      // 
      // lvSentMessages
      // 
      this.lvSentMessages.Location = new System.Drawing.Point(91, 19);
      this.lvSentMessages.Name = "lvSentMessages";
      this.lvSentMessages.Size = new System.Drawing.Size(449, 86);
      this.lvSentMessages.TabIndex = 0;
      this.lvSentMessages.UseCompatibleStateImageBehavior = false;
      this.lvSentMessages.View = System.Windows.Forms.View.Details;
      // 
      // GroupBox2
      // 
      this.GroupBox2.Controls.Add(this.cbxDataCoding);
      this.GroupBox2.Controls.Add(this.label11);
      this.GroupBox2.Controls.Add(this.llblUrlRecipientFormat);
      this.GroupBox2.Controls.Add(this.btnSendOptions);
      this.GroupBox2.Controls.Add(this.btnSend);
      this.GroupBox2.Controls.Add(this.Label8);
      this.GroupBox2.Controls.Add(this.txtBody);
      this.GroupBox2.Controls.Add(this.Label7);
      this.GroupBox2.Controls.Add(this.txtToAddress);
      this.GroupBox2.Location = new System.Drawing.Point(12, 119);
      this.GroupBox2.Name = "GroupBox2";
      this.GroupBox2.Size = new System.Drawing.Size(670, 139);
      this.GroupBox2.TabIndex = 1;
      this.GroupBox2.TabStop = false;
      this.GroupBox2.Text = "Message";
      // 
      // cbxDataCoding
      // 
      this.cbxDataCoding.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
      this.cbxDataCoding.FormattingEnabled = true;
      this.cbxDataCoding.Location = new System.Drawing.Point(357, 18);
      this.cbxDataCoding.Name = "cbxDataCoding";
      this.cbxDataCoding.Size = new System.Drawing.Size(186, 21);
      this.cbxDataCoding.TabIndex = 3;
      // 
      // label11
      // 
      this.label11.AutoSize = true;
      this.label11.Location = new System.Drawing.Point(286, 23);
      this.label11.Name = "label11";
      this.label11.Size = new System.Drawing.Size(69, 13);
      this.label11.TabIndex = 2;
      this.label11.Text = "Data Coding:";
      // 
      // llblUrlRecipientFormat
      // 
      this.llblUrlRecipientFormat.Location = new System.Drawing.Point(550, 21);
      this.llblUrlRecipientFormat.Name = "llblUrlRecipientFormat";
      this.llblUrlRecipientFormat.Size = new System.Drawing.Size(103, 16);
      this.llblUrlRecipientFormat.TabIndex = 4;
      this.llblUrlRecipientFormat.TabStop = true;
      this.llblUrlRecipientFormat.Text = "Number format";
      this.llblUrlRecipientFormat.LinkClicked += new System.Windows.Forms.LinkLabelLinkClickedEventHandler(this.ctlUrlRecipientFormat_LinkClicked);
      // 
      // btnSendOptions
      // 
      this.btnSendOptions.Location = new System.Drawing.Point(549, 76);
      this.btnSendOptions.Name = "btnSendOptions";
      this.btnSendOptions.Size = new System.Drawing.Size(104, 24);
      this.btnSendOptions.TabIndex = 9;
      this.btnSendOptions.Text = "Advanced...";
      this.btnSendOptions.Click += new System.EventHandler(this.btnSendOptions_Click);
      // 
      // btnSend
      // 
      this.btnSend.Location = new System.Drawing.Point(91, 102);
      this.btnSend.Name = "btnSend";
      this.btnSend.Size = new System.Drawing.Size(452, 24);
      this.btnSend.TabIndex = 8;
      this.btnSend.Text = "Send";
      this.btnSend.Click += new System.EventHandler(this.btnSend_Click);
      // 
      // Label8
      // 
      this.Label8.Location = new System.Drawing.Point(20, 46);
      this.Label8.Name = "Label8";
      this.Label8.Size = new System.Drawing.Size(56, 16);
      this.Label8.TabIndex = 5;
      this.Label8.Text = "&Body:";
      // 
      // txtBody
      // 
      this.txtBody.Location = new System.Drawing.Point(91, 46);
      this.txtBody.Multiline = true;
      this.txtBody.Name = "txtBody";
      this.txtBody.Size = new System.Drawing.Size(454, 54);
      this.txtBody.TabIndex = 6;
      // 
      // Label7
      // 
      this.Label7.Location = new System.Drawing.Point(20, 23);
      this.Label7.Name = "Label7";
      this.Label7.Size = new System.Drawing.Size(62, 23);
      this.Label7.TabIndex = 0;
      this.Label7.Text = "&ToAddress:";
      // 
      // txtToAddress
      // 
      this.txtToAddress.Location = new System.Drawing.Point(91, 20);
      this.txtToAddress.Name = "txtToAddress";
      this.txtToAddress.Size = new System.Drawing.Size(189, 20);
      this.txtToAddress.TabIndex = 1;
      // 
      // Label6
      // 
      this.Label6.Controls.Add(this.cbSecure);
      this.Label6.Controls.Add(this.btnAdvancedProviderSettings);
      this.Label6.Controls.Add(this.llblUrlSmppProviders);
      this.Label6.Controls.Add(this.Label9);
      this.Label6.Controls.Add(this.btnDisconnect);
      this.Label6.Controls.Add(this.btnConnect);
      this.Label6.Controls.Add(this.cbxBindType);
      this.Label6.Controls.Add(this.Label5);
      this.Label6.Controls.Add(this.txtServerPort);
      this.Label6.Controls.Add(this.Label4);
      this.Label6.Controls.Add(this.txtSystemPassword);
      this.Label6.Controls.Add(this.txtSystemID);
      this.Label6.Controls.Add(this.txtServer);
      this.Label6.Controls.Add(this.Label3);
      this.Label6.Controls.Add(this.Label2);
      this.Label6.Controls.Add(this.Label1);
      this.Label6.Location = new System.Drawing.Point(12, 12);
      this.Label6.Name = "Label6";
      this.Label6.Size = new System.Drawing.Size(670, 101);
      this.Label6.TabIndex = 0;
      this.Label6.TabStop = false;
      this.Label6.Text = "Connection";
      // 
      // llblUrlSmppProviders
      // 
      this.llblUrlSmppProviders.Location = new System.Drawing.Point(489, 75);
      this.llblUrlSmppProviders.Name = "llblUrlSmppProviders";
      this.llblUrlSmppProviders.Size = new System.Drawing.Size(56, 23);
      this.llblUrlSmppProviders.TabIndex = 14;
      this.llblUrlSmppProviders.TabStop = true;
      this.llblUrlSmppProviders.Text = "click here";
      this.llblUrlSmppProviders.LinkClicked += new System.Windows.Forms.LinkLabelLinkClickedEventHandler(this.llblUrlSmppProviders_LinkClicked);
      // 
      // Label9
      // 
      this.Label9.Location = new System.Drawing.Point(354, 75);
      this.Label9.Name = "Label9";
      this.Label9.Size = new System.Drawing.Size(141, 23);
      this.Label9.TabIndex = 13;
      this.Label9.Text = "For a list of SMPP providers,";
      // 
      // btnDisconnect
      // 
      this.btnDisconnect.Location = new System.Drawing.Point(221, 69);
      this.btnDisconnect.Name = "btnDisconnect";
      this.btnDisconnect.Size = new System.Drawing.Size(127, 23);
      this.btnDisconnect.TabIndex = 12;
      this.btnDisconnect.Text = "Disconnect";
      this.btnDisconnect.Click += new System.EventHandler(this.btnDisconnect_Click);
      // 
      // btnConnect
      // 
      this.btnConnect.Location = new System.Drawing.Point(91, 69);
      this.btnConnect.Name = "btnConnect";
      this.btnConnect.Size = new System.Drawing.Size(127, 23);
      this.btnConnect.TabIndex = 11;
      this.btnConnect.Text = "Connect";
      this.btnConnect.Click += new System.EventHandler(this.btnConnect_Click);
      // 
      // GroupBox3
      // 
      this.GroupBox3.Controls.Add(this.llblUrlNotReceived);
      this.GroupBox3.Controls.Add(this.btnClearSent);
      this.GroupBox3.Controls.Add(this.lvSentMessages);
      this.GroupBox3.Location = new System.Drawing.Point(12, 264);
      this.GroupBox3.Name = "GroupBox3";
      this.GroupBox3.Size = new System.Drawing.Size(670, 126);
      this.GroupBox3.TabIndex = 2;
      this.GroupBox3.TabStop = false;
      this.GroupBox3.Text = "Sent Messages";
      // 
      // GroupBox4
      // 
      this.GroupBox4.Controls.Add(this.btnView);
      this.GroupBox4.Controls.Add(this.Label12);
      this.GroupBox4.Controls.Add(this.txtLogFile);
      this.GroupBox4.Controls.Add(this.txtResult);
      this.GroupBox4.Controls.Add(this.Label10);
      this.GroupBox4.Location = new System.Drawing.Point(12, 515);
      this.GroupBox4.Name = "GroupBox4";
      this.GroupBox4.Size = new System.Drawing.Size(670, 71);
      this.GroupBox4.TabIndex = 4;
      this.GroupBox4.TabStop = false;
      this.GroupBox4.Text = "Result && Logging";
      // 
      // Label10
      // 
      this.Label10.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
      this.Label10.Location = new System.Drawing.Point(20, 23);
      this.Label10.Name = "Label10";
      this.Label10.Size = new System.Drawing.Size(48, 16);
      this.Label10.TabIndex = 0;
      this.Label10.Text = "&Result:";
      // 
      // lblInfo
      // 
      this.lblInfo.AutoSize = true;
      this.lblInfo.Location = new System.Drawing.Point(9, 589);
      this.lblInfo.Name = "lblInfo";
      this.lblInfo.Size = new System.Drawing.Size(31, 13);
      this.lblInfo.TabIndex = 5;
      this.lblInfo.Text = "[Info]";
      // 
      // TmrCheckUpdate
      // 
      this.TmrCheckUpdate.Tick += new System.EventHandler(this.TmrCheckUpdate_Tick);
      // 
      // cbSecure
      // 
      this.cbSecure.AutoSize = true;
      this.cbSecure.Location = new System.Drawing.Point(552, 22);
      this.cbSecure.Name = "cbSecure";
      this.cbSecure.Size = new System.Drawing.Size(89, 17);
      this.cbSecure.TabIndex = 15;
      this.cbSecure.Text = "Secure (TLS)";
      this.cbSecure.UseVisualStyleBackColor = true;
      // 
      // frmSmpp
      // 
      this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
      this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
      this.ClientSize = new System.Drawing.Size(694, 613);
      this.Controls.Add(this.lblInfo);
      this.Controls.Add(this.GroupBox5);
      this.Controls.Add(this.GroupBox2);
      this.Controls.Add(this.Label6);
      this.Controls.Add(this.GroupBox3);
      this.Controls.Add(this.GroupBox4);
      this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedDialog;
      this.MaximizeBox = false;
      this.MinimizeBox = false;
      this.Name = "frmSmpp";
      this.Text = "Auron SMS Component - C#.NET SMPP Demo";
      this.FormClosing += new System.Windows.Forms.FormClosingEventHandler(this.frmSmpp_FormClosing);
      this.Load += new System.EventHandler(this.frmSmpp_Load);
      this.GroupBox5.ResumeLayout(false);
      this.GroupBox2.ResumeLayout(false);
      this.GroupBox2.PerformLayout();
      this.Label6.ResumeLayout(false);
      this.Label6.PerformLayout();
      this.GroupBox3.ResumeLayout(false);
      this.GroupBox4.ResumeLayout(false);
      this.GroupBox4.PerformLayout();
      this.ResumeLayout(false);
      this.PerformLayout();

        }

        #endregion

        internal System.Windows.Forms.Button btnAdvancedProviderSettings;
        internal System.Windows.Forms.ComboBox cbxBindType;
        internal System.Windows.Forms.Label Label5;
        internal System.Windows.Forms.TextBox txtServerPort;
        internal System.Windows.Forms.Label Label4;
        internal System.Windows.Forms.TextBox txtSystemPassword;
        internal System.Windows.Forms.TextBox txtSystemID;
        internal System.Windows.Forms.TextBox txtServer;
        internal System.Windows.Forms.Label Label3;
        internal System.Windows.Forms.Label Label2;
        internal System.Windows.Forms.Label Label1;
        internal System.Windows.Forms.Label Label12;
        internal System.Windows.Forms.LinkLabel llblUrlNotReceived;
        internal System.Windows.Forms.Button btnView;
        internal System.Windows.Forms.GroupBox GroupBox5;
        internal System.Windows.Forms.Button btnClearReceived;
        internal System.Windows.Forms.ListView lvReceivedMessages;
        internal System.Windows.Forms.TextBox txtLogFile;
        internal System.Windows.Forms.Timer TmrCheckReceive;
        internal System.Windows.Forms.Button btnClearSent;
        internal System.Windows.Forms.TextBox txtResult;
        internal System.Windows.Forms.ListView lvSentMessages;
        internal System.Windows.Forms.GroupBox GroupBox2;
        internal System.Windows.Forms.LinkLabel llblUrlRecipientFormat;
        internal System.Windows.Forms.Button btnSendOptions;
        internal System.Windows.Forms.Button btnSend;
        internal System.Windows.Forms.Label Label8;
        internal System.Windows.Forms.TextBox txtBody;
        internal System.Windows.Forms.Label Label7;
        internal System.Windows.Forms.TextBox txtToAddress;
        internal System.Windows.Forms.GroupBox Label6;
        internal System.Windows.Forms.LinkLabel llblUrlSmppProviders;
        internal System.Windows.Forms.Label Label9;
        internal System.Windows.Forms.Button btnDisconnect;
        internal System.Windows.Forms.Button btnConnect;
        internal System.Windows.Forms.GroupBox GroupBox3;
        internal System.Windows.Forms.GroupBox GroupBox4;
        internal System.Windows.Forms.Label Label10;
        private System.Windows.Forms.Label lblInfo;
        private System.Windows.Forms.ComboBox cbxDataCoding;
        private System.Windows.Forms.Label label11;
        internal System.Windows.Forms.Timer TmrCheckUpdate;
    private System.Windows.Forms.CheckBox cbSecure;
  }
}