namespace Demo
{
    partial class frmGsmReceiveOptions
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
            this.cbxMessageState = new System.Windows.Forms.ComboBox();
            this.label2 = new System.Windows.Forms.Label();
            this.cbxMessageStorage = new System.Windows.Forms.ComboBox();
            this.cbDeleteAfterReceive = new System.Windows.Forms.CheckBox();
            this.Label1 = new System.Windows.Forms.Label();
            this.btnCancel = new System.Windows.Forms.Button();
            this.btnOK = new System.Windows.Forms.Button();
            this.GroupBox1.SuspendLayout();
            this.SuspendLayout();
            // 
            // GroupBox1
            // 
            this.GroupBox1.Controls.Add(this.cbxMessageState);
            this.GroupBox1.Controls.Add(this.label2);
            this.GroupBox1.Controls.Add(this.cbxMessageStorage);
            this.GroupBox1.Controls.Add(this.cbDeleteAfterReceive);
            this.GroupBox1.Controls.Add(this.Label1);
            this.GroupBox1.Location = new System.Drawing.Point(12, 12);
            this.GroupBox1.Name = "GroupBox1";
            this.GroupBox1.Size = new System.Drawing.Size(408, 127);
            this.GroupBox1.TabIndex = 0;
            this.GroupBox1.TabStop = false;
            this.GroupBox1.Text = "Advanced receive options";
            // 
            // cbxMessageState
            // 
            this.cbxMessageState.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.cbxMessageState.Location = new System.Drawing.Point(102, 55);
            this.cbxMessageState.Name = "cbxMessageState";
            this.cbxMessageState.Size = new System.Drawing.Size(300, 21);
            this.cbxMessageState.TabIndex = 3;
            // 
            // label2
            // 
            this.label2.Location = new System.Drawing.Point(8, 58);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(100, 16);
            this.label2.TabIndex = 2;
            this.label2.Text = "Message &type:";
            // 
            // cbxMessageStorage
            // 
            this.cbxMessageStorage.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.cbxMessageStorage.Location = new System.Drawing.Point(102, 28);
            this.cbxMessageStorage.Name = "cbxMessageStorage";
            this.cbxMessageStorage.Size = new System.Drawing.Size(300, 21);
            this.cbxMessageStorage.TabIndex = 1;
            // 
            // cbDeleteAfterReceive
            // 
            this.cbDeleteAfterReceive.Location = new System.Drawing.Point(9, 87);
            this.cbDeleteAfterReceive.Name = "cbDeleteAfterReceive";
            this.cbDeleteAfterReceive.Size = new System.Drawing.Size(200, 24);
            this.cbDeleteAfterReceive.TabIndex = 0;
            this.cbDeleteAfterReceive.Text = "&Delete after receive";
            // 
            // Label1
            // 
            this.Label1.Location = new System.Drawing.Point(8, 31);
            this.Label1.Name = "Label1";
            this.Label1.Size = new System.Drawing.Size(100, 16);
            this.Label1.TabIndex = 1;
            this.Label1.Text = "&Message storage:";
            // 
            // btnCancel
            // 
            this.btnCancel.Location = new System.Drawing.Point(348, 145);
            this.btnCancel.Name = "btnCancel";
            this.btnCancel.Size = new System.Drawing.Size(72, 24);
            this.btnCancel.TabIndex = 13;
            this.btnCancel.Text = "Cancel";
            this.btnCancel.Click += new System.EventHandler(this.btnCancel_Click);
            // 
            // btnOK
            // 
            this.btnOK.Location = new System.Drawing.Point(270, 145);
            this.btnOK.Name = "btnOK";
            this.btnOK.Size = new System.Drawing.Size(72, 24);
            this.btnOK.TabIndex = 12;
            this.btnOK.Text = "OK";
            this.btnOK.Click += new System.EventHandler(this.btnOK_Click);
            // 
            // frmGsmReceiveOptions
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(432, 179);
            this.Controls.Add(this.GroupBox1);
            this.Controls.Add(this.btnCancel);
            this.Controls.Add(this.btnOK);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedDialog;
            this.MaximizeBox = false;
            this.MinimizeBox = false;
            this.Name = "frmGsmReceiveOptions";
            this.Text = "GSM Receive Options";
            this.Load += new System.EventHandler(this.frmGsmReceiveOptions_Load);
            this.GroupBox1.ResumeLayout(false);
            this.ResumeLayout(false);

        }

        #endregion

        internal System.Windows.Forms.GroupBox GroupBox1;
        internal System.Windows.Forms.ComboBox cbxMessageStorage;
        internal System.Windows.Forms.Label Label1;
        internal System.Windows.Forms.CheckBox cbDeleteAfterReceive;
        internal System.Windows.Forms.Button btnCancel;
        internal System.Windows.Forms.Button btnOK;
        internal System.Windows.Forms.ComboBox cbxMessageState;
        internal System.Windows.Forms.Label label2;
    }
}