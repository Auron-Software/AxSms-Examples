namespace Demo
{
    partial class frmSmppServer
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
      this.txtPort = new System.Windows.Forms.TextBox();
      this.label1 = new System.Windows.Forms.Label();
      this.lblInfo = new System.Windows.Forms.Label();
      this.GroupBox4 = new System.Windows.Forms.GroupBox();
      this.btnView = new System.Windows.Forms.Button();
      this.Label12 = new System.Windows.Forms.Label();
      this.txtLogFile = new System.Windows.Forms.TextBox();
      this.txtResult = new System.Windows.Forms.TextBox();
      this.Label10 = new System.Windows.Forms.Label();
      this.grpIncommingMessages = new System.Windows.Forms.GroupBox();
      this.lvMessages = new System.Windows.Forms.ListView();
      this.grpSessions = new System.Windows.Forms.GroupBox();
      this.lvSessions = new System.Windows.Forms.ListView();
      this.tmrHandleSessions = new System.Windows.Forms.Timer(this.components);
      this.grpSendMessage = new System.Windows.Forms.GroupBox();
      this.cbxSystemID = new System.Windows.Forms.ComboBox();
      this.label2 = new System.Windows.Forms.Label();
      this.cbxDataCoding = new System.Windows.Forms.ComboBox();
      this.label11 = new System.Windows.Forms.Label();
      this.llblUrlRecipientFormat = new System.Windows.Forms.LinkLabel();
      this.btnSendOptions = new System.Windows.Forms.Button();
      this.Label5 = new System.Windows.Forms.Label();
      this.Label4 = new System.Windows.Forms.Label();
      this.txtToAddress = new System.Windows.Forms.TextBox();
      this.txtBody = new System.Windows.Forms.TextBox();
      this.btnDeliver = new System.Windows.Forms.Button();
      this.grbControlPanel = new System.Windows.Forms.GroupBox();
      this.label6 = new System.Windows.Forms.Label();
      this.btnAddClient = new System.Windows.Forms.Button();
      this.btnStopServer = new System.Windows.Forms.Button();
      this.btnStartServer = new System.Windows.Forms.Button();
      this.label3 = new System.Windows.Forms.Label();
      this.cbxCertificate = new System.Windows.Forms.ComboBox();
      this.cbxIpVersion = new System.Windows.Forms.ComboBox();
      this.GroupBox4.SuspendLayout();
      this.grpIncommingMessages.SuspendLayout();
      this.grpSessions.SuspendLayout();
      this.grpSendMessage.SuspendLayout();
      this.grbControlPanel.SuspendLayout();
      this.SuspendLayout();
      // 
      // txtPort
      // 
      this.txtPort.Location = new System.Drawing.Point(61, 20);
      this.txtPort.Name = "txtPort";
      this.txtPort.Size = new System.Drawing.Size(62, 20);
      this.txtPort.TabIndex = 1;
      this.txtPort.Text = "2775";
      // 
      // label1
      // 
      this.label1.AutoSize = true;
      this.label1.Location = new System.Drawing.Point(16, 24);
      this.label1.Name = "label1";
      this.label1.Size = new System.Drawing.Size(29, 13);
      this.label1.TabIndex = 0;
      this.label1.Text = "Port:";
      // 
      // lblInfo
      // 
      this.lblInfo.AutoSize = true;
      this.lblInfo.Location = new System.Drawing.Point(12, 634);
      this.lblInfo.Name = "lblInfo";
      this.lblInfo.Size = new System.Drawing.Size(31, 13);
      this.lblInfo.TabIndex = 5;
      this.lblInfo.Text = "[Info]";
      // 
      // GroupBox4
      // 
      this.GroupBox4.Controls.Add(this.btnView);
      this.GroupBox4.Controls.Add(this.Label12);
      this.GroupBox4.Controls.Add(this.txtLogFile);
      this.GroupBox4.Controls.Add(this.txtResult);
      this.GroupBox4.Controls.Add(this.Label10);
      this.GroupBox4.Location = new System.Drawing.Point(15, 558);
      this.GroupBox4.Name = "GroupBox4";
      this.GroupBox4.Size = new System.Drawing.Size(667, 73);
      this.GroupBox4.TabIndex = 4;
      this.GroupBox4.TabStop = false;
      this.GroupBox4.Text = "Result && Logging";
      // 
      // btnView
      // 
      this.btnView.Location = new System.Drawing.Point(547, 40);
      this.btnView.Name = "btnView";
      this.btnView.Size = new System.Drawing.Size(104, 23);
      this.btnView.TabIndex = 4;
      this.btnView.Text = "&View...";
      this.btnView.Click += new System.EventHandler(this.btnView_Click);
      // 
      // Label12
      // 
      this.Label12.Location = new System.Drawing.Point(20, 47);
      this.Label12.Name = "Label12";
      this.Label12.Size = new System.Drawing.Size(52, 16);
      this.Label12.TabIndex = 2;
      this.Label12.Text = "Lo&g file:";
      // 
      // txtLogFile
      // 
      this.txtLogFile.Location = new System.Drawing.Point(80, 43);
      this.txtLogFile.Name = "txtLogFile";
      this.txtLogFile.Size = new System.Drawing.Size(461, 20);
      this.txtLogFile.TabIndex = 3;
      // 
      // txtResult
      // 
      this.txtResult.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
      this.txtResult.Location = new System.Drawing.Point(80, 19);
      this.txtResult.Name = "txtResult";
      this.txtResult.ReadOnly = true;
      this.txtResult.Size = new System.Drawing.Size(461, 20);
      this.txtResult.TabIndex = 1;
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
      // grpIncommingMessages
      // 
      this.grpIncommingMessages.Controls.Add(this.lvMessages);
      this.grpIncommingMessages.Enabled = false;
      this.grpIncommingMessages.Location = new System.Drawing.Point(15, 221);
      this.grpIncommingMessages.Name = "grpIncommingMessages";
      this.grpIncommingMessages.Size = new System.Drawing.Size(667, 162);
      this.grpIncommingMessages.TabIndex = 2;
      this.grpIncommingMessages.TabStop = false;
      this.grpIncommingMessages.Text = "Messages";
      // 
      // lvMessages
      // 
      this.lvMessages.Location = new System.Drawing.Point(19, 19);
      this.lvMessages.Name = "lvMessages";
      this.lvMessages.Size = new System.Drawing.Size(632, 135);
      this.lvMessages.TabIndex = 0;
      this.lvMessages.UseCompatibleStateImageBehavior = false;
      this.lvMessages.View = System.Windows.Forms.View.Details;
      // 
      // grpSessions
      // 
      this.grpSessions.AccessibleRole = System.Windows.Forms.AccessibleRole.None;
      this.grpSessions.Controls.Add(this.lvSessions);
      this.grpSessions.Enabled = false;
      this.grpSessions.Location = new System.Drawing.Point(15, 107);
      this.grpSessions.Name = "grpSessions";
      this.grpSessions.Size = new System.Drawing.Size(667, 108);
      this.grpSessions.TabIndex = 1;
      this.grpSessions.TabStop = false;
      this.grpSessions.Text = "Sessions";
      // 
      // lvSessions
      // 
      this.lvSessions.Location = new System.Drawing.Point(19, 19);
      this.lvSessions.Name = "lvSessions";
      this.lvSessions.Size = new System.Drawing.Size(632, 81);
      this.lvSessions.TabIndex = 0;
      this.lvSessions.UseCompatibleStateImageBehavior = false;
      this.lvSessions.View = System.Windows.Forms.View.Details;
      // 
      // tmrHandleSessions
      // 
      this.tmrHandleSessions.Interval = 500;
      this.tmrHandleSessions.Tick += new System.EventHandler(this.tmrHandleSessions_Tick);
      // 
      // grpSendMessage
      // 
      this.grpSendMessage.Controls.Add(this.cbxSystemID);
      this.grpSendMessage.Controls.Add(this.label2);
      this.grpSendMessage.Controls.Add(this.cbxDataCoding);
      this.grpSendMessage.Controls.Add(this.label11);
      this.grpSendMessage.Controls.Add(this.llblUrlRecipientFormat);
      this.grpSendMessage.Controls.Add(this.btnSendOptions);
      this.grpSendMessage.Controls.Add(this.Label5);
      this.grpSendMessage.Controls.Add(this.Label4);
      this.grpSendMessage.Controls.Add(this.txtToAddress);
      this.grpSendMessage.Controls.Add(this.txtBody);
      this.grpSendMessage.Controls.Add(this.btnDeliver);
      this.grpSendMessage.Enabled = false;
      this.grpSendMessage.Location = new System.Drawing.Point(15, 389);
      this.grpSendMessage.Name = "grpSendMessage";
      this.grpSendMessage.Size = new System.Drawing.Size(667, 163);
      this.grpSendMessage.TabIndex = 3;
      this.grpSendMessage.TabStop = false;
      this.grpSendMessage.Text = "Send Message";
      // 
      // cbxSystemID
      // 
      this.cbxSystemID.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
      this.cbxSystemID.FormattingEnabled = true;
      this.cbxSystemID.Location = new System.Drawing.Point(80, 19);
      this.cbxSystemID.Name = "cbxSystemID";
      this.cbxSystemID.Size = new System.Drawing.Size(182, 21);
      this.cbxSystemID.TabIndex = 1;
      // 
      // label2
      // 
      this.label2.AutoSize = true;
      this.label2.Location = new System.Drawing.Point(16, 22);
      this.label2.Name = "label2";
      this.label2.Size = new System.Drawing.Size(53, 13);
      this.label2.TabIndex = 0;
      this.label2.Text = "SystemId:";
      // 
      // cbxDataCoding
      // 
      this.cbxDataCoding.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
      this.cbxDataCoding.FormattingEnabled = true;
      this.cbxDataCoding.Items.AddRange(new object[] {
            "Text",
            "Unicode",
            "Data",
            "Data (UDH)"});
      this.cbxDataCoding.Location = new System.Drawing.Point(359, 19);
      this.cbxDataCoding.Name = "cbxDataCoding";
      this.cbxDataCoding.Size = new System.Drawing.Size(182, 21);
      this.cbxDataCoding.TabIndex = 3;
      // 
      // label11
      // 
      this.label11.AutoSize = true;
      this.label11.Location = new System.Drawing.Point(281, 22);
      this.label11.Name = "label11";
      this.label11.Size = new System.Drawing.Size(69, 13);
      this.label11.TabIndex = 2;
      this.label11.Text = "Data Coding:";
      // 
      // llblUrlRecipientFormat
      // 
      this.llblUrlRecipientFormat.Location = new System.Drawing.Point(547, 49);
      this.llblUrlRecipientFormat.Name = "llblUrlRecipientFormat";
      this.llblUrlRecipientFormat.Size = new System.Drawing.Size(95, 16);
      this.llblUrlRecipientFormat.TabIndex = 6;
      this.llblUrlRecipientFormat.TabStop = true;
      this.llblUrlRecipientFormat.Text = "Number format";
      this.llblUrlRecipientFormat.LinkClicked += new System.Windows.Forms.LinkLabelLinkClickedEventHandler(this.llblUrlRecipientFormat_LinkClicked);
      // 
      // btnSendOptions
      // 
      this.btnSendOptions.Location = new System.Drawing.Point(547, 128);
      this.btnSendOptions.Name = "btnSendOptions";
      this.btnSendOptions.Size = new System.Drawing.Size(104, 24);
      this.btnSendOptions.TabIndex = 11;
      this.btnSendOptions.Text = "&Advanced...";
      this.btnSendOptions.Click += new System.EventHandler(this.btnSendOptions_Click);
      // 
      // Label5
      // 
      this.Label5.Location = new System.Drawing.Point(16, 79);
      this.Label5.Name = "Label5";
      this.Label5.Size = new System.Drawing.Size(56, 16);
      this.Label5.TabIndex = 7;
      this.Label5.Text = "&Body:";
      // 
      // Label4
      // 
      this.Label4.Location = new System.Drawing.Point(16, 50);
      this.Label4.Name = "Label4";
      this.Label4.Size = new System.Drawing.Size(64, 16);
      this.Label4.TabIndex = 4;
      this.Label4.Text = "&ToAddress:";
      // 
      // txtToAddress
      // 
      this.txtToAddress.Location = new System.Drawing.Point(80, 46);
      this.txtToAddress.Name = "txtToAddress";
      this.txtToAddress.Size = new System.Drawing.Size(461, 20);
      this.txtToAddress.TabIndex = 5;
      // 
      // txtBody
      // 
      this.txtBody.Location = new System.Drawing.Point(80, 76);
      this.txtBody.Multiline = true;
      this.txtBody.Name = "txtBody";
      this.txtBody.Size = new System.Drawing.Size(461, 46);
      this.txtBody.TabIndex = 8;
      // 
      // btnDeliver
      // 
      this.btnDeliver.Location = new System.Drawing.Point(80, 128);
      this.btnDeliver.Name = "btnDeliver";
      this.btnDeliver.Size = new System.Drawing.Size(461, 24);
      this.btnDeliver.TabIndex = 10;
      this.btnDeliver.Text = "&Deliver";
      this.btnDeliver.Click += new System.EventHandler(this.btnDeliver_Click);
      // 
      // grbControlPanel
      // 
      this.grbControlPanel.Controls.Add(this.label6);
      this.grbControlPanel.Controls.Add(this.btnAddClient);
      this.grbControlPanel.Controls.Add(this.btnStopServer);
      this.grbControlPanel.Controls.Add(this.btnStartServer);
      this.grbControlPanel.Controls.Add(this.label3);
      this.grbControlPanel.Controls.Add(this.cbxCertificate);
      this.grbControlPanel.Controls.Add(this.cbxIpVersion);
      this.grbControlPanel.Controls.Add(this.txtPort);
      this.grbControlPanel.Controls.Add(this.label1);
      this.grbControlPanel.Location = new System.Drawing.Point(15, 12);
      this.grbControlPanel.Name = "grbControlPanel";
      this.grbControlPanel.Size = new System.Drawing.Size(667, 82);
      this.grbControlPanel.TabIndex = 0;
      this.grbControlPanel.TabStop = false;
      this.grbControlPanel.Text = "Control Panel";
      // 
      // label6
      // 
      this.label6.AutoSize = true;
      this.label6.Location = new System.Drawing.Point(357, 48);
      this.label6.Name = "label6";
      this.label6.Size = new System.Drawing.Size(248, 13);
      this.label6.TabIndex = 13;
      this.label6.Text = "(Server certificates in \'My\' store under current user.)";
      // 
      // btnAddClient
      // 
      this.btnAddClient.Location = new System.Drawing.Point(240, 47);
      this.btnAddClient.Name = "btnAddClient";
      this.btnAddClient.Size = new System.Drawing.Size(104, 24);
      this.btnAddClient.TabIndex = 12;
      this.btnAddClient.Text = "Add Client";
      this.btnAddClient.UseVisualStyleBackColor = true;
      this.btnAddClient.Click += new System.EventHandler(this.btnAddClient_Click);
      // 
      // btnStopServer
      // 
      this.btnStopServer.Enabled = false;
      this.btnStopServer.Location = new System.Drawing.Point(130, 47);
      this.btnStopServer.Name = "btnStopServer";
      this.btnStopServer.Size = new System.Drawing.Size(104, 24);
      this.btnStopServer.TabIndex = 11;
      this.btnStopServer.Text = "Stop Server";
      this.btnStopServer.UseVisualStyleBackColor = true;
      this.btnStopServer.Click += new System.EventHandler(this.btnStopServer_Click);
      // 
      // btnStartServer
      // 
      this.btnStartServer.Location = new System.Drawing.Point(20, 47);
      this.btnStartServer.Name = "btnStartServer";
      this.btnStartServer.Size = new System.Drawing.Size(104, 24);
      this.btnStartServer.TabIndex = 10;
      this.btnStartServer.Text = "Start Server";
      this.btnStartServer.UseVisualStyleBackColor = true;
      this.btnStartServer.Click += new System.EventHandler(this.btnStartServer_Click);
      // 
      // label3
      // 
      this.label3.AutoSize = true;
      this.label3.Location = new System.Drawing.Point(240, 24);
      this.label3.Name = "label3";
      this.label3.Size = new System.Drawing.Size(98, 13);
      this.label3.TabIndex = 9;
      this.label3.Text = "Security Certificate:";
      // 
      // cbxCertificate
      // 
      this.cbxCertificate.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
      this.cbxCertificate.FormattingEnabled = true;
      this.cbxCertificate.Location = new System.Drawing.Point(359, 20);
      this.cbxCertificate.Name = "cbxCertificate";
      this.cbxCertificate.Size = new System.Drawing.Size(292, 21);
      this.cbxCertificate.TabIndex = 8;
      // 
      // cbxIpVersion
      // 
      this.cbxIpVersion.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
      this.cbxIpVersion.FormattingEnabled = true;
      this.cbxIpVersion.Location = new System.Drawing.Point(131, 20);
      this.cbxIpVersion.Name = "cbxIpVersion";
      this.cbxIpVersion.Size = new System.Drawing.Size(103, 21);
      this.cbxIpVersion.TabIndex = 5;
      // 
      // frmSmppServer
      // 
      this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
      this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
      this.ClientSize = new System.Drawing.Size(694, 657);
      this.Controls.Add(this.grbControlPanel);
      this.Controls.Add(this.grpSendMessage);
      this.Controls.Add(this.grpSessions);
      this.Controls.Add(this.grpIncommingMessages);
      this.Controls.Add(this.lblInfo);
      this.Controls.Add(this.GroupBox4);
      this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedDialog;
      this.MaximizeBox = false;
      this.MinimizeBox = false;
      this.Name = "frmSmppServer";
      this.Text = "Auron SMS Component - C#.NET SMPP Server Demo";
      this.FormClosing += new System.Windows.Forms.FormClosingEventHandler(this.frmSmppServer_FormClosing);
      this.Load += new System.EventHandler(this.frmSmppServer_Load);
      this.GroupBox4.ResumeLayout(false);
      this.GroupBox4.PerformLayout();
      this.grpIncommingMessages.ResumeLayout(false);
      this.grpSessions.ResumeLayout(false);
      this.grpSendMessage.ResumeLayout(false);
      this.grpSendMessage.PerformLayout();
      this.grbControlPanel.ResumeLayout(false);
      this.grbControlPanel.PerformLayout();
      this.ResumeLayout(false);
      this.PerformLayout();

        }

        #endregion
        private System.Windows.Forms.TextBox txtPort;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label lblInfo;
        internal System.Windows.Forms.GroupBox GroupBox4;
        internal System.Windows.Forms.Button btnView;
        internal System.Windows.Forms.Label Label12;
        internal System.Windows.Forms.TextBox txtLogFile;
        internal System.Windows.Forms.TextBox txtResult;
        internal System.Windows.Forms.Label Label10;
        private System.Windows.Forms.GroupBox grpIncommingMessages;
        private System.Windows.Forms.GroupBox grpSessions;
        internal System.Windows.Forms.ListView lvSessions;
        private System.Windows.Forms.Timer tmrHandleSessions;
        internal System.Windows.Forms.ListView lvMessages;
        internal System.Windows.Forms.GroupBox grpSendMessage;
        private System.Windows.Forms.ComboBox cbxDataCoding;
        private System.Windows.Forms.Label label11;
        internal System.Windows.Forms.LinkLabel llblUrlRecipientFormat;
        internal System.Windows.Forms.Button btnSendOptions;
        internal System.Windows.Forms.Label Label5;
        internal System.Windows.Forms.Label Label4;
        internal System.Windows.Forms.TextBox txtToAddress;
        internal System.Windows.Forms.TextBox txtBody;
        internal System.Windows.Forms.Button btnDeliver;
        private System.Windows.Forms.ComboBox cbxSystemID;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.GroupBox grbControlPanel;
        private System.Windows.Forms.ComboBox cbxIpVersion;
    private System.Windows.Forms.Button btnAddClient;
    private System.Windows.Forms.Button btnStopServer;
    private System.Windows.Forms.Button btnStartServer;
    private System.Windows.Forms.Label label3;
    private System.Windows.Forms.ComboBox cbxCertificate;
    private System.Windows.Forms.Label label6;
  }
}