<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class frmGsmAdvanced
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
        Me.btnCancel = New System.Windows.Forms.Button
        Me.btnOK = New System.Windows.Forms.Button
        Me.groupBox1 = New System.Windows.Forms.GroupBox
        Me.label6 = New System.Windows.Forms.Label
        Me.cbxBodyFormat = New System.Windows.Forms.ComboBox
        Me.label3 = New System.Windows.Forms.Label
        Me.label2 = New System.Windows.Forms.Label
        Me.cbxToNpi = New System.Windows.Forms.ComboBox
        Me.cbxToTon = New System.Windows.Forms.ComboBox
        Me.cbHasUdh = New System.Windows.Forms.CheckBox
        Me.cbRequestDeliveryReport = New System.Windows.Forms.CheckBox
        Me.groupBox1.SuspendLayout()
        Me.SuspendLayout()
        '
        'btnCancel
        '
        Me.btnCancel.Location = New System.Drawing.Point(90, 180)
        Me.btnCancel.Name = "btnCancel"
        Me.btnCancel.Size = New System.Drawing.Size(72, 23)
        Me.btnCancel.TabIndex = 42
        Me.btnCancel.Text = "Cancel"
        '
        'btnOK
        '
        Me.btnOK.Location = New System.Drawing.Point(12, 180)
        Me.btnOK.Name = "btnOK"
        Me.btnOK.Size = New System.Drawing.Size(72, 23)
        Me.btnOK.TabIndex = 41
        Me.btnOK.Text = "OK"
        '
        'groupBox1
        '
        Me.groupBox1.Controls.Add(Me.label6)
        Me.groupBox1.Controls.Add(Me.cbxBodyFormat)
        Me.groupBox1.Controls.Add(Me.label3)
        Me.groupBox1.Controls.Add(Me.label2)
        Me.groupBox1.Controls.Add(Me.cbxToNpi)
        Me.groupBox1.Controls.Add(Me.cbxToTon)
        Me.groupBox1.Controls.Add(Me.cbHasUdh)
        Me.groupBox1.Controls.Add(Me.cbRequestDeliveryReport)
        Me.groupBox1.Location = New System.Drawing.Point(11, 12)
        Me.groupBox1.Name = "groupBox1"
        Me.groupBox1.Size = New System.Drawing.Size(305, 162)
        Me.groupBox1.TabIndex = 40
        Me.groupBox1.TabStop = False
        Me.groupBox1.Text = "Advanced properties"
        '
        'label6
        '
        Me.label6.AutoSize = True
        Me.label6.Location = New System.Drawing.Point(13, 26)
        Me.label6.Name = "label6"
        Me.label6.Size = New System.Drawing.Size(66, 13)
        Me.label6.TabIndex = 46
        Me.label6.Text = "Body format:"
        '
        'cbxBodyFormat
        '
        Me.cbxBodyFormat.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList
        Me.cbxBodyFormat.FormattingEnabled = True
        Me.cbxBodyFormat.Location = New System.Drawing.Point(114, 23)
        Me.cbxBodyFormat.Name = "cbxBodyFormat"
        Me.cbxBodyFormat.Size = New System.Drawing.Size(166, 21)
        Me.cbxBodyFormat.TabIndex = 45
        '
        'label3
        '
        Me.label3.AutoSize = True
        Me.label3.Location = New System.Drawing.Point(13, 80)
        Me.label3.Name = "label3"
        Me.label3.Size = New System.Drawing.Size(85, 13)
        Me.label3.TabIndex = 40
        Me.label3.Text = "To Address NPI:"
        '
        'label2
        '
        Me.label2.AutoSize = True
        Me.label2.Location = New System.Drawing.Point(13, 53)
        Me.label2.Name = "label2"
        Me.label2.Size = New System.Drawing.Size(90, 13)
        Me.label2.TabIndex = 39
        Me.label2.Text = "To Address TON:"
        '
        'cbxToNpi
        '
        Me.cbxToNpi.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList
        Me.cbxToNpi.FormattingEnabled = True
        Me.cbxToNpi.Location = New System.Drawing.Point(114, 77)
        Me.cbxToNpi.Name = "cbxToNpi"
        Me.cbxToNpi.Size = New System.Drawing.Size(166, 21)
        Me.cbxToNpi.TabIndex = 38
        '
        'cbxToTon
        '
        Me.cbxToTon.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList
        Me.cbxToTon.FormattingEnabled = True
        Me.cbxToTon.Location = New System.Drawing.Point(114, 50)
        Me.cbxToTon.Name = "cbxToTon"
        Me.cbxToTon.Size = New System.Drawing.Size(166, 21)
        Me.cbxToTon.TabIndex = 37
        '
        'cbHasUdh
        '
        Me.cbHasUdh.AutoSize = True
        Me.cbHasUdh.Location = New System.Drawing.Point(16, 131)
        Me.cbHasUdh.Name = "cbHasUdh"
        Me.cbHasUdh.Size = New System.Drawing.Size(68, 17)
        Me.cbHasUdh.TabIndex = 34
        Me.cbHasUdh.Text = "Has Udh"
        Me.cbHasUdh.UseVisualStyleBackColor = True
        '
        'cbRequestDeliveryReport
        '
        Me.cbRequestDeliveryReport.AutoSize = True
        Me.cbRequestDeliveryReport.Location = New System.Drawing.Point(16, 108)
        Me.cbRequestDeliveryReport.Name = "cbRequestDeliveryReport"
        Me.cbRequestDeliveryReport.Size = New System.Drawing.Size(135, 17)
        Me.cbRequestDeliveryReport.TabIndex = 33
        Me.cbRequestDeliveryReport.Text = "&Request delivery report"
        '
        'frmGsmAdvanced
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(328, 214)
        Me.Controls.Add(Me.btnCancel)
        Me.Controls.Add(Me.btnOK)
        Me.Controls.Add(Me.groupBox1)
        Me.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedDialog
        Me.MaximizeBox = False
        Me.MinimizeBox = False
        Me.Name = "frmGsmAdvanced"
        Me.Text = "Send Options"
        Me.groupBox1.ResumeLayout(False)
        Me.groupBox1.PerformLayout()
        Me.ResumeLayout(False)

    End Sub
    Friend WithEvents btnCancel As System.Windows.Forms.Button
    Friend WithEvents btnOK As System.Windows.Forms.Button
    Private WithEvents groupBox1 As System.Windows.Forms.GroupBox
    Private WithEvents label6 As System.Windows.Forms.Label
    Private WithEvents cbxBodyFormat As System.Windows.Forms.ComboBox
    Private WithEvents label3 As System.Windows.Forms.Label
    Private WithEvents label2 As System.Windows.Forms.Label
    Private WithEvents cbxToNpi As System.Windows.Forms.ComboBox
    Private WithEvents cbxToTon As System.Windows.Forms.ComboBox
    Private WithEvents cbHasUdh As System.Windows.Forms.CheckBox
    Friend WithEvents cbRequestDeliveryReport As System.Windows.Forms.CheckBox
End Class
