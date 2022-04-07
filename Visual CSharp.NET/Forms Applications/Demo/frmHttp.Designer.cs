namespace Demo
{
    partial class frmHttp
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
            this.btnSend = new System.Windows.Forms.Button();
            this.txtMessage = new System.Windows.Forms.TextBox();
            this.txtResult = new System.Windows.Forms.TextBox();
            this.Label10 = new System.Windows.Forms.Label();
            this.Label9 = new System.Windows.Forms.Label();
            this.Label1 = new System.Windows.Forms.Label();
            this.cbxMessageType = new System.Windows.Forms.ComboBox();
            this.GroupBox1 = new System.Windows.Forms.GroupBox();
            this.txtURL = new System.Windows.Forms.TextBox();
            this.Label8 = new System.Windows.Forms.Label();
            this.btnView = new System.Windows.Forms.Button();
            this.Label12 = new System.Windows.Forms.Label();
            this.txtLogFile = new System.Windows.Forms.TextBox();
            this.txtLastResponse = new System.Windows.Forms.TextBox();
            this.txtRecipient = new System.Windows.Forms.TextBox();
            this.Label11 = new System.Windows.Forms.Label();
            this.GroupBox3 = new System.Windows.Forms.GroupBox();
            this.Label6 = new System.Windows.Forms.Label();
            this.GroupBox2 = new System.Windows.Forms.GroupBox();
            this.llblUrlRecipientFormat = new System.Windows.Forms.LinkLabel();
            this.lblInfo = new System.Windows.Forms.Label();
            this.GroupBox1.SuspendLayout();
            this.GroupBox3.SuspendLayout();
            this.GroupBox2.SuspendLayout();
            this.SuspendLayout();
            // 
            // btnSend
            // 
            this.btnSend.Location = new System.Drawing.Point(126, 121);
            this.btnSend.Name = "btnSend";
            this.btnSend.Size = new System.Drawing.Size(490, 23);
            this.btnSend.TabIndex = 4;
            this.btnSend.Text = "Send Message";
            this.btnSend.Click += new System.EventHandler(this.btnSend_Click);
            // 
            // txtMessage
            // 
            this.txtMessage.Location = new System.Drawing.Point(126, 73);
            this.txtMessage.Multiline = true;
            this.txtMessage.Name = "txtMessage";
            this.txtMessage.Size = new System.Drawing.Size(490, 40);
            this.txtMessage.TabIndex = 3;
            // 
            // txtResult
            // 
            this.txtResult.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.txtResult.Location = new System.Drawing.Point(126, 19);
            this.txtResult.Name = "txtResult";
            this.txtResult.ReadOnly = true;
            this.txtResult.Size = new System.Drawing.Size(490, 20);
            this.txtResult.TabIndex = 0;
            // 
            // Label10
            // 
            this.Label10.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Label10.Location = new System.Drawing.Point(20, 23);
            this.Label10.Name = "Label10";
            this.Label10.Size = new System.Drawing.Size(60, 16);
            this.Label10.TabIndex = 0;
            this.Label10.Text = "&Result:";
            // 
            // Label9
            // 
            this.Label9.Location = new System.Drawing.Point(20, 73);
            this.Label9.Name = "Label9";
            this.Label9.Size = new System.Drawing.Size(100, 16);
            this.Label9.TabIndex = 6;
            this.Label9.Text = "&Body:";
            // 
            // Label1
            // 
            this.Label1.Location = new System.Drawing.Point(20, 22);
            this.Label1.Name = "Label1";
            this.Label1.Size = new System.Drawing.Size(60, 16);
            this.Label1.TabIndex = 0;
            this.Label1.Text = "&URL:";
            // 
            // cbxMessageType
            // 
            this.cbxMessageType.Location = new System.Drawing.Point(126, 44);
            this.cbxMessageType.Name = "cbxMessageType";
            this.cbxMessageType.Size = new System.Drawing.Size(280, 21);
            this.cbxMessageType.TabIndex = 2;
            // 
            // GroupBox1
            // 
            this.GroupBox1.Controls.Add(this.txtURL);
            this.GroupBox1.Controls.Add(this.Label1);
            this.GroupBox1.Location = new System.Drawing.Point(12, 12);
            this.GroupBox1.Name = "GroupBox1";
            this.GroupBox1.Size = new System.Drawing.Size(624, 47);
            this.GroupBox1.TabIndex = 0;
            this.GroupBox1.TabStop = false;
            this.GroupBox1.Text = "Connection";
            // 
            // txtURL
            // 
            this.txtURL.Location = new System.Drawing.Point(126, 19);
            this.txtURL.Name = "txtURL";
            this.txtURL.Size = new System.Drawing.Size(490, 20);
            this.txtURL.TabIndex = 0;
            // 
            // Label8
            // 
            this.Label8.Location = new System.Drawing.Point(20, 49);
            this.Label8.Name = "Label8";
            this.Label8.Size = new System.Drawing.Size(100, 16);
            this.Label8.TabIndex = 4;
            this.Label8.Text = "Body T&ype:";
            // 
            // btnView
            // 
            this.btnView.Location = new System.Drawing.Point(541, 65);
            this.btnView.Name = "btnView";
            this.btnView.Size = new System.Drawing.Size(75, 23);
            this.btnView.TabIndex = 3;
            this.btnView.Text = "&View...";
            this.btnView.Click += new System.EventHandler(this.btnView_Click);
            // 
            // Label12
            // 
            this.Label12.Location = new System.Drawing.Point(20, 70);
            this.Label12.Name = "Label12";
            this.Label12.Size = new System.Drawing.Size(52, 16);
            this.Label12.TabIndex = 4;
            this.Label12.Text = "Lo&g file:";
            // 
            // txtLogFile
            // 
            this.txtLogFile.Location = new System.Drawing.Point(126, 67);
            this.txtLogFile.Name = "txtLogFile";
            this.txtLogFile.Size = new System.Drawing.Size(409, 20);
            this.txtLogFile.TabIndex = 2;
            // 
            // txtLastResponse
            // 
            this.txtLastResponse.Location = new System.Drawing.Point(126, 43);
            this.txtLastResponse.Name = "txtLastResponse";
            this.txtLastResponse.ReadOnly = true;
            this.txtLastResponse.Size = new System.Drawing.Size(490, 20);
            this.txtLastResponse.TabIndex = 1;
            // 
            // txtRecipient
            // 
            this.txtRecipient.Location = new System.Drawing.Point(126, 19);
            this.txtRecipient.Name = "txtRecipient";
            this.txtRecipient.Size = new System.Drawing.Size(280, 20);
            this.txtRecipient.TabIndex = 0;
            // 
            // Label11
            // 
            this.Label11.Location = new System.Drawing.Point(20, 46);
            this.Label11.Name = "Label11";
            this.Label11.Size = new System.Drawing.Size(100, 16);
            this.Label11.TabIndex = 2;
            this.Label11.Text = "&Last Response:";
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
            this.GroupBox3.Location = new System.Drawing.Point(12, 222);
            this.GroupBox3.Name = "GroupBox3";
            this.GroupBox3.Size = new System.Drawing.Size(624, 95);
            this.GroupBox3.TabIndex = 2;
            this.GroupBox3.TabStop = false;
            this.GroupBox3.Text = "Result && Logging";
            // 
            // Label6
            // 
            this.Label6.Location = new System.Drawing.Point(20, 23);
            this.Label6.Name = "Label6";
            this.Label6.Size = new System.Drawing.Size(72, 16);
            this.Label6.TabIndex = 0;
            this.Label6.Text = "&ToAddress:";
            // 
            // GroupBox2
            // 
            this.GroupBox2.Controls.Add(this.llblUrlRecipientFormat);
            this.GroupBox2.Controls.Add(this.btnSend);
            this.GroupBox2.Controls.Add(this.txtMessage);
            this.GroupBox2.Controls.Add(this.Label9);
            this.GroupBox2.Controls.Add(this.cbxMessageType);
            this.GroupBox2.Controls.Add(this.Label8);
            this.GroupBox2.Controls.Add(this.txtRecipient);
            this.GroupBox2.Controls.Add(this.Label6);
            this.GroupBox2.Location = new System.Drawing.Point(12, 65);
            this.GroupBox2.Name = "GroupBox2";
            this.GroupBox2.Size = new System.Drawing.Size(624, 151);
            this.GroupBox2.TabIndex = 1;
            this.GroupBox2.TabStop = false;
            this.GroupBox2.Text = "Message";
            // 
            // llblUrlRecipientFormat
            // 
            this.llblUrlRecipientFormat.Location = new System.Drawing.Point(412, 23);
            this.llblUrlRecipientFormat.Name = "llblUrlRecipientFormat";
            this.llblUrlRecipientFormat.Size = new System.Drawing.Size(128, 16);
            this.llblUrlRecipientFormat.TabIndex = 1;
            this.llblUrlRecipientFormat.TabStop = true;
            this.llblUrlRecipientFormat.Text = "ToAddress number format";
            this.llblUrlRecipientFormat.LinkClicked += new System.Windows.Forms.LinkLabelLinkClickedEventHandler(this.llblUrlRecipientFormat_LinkClicked);
            // 
            // lblInfo
            // 
            this.lblInfo.AutoSize = true;
            this.lblInfo.Location = new System.Drawing.Point(9, 330);
            this.lblInfo.Name = "lblInfo";
            this.lblInfo.Size = new System.Drawing.Size(31, 13);
            this.lblInfo.TabIndex = 41;
            this.lblInfo.Text = "[Info]";
            // 
            // frmHttp
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(646, 352);
            this.Controls.Add(this.lblInfo);
            this.Controls.Add(this.GroupBox1);
            this.Controls.Add(this.GroupBox3);
            this.Controls.Add(this.GroupBox2);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedDialog;
            this.MaximizeBox = false;
            this.MinimizeBox = false;
            this.Name = "frmHttp";
            this.Text = "Auron SMS Component - C#.NET HTTP  Demo";
            this.Load += new System.EventHandler(this.frmHttp_Load);
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

        internal System.Windows.Forms.Button btnSend;
        internal System.Windows.Forms.TextBox txtMessage;
        internal System.Windows.Forms.TextBox txtResult;
        internal System.Windows.Forms.Label Label10;
        internal System.Windows.Forms.Label Label9;
        internal System.Windows.Forms.Label Label1;
        internal System.Windows.Forms.ComboBox cbxMessageType;
        internal System.Windows.Forms.GroupBox GroupBox1;
        internal System.Windows.Forms.TextBox txtURL;
        internal System.Windows.Forms.Label Label8;
        internal System.Windows.Forms.Button btnView;
        internal System.Windows.Forms.Label Label12;
        internal System.Windows.Forms.TextBox txtLogFile;
        internal System.Windows.Forms.TextBox txtLastResponse;
        internal System.Windows.Forms.TextBox txtRecipient;
        internal System.Windows.Forms.Label Label11;
        internal System.Windows.Forms.GroupBox GroupBox3;
        internal System.Windows.Forms.Label Label6;
        internal System.Windows.Forms.GroupBox GroupBox2;
        internal System.Windows.Forms.LinkLabel llblUrlRecipientFormat;
        private System.Windows.Forms.Label lblInfo;
    }
}