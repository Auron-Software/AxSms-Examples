namespace Demo
{
    partial class frmHttpXml
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
            this.GroupBox2 = new System.Windows.Forms.GroupBox();
            this.llblUrlRecipientFormat = new System.Windows.Forms.LinkLabel();
            this.btnSend = new System.Windows.Forms.Button();
            this.Label8 = new System.Windows.Forms.Label();
            this.txtMessage = new System.Windows.Forms.TextBox();
            this.Label7 = new System.Windows.Forms.Label();
            this.txtMessageRecipient = new System.Windows.Forms.TextBox();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.label2 = new System.Windows.Forms.Label();
            this.btnClearSent = new System.Windows.Forms.Button();
            this.txtXmlTemplate = new System.Windows.Forms.TextBox();
            this.groupBox3 = new System.Windows.Forms.GroupBox();
            this.btnClearResponse = new System.Windows.Forms.Button();
            this.txtResponse = new System.Windows.Forms.TextBox();
            this.groupBox4 = new System.Windows.Forms.GroupBox();
            this.btnView = new System.Windows.Forms.Button();
            this.Label12 = new System.Windows.Forms.Label();
            this.txtLogFile = new System.Windows.Forms.TextBox();
            this.txtResult = new System.Windows.Forms.TextBox();
            this.Label10 = new System.Windows.Forms.Label();
            this.groupBox5 = new System.Windows.Forms.GroupBox();
            this.txtHost = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.lblInfo = new System.Windows.Forms.Label();
            this.GroupBox2.SuspendLayout();
            this.groupBox1.SuspendLayout();
            this.groupBox3.SuspendLayout();
            this.groupBox4.SuspendLayout();
            this.groupBox5.SuspendLayout();
            this.SuspendLayout();
            // 
            // GroupBox2
            // 
            this.GroupBox2.Controls.Add(this.llblUrlRecipientFormat);
            this.GroupBox2.Controls.Add(this.btnSend);
            this.GroupBox2.Controls.Add(this.Label8);
            this.GroupBox2.Controls.Add(this.txtMessage);
            this.GroupBox2.Controls.Add(this.Label7);
            this.GroupBox2.Controls.Add(this.txtMessageRecipient);
            this.GroupBox2.Location = new System.Drawing.Point(12, 171);
            this.GroupBox2.Name = "GroupBox2";
            this.GroupBox2.Size = new System.Drawing.Size(624, 141);
            this.GroupBox2.TabIndex = 1;
            this.GroupBox2.TabStop = false;
            this.GroupBox2.Text = "Message";
            // 
            // llblUrlRecipientFormat
            // 
            this.llblUrlRecipientFormat.Location = new System.Drawing.Point(392, 24);
            this.llblUrlRecipientFormat.Name = "llblUrlRecipientFormat";
            this.llblUrlRecipientFormat.Size = new System.Drawing.Size(128, 16);
            this.llblUrlRecipientFormat.TabIndex = 1;
            this.llblUrlRecipientFormat.TabStop = true;
            this.llblUrlRecipientFormat.Text = "ToAddress number format";
            this.llblUrlRecipientFormat.LinkClicked += new System.Windows.Forms.LinkLabelLinkClickedEventHandler(this.llblUrlRecipientFormat_LinkClicked);
            // 
            // btnSend
            // 
            this.btnSend.Location = new System.Drawing.Point(88, 110);
            this.btnSend.Name = "btnSend";
            this.btnSend.Size = new System.Drawing.Size(432, 24);
            this.btnSend.TabIndex = 5;
            this.btnSend.Text = "S&end";
            this.btnSend.Click += new System.EventHandler(this.btnSend_Click);
            // 
            // Label8
            // 
            this.Label8.Location = new System.Drawing.Point(20, 50);
            this.Label8.Name = "Label8";
            this.Label8.Size = new System.Drawing.Size(56, 16);
            this.Label8.TabIndex = 3;
            this.Label8.Text = "&Body:";
            // 
            // txtMessage
            // 
            this.txtMessage.Location = new System.Drawing.Point(88, 46);
            this.txtMessage.Multiline = true;
            this.txtMessage.Name = "txtMessage";
            this.txtMessage.Size = new System.Drawing.Size(432, 58);
            this.txtMessage.TabIndex = 2;
            // 
            // Label7
            // 
            this.Label7.Location = new System.Drawing.Point(20, 24);
            this.Label7.Name = "Label7";
            this.Label7.Size = new System.Drawing.Size(62, 23);
            this.Label7.TabIndex = 0;
            this.Label7.Text = "&ToAddress:";
            // 
            // txtMessageRecipient
            // 
            this.txtMessageRecipient.Location = new System.Drawing.Point(88, 20);
            this.txtMessageRecipient.Name = "txtMessageRecipient";
            this.txtMessageRecipient.Size = new System.Drawing.Size(298, 20);
            this.txtMessageRecipient.TabIndex = 0;
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.label2);
            this.groupBox1.Controls.Add(this.btnClearSent);
            this.groupBox1.Controls.Add(this.txtXmlTemplate);
            this.groupBox1.Location = new System.Drawing.Point(12, 58);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(624, 107);
            this.groupBox1.TabIndex = 13;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "XML Template";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(20, 22);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(54, 13);
            this.label2.TabIndex = 13;
            this.label2.Text = "Template:";
            // 
            // btnClearSent
            // 
            this.btnClearSent.Location = new System.Drawing.Point(528, 75);
            this.btnClearSent.Name = "btnClearSent";
            this.btnClearSent.Size = new System.Drawing.Size(84, 24);
            this.btnClearSent.TabIndex = 12;
            this.btnClearSent.Text = "&Clear";
            this.btnClearSent.Click += new System.EventHandler(this.btnClearSent_Click);
            // 
            // txtXmlTemplate
            // 
            this.txtXmlTemplate.Location = new System.Drawing.Point(88, 19);
            this.txtXmlTemplate.Multiline = true;
            this.txtXmlTemplate.Name = "txtXmlTemplate";
            this.txtXmlTemplate.Size = new System.Drawing.Size(432, 80);
            this.txtXmlTemplate.TabIndex = 11;
            // 
            // groupBox3
            // 
            this.groupBox3.Controls.Add(this.btnClearResponse);
            this.groupBox3.Controls.Add(this.txtResponse);
            this.groupBox3.Location = new System.Drawing.Point(12, 318);
            this.groupBox3.Name = "groupBox3";
            this.groupBox3.Size = new System.Drawing.Size(624, 107);
            this.groupBox3.TabIndex = 2;
            this.groupBox3.TabStop = false;
            this.groupBox3.Text = "Server response";
            // 
            // btnClearResponse
            // 
            this.btnClearResponse.Location = new System.Drawing.Point(528, 75);
            this.btnClearResponse.Name = "btnClearResponse";
            this.btnClearResponse.Size = new System.Drawing.Size(84, 24);
            this.btnClearResponse.TabIndex = 1;
            this.btnClearResponse.Text = "C&lear";
            this.btnClearResponse.Click += new System.EventHandler(this.btnClearResponse_Click);
            // 
            // txtResponse
            // 
            this.txtResponse.Location = new System.Drawing.Point(88, 19);
            this.txtResponse.Multiline = true;
            this.txtResponse.Name = "txtResponse";
            this.txtResponse.Size = new System.Drawing.Size(432, 80);
            this.txtResponse.TabIndex = 0;
            // 
            // groupBox4
            // 
            this.groupBox4.Controls.Add(this.btnView);
            this.groupBox4.Controls.Add(this.Label12);
            this.groupBox4.Controls.Add(this.txtLogFile);
            this.groupBox4.Controls.Add(this.txtResult);
            this.groupBox4.Controls.Add(this.Label10);
            this.groupBox4.Location = new System.Drawing.Point(12, 431);
            this.groupBox4.Name = "groupBox4";
            this.groupBox4.Size = new System.Drawing.Size(624, 78);
            this.groupBox4.TabIndex = 3;
            this.groupBox4.TabStop = false;
            this.groupBox4.Text = "Result && Logging";
            // 
            // btnView
            // 
            this.btnView.Location = new System.Drawing.Point(528, 48);
            this.btnView.Name = "btnView";
            this.btnView.Size = new System.Drawing.Size(84, 23);
            this.btnView.TabIndex = 2;
            this.btnView.Text = "&View...";
            this.btnView.Click += new System.EventHandler(this.btnView_Click);
            // 
            // Label12
            // 
            this.Label12.Location = new System.Drawing.Point(20, 53);
            this.Label12.Name = "Label12";
            this.Label12.Size = new System.Drawing.Size(52, 16);
            this.Label12.TabIndex = 4;
            this.Label12.Text = "Lo&g file:";
            // 
            // txtLogFile
            // 
            this.txtLogFile.Location = new System.Drawing.Point(88, 50);
            this.txtLogFile.Name = "txtLogFile";
            this.txtLogFile.Size = new System.Drawing.Size(432, 20);
            this.txtLogFile.TabIndex = 1;
            // 
            // txtResult
            // 
            this.txtResult.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.txtResult.Location = new System.Drawing.Point(88, 24);
            this.txtResult.Name = "txtResult";
            this.txtResult.ReadOnly = true;
            this.txtResult.Size = new System.Drawing.Size(524, 20);
            this.txtResult.TabIndex = 0;
            // 
            // Label10
            // 
            this.Label10.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Label10.Location = new System.Drawing.Point(20, 26);
            this.Label10.Name = "Label10";
            this.Label10.Size = new System.Drawing.Size(60, 16);
            this.Label10.TabIndex = 0;
            this.Label10.Text = "Result:";
            // 
            // groupBox5
            // 
            this.groupBox5.Controls.Add(this.txtHost);
            this.groupBox5.Controls.Add(this.label1);
            this.groupBox5.Location = new System.Drawing.Point(12, 12);
            this.groupBox5.Name = "groupBox5";
            this.groupBox5.Size = new System.Drawing.Size(624, 40);
            this.groupBox5.TabIndex = 14;
            this.groupBox5.TabStop = false;
            this.groupBox5.Text = "Host";
            // 
            // txtHost
            // 
            this.txtHost.Location = new System.Drawing.Point(88, 12);
            this.txtHost.Name = "txtHost";
            this.txtHost.Size = new System.Drawing.Size(432, 20);
            this.txtHost.TabIndex = 8;
            this.txtHost.Text = "https://gateway.auronsoftware.com:8181/sendsms/sendsmsHttpXML.asp";
            // 
            // label1
            // 
            this.label1.Location = new System.Drawing.Point(20, 16);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(56, 16);
            this.label1.TabIndex = 7;
            this.label1.Text = "&Host:";
            // 
            // lblInfo
            // 
            this.lblInfo.AutoSize = true;
            this.lblInfo.Location = new System.Drawing.Point(9, 522);
            this.lblInfo.Name = "lblInfo";
            this.lblInfo.Size = new System.Drawing.Size(31, 13);
            this.lblInfo.TabIndex = 42;
            this.lblInfo.Text = "[Info]";
            // 
            // frmHttpXml
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(643, 544);
            this.Controls.Add(this.lblInfo);
            this.Controls.Add(this.groupBox5);
            this.Controls.Add(this.groupBox4);
            this.Controls.Add(this.groupBox3);
            this.Controls.Add(this.GroupBox2);
            this.Controls.Add(this.groupBox1);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedDialog;
            this.Name = "frmHttpXml";
            this.Text = "Auron SMS Component - C#.NET HTTP XML  Demo";
            this.Load += new System.EventHandler(this.frmHttpXml_Load);
            this.GroupBox2.ResumeLayout(false);
            this.GroupBox2.PerformLayout();
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.groupBox3.ResumeLayout(false);
            this.groupBox3.PerformLayout();
            this.groupBox4.ResumeLayout(false);
            this.groupBox4.PerformLayout();
            this.groupBox5.ResumeLayout(false);
            this.groupBox5.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        internal System.Windows.Forms.GroupBox GroupBox2;
        internal System.Windows.Forms.LinkLabel llblUrlRecipientFormat;
        internal System.Windows.Forms.Button btnSend;
        internal System.Windows.Forms.Label Label8;
        internal System.Windows.Forms.TextBox txtMessage;
        internal System.Windows.Forms.Label Label7;
        internal System.Windows.Forms.TextBox txtMessageRecipient;
        private System.Windows.Forms.GroupBox groupBox1;
        internal System.Windows.Forms.TextBox txtXmlTemplate;
        internal System.Windows.Forms.Button btnClearSent;
        private System.Windows.Forms.GroupBox groupBox3;
        internal System.Windows.Forms.Button btnClearResponse;
        internal System.Windows.Forms.TextBox txtResponse;
        internal System.Windows.Forms.GroupBox groupBox4;
        internal System.Windows.Forms.Button btnView;
        internal System.Windows.Forms.Label Label12;
        internal System.Windows.Forms.TextBox txtLogFile;
        internal System.Windows.Forms.TextBox txtResult;
        internal System.Windows.Forms.Label Label10;
        private System.Windows.Forms.GroupBox groupBox5;
        private System.Windows.Forms.TextBox txtHost;
        internal System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label lblInfo;
        private System.Windows.Forms.Label label2;
    }
}