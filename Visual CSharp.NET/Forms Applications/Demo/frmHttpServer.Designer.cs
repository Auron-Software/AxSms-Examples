
namespace Demo
{
  partial class frmHttpServer
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
      this.GroupBox1 = new System.Windows.Forms.GroupBox();
      this.btnBrowse = new System.Windows.Forms.Button();
      this.btnStartStop = new System.Windows.Forms.Button();
      this.label12 = new System.Windows.Forms.Label();
      this.txtUrl = new System.Windows.Forms.TextBox();
      this.Label7 = new System.Windows.Forms.Label();
      this.lnkFindOutMore = new System.Windows.Forms.LinkLabel();
      this.lblInfo = new System.Windows.Forms.Label();
      this.GroupBox5 = new System.Windows.Forms.GroupBox();
      this.btnView = new System.Windows.Forms.Button();
      this.Label3 = new System.Windows.Forms.Label();
      this.txtResult = new System.Windows.Forms.TextBox();
      this.txtLogFile = new System.Windows.Forms.TextBox();
      this.Label6 = new System.Windows.Forms.Label();
      this.groupBox2 = new System.Windows.Forms.GroupBox();
      this.lvRequestLog = new System.Windows.Forms.ListView();
      this.groupBox3 = new System.Windows.Forms.GroupBox();
      this.txtLastRequestHeaders = new System.Windows.Forms.TextBox();
      this.groupBox4 = new System.Windows.Forms.GroupBox();
      this.txtLastRequestBody = new System.Windows.Forms.TextBox();
      this.tmrCheckReceive = new System.Windows.Forms.Timer(this.components);
      this.GroupBox1.SuspendLayout();
      this.GroupBox5.SuspendLayout();
      this.groupBox2.SuspendLayout();
      this.groupBox3.SuspendLayout();
      this.groupBox4.SuspendLayout();
      this.SuspendLayout();
      // 
      // GroupBox1
      // 
      this.GroupBox1.Controls.Add(this.btnBrowse);
      this.GroupBox1.Controls.Add(this.btnStartStop);
      this.GroupBox1.Controls.Add(this.label12);
      this.GroupBox1.Controls.Add(this.txtUrl);
      this.GroupBox1.Location = new System.Drawing.Point(12, 41);
      this.GroupBox1.Name = "GroupBox1";
      this.GroupBox1.Size = new System.Drawing.Size(516, 62);
      this.GroupBox1.TabIndex = 4;
      this.GroupBox1.TabStop = false;
      this.GroupBox1.Text = "Server end-point settings";
      // 
      // btnBrowse
      // 
      this.btnBrowse.Location = new System.Drawing.Point(428, 24);
      this.btnBrowse.Name = "btnBrowse";
      this.btnBrowse.Size = new System.Drawing.Size(77, 23);
      this.btnBrowse.TabIndex = 11;
      this.btnBrowse.Text = "Browse";
      this.btnBrowse.UseVisualStyleBackColor = true;
      this.btnBrowse.Click += new System.EventHandler(this.btnBrowse_Click);
      // 
      // btnStartStop
      // 
      this.btnStartStop.Location = new System.Drawing.Point(345, 24);
      this.btnStartStop.Name = "btnStartStop";
      this.btnStartStop.Size = new System.Drawing.Size(77, 23);
      this.btnStartStop.TabIndex = 10;
      this.btnStartStop.Text = "Start";
      this.btnStartStop.UseVisualStyleBackColor = true;
      this.btnStartStop.Click += new System.EventHandler(this.btnStartStop_Click);
      // 
      // label12
      // 
      this.label12.Location = new System.Drawing.Point(16, 29);
      this.label12.Name = "label12";
      this.label12.Size = new System.Drawing.Size(37, 16);
      this.label12.TabIndex = 6;
      this.label12.Text = "Url:";
      // 
      // txtUrl
      // 
      this.txtUrl.Location = new System.Drawing.Point(80, 26);
      this.txtUrl.Name = "txtUrl";
      this.txtUrl.Size = new System.Drawing.Size(259, 20);
      this.txtUrl.TabIndex = 7;
      this.txtUrl.Text = "http://localhost:8002/TEST/";
      // 
      // Label7
      // 
      this.Label7.Location = new System.Drawing.Point(12, 9);
      this.Label7.Name = "Label7";
      this.Label7.Size = new System.Drawing.Size(516, 28);
      this.Label7.TabIndex = 5;
      this.Label7.Text = "Use \'netsh http\' in the commandline to configure your endpoint access control and" +
    " security certficate settings. ";
      // 
      // lnkFindOutMore
      // 
      this.lnkFindOutMore.AutoSize = true;
      this.lnkFindOutMore.Location = new System.Drawing.Point(54, 22);
      this.lnkFindOutMore.Name = "lnkFindOutMore";
      this.lnkFindOutMore.Size = new System.Drawing.Size(98, 13);
      this.lnkFindOutMore.TabIndex = 6;
      this.lnkFindOutMore.TabStop = true;
      this.lnkFindOutMore.Text = "Find out more here.";
      this.lnkFindOutMore.LinkClicked += new System.Windows.Forms.LinkLabelLinkClickedEventHandler(this.lnkFindOutMore_LinkClicked);
      // 
      // lblInfo
      // 
      this.lblInfo.AutoSize = true;
      this.lblInfo.Location = new System.Drawing.Point(12, 501);
      this.lblInfo.Name = "lblInfo";
      this.lblInfo.Size = new System.Drawing.Size(31, 13);
      this.lblInfo.TabIndex = 10;
      this.lblInfo.Text = "[Info]";
      // 
      // GroupBox5
      // 
      this.GroupBox5.Controls.Add(this.btnView);
      this.GroupBox5.Controls.Add(this.Label3);
      this.GroupBox5.Controls.Add(this.txtResult);
      this.GroupBox5.Controls.Add(this.txtLogFile);
      this.GroupBox5.Controls.Add(this.Label6);
      this.GroupBox5.Location = new System.Drawing.Point(12, 427);
      this.GroupBox5.Name = "GroupBox5";
      this.GroupBox5.Size = new System.Drawing.Size(516, 71);
      this.GroupBox5.TabIndex = 9;
      this.GroupBox5.TabStop = false;
      this.GroupBox5.Text = "Result && Logging";
      // 
      // btnView
      // 
      this.btnView.Location = new System.Drawing.Point(433, 43);
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
      this.txtResult.Size = new System.Drawing.Size(430, 20);
      this.txtResult.TabIndex = 1;
      // 
      // txtLogFile
      // 
      this.txtLogFile.Location = new System.Drawing.Point(80, 43);
      this.txtLogFile.Name = "txtLogFile";
      this.txtLogFile.Size = new System.Drawing.Size(347, 20);
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
      // groupBox2
      // 
      this.groupBox2.Controls.Add(this.lvRequestLog);
      this.groupBox2.Location = new System.Drawing.Point(12, 109);
      this.groupBox2.Name = "groupBox2";
      this.groupBox2.Size = new System.Drawing.Size(516, 100);
      this.groupBox2.TabIndex = 11;
      this.groupBox2.TabStop = false;
      this.groupBox2.Text = "Request Log";
      // 
      // lvRequestLog
      // 
      this.lvRequestLog.FullRowSelect = true;
      this.lvRequestLog.HeaderStyle = System.Windows.Forms.ColumnHeaderStyle.None;
      this.lvRequestLog.HideSelection = false;
      this.lvRequestLog.Location = new System.Drawing.Point(6, 19);
      this.lvRequestLog.Name = "lvRequestLog";
      this.lvRequestLog.Size = new System.Drawing.Size(501, 75);
      this.lvRequestLog.TabIndex = 0;
      this.lvRequestLog.UseCompatibleStateImageBehavior = false;
      this.lvRequestLog.View = System.Windows.Forms.View.Details;
      // 
      // groupBox3
      // 
      this.groupBox3.Controls.Add(this.txtLastRequestHeaders);
      this.groupBox3.Location = new System.Drawing.Point(12, 215);
      this.groupBox3.Name = "groupBox3";
      this.groupBox3.Size = new System.Drawing.Size(516, 100);
      this.groupBox3.TabIndex = 12;
      this.groupBox3.TabStop = false;
      this.groupBox3.Text = "Last request headers";
      // 
      // txtLastRequestHeaders
      // 
      this.txtLastRequestHeaders.Location = new System.Drawing.Point(6, 19);
      this.txtLastRequestHeaders.Multiline = true;
      this.txtLastRequestHeaders.Name = "txtLastRequestHeaders";
      this.txtLastRequestHeaders.ReadOnly = true;
      this.txtLastRequestHeaders.ScrollBars = System.Windows.Forms.ScrollBars.Vertical;
      this.txtLastRequestHeaders.Size = new System.Drawing.Size(501, 75);
      this.txtLastRequestHeaders.TabIndex = 0;
      // 
      // groupBox4
      // 
      this.groupBox4.Controls.Add(this.txtLastRequestBody);
      this.groupBox4.Location = new System.Drawing.Point(12, 321);
      this.groupBox4.Name = "groupBox4";
      this.groupBox4.Size = new System.Drawing.Size(516, 100);
      this.groupBox4.TabIndex = 13;
      this.groupBox4.TabStop = false;
      this.groupBox4.Text = "Last request body";
      // 
      // txtLastRequestBody
      // 
      this.txtLastRequestBody.Location = new System.Drawing.Point(7, 20);
      this.txtLastRequestBody.Multiline = true;
      this.txtLastRequestBody.Name = "txtLastRequestBody";
      this.txtLastRequestBody.ReadOnly = true;
      this.txtLastRequestBody.ScrollBars = System.Windows.Forms.ScrollBars.Vertical;
      this.txtLastRequestBody.Size = new System.Drawing.Size(500, 74);
      this.txtLastRequestBody.TabIndex = 0;
      // 
      // tmrCheckReceive
      // 
      this.tmrCheckReceive.Tick += new System.EventHandler(this.tmrCheckReceive_Tick);
      // 
      // frmHttpServer
      // 
      this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
      this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
      this.ClientSize = new System.Drawing.Size(540, 526);
      this.Controls.Add(this.groupBox4);
      this.Controls.Add(this.groupBox3);
      this.Controls.Add(this.groupBox2);
      this.Controls.Add(this.lblInfo);
      this.Controls.Add(this.GroupBox5);
      this.Controls.Add(this.lnkFindOutMore);
      this.Controls.Add(this.Label7);
      this.Controls.Add(this.GroupBox1);
      this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedDialog;
      this.Name = "frmHttpServer";
      this.Text = "Auron SMS Component - C#.Net HTTP Server Demo";
      this.Load += new System.EventHandler(this.frmHttpServer_Load);
      this.GroupBox1.ResumeLayout(false);
      this.GroupBox1.PerformLayout();
      this.GroupBox5.ResumeLayout(false);
      this.GroupBox5.PerformLayout();
      this.groupBox2.ResumeLayout(false);
      this.groupBox3.ResumeLayout(false);
      this.groupBox3.PerformLayout();
      this.groupBox4.ResumeLayout(false);
      this.groupBox4.PerformLayout();
      this.ResumeLayout(false);
      this.PerformLayout();

    }

    #endregion

    internal System.Windows.Forms.GroupBox GroupBox1;
    private System.Windows.Forms.Button btnStartStop;
    internal System.Windows.Forms.Label label12;
    private System.Windows.Forms.TextBox txtUrl;
    internal System.Windows.Forms.Label Label7;
    private System.Windows.Forms.LinkLabel lnkFindOutMore;
    private System.Windows.Forms.Label lblInfo;
    internal System.Windows.Forms.GroupBox GroupBox5;
    internal System.Windows.Forms.Button btnView;
    internal System.Windows.Forms.Label Label3;
    internal System.Windows.Forms.TextBox txtResult;
    internal System.Windows.Forms.TextBox txtLogFile;
    internal System.Windows.Forms.Label Label6;
    private System.Windows.Forms.GroupBox groupBox2;
    private System.Windows.Forms.ListView lvRequestLog;
    private System.Windows.Forms.GroupBox groupBox3;
    private System.Windows.Forms.TextBox txtLastRequestHeaders;
    private System.Windows.Forms.GroupBox groupBox4;
    private System.Windows.Forms.TextBox txtLastRequestBody;
    private System.Windows.Forms.Button btnBrowse;
    private System.Windows.Forms.Timer tmrCheckReceive;
  }
}