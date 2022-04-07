<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class frmSmppSendAdvanced
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Required by the Windows Form Designer
    Private components As System.ComponentModel.IContainer

    'NOTE: The following procedure is required by the Windows Form Designer
    'It can be modified using the Windows Form Designer.  
    'Do not modify it using the code editor.
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Me.groupBox2 = New System.Windows.Forms.GroupBox
        Me.btRemove = New System.Windows.Forms.Button
        Me.btEdit = New System.Windows.Forms.Button
        Me.btAdd = New System.Windows.Forms.Button
        Me.lvTlvs = New System.Windows.Forms.ListView
        Me.groupBox1 = New System.Windows.Forms.GroupBox
        Me.label6 = New System.Windows.Forms.Label
        Me.cbxBodyFormat = New System.Windows.Forms.ComboBox
        Me.label4 = New System.Windows.Forms.Label
        Me.label5 = New System.Windows.Forms.Label
        Me.cbxFromNpi = New System.Windows.Forms.ComboBox
        Me.cbxFromTon = New System.Windows.Forms.ComboBox
        Me.label3 = New System.Windows.Forms.Label
        Me.label2 = New System.Windows.Forms.Label
        Me.cbxToNpi = New System.Windows.Forms.ComboBox
        Me.cbxToTon = New System.Windows.Forms.ComboBox
        Me.label1 = New System.Windows.Forms.Label
        Me.txtFromAddress = New System.Windows.Forms.TextBox
        Me.cbHasUdh = New System.Windows.Forms.CheckBox
        Me.cbRequestDeliveryReport = New System.Windows.Forms.CheckBox
        Me.btnCancel = New System.Windows.Forms.Button
        Me.btnOK = New System.Windows.Forms.Button
        Me.groupBox2.SuspendLayout()
        Me.groupBox1.SuspendLayout()
        Me.SuspendLayout()
        '
        'groupBox2
        '
        Me.groupBox2.Controls.Add(Me.btRemove)
        Me.groupBox2.Controls.Add(Me.btEdit)
        Me.groupBox2.Controls.Add(Me.btAdd)
        Me.groupBox2.Controls.Add(Me.lvTlvs)
        Me.groupBox2.Location = New System.Drawing.Point(12, 160)
        Me.groupBox2.Name = "groupBox2"
        Me.groupBox2.Size = New System.Drawing.Size(517, 160)
        Me.groupBox2.TabIndex = 41
        Me.groupBox2.TabStop = False
        Me.groupBox2.Text = "TLV's"
        '
        'btRemove
        '
        Me.btRemove.Location = New System.Drawing.Point(173, 125)
        Me.btRemove.Name = "btRemove"
        Me.btRemove.Size = New System.Drawing.Size(75, 23)
        Me.btRemove.TabIndex = 39
        Me.btRemove.Text = "Remove"
        Me.btRemove.UseVisualStyleBackColor = True
        '
        'btEdit
        '
        Me.btEdit.Location = New System.Drawing.Point(91, 125)
        Me.btEdit.Name = "btEdit"
        Me.btEdit.Size = New System.Drawing.Size(75, 23)
        Me.btEdit.TabIndex = 38
        Me.btEdit.Text = "Edit..."
        Me.btEdit.UseVisualStyleBackColor = True
        '
        'btAdd
        '
        Me.btAdd.Location = New System.Drawing.Point(9, 125)
        Me.btAdd.Name = "btAdd"
        Me.btAdd.Size = New System.Drawing.Size(75, 23)
        Me.btAdd.TabIndex = 37
        Me.btAdd.Text = "Add..."
        Me.btAdd.UseVisualStyleBackColor = True
        '
        'lvTlvs
        '
        Me.lvTlvs.FullRowSelect = True
        Me.lvTlvs.Location = New System.Drawing.Point(6, 19)
        Me.lvTlvs.MultiSelect = False
        Me.lvTlvs.Name = "lvTlvs"
        Me.lvTlvs.Size = New System.Drawing.Size(505, 100)
        Me.lvTlvs.TabIndex = 36
        Me.lvTlvs.UseCompatibleStateImageBehavior = False
        Me.lvTlvs.View = System.Windows.Forms.View.Details
        '
        'groupBox1
        '
        Me.groupBox1.Controls.Add(Me.label6)
        Me.groupBox1.Controls.Add(Me.cbxBodyFormat)
        Me.groupBox1.Controls.Add(Me.label4)
        Me.groupBox1.Controls.Add(Me.label5)
        Me.groupBox1.Controls.Add(Me.cbxFromNpi)
        Me.groupBox1.Controls.Add(Me.cbxFromTon)
        Me.groupBox1.Controls.Add(Me.label3)
        Me.groupBox1.Controls.Add(Me.label2)
        Me.groupBox1.Controls.Add(Me.cbxToNpi)
        Me.groupBox1.Controls.Add(Me.cbxToTon)
        Me.groupBox1.Controls.Add(Me.label1)
        Me.groupBox1.Controls.Add(Me.txtFromAddress)
        Me.groupBox1.Controls.Add(Me.cbHasUdh)
        Me.groupBox1.Controls.Add(Me.cbRequestDeliveryReport)
        Me.groupBox1.Location = New System.Drawing.Point(12, 12)
        Me.groupBox1.Name = "groupBox1"
        Me.groupBox1.Size = New System.Drawing.Size(511, 141)
        Me.groupBox1.TabIndex = 40
        Me.groupBox1.TabStop = False
        Me.groupBox1.Text = "Advanced properties"
        '
        'label6
        '
        Me.label6.AutoSize = True
        Me.label6.Location = New System.Drawing.Point(12, 106)
        Me.label6.Name = "label6"
        Me.label6.Size = New System.Drawing.Size(66, 13)
        Me.label6.TabIndex = 46
        Me.label6.Text = "Body format:"
        '
        'cbxBodyFormat
        '
        Me.cbxBodyFormat.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList
        Me.cbxBodyFormat.FormattingEnabled = True
        Me.cbxBodyFormat.Location = New System.Drawing.Point(113, 103)
        Me.cbxBodyFormat.Name = "cbxBodyFormat"
        Me.cbxBodyFormat.Size = New System.Drawing.Size(135, 21)
        Me.cbxBodyFormat.TabIndex = 45
        '
        'label4
        '
        Me.label4.AutoSize = True
        Me.label4.Location = New System.Drawing.Point(12, 79)
        Me.label4.Name = "label4"
        Me.label4.Size = New System.Drawing.Size(95, 13)
        Me.label4.TabIndex = 44
        Me.label4.Text = "From Address NPI:"
        '
        'label5
        '
        Me.label5.AutoSize = True
        Me.label5.Location = New System.Drawing.Point(12, 52)
        Me.label5.Name = "label5"
        Me.label5.Size = New System.Drawing.Size(100, 13)
        Me.label5.TabIndex = 43
        Me.label5.Text = "From Address TON:"
        '
        'cbxFromNpi
        '
        Me.cbxFromNpi.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList
        Me.cbxFromNpi.FormattingEnabled = True
        Me.cbxFromNpi.Location = New System.Drawing.Point(113, 76)
        Me.cbxFromNpi.Name = "cbxFromNpi"
        Me.cbxFromNpi.Size = New System.Drawing.Size(135, 21)
        Me.cbxFromNpi.TabIndex = 42
        '
        'cbxFromTon
        '
        Me.cbxFromTon.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList
        Me.cbxFromTon.FormattingEnabled = True
        Me.cbxFromTon.Location = New System.Drawing.Point(113, 49)
        Me.cbxFromTon.Name = "cbxFromTon"
        Me.cbxFromTon.Size = New System.Drawing.Size(135, 21)
        Me.cbxFromTon.TabIndex = 41
        '
        'label3
        '
        Me.label3.AutoSize = True
        Me.label3.Location = New System.Drawing.Point(266, 53)
        Me.label3.Name = "label3"
        Me.label3.Size = New System.Drawing.Size(85, 13)
        Me.label3.TabIndex = 40
        Me.label3.Text = "To Address NPI:"
        '
        'label2
        '
        Me.label2.AutoSize = True
        Me.label2.Location = New System.Drawing.Point(266, 26)
        Me.label2.Name = "label2"
        Me.label2.Size = New System.Drawing.Size(90, 13)
        Me.label2.TabIndex = 39
        Me.label2.Text = "To Address TON:"
        '
        'cbxToNpi
        '
        Me.cbxToNpi.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList
        Me.cbxToNpi.FormattingEnabled = True
        Me.cbxToNpi.Location = New System.Drawing.Point(367, 50)
        Me.cbxToNpi.Name = "cbxToNpi"
        Me.cbxToNpi.Size = New System.Drawing.Size(135, 21)
        Me.cbxToNpi.TabIndex = 38
        '
        'cbxToTon
        '
        Me.cbxToTon.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList
        Me.cbxToTon.FormattingEnabled = True
        Me.cbxToTon.Location = New System.Drawing.Point(367, 23)
        Me.cbxToTon.Name = "cbxToTon"
        Me.cbxToTon.Size = New System.Drawing.Size(135, 21)
        Me.cbxToTon.TabIndex = 37
        '
        'label1
        '
        Me.label1.AutoSize = True
        Me.label1.Location = New System.Drawing.Point(12, 26)
        Me.label1.Name = "label1"
        Me.label1.Size = New System.Drawing.Size(74, 13)
        Me.label1.TabIndex = 36
        Me.label1.Text = "From Address:"
        '
        'txtFromAddress
        '
        Me.txtFromAddress.Location = New System.Drawing.Point(113, 23)
        Me.txtFromAddress.Name = "txtFromAddress"
        Me.txtFromAddress.Size = New System.Drawing.Size(135, 20)
        Me.txtFromAddress.TabIndex = 35
        '
        'cbHasUdh
        '
        Me.cbHasUdh.AutoSize = True
        Me.cbHasUdh.Location = New System.Drawing.Point(434, 108)
        Me.cbHasUdh.Name = "cbHasUdh"
        Me.cbHasUdh.Size = New System.Drawing.Size(68, 17)
        Me.cbHasUdh.TabIndex = 34
        Me.cbHasUdh.Text = "Has Udh"
        Me.cbHasUdh.UseVisualStyleBackColor = True
        '
        'cbRequestDeliveryReport
        '
        Me.cbRequestDeliveryReport.AutoSize = True
        Me.cbRequestDeliveryReport.Location = New System.Drawing.Point(269, 108)
        Me.cbRequestDeliveryReport.Name = "cbRequestDeliveryReport"
        Me.cbRequestDeliveryReport.Size = New System.Drawing.Size(135, 17)
        Me.cbRequestDeliveryReport.TabIndex = 33
        Me.cbRequestDeliveryReport.Text = "&Request delivery report"
        '
        'btnCancel
        '
        Me.btnCancel.Location = New System.Drawing.Point(457, 333)
        Me.btnCancel.Name = "btnCancel"
        Me.btnCancel.Size = New System.Drawing.Size(72, 23)
        Me.btnCancel.TabIndex = 39
        Me.btnCancel.Text = "Cancel"
        '
        'btnOK
        '
        Me.btnOK.Location = New System.Drawing.Point(379, 333)
        Me.btnOK.Name = "btnOK"
        Me.btnOK.Size = New System.Drawing.Size(72, 23)
        Me.btnOK.TabIndex = 38
        Me.btnOK.Text = "OK"
        '
        'frmSmppSendAdvanced
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(540, 367)
        Me.Controls.Add(Me.groupBox2)
        Me.Controls.Add(Me.groupBox1)
        Me.Controls.Add(Me.btnCancel)
        Me.Controls.Add(Me.btnOK)
        Me.Name = "frmSmppSendAdvanced"
        Me.Text = "frmSmppSendAdvanced"
        Me.groupBox2.ResumeLayout(False)
        Me.groupBox1.ResumeLayout(False)
        Me.groupBox1.PerformLayout()
        Me.ResumeLayout(False)

    End Sub
    Private WithEvents groupBox2 As System.Windows.Forms.GroupBox
    Private WithEvents btRemove As System.Windows.Forms.Button
    Private WithEvents btEdit As System.Windows.Forms.Button
    Private WithEvents btAdd As System.Windows.Forms.Button
    Private WithEvents lvTlvs As System.Windows.Forms.ListView
    Private WithEvents groupBox1 As System.Windows.Forms.GroupBox
    Private WithEvents label6 As System.Windows.Forms.Label
    Private WithEvents cbxBodyFormat As System.Windows.Forms.ComboBox
    Private WithEvents label4 As System.Windows.Forms.Label
    Private WithEvents label5 As System.Windows.Forms.Label
    Private WithEvents cbxFromNpi As System.Windows.Forms.ComboBox
    Private WithEvents cbxFromTon As System.Windows.Forms.ComboBox
    Private WithEvents label3 As System.Windows.Forms.Label
    Private WithEvents label2 As System.Windows.Forms.Label
    Private WithEvents cbxToNpi As System.Windows.Forms.ComboBox
    Private WithEvents cbxToTon As System.Windows.Forms.ComboBox
    Private WithEvents label1 As System.Windows.Forms.Label
    Private WithEvents txtFromAddress As System.Windows.Forms.TextBox
    Private WithEvents cbHasUdh As System.Windows.Forms.CheckBox
    Friend WithEvents cbRequestDeliveryReport As System.Windows.Forms.CheckBox
    Friend WithEvents btnCancel As System.Windows.Forms.Button
    Friend WithEvents btnOK As System.Windows.Forms.Button
End Class
