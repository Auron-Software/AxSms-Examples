namespace Demo
{
    partial class frmGsmAdvanced
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
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.label6 = new System.Windows.Forms.Label();
            this.cbxBodyFormat = new System.Windows.Forms.ComboBox();
            this.label3 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.cbxToNpi = new System.Windows.Forms.ComboBox();
            this.cbxToTon = new System.Windows.Forms.ComboBox();
            this.cbHasUdh = new System.Windows.Forms.CheckBox();
            this.cbRequestDeliveryReport = new System.Windows.Forms.CheckBox();
            this.btnCancel = new System.Windows.Forms.Button();
            this.btnOK = new System.Windows.Forms.Button();
            this.groupBox1.SuspendLayout();
            this.SuspendLayout();
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.label6);
            this.groupBox1.Controls.Add(this.cbxBodyFormat);
            this.groupBox1.Controls.Add(this.label3);
            this.groupBox1.Controls.Add(this.label2);
            this.groupBox1.Controls.Add(this.cbxToNpi);
            this.groupBox1.Controls.Add(this.cbxToTon);
            this.groupBox1.Controls.Add(this.cbHasUdh);
            this.groupBox1.Controls.Add(this.cbRequestDeliveryReport);
            this.groupBox1.Location = new System.Drawing.Point(8, 12);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(305, 162);
            this.groupBox1.TabIndex = 37;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "Advanced properties";
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Location = new System.Drawing.Point(13, 26);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(66, 13);
            this.label6.TabIndex = 46;
            this.label6.Text = "Body format:";
            // 
            // cbxBodyFormat
            // 
            this.cbxBodyFormat.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.cbxBodyFormat.FormattingEnabled = true;
            this.cbxBodyFormat.Location = new System.Drawing.Point(114, 23);
            this.cbxBodyFormat.Name = "cbxBodyFormat";
            this.cbxBodyFormat.Size = new System.Drawing.Size(166, 21);
            this.cbxBodyFormat.TabIndex = 45;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(13, 80);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(85, 13);
            this.label3.TabIndex = 40;
            this.label3.Text = "To Address NPI:";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(13, 53);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(90, 13);
            this.label2.TabIndex = 39;
            this.label2.Text = "To Address TON:";
            // 
            // cbxToNpi
            // 
            this.cbxToNpi.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.cbxToNpi.FormattingEnabled = true;
            this.cbxToNpi.Location = new System.Drawing.Point(114, 77);
            this.cbxToNpi.Name = "cbxToNpi";
            this.cbxToNpi.Size = new System.Drawing.Size(166, 21);
            this.cbxToNpi.TabIndex = 38;
            // 
            // cbxToTon
            // 
            this.cbxToTon.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.cbxToTon.FormattingEnabled = true;
            this.cbxToTon.Location = new System.Drawing.Point(114, 50);
            this.cbxToTon.Name = "cbxToTon";
            this.cbxToTon.Size = new System.Drawing.Size(166, 21);
            this.cbxToTon.TabIndex = 37;
            // 
            // cbHasUdh
            // 
            this.cbHasUdh.AutoSize = true;
            this.cbHasUdh.Location = new System.Drawing.Point(16, 131);
            this.cbHasUdh.Name = "cbHasUdh";
            this.cbHasUdh.Size = new System.Drawing.Size(68, 17);
            this.cbHasUdh.TabIndex = 34;
            this.cbHasUdh.Text = "Has Udh";
            this.cbHasUdh.UseVisualStyleBackColor = true;
            // 
            // cbRequestDeliveryReport
            // 
            this.cbRequestDeliveryReport.AutoSize = true;
            this.cbRequestDeliveryReport.Location = new System.Drawing.Point(16, 108);
            this.cbRequestDeliveryReport.Name = "cbRequestDeliveryReport";
            this.cbRequestDeliveryReport.Size = new System.Drawing.Size(135, 17);
            this.cbRequestDeliveryReport.TabIndex = 33;
            this.cbRequestDeliveryReport.Text = "&Request delivery report";
            // 
            // btnCancel
            // 
            this.btnCancel.Location = new System.Drawing.Point(87, 180);
            this.btnCancel.Name = "btnCancel";
            this.btnCancel.Size = new System.Drawing.Size(72, 23);
            this.btnCancel.TabIndex = 39;
            this.btnCancel.Text = "Cancel";
            this.btnCancel.Click += new System.EventHandler(this.btnCancel_Click);
            // 
            // btnOK
            // 
            this.btnOK.Location = new System.Drawing.Point(9, 180);
            this.btnOK.Name = "btnOK";
            this.btnOK.Size = new System.Drawing.Size(72, 23);
            this.btnOK.TabIndex = 38;
            this.btnOK.Text = "OK";
            this.btnOK.Click += new System.EventHandler(this.btnOK_Click);
            // 
            // frmGsmAdvanced
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(327, 214);
            this.Controls.Add(this.btnCancel);
            this.Controls.Add(this.btnOK);
            this.Controls.Add(this.groupBox1);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedDialog;
            this.MaximizeBox = false;
            this.MinimizeBox = false;
            this.Name = "frmGsmAdvanced";
            this.Text = "Gsm Advanced Settings";
            this.Load += new System.EventHandler(this.frmGsmAdvanced_Load);
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.ComboBox cbxBodyFormat;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.ComboBox cbxToNpi;
        private System.Windows.Forms.ComboBox cbxToTon;
        private System.Windows.Forms.CheckBox cbHasUdh;
        internal System.Windows.Forms.CheckBox cbRequestDeliveryReport;
        internal System.Windows.Forms.Button btnCancel;
        internal System.Windows.Forms.Button btnOK;

    }
}