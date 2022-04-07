namespace Demo
{
    partial class frmGsm
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
      this.Label7 = new System.Windows.Forms.Label();
      this.GroupBox1 = new System.Windows.Forms.GroupBox();
      this.txtPort = new System.Windows.Forms.TextBox();
      this.label13 = new System.Windows.Forms.Label();
      this.label12 = new System.Windows.Forms.Label();
      this.txtIP = new System.Windows.Forms.TextBox();
      this.txtPincode = new System.Windows.Forms.TextBox();
      this.cbxDeviceSpeed = new System.Windows.Forms.ComboBox();
      this.label9 = new System.Windows.Forms.Label();
      this.Label2 = new System.Windows.Forms.Label();
      this.cbxDevices = new System.Windows.Forms.ComboBox();
      this.Label1 = new System.Windows.Forms.Label();
      this.GroupBox5 = new System.Windows.Forms.GroupBox();
      this.btnView = new System.Windows.Forms.Button();
      this.Label3 = new System.Windows.Forms.Label();
      this.txtResult = new System.Windows.Forms.TextBox();
      this.txtLogFile = new System.Windows.Forms.TextBox();
      this.Label6 = new System.Windows.Forms.Label();
      this.groupBox6 = new System.Windows.Forms.GroupBox();
      this.btnReceiveOptions = new System.Windows.Forms.Button();
      this.label10 = new System.Windows.Forms.Label();
      this.label8 = new System.Windows.Forms.Label();
      this.btnReceive = new System.Windows.Forms.Button();
      this.lvReceivedMessages = new System.Windows.Forms.ListView();
      this.lvSentMessages = new System.Windows.Forms.ListView();
      this.GroupBox2 = new System.Windows.Forms.GroupBox();
      this.cbxDataCoding = new System.Windows.Forms.ComboBox();
      this.label11 = new System.Windows.Forms.Label();
      this.llblUrlRecipientFormat = new System.Windows.Forms.LinkLabel();
      this.btnSendOptions = new System.Windows.Forms.Button();
      this.Label5 = new System.Windows.Forms.Label();
      this.Label4 = new System.Windows.Forms.Label();
      this.txtToAddress = new System.Windows.Forms.TextBox();
      this.txtBody = new System.Windows.Forms.TextBox();
      this.btnSend = new System.Windows.Forms.Button();
      this.ctlListGsmModems = new System.Windows.Forms.LinkLabel();
      this.lblInfo = new System.Windows.Forms.Label();
      this.GroupBox1.SuspendLayout();
      this.GroupBox5.SuspendLayout();
      this.groupBox6.SuspendLayout();
      this.GroupBox2.SuspendLayout();
      this.SuspendLayout();
      // 
      // Label7
      // 
      this.Label7.Location = new System.Drawing.Point(15, 9);
      this.Label7.Name = "Label7";
      this.Label7.Size = new System.Drawing.Size(528, 28);
      this.Label7.TabIndex = 0;
      this.Label7.Text = "This demo requires a GSM modem or GSM phone connected to your computer. A SIM car" +
    "d is required in this GSM modem. For a list of recommended GSM modems,";
      // 
      // GroupBox1
      // 
      this.GroupBox1.Controls.Add(this.txtPort);
      this.GroupBox1.Controls.Add(this.label13);
      this.GroupBox1.Controls.Add(this.label12);
      this.GroupBox1.Controls.Add(this.txtIP);
      this.GroupBox1.Controls.Add(this.txtPincode);
      this.GroupBox1.Controls.Add(this.cbxDeviceSpeed);
      this.GroupBox1.Controls.Add(this.label9);
      this.GroupBox1.Controls.Add(this.Label2);
      this.GroupBox1.Controls.Add(this.cbxDevices);
      this.GroupBox1.Controls.Add(this.Label1);
      this.GroupBox1.Location = new System.Drawing.Point(12, 40);
      this.GroupBox1.Name = "GroupBox1";
      this.GroupBox1.Size = new System.Drawing.Size(578, 76);
      this.GroupBox1.TabIndex = 2;
      this.GroupBox1.TabStop = false;
      this.GroupBox1.Text = "GSM Modem/Phone Connection Properties";
      // 
      // txtPort
      // 
      this.txtPort.Location = new System.Drawing.Point(321, 47);
      this.txtPort.Name = "txtPort";
      this.txtPort.Size = new System.Drawing.Size(87, 20);
      this.txtPort.TabIndex = 9;
      // 
      // label13
      // 
      this.label13.AutoSize = true;
      this.label13.Location = new System.Drawing.Point(249, 50);
      this.label13.Name = "label13";
      this.label13.Size = new System.Drawing.Size(29, 13);
      this.label13.TabIndex = 8;
      this.label13.Text = "Port:";
      // 
      // label12
      // 
      this.label12.Location = new System.Drawing.Point(16, 50);
      this.label12.Name = "label12";
      this.label12.Size = new System.Drawing.Size(56, 16);
      this.label12.TabIndex = 6;
      this.label12.Text = "IP/Host:";
      // 
      // txtIP
      // 
      this.txtIP.Location = new System.Drawing.Point(80, 47);
      this.txtIP.Name = "txtIP";
      this.txtIP.Size = new System.Drawing.Size(163, 20);
      this.txtIP.TabIndex = 7;
      this.txtIP.TextChanged += new System.EventHandler(this.txtIP_TextChanged);
      // 
      // txtPincode
      // 
      this.txtPincode.Location = new System.Drawing.Point(490, 20);
      this.txtPincode.Name = "txtPincode";
      this.txtPincode.PasswordChar = '*';
      this.txtPincode.Size = new System.Drawing.Size(77, 20);
      this.txtPincode.TabIndex = 5;
      // 
      // cbxDeviceSpeed
      // 
      this.cbxDeviceSpeed.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
      this.cbxDeviceSpeed.Location = new System.Drawing.Point(321, 19);
      this.cbxDeviceSpeed.Name = "cbxDeviceSpeed";
      this.cbxDeviceSpeed.Size = new System.Drawing.Size(87, 21);
      this.cbxDeviceSpeed.TabIndex = 3;
      // 
      // label9
      // 
      this.label9.AutoSize = true;
      this.label9.Location = new System.Drawing.Point(435, 25);
      this.label9.Name = "label9";
      this.label9.Size = new System.Drawing.Size(49, 13);
      this.label9.TabIndex = 4;
      this.label9.Text = "Pin&code:";
      // 
      // Label2
      // 
      this.Label2.AutoSize = true;
      this.Label2.Location = new System.Drawing.Point(249, 22);
      this.Label2.Name = "Label2";
      this.Label2.Size = new System.Drawing.Size(41, 13);
      this.Label2.TabIndex = 2;
      this.Label2.Text = "&Speed:";
      // 
      // cbxDevices
      // 
      this.cbxDevices.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
      this.cbxDevices.Location = new System.Drawing.Point(80, 19);
      this.cbxDevices.Name = "cbxDevices";
      this.cbxDevices.Size = new System.Drawing.Size(163, 21);
      this.cbxDevices.TabIndex = 1;
      this.cbxDevices.SelectionChangeCommitted += new System.EventHandler(this.cbxDevices_SelectionChangeCommitted);
      // 
      // Label1
      // 
      this.Label1.Location = new System.Drawing.Point(16, 22);
      this.Label1.Name = "Label1";
      this.Label1.Size = new System.Drawing.Size(44, 16);
      this.Label1.TabIndex = 0;
      this.Label1.Text = "&Device:";
      // 
      // GroupBox5
      // 
      this.GroupBox5.Controls.Add(this.btnView);
      this.GroupBox5.Controls.Add(this.Label3);
      this.GroupBox5.Controls.Add(this.txtResult);
      this.GroupBox5.Controls.Add(this.txtLogFile);
      this.GroupBox5.Controls.Add(this.Label6);
      this.GroupBox5.Location = new System.Drawing.Point(12, 562);
      this.GroupBox5.Name = "GroupBox5";
      this.GroupBox5.Size = new System.Drawing.Size(584, 71);
      this.GroupBox5.TabIndex = 5;
      this.GroupBox5.TabStop = false;
      this.GroupBox5.Text = "Result && Logging";
      // 
      // btnView
      // 
      this.btnView.Location = new System.Drawing.Point(490, 43);
      this.btnView.Name = "btnView";
      this.btnView.Size = new System.Drawing.Size(77, 23);
      this.btnView.TabIndex = 4;
      this.btnView.Text = "&View...";
      this.btnView.Click += new System.EventHandler(this.btnView_Click);
      // 
      // Label3
      // 
      this.Label3.Location = new System.Drawing.Point(16, 47);
      this.Label3.Name = "Label3";
      this.Label3.Size = new System.Drawing.Size(52, 16);
      this.Label3.TabIndex = 2;
      this.Label3.Text = "Lo&g file:";
      // 
      // txtResult
      // 
      this.txtResult.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
      this.txtResult.Location = new System.Drawing.Point(80, 19);
      this.txtResult.Name = "txtResult";
      this.txtResult.ReadOnly = true;
      this.txtResult.Size = new System.Drawing.Size(487, 20);
      this.txtResult.TabIndex = 1;
      // 
      // txtLogFile
      // 
      this.txtLogFile.Location = new System.Drawing.Point(80, 43);
      this.txtLogFile.Name = "txtLogFile";
      this.txtLogFile.Size = new System.Drawing.Size(404, 20);
      this.txtLogFile.TabIndex = 3;
      // 
      // Label6
      // 
      this.Label6.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
      this.Label6.Location = new System.Drawing.Point(16, 23);
      this.Label6.Name = "Label6";
      this.Label6.Size = new System.Drawing.Size(48, 16);
      this.Label6.TabIndex = 0;
      this.Label6.Text = "Res&ult:";
      // 
      // groupBox6
      // 
      this.groupBox6.Controls.Add(this.btnReceiveOptions);
      this.groupBox6.Controls.Add(this.label10);
      this.groupBox6.Controls.Add(this.label8);
      this.groupBox6.Controls.Add(this.btnReceive);
      this.groupBox6.Controls.Add(this.lvReceivedMessages);
      this.groupBox6.Controls.Add(this.lvSentMessages);
      this.groupBox6.Location = new System.Drawing.Point(12, 293);
      this.groupBox6.Name = "groupBox6";
      this.groupBox6.Size = new System.Drawing.Size(584, 263);
      this.groupBox6.TabIndex = 4;
      this.groupBox6.TabStop = false;
      this.groupBox6.Text = "Messages";
      // 
      // btnReceiveOptions
      // 
      this.btnReceiveOptions.Location = new System.Drawing.Point(490, 231);
      this.btnReceiveOptions.Name = "btnReceiveOptions";
      this.btnReceiveOptions.Size = new System.Drawing.Size(77, 24);
      this.btnReceiveOptions.TabIndex = 5;
      this.btnReceiveOptions.Text = "A&dvanced...";
      this.btnReceiveOptions.Click += new System.EventHandler(this.btnReceiveOptions_Click);
      // 
      // label10
      // 
      this.label10.Location = new System.Drawing.Point(16, 159);
      this.label10.Name = "label10";
      this.label10.Size = new System.Drawing.Size(56, 16);
      this.label10.TabIndex = 3;
      this.label10.Text = "&Received:";
      // 
      // label8
      // 
      this.label8.Location = new System.Drawing.Point(16, 23);
      this.label8.Name = "label8";
      this.label8.Size = new System.Drawing.Size(56, 16);
      this.label8.TabIndex = 0;
      this.label8.Text = "Se&nt:";
      // 
      // btnReceive
      // 
      this.btnReceive.Location = new System.Drawing.Point(80, 125);
      this.btnReceive.Name = "btnReceive";
      this.btnReceive.Size = new System.Drawing.Size(404, 24);
      this.btnReceive.TabIndex = 2;
      this.btnReceive.Text = "Re&ceive SMS / Delivery Reports";
      this.btnReceive.Click += new System.EventHandler(this.btnReceive_Click);
      // 
      // lvReceivedMessages
      // 
      this.lvReceivedMessages.Location = new System.Drawing.Point(80, 155);
      this.lvReceivedMessages.Name = "lvReceivedMessages";
      this.lvReceivedMessages.Size = new System.Drawing.Size(404, 100);
      this.lvReceivedMessages.TabIndex = 4;
      this.lvReceivedMessages.UseCompatibleStateImageBehavior = false;
      this.lvReceivedMessages.View = System.Windows.Forms.View.Details;
      // 
      // lvSentMessages
      // 
      this.lvSentMessages.Location = new System.Drawing.Point(80, 19);
      this.lvSentMessages.Name = "lvSentMessages";
      this.lvSentMessages.Size = new System.Drawing.Size(404, 100);
      this.lvSentMessages.TabIndex = 1;
      this.lvSentMessages.UseCompatibleStateImageBehavior = false;
      this.lvSentMessages.View = System.Windows.Forms.View.Details;
      // 
      // GroupBox2
      // 
      this.GroupBox2.Controls.Add(this.cbxDataCoding);
      this.GroupBox2.Controls.Add(this.label11);
      this.GroupBox2.Controls.Add(this.llblUrlRecipientFormat);
      this.GroupBox2.Controls.Add(this.btnSendOptions);
      this.GroupBox2.Controls.Add(this.Label5);
      this.GroupBox2.Controls.Add(this.Label4);
      this.GroupBox2.Controls.Add(this.txtToAddress);
      this.GroupBox2.Controls.Add(this.txtBody);
      this.GroupBox2.Controls.Add(this.btnSend);
      this.GroupBox2.Location = new System.Drawing.Point(12, 122);
      this.GroupBox2.Name = "GroupBox2";
      this.GroupBox2.Size = new System.Drawing.Size(584, 165);
      this.GroupBox2.TabIndex = 3;
      this.GroupBox2.TabStop = false;
      this.GroupBox2.Text = "Send Message";
      // 
      // cbxDataCoding
      // 
      this.cbxDataCoding.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
      this.cbxDataCoding.FormattingEnabled = true;
      this.cbxDataCoding.Location = new System.Drawing.Point(321, 18);
      this.cbxDataCoding.Name = "cbxDataCoding";
      this.cbxDataCoding.Size = new System.Drawing.Size(163, 21);
      this.cbxDataCoding.TabIndex = 3;
      // 
      // label11
      // 
      this.label11.AutoSize = true;
      this.label11.Location = new System.Drawing.Point(247, 23);
      this.label11.Name = "label11";
      this.label11.Size = new System.Drawing.Size(69, 13);
      this.label11.TabIndex = 2;
      this.label11.Text = "Data Coding:";
      // 
      // llblUrlRecipientFormat
      // 
      this.llblUrlRecipientFormat.Location = new System.Drawing.Point(490, 23);
      this.llblUrlRecipientFormat.Name = "llblUrlRecipientFormat";
      this.llblUrlRecipientFormat.Size = new System.Drawing.Size(88, 16);
      this.llblUrlRecipientFormat.TabIndex = 4;
      this.llblUrlRecipientFormat.TabStop = true;
      this.llblUrlRecipientFormat.Text = "Number format";
      this.llblUrlRecipientFormat.LinkClicked += new System.Windows.Forms.LinkLabelLinkClickedEventHandler(this.llblUrlRecipientFormat_LinkClicked);
      // 
      // btnSendOptions
      // 
      this.btnSendOptions.Location = new System.Drawing.Point(490, 92);
      this.btnSendOptions.Name = "btnSendOptions";
      this.btnSendOptions.Size = new System.Drawing.Size(77, 24);
      this.btnSendOptions.TabIndex = 7;
      this.btnSendOptions.Text = "&Advanced...";
      this.btnSendOptions.Click += new System.EventHandler(this.btnSendOptions_Click);
      // 
      // Label5
      // 
      this.Label5.Location = new System.Drawing.Point(16, 48);
      this.Label5.Name = "Label5";
      this.Label5.Size = new System.Drawing.Size(56, 16);
      this.Label5.TabIndex = 5;
      this.Label5.Text = "&Body:";
      // 
      // Label4
      // 
      this.Label4.Location = new System.Drawing.Point(16, 23);
      this.Label4.Name = "Label4";
      this.Label4.Size = new System.Drawing.Size(64, 16);
      this.Label4.TabIndex = 0;
      this.Label4.Text = "&ToAddress:";
      // 
      // txtToAddress
      // 
      this.txtToAddress.AcceptsReturn = true;
      this.txtToAddress.Location = new System.Drawing.Point(80, 18);
      this.txtToAddress.Name = "txtToAddress";
      this.txtToAddress.Size = new System.Drawing.Size(163, 20);
      this.txtToAddress.TabIndex = 1;
      // 
      // txtBody
      // 
      this.txtBody.Location = new System.Drawing.Point(80, 45);
      this.txtBody.Multiline = true;
      this.txtBody.Name = "txtBody";
      this.txtBody.Size = new System.Drawing.Size(404, 71);
      this.txtBody.TabIndex = 6;
      // 
      // btnSend
      // 
      this.btnSend.Location = new System.Drawing.Point(80, 122);
      this.btnSend.Name = "btnSend";
      this.btnSend.Size = new System.Drawing.Size(404, 24);
      this.btnSend.TabIndex = 8;
      this.btnSend.Text = "S&end";
      this.btnSend.Click += new System.EventHandler(this.btnSend_Click);
      // 
      // ctlListGsmModems
      // 
      this.ctlListGsmModems.Location = new System.Drawing.Point(275, 22);
      this.ctlListGsmModems.Name = "ctlListGsmModems";
      this.ctlListGsmModems.Size = new System.Drawing.Size(56, 12);
      this.ctlListGsmModems.TabIndex = 1;
      this.ctlListGsmModems.TabStop = true;
      this.ctlListGsmModems.Text = "click here";
      // 
      // lblInfo
      // 
      this.lblInfo.AutoSize = true;
      this.lblInfo.Location = new System.Drawing.Point(9, 639);
      this.lblInfo.Name = "lblInfo";
      this.lblInfo.Size = new System.Drawing.Size(31, 13);
      this.lblInfo.TabIndex = 6;
      this.lblInfo.Text = "[Info]";
      // 
      // frmGsm
      // 
      this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
      this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
      this.ClientSize = new System.Drawing.Size(611, 669);
      this.Controls.Add(this.lblInfo);
      this.Controls.Add(this.ctlListGsmModems);
      this.Controls.Add(this.GroupBox5);
      this.Controls.Add(this.groupBox6);
      this.Controls.Add(this.GroupBox2);
      this.Controls.Add(this.GroupBox1);
      this.Controls.Add(this.Label7);
      this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedDialog;
      this.MaximizeBox = false;
      this.MinimizeBox = false;
      this.Name = "frmGsm";
      this.Text = "Auron SMS Component - C#.NET GSM Demo";
      this.Load += new System.EventHandler(this.frmGsm_Load);
      this.GroupBox1.ResumeLayout(false);
      this.GroupBox1.PerformLayout();
      this.GroupBox5.ResumeLayout(false);
      this.GroupBox5.PerformLayout();
      this.groupBox6.ResumeLayout(false);
      this.GroupBox2.ResumeLayout(false);
      this.GroupBox2.PerformLayout();
      this.ResumeLayout(false);
      this.PerformLayout();

        }

        #endregion

        internal System.Windows.Forms.Label Label7;
        internal System.Windows.Forms.GroupBox GroupBox1;
        internal System.Windows.Forms.ComboBox cbxDeviceSpeed;
        internal System.Windows.Forms.Label Label2;
        internal System.Windows.Forms.ComboBox cbxDevices;
        internal System.Windows.Forms.Label Label1;
        internal System.Windows.Forms.GroupBox GroupBox5;
        internal System.Windows.Forms.Button btnView;
        internal System.Windows.Forms.Label Label3;
        internal System.Windows.Forms.TextBox txtResult;
        internal System.Windows.Forms.TextBox txtLogFile;
        internal System.Windows.Forms.Label Label6;
        internal System.Windows.Forms.GroupBox groupBox6;
        internal System.Windows.Forms.ListView lvSentMessages;
        internal System.Windows.Forms.Button btnReceiveOptions;
        internal System.Windows.Forms.Button btnReceive;
        internal System.Windows.Forms.ListView lvReceivedMessages;
        internal System.Windows.Forms.GroupBox GroupBox2;
        internal System.Windows.Forms.LinkLabel llblUrlRecipientFormat;
        internal System.Windows.Forms.Button btnSendOptions;
        internal System.Windows.Forms.Label Label5;
        internal System.Windows.Forms.Label Label4;
        internal System.Windows.Forms.TextBox txtToAddress;
        internal System.Windows.Forms.TextBox txtBody;
        internal System.Windows.Forms.Button btnSend;
        private System.Windows.Forms.Label label9;
        internal System.Windows.Forms.TextBox txtPincode;
        internal System.Windows.Forms.LinkLabel ctlListGsmModems;
        private System.Windows.Forms.Label lblInfo;
        internal System.Windows.Forms.Label label8;
        internal System.Windows.Forms.Label label10;
        private System.Windows.Forms.ComboBox cbxDataCoding;
        private System.Windows.Forms.Label label11;
    private System.Windows.Forms.TextBox txtPort;
    internal System.Windows.Forms.Label label13;
    internal System.Windows.Forms.Label label12;
    private System.Windows.Forms.TextBox txtIP;
  }
}