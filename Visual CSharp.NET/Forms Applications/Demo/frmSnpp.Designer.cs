namespace Demo
{
    partial class frmSnpp
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
            this.GroupBox1 = new System.Windows.Forms.GroupBox();
            this.llblUrlSnppProviders = new System.Windows.Forms.LinkLabel();
            this.Label3 = new System.Windows.Forms.Label();
            this.txtPort = new System.Windows.Forms.TextBox();
            this.cbxServers = new System.Windows.Forms.ComboBox();
            this.Label2 = new System.Windows.Forms.Label();
            this.Label1 = new System.Windows.Forms.Label();
            this.txtLastResponse = new System.Windows.Forms.TextBox();
            this.Label11 = new System.Windows.Forms.Label();
            this.txtResult = new System.Windows.Forms.TextBox();
            this.Label10 = new System.Windows.Forms.Label();
            this.txtMessage = new System.Windows.Forms.TextBox();
            this.Label6 = new System.Windows.Forms.Label();
            this.Label5 = new System.Windows.Forms.Label();
            this.Label4 = new System.Windows.Forms.Label();
            this.txtPagerID = new System.Windows.Forms.TextBox();
            this.txtLogFile = new System.Windows.Forms.TextBox();
            this.GroupBox3 = new System.Windows.Forms.GroupBox();
            this.btnView = new System.Windows.Forms.Button();
            this.Label12 = new System.Windows.Forms.Label();
            this.btnSend = new System.Windows.Forms.Button();
            this.GroupBox2 = new System.Windows.Forms.GroupBox();
            this.lblInfo = new System.Windows.Forms.Label();
            this.GroupBox1.SuspendLayout();
            this.GroupBox3.SuspendLayout();
            this.GroupBox2.SuspendLayout();
            this.SuspendLayout();
            // 
            // GroupBox1
            // 
            this.GroupBox1.Controls.Add(this.llblUrlSnppProviders);
            this.GroupBox1.Controls.Add(this.Label3);
            this.GroupBox1.Controls.Add(this.txtPort);
            this.GroupBox1.Controls.Add(this.cbxServers);
            this.GroupBox1.Controls.Add(this.Label2);
            this.GroupBox1.Controls.Add(this.Label1);
            this.GroupBox1.Location = new System.Drawing.Point(12, 12);
            this.GroupBox1.Name = "GroupBox1";
            this.GroupBox1.Size = new System.Drawing.Size(584, 70);
            this.GroupBox1.TabIndex = 6;
            this.GroupBox1.TabStop = false;
            this.GroupBox1.Text = "SNPP Server";
            // 
            // llblUrlSnppProviders
            // 
            this.llblUrlSnppProviders.AutoSize = true;
            this.llblUrlSnppProviders.Location = new System.Drawing.Point(227, 51);
            this.llblUrlSnppProviders.Name = "llblUrlSnppProviders";
            this.llblUrlSnppProviders.Size = new System.Drawing.Size(53, 13);
            this.llblUrlSnppProviders.TabIndex = 5;
            this.llblUrlSnppProviders.TabStop = true;
            this.llblUrlSnppProviders.Text = "click here";
            this.llblUrlSnppProviders.LinkClicked += new System.Windows.Forms.LinkLabelLinkClickedEventHandler(this.llblUrlSnppProviders_LinkClicked);
            // 
            // Label3
            // 
            this.Label3.AutoSize = true;
            this.Label3.Location = new System.Drawing.Point(20, 51);
            this.Label3.Name = "Label3";
            this.Label3.Size = new System.Drawing.Size(209, 13);
            this.Label3.TabIndex = 4;
            this.Label3.Text = "For a list of recommended SNPP providers,";
            // 
            // txtPort
            // 
            this.txtPort.Location = new System.Drawing.Point(400, 19);
            this.txtPort.Name = "txtPort";
            this.txtPort.Size = new System.Drawing.Size(80, 20);
            this.txtPort.TabIndex = 3;
            // 
            // cbxServers
            // 
            this.cbxServers.Location = new System.Drawing.Point(108, 19);
            this.cbxServers.Name = "cbxServers";
            this.cbxServers.Size = new System.Drawing.Size(252, 21);
            this.cbxServers.TabIndex = 1;
            // 
            // Label2
            // 
            this.Label2.Location = new System.Drawing.Point(372, 23);
            this.Label2.Name = "Label2";
            this.Label2.Size = new System.Drawing.Size(32, 16);
            this.Label2.TabIndex = 2;
            this.Label2.Text = "&Port:";
            // 
            // Label1
            // 
            this.Label1.Location = new System.Drawing.Point(20, 23);
            this.Label1.Name = "Label1";
            this.Label1.Size = new System.Drawing.Size(44, 16);
            this.Label1.TabIndex = 0;
            this.Label1.Text = "&Server:";
            // 
            // txtLastResponse
            // 
            this.txtLastResponse.Location = new System.Drawing.Point(108, 43);
            this.txtLastResponse.Name = "txtLastResponse";
            this.txtLastResponse.ReadOnly = true;
            this.txtLastResponse.Size = new System.Drawing.Size(463, 20);
            this.txtLastResponse.TabIndex = 3;
            // 
            // Label11
            // 
            this.Label11.Location = new System.Drawing.Point(20, 47);
            this.Label11.Name = "Label11";
            this.Label11.Size = new System.Drawing.Size(84, 16);
            this.Label11.TabIndex = 2;
            this.Label11.Text = "&Last Response:";
            // 
            // txtResult
            // 
            this.txtResult.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.txtResult.Location = new System.Drawing.Point(108, 19);
            this.txtResult.Name = "txtResult";
            this.txtResult.ReadOnly = true;
            this.txtResult.Size = new System.Drawing.Size(463, 20);
            this.txtResult.TabIndex = 1;
            // 
            // Label10
            // 
            this.Label10.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Label10.Location = new System.Drawing.Point(20, 23);
            this.Label10.Name = "Label10";
            this.Label10.Size = new System.Drawing.Size(52, 16);
            this.Label10.TabIndex = 0;
            this.Label10.Text = "&Result:";
            // 
            // txtMessage
            // 
            this.txtMessage.Location = new System.Drawing.Point(108, 47);
            this.txtMessage.Multiline = true;
            this.txtMessage.Name = "txtMessage";
            this.txtMessage.Size = new System.Drawing.Size(463, 40);
            this.txtMessage.TabIndex = 4;
            // 
            // Label6
            // 
            this.Label6.Location = new System.Drawing.Point(20, 47);
            this.Label6.Name = "Label6";
            this.Label6.Size = new System.Drawing.Size(56, 20);
            this.Label6.TabIndex = 3;
            this.Label6.Text = "&Message:";
            // 
            // Label5
            // 
            this.Label5.Location = new System.Drawing.Point(212, 23);
            this.Label5.Name = "Label5";
            this.Label5.Size = new System.Drawing.Size(284, 16);
            this.Label5.TabIndex = 2;
            this.Label5.Text = "NOTE: Most providers require a 10 digit pager number.";
            // 
            // Label4
            // 
            this.Label4.Location = new System.Drawing.Point(20, 23);
            this.Label4.Name = "Label4";
            this.Label4.Size = new System.Drawing.Size(52, 16);
            this.Label4.TabIndex = 0;
            this.Label4.Text = "&Pager ID:";
            // 
            // txtPagerID
            // 
            this.txtPagerID.Location = new System.Drawing.Point(108, 19);
            this.txtPagerID.Name = "txtPagerID";
            this.txtPagerID.Size = new System.Drawing.Size(104, 20);
            this.txtPagerID.TabIndex = 1;
            // 
            // txtLogFile
            // 
            this.txtLogFile.Location = new System.Drawing.Point(108, 67);
            this.txtLogFile.Name = "txtLogFile";
            this.txtLogFile.Size = new System.Drawing.Size(380, 20);
            this.txtLogFile.TabIndex = 5;
            // 
            // GroupBox3
            // 
            this.GroupBox3.Controls.Add(this.btnView);
            this.GroupBox3.Controls.Add(this.Label12);
            this.GroupBox3.Controls.Add(this.txtLogFile);
            this.GroupBox3.Controls.Add(this.txtLastResponse);
            this.GroupBox3.Controls.Add(this.Label11);
            this.GroupBox3.Controls.Add(this.txtResult);
            this.GroupBox3.Controls.Add(this.Label10);
            this.GroupBox3.Location = new System.Drawing.Point(12, 217);
            this.GroupBox3.Name = "GroupBox3";
            this.GroupBox3.Size = new System.Drawing.Size(584, 95);
            this.GroupBox3.TabIndex = 8;
            this.GroupBox3.TabStop = false;
            this.GroupBox3.Text = "Result && Logging";
            // 
            // btnView
            // 
            this.btnView.Location = new System.Drawing.Point(496, 67);
            this.btnView.Name = "btnView";
            this.btnView.Size = new System.Drawing.Size(75, 23);
            this.btnView.TabIndex = 6;
            this.btnView.Text = "&View...";
            this.btnView.Click += new System.EventHandler(this.btnView_Click);
            // 
            // Label12
            // 
            this.Label12.Location = new System.Drawing.Point(20, 71);
            this.Label12.Name = "Label12";
            this.Label12.Size = new System.Drawing.Size(52, 16);
            this.Label12.TabIndex = 4;
            this.Label12.Text = "Lo&g file:";
            // 
            // btnSend
            // 
            this.btnSend.Location = new System.Drawing.Point(108, 93);
            this.btnSend.Name = "btnSend";
            this.btnSend.Size = new System.Drawing.Size(136, 23);
            this.btnSend.TabIndex = 5;
            this.btnSend.Text = "&Send Message";
            this.btnSend.Click += new System.EventHandler(this.btnSend_Click);
            // 
            // GroupBox2
            // 
            this.GroupBox2.Controls.Add(this.btnSend);
            this.GroupBox2.Controls.Add(this.txtMessage);
            this.GroupBox2.Controls.Add(this.Label6);
            this.GroupBox2.Controls.Add(this.Label5);
            this.GroupBox2.Controls.Add(this.txtPagerID);
            this.GroupBox2.Controls.Add(this.Label4);
            this.GroupBox2.Location = new System.Drawing.Point(12, 88);
            this.GroupBox2.Name = "GroupBox2";
            this.GroupBox2.Size = new System.Drawing.Size(584, 123);
            this.GroupBox2.TabIndex = 7;
            this.GroupBox2.TabStop = false;
            this.GroupBox2.Text = "Message";
            // 
            // lblInfo
            // 
            this.lblInfo.AutoSize = true;
            this.lblInfo.Location = new System.Drawing.Point(9, 325);
            this.lblInfo.Name = "lblInfo";
            this.lblInfo.Size = new System.Drawing.Size(31, 13);
            this.lblInfo.TabIndex = 47;
            this.lblInfo.Text = "[Info]";
            // 
            // frmSnpp
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(608, 347);
            this.Controls.Add(this.lblInfo);
            this.Controls.Add(this.GroupBox1);
            this.Controls.Add(this.GroupBox3);
            this.Controls.Add(this.GroupBox2);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedDialog;
            this.MaximizeBox = false;
            this.MinimizeBox = false;
            this.Name = "frmSnpp";
            this.Text = "Auron SMS Component - C#.NET SNPP Pager Demo";
            this.Load += new System.EventHandler(this.frmSnpp_Load);
            this.GroupBox1.ResumeLayout(false);
            this.GroupBox1.PerformLayout();
            this.GroupBox3.ResumeLayout(false);
            this.GroupBox3.PerformLayout();
            this.GroupBox2.ResumeLayout(false);
            this.GroupBox2.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        internal System.Windows.Forms.GroupBox GroupBox1;
        internal System.Windows.Forms.LinkLabel llblUrlSnppProviders;
        internal System.Windows.Forms.Label Label3;
        internal System.Windows.Forms.TextBox txtPort;
        internal System.Windows.Forms.ComboBox cbxServers;
        internal System.Windows.Forms.Label Label2;
        internal System.Windows.Forms.Label Label1;
        internal System.Windows.Forms.TextBox txtLastResponse;
        internal System.Windows.Forms.Label Label11;
        internal System.Windows.Forms.TextBox txtResult;
        internal System.Windows.Forms.Label Label10;
        internal System.Windows.Forms.TextBox txtMessage;
        internal System.Windows.Forms.Label Label6;
        internal System.Windows.Forms.Label Label5;
        internal System.Windows.Forms.Label Label4;
        internal System.Windows.Forms.TextBox txtPagerID;
        internal System.Windows.Forms.TextBox txtLogFile;
        internal System.Windows.Forms.GroupBox GroupBox3;
        internal System.Windows.Forms.Button btnView;
        internal System.Windows.Forms.Label Label12;
        internal System.Windows.Forms.Button btnSend;
        internal System.Windows.Forms.GroupBox GroupBox2;
        private System.Windows.Forms.Label lblInfo;
    }
}