namespace Demo
{
    partial class frmSmppSendAdvanced
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
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.label6 = new System.Windows.Forms.Label();
            this.cbxBodyFormat = new System.Windows.Forms.ComboBox();
            this.label4 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.cbxFromNpi = new System.Windows.Forms.ComboBox();
            this.cbxFromTon = new System.Windows.Forms.ComboBox();
            this.label3 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.cbxToNpi = new System.Windows.Forms.ComboBox();
            this.cbxToTon = new System.Windows.Forms.ComboBox();
            this.label1 = new System.Windows.Forms.Label();
            this.txtFromAddress = new System.Windows.Forms.TextBox();
            this.cbHasUdh = new System.Windows.Forms.CheckBox();
            this.cbRequestDeliveryReport = new System.Windows.Forms.CheckBox();
            this.groupBox2 = new System.Windows.Forms.GroupBox();
            this.btRemove = new System.Windows.Forms.Button();
            this.btEdit = new System.Windows.Forms.Button();
            this.btAdd = new System.Windows.Forms.Button();
            this.lvTlvs = new System.Windows.Forms.ListView();
            this.groupBox1.SuspendLayout();
            this.groupBox2.SuspendLayout();
            this.SuspendLayout();
            // 
            // btnCancel
            // 
            this.btnCancel.Location = new System.Drawing.Point(457, 333);
            this.btnCancel.Name = "btnCancel";
            this.btnCancel.Size = new System.Drawing.Size(72, 23);
            this.btnCancel.TabIndex = 5;
            this.btnCancel.Text = "Cancel";
            this.btnCancel.Click += new System.EventHandler(this.btnCancel_Click);
            // 
            // btnOK
            // 
            this.btnOK.Location = new System.Drawing.Point(379, 333);
            this.btnOK.Name = "btnOK";
            this.btnOK.Size = new System.Drawing.Size(72, 23);
            this.btnOK.TabIndex = 4;
            this.btnOK.Text = "OK";
            this.btnOK.Click += new System.EventHandler(this.btnOK_Click);
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.label6);
            this.groupBox1.Controls.Add(this.cbxBodyFormat);
            this.groupBox1.Controls.Add(this.label4);
            this.groupBox1.Controls.Add(this.label5);
            this.groupBox1.Controls.Add(this.cbxFromNpi);
            this.groupBox1.Controls.Add(this.cbxFromTon);
            this.groupBox1.Controls.Add(this.label3);
            this.groupBox1.Controls.Add(this.label2);
            this.groupBox1.Controls.Add(this.cbxToNpi);
            this.groupBox1.Controls.Add(this.cbxToTon);
            this.groupBox1.Controls.Add(this.label1);
            this.groupBox1.Controls.Add(this.txtFromAddress);
            this.groupBox1.Controls.Add(this.cbHasUdh);
            this.groupBox1.Controls.Add(this.cbRequestDeliveryReport);
            this.groupBox1.Location = new System.Drawing.Point(12, 12);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(511, 141);
            this.groupBox1.TabIndex = 36;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "Advanced properties";
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Location = new System.Drawing.Point(12, 106);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(66, 13);
            this.label6.TabIndex = 46;
            this.label6.Text = "Body format:";
            // 
            // cbxBodyFormat
            // 
            this.cbxBodyFormat.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.cbxBodyFormat.FormattingEnabled = true;
            this.cbxBodyFormat.Location = new System.Drawing.Point(113, 103);
            this.cbxBodyFormat.Name = "cbxBodyFormat";
            this.cbxBodyFormat.Size = new System.Drawing.Size(135, 21);
            this.cbxBodyFormat.TabIndex = 45;
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(12, 79);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(95, 13);
            this.label4.TabIndex = 44;
            this.label4.Text = "From Address NPI:";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(12, 52);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(100, 13);
            this.label5.TabIndex = 43;
            this.label5.Text = "From Address TON:";
            // 
            // cbxFromNpi
            // 
            this.cbxFromNpi.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.cbxFromNpi.FormattingEnabled = true;
            this.cbxFromNpi.Location = new System.Drawing.Point(113, 76);
            this.cbxFromNpi.Name = "cbxFromNpi";
            this.cbxFromNpi.Size = new System.Drawing.Size(135, 21);
            this.cbxFromNpi.TabIndex = 42;
            // 
            // cbxFromTon
            // 
            this.cbxFromTon.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.cbxFromTon.FormattingEnabled = true;
            this.cbxFromTon.Location = new System.Drawing.Point(113, 49);
            this.cbxFromTon.Name = "cbxFromTon";
            this.cbxFromTon.Size = new System.Drawing.Size(135, 21);
            this.cbxFromTon.TabIndex = 41;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(266, 53);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(85, 13);
            this.label3.TabIndex = 40;
            this.label3.Text = "To Address NPI:";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(266, 26);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(90, 13);
            this.label2.TabIndex = 39;
            this.label2.Text = "To Address TON:";
            // 
            // cbxToNpi
            // 
            this.cbxToNpi.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.cbxToNpi.FormattingEnabled = true;
            this.cbxToNpi.Location = new System.Drawing.Point(367, 50);
            this.cbxToNpi.Name = "cbxToNpi";
            this.cbxToNpi.Size = new System.Drawing.Size(135, 21);
            this.cbxToNpi.TabIndex = 38;
            // 
            // cbxToTon
            // 
            this.cbxToTon.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.cbxToTon.FormattingEnabled = true;
            this.cbxToTon.Location = new System.Drawing.Point(367, 23);
            this.cbxToTon.Name = "cbxToTon";
            this.cbxToTon.Size = new System.Drawing.Size(135, 21);
            this.cbxToTon.TabIndex = 37;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(12, 26);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(74, 13);
            this.label1.TabIndex = 36;
            this.label1.Text = "From Address:";
            // 
            // txtFromAddress
            // 
            this.txtFromAddress.Location = new System.Drawing.Point(113, 23);
            this.txtFromAddress.Name = "txtFromAddress";
            this.txtFromAddress.Size = new System.Drawing.Size(135, 20);
            this.txtFromAddress.TabIndex = 35;
            // 
            // cbHasUdh
            // 
            this.cbHasUdh.AutoSize = true;
            this.cbHasUdh.Location = new System.Drawing.Point(434, 108);
            this.cbHasUdh.Name = "cbHasUdh";
            this.cbHasUdh.Size = new System.Drawing.Size(68, 17);
            this.cbHasUdh.TabIndex = 34;
            this.cbHasUdh.Text = "Has Udh";
            this.cbHasUdh.UseVisualStyleBackColor = true;
            // 
            // cbRequestDeliveryReport
            // 
            this.cbRequestDeliveryReport.AutoSize = true;
            this.cbRequestDeliveryReport.Location = new System.Drawing.Point(269, 108);
            this.cbRequestDeliveryReport.Name = "cbRequestDeliveryReport";
            this.cbRequestDeliveryReport.Size = new System.Drawing.Size(135, 17);
            this.cbRequestDeliveryReport.TabIndex = 33;
            this.cbRequestDeliveryReport.Text = "&Request delivery report";
            // 
            // groupBox2
            // 
            this.groupBox2.Controls.Add(this.btRemove);
            this.groupBox2.Controls.Add(this.btEdit);
            this.groupBox2.Controls.Add(this.btAdd);
            this.groupBox2.Controls.Add(this.lvTlvs);
            this.groupBox2.Location = new System.Drawing.Point(12, 160);
            this.groupBox2.Name = "groupBox2";
            this.groupBox2.Size = new System.Drawing.Size(517, 160);
            this.groupBox2.TabIndex = 37;
            this.groupBox2.TabStop = false;
            this.groupBox2.Text = "TLV\'s";
            // 
            // btRemove
            // 
            this.btRemove.Location = new System.Drawing.Point(173, 126);
            this.btRemove.Name = "btRemove";
            this.btRemove.Size = new System.Drawing.Size(75, 23);
            this.btRemove.TabIndex = 39;
            this.btRemove.Text = "Remove";
            this.btRemove.UseVisualStyleBackColor = true;
            this.btRemove.Click += new System.EventHandler(this.btRemove_Click);
            // 
            // btEdit
            // 
            this.btEdit.Location = new System.Drawing.Point(91, 126);
            this.btEdit.Name = "btEdit";
            this.btEdit.Size = new System.Drawing.Size(75, 23);
            this.btEdit.TabIndex = 38;
            this.btEdit.Text = "Edit...";
            this.btEdit.UseVisualStyleBackColor = true;
            this.btEdit.Click += new System.EventHandler(this.btEdit_Click);
            // 
            // btAdd
            // 
            this.btAdd.Location = new System.Drawing.Point(9, 126);
            this.btAdd.Name = "btAdd";
            this.btAdd.Size = new System.Drawing.Size(75, 23);
            this.btAdd.TabIndex = 37;
            this.btAdd.Text = "Add...";
            this.btAdd.UseVisualStyleBackColor = true;
            this.btAdd.Click += new System.EventHandler(this.btAdd_Click);
            // 
            // lvTlvs
            // 
            this.lvTlvs.FullRowSelect = true;
            this.lvTlvs.Location = new System.Drawing.Point(6, 19);
            this.lvTlvs.MultiSelect = false;
            this.lvTlvs.Name = "lvTlvs";
            this.lvTlvs.Size = new System.Drawing.Size(505, 100);
            this.lvTlvs.TabIndex = 36;
            this.lvTlvs.UseCompatibleStateImageBehavior = false;
            this.lvTlvs.View = System.Windows.Forms.View.Details;
            // 
            // frmSmppSendAdvanced
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(541, 362);
            this.Controls.Add(this.groupBox2);
            this.Controls.Add(this.groupBox1);
            this.Controls.Add(this.btnCancel);
            this.Controls.Add(this.btnOK);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedDialog;
            this.MaximizeBox = false;
            this.MinimizeBox = false;
            this.Name = "frmSmppSendAdvanced";
            this.Text = "Smpp Advanced Send Properties";
            this.Load += new System.EventHandler(this.frmSendOptions_Load);
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.groupBox2.ResumeLayout(false);
            this.ResumeLayout(false);

        }

        #endregion

        internal System.Windows.Forms.Button btnCancel;
        internal System.Windows.Forms.Button btnOK;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.ComboBox cbxFromNpi;
        private System.Windows.Forms.ComboBox cbxFromTon;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.ComboBox cbxToNpi;
        private System.Windows.Forms.ComboBox cbxToTon;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox txtFromAddress;
        private System.Windows.Forms.CheckBox cbHasUdh;
        internal System.Windows.Forms.CheckBox cbRequestDeliveryReport;
        private System.Windows.Forms.GroupBox groupBox2;
        private System.Windows.Forms.Button btRemove;
        private System.Windows.Forms.Button btEdit;
        private System.Windows.Forms.Button btAdd;
        private System.Windows.Forms.ListView lvTlvs;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.ComboBox cbxBodyFormat;
    }
}