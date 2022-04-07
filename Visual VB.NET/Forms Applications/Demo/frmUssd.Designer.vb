<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class frmUssd
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
        Me.txtResponse = New System.Windows.Forms.TextBox
        Me.txtCommand = New System.Windows.Forms.TextBox
        Me.groupBox2 = New System.Windows.Forms.GroupBox
        Me.btnSend = New System.Windows.Forms.Button
        Me.label5 = New System.Windows.Forms.Label
        Me.GroupBox5 = New System.Windows.Forms.GroupBox
        Me.label4 = New System.Windows.Forms.Label
        Me.btnView = New System.Windows.Forms.Button
        Me.Label3 = New System.Windows.Forms.Label
        Me.txtResult = New System.Windows.Forms.TextBox
        Me.txtLogFile = New System.Windows.Forms.TextBox
        Me.Label6 = New System.Windows.Forms.Label
        Me.Label1 = New System.Windows.Forms.Label
        Me.GroupBox1 = New System.Windows.Forms.GroupBox
        Me.txtPincode = New System.Windows.Forms.TextBox
        Me.label9 = New System.Windows.Forms.Label
        Me.cbxDeviceSpeed = New System.Windows.Forms.ComboBox
        Me.Label2 = New System.Windows.Forms.Label
        Me.cbxDevices = New System.Windows.Forms.ComboBox
        Me.lblInfo = New System.Windows.Forms.Label
        Me.groupBox2.SuspendLayout()
        Me.GroupBox5.SuspendLayout()
        Me.GroupBox1.SuspendLayout()
        Me.SuspendLayout()
        '
        'txtResponse
        '
        Me.txtResponse.Font = New System.Drawing.Font("Microsoft Sans Serif", 8.25!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.txtResponse.Location = New System.Drawing.Point(80, 19)
        Me.txtResponse.Multiline = True
        Me.txtResponse.Name = "txtResponse"
        Me.txtResponse.ReadOnly = True
        Me.txtResponse.Size = New System.Drawing.Size(436, 44)
        Me.txtResponse.TabIndex = 1
        '
        'txtCommand
        '
        Me.txtCommand.Location = New System.Drawing.Point(80, 19)
        Me.txtCommand.Name = "txtCommand"
        Me.txtCommand.Size = New System.Drawing.Size(350, 20)
        Me.txtCommand.TabIndex = 1
        '
        'groupBox2
        '
        Me.groupBox2.Controls.Add(Me.btnSend)
        Me.groupBox2.Controls.Add(Me.txtCommand)
        Me.groupBox2.Controls.Add(Me.label5)
        Me.groupBox2.Location = New System.Drawing.Point(12, 92)
        Me.groupBox2.Name = "groupBox2"
        Me.groupBox2.Size = New System.Drawing.Size(528, 47)
        Me.groupBox2.TabIndex = 1
        Me.groupBox2.TabStop = False
        Me.groupBox2.Text = "USSD Command"
        '
        'btnSend
        '
        Me.btnSend.Location = New System.Drawing.Point(441, 16)
        Me.btnSend.Name = "btnSend"
        Me.btnSend.Size = New System.Drawing.Size(75, 23)
        Me.btnSend.TabIndex = 2
        Me.btnSend.Text = "S&end"
        '
        'label5
        '
        Me.label5.AutoSize = True
        Me.label5.Location = New System.Drawing.Point(16, 22)
        Me.label5.Name = "label5"
        Me.label5.Size = New System.Drawing.Size(57, 13)
        Me.label5.TabIndex = 0
        Me.label5.Text = "&Command:"
        '
        'GroupBox5
        '
        Me.GroupBox5.Controls.Add(Me.txtResponse)
        Me.GroupBox5.Controls.Add(Me.label4)
        Me.GroupBox5.Controls.Add(Me.btnView)
        Me.GroupBox5.Controls.Add(Me.Label3)
        Me.GroupBox5.Controls.Add(Me.txtResult)
        Me.GroupBox5.Controls.Add(Me.txtLogFile)
        Me.GroupBox5.Controls.Add(Me.Label6)
        Me.GroupBox5.Location = New System.Drawing.Point(12, 145)
        Me.GroupBox5.Name = "GroupBox5"
        Me.GroupBox5.Size = New System.Drawing.Size(528, 121)
        Me.GroupBox5.TabIndex = 2
        Me.GroupBox5.TabStop = False
        Me.GroupBox5.Text = "Result && Logging"
        '
        'label4
        '
        Me.label4.Font = New System.Drawing.Font("Microsoft Sans Serif", 8.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.label4.Location = New System.Drawing.Point(16, 17)
        Me.label4.Name = "label4"
        Me.label4.Size = New System.Drawing.Size(74, 16)
        Me.label4.TabIndex = 0
        Me.label4.Text = "Response:"
        '
        'btnView
        '
        Me.btnView.Location = New System.Drawing.Point(441, 93)
        Me.btnView.Name = "btnView"
        Me.btnView.Size = New System.Drawing.Size(75, 23)
        Me.btnView.TabIndex = 6
        Me.btnView.Text = "&View..."
        '
        'Label3
        '
        Me.Label3.Location = New System.Drawing.Point(16, 97)
        Me.Label3.Name = "Label3"
        Me.Label3.Size = New System.Drawing.Size(52, 16)
        Me.Label3.TabIndex = 4
        Me.Label3.Text = "Lo&g file:"
        '
        'txtResult
        '
        Me.txtResult.Font = New System.Drawing.Font("Microsoft Sans Serif", 8.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.txtResult.Location = New System.Drawing.Point(80, 69)
        Me.txtResult.Name = "txtResult"
        Me.txtResult.ReadOnly = True
        Me.txtResult.Size = New System.Drawing.Size(436, 20)
        Me.txtResult.TabIndex = 3
        '
        'txtLogFile
        '
        Me.txtLogFile.Location = New System.Drawing.Point(80, 93)
        Me.txtLogFile.Name = "txtLogFile"
        Me.txtLogFile.Size = New System.Drawing.Size(356, 20)
        Me.txtLogFile.TabIndex = 5
        '
        'Label6
        '
        Me.Label6.Font = New System.Drawing.Font("Microsoft Sans Serif", 8.25!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label6.Location = New System.Drawing.Point(16, 73)
        Me.Label6.Name = "Label6"
        Me.Label6.Size = New System.Drawing.Size(48, 16)
        Me.Label6.TabIndex = 2
        Me.Label6.Text = "Res&ult:"
        '
        'Label1
        '
        Me.Label1.Location = New System.Drawing.Point(16, 23)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(64, 16)
        Me.Label1.TabIndex = 0
        Me.Label1.Text = "&Device:"
        '
        'GroupBox1
        '
        Me.GroupBox1.Controls.Add(Me.txtPincode)
        Me.GroupBox1.Controls.Add(Me.label9)
        Me.GroupBox1.Controls.Add(Me.cbxDeviceSpeed)
        Me.GroupBox1.Controls.Add(Me.Label2)
        Me.GroupBox1.Controls.Add(Me.cbxDevices)
        Me.GroupBox1.Controls.Add(Me.Label1)
        Me.GroupBox1.Location = New System.Drawing.Point(12, 11)
        Me.GroupBox1.Name = "GroupBox1"
        Me.GroupBox1.Size = New System.Drawing.Size(528, 75)
        Me.GroupBox1.TabIndex = 0
        Me.GroupBox1.TabStop = False
        Me.GroupBox1.Text = "GSM Modem/Phone Connection Properties"
        '
        'txtPincode
        '
        Me.txtPincode.Location = New System.Drawing.Point(80, 47)
        Me.txtPincode.Name = "txtPincode"
        Me.txtPincode.PasswordChar = Global.Microsoft.VisualBasic.ChrW(42)
        Me.txtPincode.Size = New System.Drawing.Size(192, 20)
        Me.txtPincode.TabIndex = 5
        '
        'label9
        '
        Me.label9.AutoSize = True
        Me.label9.Location = New System.Drawing.Point(16, 50)
        Me.label9.Name = "label9"
        Me.label9.Size = New System.Drawing.Size(49, 13)
        Me.label9.TabIndex = 4
        Me.label9.Text = "Pincode:"
        '
        'cbxDeviceSpeed
        '
        Me.cbxDeviceSpeed.Location = New System.Drawing.Point(332, 19)
        Me.cbxDeviceSpeed.Name = "cbxDeviceSpeed"
        Me.cbxDeviceSpeed.Size = New System.Drawing.Size(184, 21)
        Me.cbxDeviceSpeed.TabIndex = 3
        '
        'Label2
        '
        Me.Label2.AutoSize = True
        Me.Label2.Location = New System.Drawing.Point(288, 23)
        Me.Label2.Name = "Label2"
        Me.Label2.Size = New System.Drawing.Size(41, 13)
        Me.Label2.TabIndex = 2
        Me.Label2.Text = "&Speed:"
        '
        'cbxDevices
        '
        Me.cbxDevices.Location = New System.Drawing.Point(80, 19)
        Me.cbxDevices.Name = "cbxDevices"
        Me.cbxDevices.Size = New System.Drawing.Size(192, 21)
        Me.cbxDevices.TabIndex = 1
        '
        'lblInfo
        '
        Me.lblInfo.AutoSize = True
        Me.lblInfo.Location = New System.Drawing.Point(9, 279)
        Me.lblInfo.Name = "lblInfo"
        Me.lblInfo.Size = New System.Drawing.Size(31, 13)
        Me.lblInfo.TabIndex = 9
        Me.lblInfo.Text = "[Info]"
        '
        'frmUssd
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(553, 301)
        Me.Controls.Add(Me.lblInfo)
        Me.Controls.Add(Me.groupBox2)
        Me.Controls.Add(Me.GroupBox5)
        Me.Controls.Add(Me.GroupBox1)
        Me.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedDialog
        Me.MaximizeBox = False
        Me.MinimizeBox = False
        Me.Name = "frmUssd"
        Me.Text = "Auron SMS Component - VB.NET USSD Demo"
        Me.groupBox2.ResumeLayout(False)
        Me.groupBox2.PerformLayout()
        Me.GroupBox5.ResumeLayout(False)
        Me.GroupBox5.PerformLayout()
        Me.GroupBox1.ResumeLayout(False)
        Me.GroupBox1.PerformLayout()
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub
    Friend WithEvents txtResponse As System.Windows.Forms.TextBox
    Private WithEvents txtCommand As System.Windows.Forms.TextBox
    Private WithEvents groupBox2 As System.Windows.Forms.GroupBox
    Friend WithEvents btnSend As System.Windows.Forms.Button
    Private WithEvents label5 As System.Windows.Forms.Label
    Friend WithEvents GroupBox5 As System.Windows.Forms.GroupBox
    Friend WithEvents label4 As System.Windows.Forms.Label
    Friend WithEvents btnView As System.Windows.Forms.Button
    Friend WithEvents Label3 As System.Windows.Forms.Label
    Friend WithEvents txtResult As System.Windows.Forms.TextBox
    Friend WithEvents txtLogFile As System.Windows.Forms.TextBox
    Friend WithEvents Label6 As System.Windows.Forms.Label
    Friend WithEvents Label1 As System.Windows.Forms.Label
    Friend WithEvents GroupBox1 As System.Windows.Forms.GroupBox
    Friend WithEvents cbxDeviceSpeed As System.Windows.Forms.ComboBox
    Friend WithEvents Label2 As System.Windows.Forms.Label
    Friend WithEvents cbxDevices As System.Windows.Forms.ComboBox
    Friend WithEvents txtPincode As System.Windows.Forms.TextBox
    Private WithEvents label9 As System.Windows.Forms.Label
    Friend WithEvents lblInfo As System.Windows.Forms.Label
End Class
