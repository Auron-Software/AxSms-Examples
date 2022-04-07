
namespace Demo
{
  partial class frmAndroid
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
      this.Label7 = new System.Windows.Forms.Label();
      this.GroupBox1 = new System.Windows.Forms.GroupBox();
      this.btnConnect = new System.Windows.Forms.Button();
      this.txtPort = new System.Windows.Forms.TextBox();
      this.label13 = new System.Windows.Forms.Label();
      this.label12 = new System.Windows.Forms.Label();
      this.txtIP = new System.Windows.Forms.TextBox();
      this.GroupBox2 = new System.Windows.Forms.GroupBox();
      this.Label5 = new System.Windows.Forms.Label();
      this.Label4 = new System.Windows.Forms.Label();
      this.txtToAddress = new System.Windows.Forms.TextBox();
      this.txtBody = new System.Windows.Forms.TextBox();
      this.btnSend = new System.Windows.Forms.Button();
      this.groupBox6 = new System.Windows.Forms.GroupBox();
      this.label10 = new System.Windows.Forms.Label();
      this.label8 = new System.Windows.Forms.Label();
      this.lvReceivedMessages = new System.Windows.Forms.ListView();
      this.lvSentMessages = new System.Windows.Forms.ListView();
      this.lblInfo = new System.Windows.Forms.Label();
      this.GroupBox5 = new System.Windows.Forms.GroupBox();
      this.btnView = new System.Windows.Forms.Button();
      this.Label3 = new System.Windows.Forms.Label();
      this.txtResult = new System.Windows.Forms.TextBox();
      this.txtLogFile = new System.Windows.Forms.TextBox();
      this.Label6 = new System.Windows.Forms.Label();
      this.tmrCheckReceive = new System.Windows.Forms.Timer(this.components);
      this.label1 = new System.Windows.Forms.Label();
      this.lnkAuronSMSAgentForAndroid = new System.Windows.Forms.LinkLabel();
      this.GroupBox1.SuspendLayout();
      this.GroupBox2.SuspendLayout();
      this.groupBox6.SuspendLayout();
      this.GroupBox5.SuspendLayout();
      this.SuspendLayout();
      // 
      // Label7
      // 
      this.Label7.Location = new System.Drawing.Point(12, 9);
      this.Label7.Name = "Label7";
      this.Label7.Size = new System.Drawing.Size(578, 28);
      this.Label7.TabIndex = 1;
      this.Label7.Text = "This demo requires you to have the Auron SMS Agent installed and ready on your An" +
    "droid phone. Your Android phone should be connected to the same network as this " +
    "PC.";
      // 
      // GroupBox1
      // 
      this.GroupBox1.Controls.Add(this.btnConnect);
      this.GroupBox1.Controls.Add(this.txtPort);
      this.GroupBox1.Controls.Add(this.label13);
      this.GroupBox1.Controls.Add(this.label12);
      this.GroupBox1.Controls.Add(this.txtIP);
      this.GroupBox1.Location = new System.Drawing.Point(12, 40);
      this.GroupBox1.Name = "GroupBox1";
      this.GroupBox1.Size = new System.Drawing.Size(578, 62);
      this.GroupBox1.TabIndex = 3;
      this.GroupBox1.TabStop = false;
      this.GroupBox1.Text = "Android Connection Properties";
      // 
      // btnConnect
      // 
      this.btnConnect.Location = new System.Drawing.Point(497, 26);
      this.btnConnect.Name = "btnConnect";
      this.btnConnect.Size = new System.Drawing.Size(77, 23);
      this.btnConnect.TabIndex = 10;
      this.btnConnect.Text = "Connect";
      this.btnConnect.UseVisualStyleBackColor = true;
      this.btnConnect.Click += new System.EventHandler(this.btnConnect_Click);
      // 
      // txtPort
      // 
      this.txtPort.Location = new System.Drawing.Point(321, 26);
      this.txtPort.Name = "txtPort";
      this.txtPort.Size = new System.Drawing.Size(87, 20);
      this.txtPort.TabIndex = 9;
      // 
      // label13
      // 
      this.label13.AutoSize = true;
      this.label13.Location = new System.Drawing.Point(249, 29);
      this.label13.Name = "label13";
      this.label13.Size = new System.Drawing.Size(29, 13);
      this.label13.TabIndex = 8;
      this.label13.Text = "Port:";
      // 
      // label12
      // 
      this.label12.Location = new System.Drawing.Point(16, 29);
      this.label12.Name = "label12";
      this.label12.Size = new System.Drawing.Size(56, 16);
      this.label12.TabIndex = 6;
      this.label12.Text = "IP:";
      // 
      // txtIP
      // 
      this.txtIP.Location = new System.Drawing.Point(80, 26);
      this.txtIP.Name = "txtIP";
      this.txtIP.Size = new System.Drawing.Size(163, 20);
      this.txtIP.TabIndex = 7;
      // 
      // GroupBox2
      // 
      this.GroupBox2.Controls.Add(this.Label5);
      this.GroupBox2.Controls.Add(this.Label4);
      this.GroupBox2.Controls.Add(this.txtToAddress);
      this.GroupBox2.Controls.Add(this.txtBody);
      this.GroupBox2.Controls.Add(this.btnSend);
      this.GroupBox2.Location = new System.Drawing.Point(12, 108);
      this.GroupBox2.Name = "GroupBox2";
      this.GroupBox2.Size = new System.Drawing.Size(584, 165);
      this.GroupBox2.TabIndex = 4;
      this.GroupBox2.TabStop = false;
      this.GroupBox2.Text = "Send Message";
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
      this.txtBody.Size = new System.Drawing.Size(498, 78);
      this.txtBody.TabIndex = 6;
      // 
      // btnSend
      // 
      this.btnSend.Location = new System.Drawing.Point(501, 129);
      this.btnSend.Name = "btnSend";
      this.btnSend.Size = new System.Drawing.Size(77, 23);
      this.btnSend.TabIndex = 8;
      this.btnSend.Text = "S&end";
      this.btnSend.Click += new System.EventHandler(this.btnSend_Click);
      // 
      // groupBox6
      // 
      this.groupBox6.Controls.Add(this.label10);
      this.groupBox6.Controls.Add(this.label8);
      this.groupBox6.Controls.Add(this.lvReceivedMessages);
      this.groupBox6.Controls.Add(this.lvSentMessages);
      this.groupBox6.Location = new System.Drawing.Point(12, 279);
      this.groupBox6.Name = "groupBox6";
      this.groupBox6.Size = new System.Drawing.Size(584, 244);
      this.groupBox6.TabIndex = 5;
      this.groupBox6.TabStop = false;
      this.groupBox6.Text = "Messages";
      // 
      // label10
      // 
      this.label10.Location = new System.Drawing.Point(16, 134);
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
      // lvReceivedMessages
      // 
      this.lvReceivedMessages.Location = new System.Drawing.Point(80, 130);
      this.lvReceivedMessages.Name = "lvReceivedMessages";
      this.lvReceivedMessages.Size = new System.Drawing.Size(498, 100);
      this.lvReceivedMessages.TabIndex = 4;
      this.lvReceivedMessages.UseCompatibleStateImageBehavior = false;
      this.lvReceivedMessages.View = System.Windows.Forms.View.Details;
      // 
      // lvSentMessages
      // 
      this.lvSentMessages.Location = new System.Drawing.Point(80, 19);
      this.lvSentMessages.Name = "lvSentMessages";
      this.lvSentMessages.Size = new System.Drawing.Size(498, 100);
      this.lvSentMessages.TabIndex = 1;
      this.lvSentMessages.UseCompatibleStateImageBehavior = false;
      this.lvSentMessages.View = System.Windows.Forms.View.Details;
      // 
      // lblInfo
      // 
      this.lblInfo.AutoSize = true;
      this.lblInfo.Location = new System.Drawing.Point(10, 607);
      this.lblInfo.Name = "lblInfo";
      this.lblInfo.Size = new System.Drawing.Size(31, 13);
      this.lblInfo.TabIndex = 8;
      this.lblInfo.Text = "[Info]";
      // 
      // GroupBox5
      // 
      this.GroupBox5.Controls.Add(this.btnView);
      this.GroupBox5.Controls.Add(this.Label3);
      this.GroupBox5.Controls.Add(this.txtResult);
      this.GroupBox5.Controls.Add(this.txtLogFile);
      this.GroupBox5.Controls.Add(this.Label6);
      this.GroupBox5.Location = new System.Drawing.Point(12, 530);
      this.GroupBox5.Name = "GroupBox5";
      this.GroupBox5.Size = new System.Drawing.Size(584, 71);
      this.GroupBox5.TabIndex = 7;
      this.GroupBox5.TabStop = false;
      this.GroupBox5.Text = "Result && Logging";
      // 
      // btnView
      // 
      this.btnView.Location = new System.Drawing.Point(501, 42);
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
      this.txtResult.Size = new System.Drawing.Size(498, 20);
      this.txtResult.TabIndex = 1;
      // 
      // txtLogFile
      // 
      this.txtLogFile.Location = new System.Drawing.Point(80, 43);
      this.txtLogFile.Name = "txtLogFile";
      this.txtLogFile.Size = new System.Drawing.Size(415, 20);
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
      // tmrCheckReceive
      // 
      this.tmrCheckReceive.Tick += new System.EventHandler(this.tmrCheckReceive_Tick);
      // 
      // label1
      // 
      this.label1.AutoSize = true;
      this.label1.Location = new System.Drawing.Point(271, 24);
      this.label1.Name = "label1";
      this.label1.Size = new System.Drawing.Size(0, 13);
      this.label1.TabIndex = 9;
      // 
      // lnkAuronSMSAgentForAndroid
      // 
      this.lnkAuronSMSAgentForAndroid.AutoSize = true;
      this.lnkAuronSMSAgentForAndroid.Location = new System.Drawing.Point(267, 22);
      this.lnkAuronSMSAgentForAndroid.Name = "lnkAuronSMSAgentForAndroid";
      this.lnkAuronSMSAgentForAndroid.Size = new System.Drawing.Size(200, 13);
      this.lnkAuronSMSAgentForAndroid.TabIndex = 10;
      this.lnkAuronSMSAgentForAndroid.TabStop = true;
      this.lnkAuronSMSAgentForAndroid.Text = "Download Auron SMS Agent for Android.";
      this.lnkAuronSMSAgentForAndroid.LinkClicked += new System.Windows.Forms.LinkLabelLinkClickedEventHandler(this.lnkAuronSMSAgentForAndroid_LinkClicked);
      // 
      // frmAndroid
      // 
      this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
      this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
      this.ClientSize = new System.Drawing.Size(611, 637);
      this.Controls.Add(this.lnkAuronSMSAgentForAndroid);
      this.Controls.Add(this.label1);
      this.Controls.Add(this.lblInfo);
      this.Controls.Add(this.GroupBox5);
      this.Controls.Add(this.groupBox6);
      this.Controls.Add(this.GroupBox2);
      this.Controls.Add(this.GroupBox1);
      this.Controls.Add(this.Label7);
      this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedDialog;
      this.Name = "frmAndroid";
      this.Text = "Auron SMS Component - C#.Net Android Demo";
      this.Load += new System.EventHandler(this.frmAndroid_Load);
      this.GroupBox1.ResumeLayout(false);
      this.GroupBox1.PerformLayout();
      this.GroupBox2.ResumeLayout(false);
      this.GroupBox2.PerformLayout();
      this.groupBox6.ResumeLayout(false);
      this.GroupBox5.ResumeLayout(false);
      this.GroupBox5.PerformLayout();
      this.ResumeLayout(false);
      this.PerformLayout();

    }

    #endregion

    internal System.Windows.Forms.Label Label7;
    internal System.Windows.Forms.GroupBox GroupBox1;
    private System.Windows.Forms.TextBox txtPort;
    internal System.Windows.Forms.Label label13;
    internal System.Windows.Forms.Label label12;
    private System.Windows.Forms.TextBox txtIP;
    internal System.Windows.Forms.GroupBox GroupBox2;
    internal System.Windows.Forms.Label Label5;
    internal System.Windows.Forms.Label Label4;
    internal System.Windows.Forms.TextBox txtToAddress;
    internal System.Windows.Forms.TextBox txtBody;
    internal System.Windows.Forms.Button btnSend;
    internal System.Windows.Forms.GroupBox groupBox6;
    internal System.Windows.Forms.Label label10;
    internal System.Windows.Forms.Label label8;
    internal System.Windows.Forms.ListView lvReceivedMessages;
    internal System.Windows.Forms.ListView lvSentMessages;
    private System.Windows.Forms.Label lblInfo;
    internal System.Windows.Forms.GroupBox GroupBox5;
    internal System.Windows.Forms.Button btnView;
    internal System.Windows.Forms.Label Label3;
    internal System.Windows.Forms.TextBox txtResult;
    internal System.Windows.Forms.TextBox txtLogFile;
    internal System.Windows.Forms.Label Label6;
    private System.Windows.Forms.Button btnConnect;
    private System.Windows.Forms.Timer tmrCheckReceive;
    private System.Windows.Forms.Label label1;
    private System.Windows.Forms.LinkLabel lnkAuronSMSAgentForAndroid;
  }
}