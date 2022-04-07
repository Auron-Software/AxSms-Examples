namespace Demo
{
    partial class frmSmppAdvanced
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
            this.btnCancel = new System.Windows.Forms.Button();
            this.btnOK = new System.Windows.Forms.Button();
            this.Label4 = new System.Windows.Forms.Label();
            this.txtSystemType = new System.Windows.Forms.TextBox();
            this.Label8 = new System.Windows.Forms.GroupBox();
            this.label3 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.txtBindTimeout = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.cbxAddressNpi = new System.Windows.Forms.ComboBox();
            this.Label15 = new System.Windows.Forms.Label();
            this.cbxAddressTon = new System.Windows.Forms.ComboBox();
            this.Label14 = new System.Windows.Forms.Label();
            this.txtAddressRange = new System.Windows.Forms.TextBox();
            this.Label12 = new System.Windows.Forms.Label();
            this.Label11 = new System.Windows.Forms.Label();
            this.txtEnquireInterval = new System.Windows.Forms.TextBox();
            this.txtConnectTimeout = new System.Windows.Forms.TextBox();
            this.cbxInterfaceVersion = new System.Windows.Forms.ComboBox();
            this.Label7 = new System.Windows.Forms.Label();
            this.Label6 = new System.Windows.Forms.Label();
            this.Label1 = new System.Windows.Forms.Label();
            this.lblInfo = new System.Windows.Forms.LinkLabel();
            this.Label8.SuspendLayout();
            this.SuspendLayout();
            // 
            // btnCancel
            // 
            this.btnCancel.Location = new System.Drawing.Point(417, 292);
            this.btnCancel.Name = "btnCancel";
            this.btnCancel.Size = new System.Drawing.Size(72, 23);
            this.btnCancel.TabIndex = 8;
            this.btnCancel.Text = "Cancel";
            this.btnCancel.Click += new System.EventHandler(this.btnCancel_Click);
            // 
            // btnOK
            // 
            this.btnOK.Location = new System.Drawing.Point(339, 292);
            this.btnOK.Name = "btnOK";
            this.btnOK.Size = new System.Drawing.Size(72, 23);
            this.btnOK.TabIndex = 7;
            this.btnOK.Text = "OK";
            this.btnOK.Click += new System.EventHandler(this.btnOK_Click);
            // 
            // Label4
            // 
            this.Label4.Location = new System.Drawing.Point(224, 80);
            this.Label4.Name = "Label4";
            this.Label4.Size = new System.Drawing.Size(68, 12);
            this.Label4.TabIndex = 4;
            this.Label4.Text = "milliseconds";
            // 
            // txtSystemType
            // 
            this.txtSystemType.Location = new System.Drawing.Point(118, 129);
            this.txtSystemType.Name = "txtSystemType";
            this.txtSystemType.Size = new System.Drawing.Size(100, 20);
            this.txtSystemType.TabIndex = 12;
            this.txtSystemType.Text = "SMPP";
            // 
            // Label8
            // 
            this.Label8.Controls.Add(this.label3);
            this.Label8.Controls.Add(this.label5);
            this.Label8.Controls.Add(this.txtBindTimeout);
            this.Label8.Controls.Add(this.label2);
            this.Label8.Controls.Add(this.Label4);
            this.Label8.Controls.Add(this.txtSystemType);
            this.Label8.Controls.Add(this.cbxAddressNpi);
            this.Label8.Controls.Add(this.Label15);
            this.Label8.Controls.Add(this.cbxAddressTon);
            this.Label8.Controls.Add(this.Label14);
            this.Label8.Controls.Add(this.txtAddressRange);
            this.Label8.Controls.Add(this.Label12);
            this.Label8.Controls.Add(this.Label11);
            this.Label8.Controls.Add(this.txtEnquireInterval);
            this.Label8.Controls.Add(this.txtConnectTimeout);
            this.Label8.Controls.Add(this.cbxInterfaceVersion);
            this.Label8.Controls.Add(this.Label7);
            this.Label8.Controls.Add(this.Label6);
            this.Label8.Controls.Add(this.Label1);
            this.Label8.Location = new System.Drawing.Point(12, 12);
            this.Label8.Name = "Label8";
            this.Label8.Size = new System.Drawing.Size(477, 244);
            this.Label8.TabIndex = 6;
            this.Label8.TabStop = false;
            this.Label8.Text = "Advanced SMPP Settings";
            // 
            // label3
            // 
            this.label3.Location = new System.Drawing.Point(224, 106);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(68, 12);
            this.label3.TabIndex = 26;
            this.label3.Text = "milliseconds";
            // 
            // label5
            // 
            this.label5.Location = new System.Drawing.Point(224, 54);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(68, 12);
            this.label5.TabIndex = 25;
            this.label5.Text = "milliseconds";
            // 
            // txtBindTimeout
            // 
            this.txtBindTimeout.Location = new System.Drawing.Point(118, 77);
            this.txtBindTimeout.Name = "txtBindTimeout";
            this.txtBindTimeout.Size = new System.Drawing.Size(100, 20);
            this.txtBindTimeout.TabIndex = 24;
            this.txtBindTimeout.Text = "5000";
            // 
            // label2
            // 
            this.label2.Location = new System.Drawing.Point(18, 80);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(96, 16);
            this.label2.TabIndex = 23;
            this.label2.Text = "&Bind Timeout:";
            // 
            // cbxAddressNpi
            // 
            this.cbxAddressNpi.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.cbxAddressNpi.Location = new System.Drawing.Point(118, 208);
            this.cbxAddressNpi.Name = "cbxAddressNpi";
            this.cbxAddressNpi.Size = new System.Drawing.Size(180, 21);
            this.cbxAddressNpi.TabIndex = 22;
            // 
            // Label15
            // 
            this.Label15.Location = new System.Drawing.Point(18, 210);
            this.Label15.Name = "Label15";
            this.Label15.Size = new System.Drawing.Size(96, 16);
            this.Label15.TabIndex = 21;
            this.Label15.Text = "Address N&PI:";
            // 
            // cbxAddressTon
            // 
            this.cbxAddressTon.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.cbxAddressTon.Location = new System.Drawing.Point(118, 181);
            this.cbxAddressTon.Name = "cbxAddressTon";
            this.cbxAddressTon.Size = new System.Drawing.Size(180, 21);
            this.cbxAddressTon.TabIndex = 20;
            // 
            // Label14
            // 
            this.Label14.Location = new System.Drawing.Point(18, 184);
            this.Label14.Name = "Label14";
            this.Label14.Size = new System.Drawing.Size(96, 16);
            this.Label14.TabIndex = 19;
            this.Label14.Text = "Address &TON:";
            // 
            // txtAddressRange
            // 
            this.txtAddressRange.Location = new System.Drawing.Point(118, 155);
            this.txtAddressRange.Name = "txtAddressRange";
            this.txtAddressRange.Size = new System.Drawing.Size(180, 20);
            this.txtAddressRange.TabIndex = 16;
            // 
            // Label12
            // 
            this.Label12.Location = new System.Drawing.Point(18, 158);
            this.Label12.Name = "Label12";
            this.Label12.Size = new System.Drawing.Size(96, 16);
            this.Label12.TabIndex = 15;
            this.Label12.Text = "A&ddress Range:";
            // 
            // Label11
            // 
            this.Label11.Location = new System.Drawing.Point(18, 132);
            this.Label11.Name = "Label11";
            this.Label11.Size = new System.Drawing.Size(96, 16);
            this.Label11.TabIndex = 11;
            this.Label11.Text = "S&ystem Type:";
            // 
            // txtEnquireInterval
            // 
            this.txtEnquireInterval.Location = new System.Drawing.Point(118, 103);
            this.txtEnquireInterval.Name = "txtEnquireInterval";
            this.txtEnquireInterval.Size = new System.Drawing.Size(100, 20);
            this.txtEnquireInterval.TabIndex = 6;
            // 
            // txtConnectTimeout
            // 
            this.txtConnectTimeout.Location = new System.Drawing.Point(118, 51);
            this.txtConnectTimeout.Name = "txtConnectTimeout";
            this.txtConnectTimeout.Size = new System.Drawing.Size(100, 20);
            this.txtConnectTimeout.TabIndex = 3;
            this.txtConnectTimeout.Text = "5000";
            // 
            // cbxInterfaceVersion
            // 
            this.cbxInterfaceVersion.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.cbxInterfaceVersion.Location = new System.Drawing.Point(118, 24);
            this.cbxInterfaceVersion.Name = "cbxInterfaceVersion";
            this.cbxInterfaceVersion.Size = new System.Drawing.Size(100, 21);
            this.cbxInterfaceVersion.TabIndex = 1;
            // 
            // Label7
            // 
            this.Label7.Location = new System.Drawing.Point(18, 54);
            this.Label7.Name = "Label7";
            this.Label7.Size = new System.Drawing.Size(96, 16);
            this.Label7.TabIndex = 2;
            this.Label7.Text = "Connect &Timeout:";
            // 
            // Label6
            // 
            this.Label6.Location = new System.Drawing.Point(18, 106);
            this.Label6.Name = "Label6";
            this.Label6.Size = new System.Drawing.Size(100, 16);
            this.Label6.TabIndex = 5;
            this.Label6.Text = "&Enquire Interval:";
            // 
            // Label1
            // 
            this.Label1.Location = new System.Drawing.Point(18, 28);
            this.Label1.Name = "Label1";
            this.Label1.Size = new System.Drawing.Size(96, 16);
            this.Label1.TabIndex = 0;
            this.Label1.Text = "Interface &Version:";
            // 
            // lblInfo
            // 
            this.lblInfo.LinkArea = new System.Windows.Forms.LinkArea(0, 0);
            this.lblInfo.Location = new System.Drawing.Point(9, 259);
            this.lblInfo.Name = "lblInfo";
            this.lblInfo.Size = new System.Drawing.Size(480, 30);
            this.lblInfo.TabIndex = 9;
            this.lblInfo.Text = "When using the Auron Demo Gateway please fill \'Address Range\' with \'S\' and" +
                " your mobile nr. E.g. S+441122334455";
            this.lblInfo.LinkClicked += new System.Windows.Forms.LinkLabelLinkClickedEventHandler(this.lblInfo_LinkClicked);
            // 
            // frmSmppAdvanced
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(501, 327);
            this.Controls.Add(this.btnCancel);
            this.Controls.Add(this.btnOK);
            this.Controls.Add(this.lblInfo);
            this.Controls.Add(this.Label8);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedDialog;
            this.MaximizeBox = false;
            this.MinimizeBox = false;
            this.Name = "frmSmppAdvanced";
            this.Text = "Smpp Advanced Settings";
            this.Load += new System.EventHandler(this.frmSmppAdvanced_Load);
            this.Label8.ResumeLayout(false);
            this.Label8.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        internal System.Windows.Forms.Button btnCancel;
        internal System.Windows.Forms.Button btnOK;
        internal System.Windows.Forms.Label Label4;
        internal System.Windows.Forms.TextBox txtSystemType;
        internal System.Windows.Forms.GroupBox Label8;
        internal System.Windows.Forms.ComboBox cbxAddressNpi;
        internal System.Windows.Forms.Label Label15;
        internal System.Windows.Forms.ComboBox cbxAddressTon;
        internal System.Windows.Forms.Label Label14;
        internal System.Windows.Forms.TextBox txtAddressRange;
        internal System.Windows.Forms.Label Label12;
        internal System.Windows.Forms.Label Label11;
        internal System.Windows.Forms.TextBox txtEnquireInterval;
        internal System.Windows.Forms.TextBox txtConnectTimeout;
        internal System.Windows.Forms.ComboBox cbxInterfaceVersion;
        internal System.Windows.Forms.Label Label7;
        internal System.Windows.Forms.Label Label6;
        internal System.Windows.Forms.Label Label1;
        private System.Windows.Forms.LinkLabel lblInfo;
        internal System.Windows.Forms.TextBox txtBindTimeout;
        internal System.Windows.Forms.Label label2;
        internal System.Windows.Forms.Label label3;
        internal System.Windows.Forms.Label label5;
    }
}