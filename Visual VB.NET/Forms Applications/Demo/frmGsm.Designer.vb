<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class frmGsm
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
        Me.btnReceiveOptions = New System.Windows.Forms.Button()
        Me.Label7 = New System.Windows.Forms.Label()
        Me.GroupBox2 = New System.Windows.Forms.GroupBox()
        Me.cbxDataCoding = New System.Windows.Forms.ComboBox()
        Me.Label8 = New System.Windows.Forms.Label()
        Me.llblUrlRecipientFormat = New System.Windows.Forms.LinkLabel()
        Me.btnSendOptions = New System.Windows.Forms.Button()
        Me.Label5 = New System.Windows.Forms.Label()
        Me.Label4 = New System.Windows.Forms.Label()
        Me.txtToAddress = New System.Windows.Forms.TextBox()
        Me.txtBody = New System.Windows.Forms.TextBox()
        Me.btnSend = New System.Windows.Forms.Button()
        Me.btnReceive = New System.Windows.Forms.Button()
        Me.lvReceivedMessages = New System.Windows.Forms.ListView()
        Me.lvSentMessages = New System.Windows.Forms.ListView()
        Me.cbxDeviceSpeed = New System.Windows.Forms.ComboBox()
        Me.Label2 = New System.Windows.Forms.Label()
        Me.groupBox6 = New System.Windows.Forms.GroupBox()
        Me.Label11 = New System.Windows.Forms.Label()
        Me.Label10 = New System.Windows.Forms.Label()
        Me.btnQuerySent = New System.Windows.Forms.Button()
        Me.cbxDevices = New System.Windows.Forms.ComboBox()
        Me.GroupBox1 = New System.Windows.Forms.GroupBox()
        Me.txtPort = New System.Windows.Forms.TextBox()
        Me.label13 = New System.Windows.Forms.Label()
        Me.label12 = New System.Windows.Forms.Label()
        Me.txtIP = New System.Windows.Forms.TextBox()
        Me.txtPincode = New System.Windows.Forms.TextBox()
        Me.label9 = New System.Windows.Forms.Label()
        Me.Label1 = New System.Windows.Forms.Label()
        Me.ctlListGsmModems = New System.Windows.Forms.LinkLabel()
        Me.GroupBox5 = New System.Windows.Forms.GroupBox()
        Me.btnView = New System.Windows.Forms.Button()
        Me.Label3 = New System.Windows.Forms.Label()
        Me.txtResult = New System.Windows.Forms.TextBox()
        Me.txtLogFile = New System.Windows.Forms.TextBox()
        Me.Label6 = New System.Windows.Forms.Label()
        Me.lblInfo = New System.Windows.Forms.Label()
        Me.GroupBox2.SuspendLayout()
        Me.groupBox6.SuspendLayout()
        Me.GroupBox1.SuspendLayout()
        Me.GroupBox5.SuspendLayout()
        Me.SuspendLayout()
        '
        'btnReceiveOptions
        '
        Me.btnReceiveOptions.Location = New System.Drawing.Point(498, 231)
        Me.btnReceiveOptions.Name = "btnReceiveOptions"
        Me.btnReceiveOptions.Size = New System.Drawing.Size(76, 24)
        Me.btnReceiveOptions.TabIndex = 6
        Me.btnReceiveOptions.Text = "A&dvanced..."
        '
        'Label7
        '
        Me.Label7.Location = New System.Drawing.Point(14, 8)
        Me.Label7.Margin = New System.Windows.Forms.Padding(0)
        Me.Label7.Name = "Label7"
        Me.Label7.Size = New System.Drawing.Size(585, 28)
        Me.Label7.TabIndex = 0
        Me.Label7.Text = "This demo requires a GSM modem or GSM phone connected to your computer. A SIM car" &
    "d is required in this GSM modem. For a list of recommended GSM modems,"
        '
        'GroupBox2
        '
        Me.GroupBox2.Controls.Add(Me.cbxDataCoding)
        Me.GroupBox2.Controls.Add(Me.Label8)
        Me.GroupBox2.Controls.Add(Me.llblUrlRecipientFormat)
        Me.GroupBox2.Controls.Add(Me.btnSendOptions)
        Me.GroupBox2.Controls.Add(Me.Label5)
        Me.GroupBox2.Controls.Add(Me.Label4)
        Me.GroupBox2.Controls.Add(Me.txtToAddress)
        Me.GroupBox2.Controls.Add(Me.txtBody)
        Me.GroupBox2.Controls.Add(Me.btnSend)
        Me.GroupBox2.Location = New System.Drawing.Point(17, 116)
        Me.GroupBox2.Name = "GroupBox2"
        Me.GroupBox2.Size = New System.Drawing.Size(585, 165)
        Me.GroupBox2.TabIndex = 3
        Me.GroupBox2.TabStop = False
        Me.GroupBox2.Text = "Send Message"
        '
        'cbxDataCoding
        '
        Me.cbxDataCoding.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList
        Me.cbxDataCoding.FormattingEnabled = True
        Me.cbxDataCoding.Items.AddRange(New Object() {"Text", "Unicode", "Data", "Data (UDH)"})
        Me.cbxDataCoding.Location = New System.Drawing.Point(324, 18)
        Me.cbxDataCoding.Name = "cbxDataCoding"
        Me.cbxDataCoding.Size = New System.Drawing.Size(167, 21)
        Me.cbxDataCoding.TabIndex = 3
        '
        'Label8
        '
        Me.Label8.AutoSize = True
        Me.Label8.Location = New System.Drawing.Point(249, 22)
        Me.Label8.Name = "Label8"
        Me.Label8.Size = New System.Drawing.Size(69, 13)
        Me.Label8.TabIndex = 2
        Me.Label8.Text = "Data Coding:"
        '
        'llblUrlRecipientFormat
        '
        Me.llblUrlRecipientFormat.Location = New System.Drawing.Point(497, 23)
        Me.llblUrlRecipientFormat.Name = "llblUrlRecipientFormat"
        Me.llblUrlRecipientFormat.Size = New System.Drawing.Size(77, 16)
        Me.llblUrlRecipientFormat.TabIndex = 4
        Me.llblUrlRecipientFormat.TabStop = True
        Me.llblUrlRecipientFormat.Text = "Number format"
        '
        'btnSendOptions
        '
        Me.btnSendOptions.Location = New System.Drawing.Point(500, 45)
        Me.btnSendOptions.Name = "btnSendOptions"
        Me.btnSendOptions.Size = New System.Drawing.Size(76, 24)
        Me.btnSendOptions.TabIndex = 7
        Me.btnSendOptions.Text = "&Advanced..."
        '
        'Label5
        '
        Me.Label5.Location = New System.Drawing.Point(18, 45)
        Me.Label5.Name = "Label5"
        Me.Label5.Size = New System.Drawing.Size(56, 16)
        Me.Label5.TabIndex = 5
        Me.Label5.Text = "&Body:"
        '
        'Label4
        '
        Me.Label4.Location = New System.Drawing.Point(16, 23)
        Me.Label4.Name = "Label4"
        Me.Label4.Size = New System.Drawing.Size(64, 16)
        Me.Label4.TabIndex = 0
        Me.Label4.Text = "&ToAddress:"
        '
        'txtToAddress
        '
        Me.txtToAddress.Location = New System.Drawing.Point(80, 19)
        Me.txtToAddress.Name = "txtToAddress"
        Me.txtToAddress.Size = New System.Drawing.Size(163, 20)
        Me.txtToAddress.TabIndex = 1
        '
        'txtBody
        '
        Me.txtBody.Location = New System.Drawing.Point(80, 45)
        Me.txtBody.Multiline = True
        Me.txtBody.Name = "txtBody"
        Me.txtBody.Size = New System.Drawing.Size(411, 84)
        Me.txtBody.TabIndex = 6
        Me.txtBody.Text = "Hello World!"
        '
        'btnSend
        '
        Me.btnSend.Location = New System.Drawing.Point(80, 135)
        Me.btnSend.Name = "btnSend"
        Me.btnSend.Size = New System.Drawing.Size(411, 24)
        Me.btnSend.TabIndex = 8
        Me.btnSend.Text = "S&end"
        '
        'btnReceive
        '
        Me.btnReceive.Location = New System.Drawing.Point(80, 125)
        Me.btnReceive.Name = "btnReceive"
        Me.btnReceive.Size = New System.Drawing.Size(411, 24)
        Me.btnReceive.TabIndex = 3
        Me.btnReceive.Text = "Re&ceive SMS / Delivery Reports"
        '
        'lvReceivedMessages
        '
        Me.lvReceivedMessages.Location = New System.Drawing.Point(80, 155)
        Me.lvReceivedMessages.Name = "lvReceivedMessages"
        Me.lvReceivedMessages.Size = New System.Drawing.Size(411, 100)
        Me.lvReceivedMessages.TabIndex = 5
        Me.lvReceivedMessages.UseCompatibleStateImageBehavior = False
        Me.lvReceivedMessages.View = System.Windows.Forms.View.Details
        '
        'lvSentMessages
        '
        Me.lvSentMessages.Location = New System.Drawing.Point(80, 19)
        Me.lvSentMessages.Name = "lvSentMessages"
        Me.lvSentMessages.Size = New System.Drawing.Size(411, 100)
        Me.lvSentMessages.TabIndex = 1
        Me.lvSentMessages.UseCompatibleStateImageBehavior = False
        Me.lvSentMessages.View = System.Windows.Forms.View.Details
        '
        'cbxDeviceSpeed
        '
        Me.cbxDeviceSpeed.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList
        Me.cbxDeviceSpeed.Location = New System.Drawing.Point(324, 19)
        Me.cbxDeviceSpeed.Name = "cbxDeviceSpeed"
        Me.cbxDeviceSpeed.Size = New System.Drawing.Size(87, 21)
        Me.cbxDeviceSpeed.TabIndex = 3
        '
        'Label2
        '
        Me.Label2.AutoSize = True
        Me.Label2.Location = New System.Drawing.Point(249, 23)
        Me.Label2.Name = "Label2"
        Me.Label2.Size = New System.Drawing.Size(41, 13)
        Me.Label2.TabIndex = 2
        Me.Label2.Text = "&Speed:"
        '
        'groupBox6
        '
        Me.groupBox6.Controls.Add(Me.Label11)
        Me.groupBox6.Controls.Add(Me.Label10)
        Me.groupBox6.Controls.Add(Me.lvReceivedMessages)
        Me.groupBox6.Controls.Add(Me.btnReceiveOptions)
        Me.groupBox6.Controls.Add(Me.lvSentMessages)
        Me.groupBox6.Controls.Add(Me.btnReceive)
        Me.groupBox6.Controls.Add(Me.btnQuerySent)
        Me.groupBox6.Location = New System.Drawing.Point(17, 287)
        Me.groupBox6.Name = "groupBox6"
        Me.groupBox6.Size = New System.Drawing.Size(585, 263)
        Me.groupBox6.TabIndex = 4
        Me.groupBox6.TabStop = False
        Me.groupBox6.Text = "Sent Messages"
        '
        'Label11
        '
        Me.Label11.Location = New System.Drawing.Point(12, 155)
        Me.Label11.Name = "Label11"
        Me.Label11.Size = New System.Drawing.Size(56, 16)
        Me.Label11.TabIndex = 4
        Me.Label11.Text = "&Received:"
        '
        'Label10
        '
        Me.Label10.Location = New System.Drawing.Point(12, 19)
        Me.Label10.Name = "Label10"
        Me.Label10.Size = New System.Drawing.Size(56, 16)
        Me.Label10.TabIndex = 0
        Me.Label10.Text = "Se&nt:"
        '
        'btnQuerySent
        '
        Me.btnQuerySent.Location = New System.Drawing.Point(399, 29)
        Me.btnQuerySent.Name = "btnQuerySent"
        Me.btnQuerySent.Size = New System.Drawing.Size(92, 24)
        Me.btnQuerySent.TabIndex = 2
        Me.btnQuerySent.Text = "&Query Status"
        Me.btnQuerySent.Visible = False
        '
        'cbxDevices
        '
        Me.cbxDevices.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList
        Me.cbxDevices.Location = New System.Drawing.Point(80, 19)
        Me.cbxDevices.Name = "cbxDevices"
        Me.cbxDevices.Size = New System.Drawing.Size(163, 21)
        Me.cbxDevices.TabIndex = 1
        '
        'GroupBox1
        '
        Me.GroupBox1.Controls.Add(Me.txtPort)
        Me.GroupBox1.Controls.Add(Me.label13)
        Me.GroupBox1.Controls.Add(Me.label12)
        Me.GroupBox1.Controls.Add(Me.txtIP)
        Me.GroupBox1.Controls.Add(Me.txtPincode)
        Me.GroupBox1.Controls.Add(Me.label9)
        Me.GroupBox1.Controls.Add(Me.cbxDeviceSpeed)
        Me.GroupBox1.Controls.Add(Me.Label2)
        Me.GroupBox1.Controls.Add(Me.cbxDevices)
        Me.GroupBox1.Controls.Add(Me.Label1)
        Me.GroupBox1.Location = New System.Drawing.Point(17, 39)
        Me.GroupBox1.Name = "GroupBox1"
        Me.GroupBox1.Size = New System.Drawing.Size(585, 71)
        Me.GroupBox1.TabIndex = 2
        Me.GroupBox1.TabStop = False
        Me.GroupBox1.Text = "GSM Modem/Phone Connection Properties"
        '
        'txtPort
        '
        Me.txtPort.Location = New System.Drawing.Point(324, 46)
        Me.txtPort.Name = "txtPort"
        Me.txtPort.Size = New System.Drawing.Size(87, 20)
        Me.txtPort.TabIndex = 9
        '
        'label13
        '
        Me.label13.AutoSize = True
        Me.label13.Location = New System.Drawing.Point(249, 49)
        Me.label13.Name = "label13"
        Me.label13.Size = New System.Drawing.Size(29, 13)
        Me.label13.TabIndex = 8
        Me.label13.Text = "Port:"
        '
        'label12
        '
        Me.label12.Location = New System.Drawing.Point(16, 49)
        Me.label12.Name = "label12"
        Me.label12.Size = New System.Drawing.Size(56, 16)
        Me.label12.TabIndex = 6
        Me.label12.Text = "IP/Host:"
        '
        'txtIP
        '
        Me.txtIP.Location = New System.Drawing.Point(80, 46)
        Me.txtIP.Name = "txtIP"
        Me.txtIP.Size = New System.Drawing.Size(163, 20)
        Me.txtIP.TabIndex = 7
        '
        'txtPincode
        '
        Me.txtPincode.Location = New System.Drawing.Point(502, 19)
        Me.txtPincode.Name = "txtPincode"
        Me.txtPincode.PasswordChar = Global.Microsoft.VisualBasic.ChrW(42)
        Me.txtPincode.Size = New System.Drawing.Size(77, 20)
        Me.txtPincode.TabIndex = 5
        '
        'label9
        '
        Me.label9.AutoSize = True
        Me.label9.Location = New System.Drawing.Point(442, 22)
        Me.label9.Name = "label9"
        Me.label9.Size = New System.Drawing.Size(49, 13)
        Me.label9.TabIndex = 4
        Me.label9.Text = "Pi&ncode:"
        '
        'Label1
        '
        Me.Label1.Location = New System.Drawing.Point(16, 23)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(64, 16)
        Me.Label1.TabIndex = 0
        Me.Label1.Text = "&Device:"
        '
        'ctlListGsmModems
        '
        Me.ctlListGsmModems.Location = New System.Drawing.Point(212, 22)
        Me.ctlListGsmModems.Name = "ctlListGsmModems"
        Me.ctlListGsmModems.Size = New System.Drawing.Size(56, 12)
        Me.ctlListGsmModems.TabIndex = 1
        Me.ctlListGsmModems.TabStop = True
        Me.ctlListGsmModems.Text = "click here"
        '
        'GroupBox5
        '
        Me.GroupBox5.Controls.Add(Me.btnView)
        Me.GroupBox5.Controls.Add(Me.Label3)
        Me.GroupBox5.Controls.Add(Me.txtResult)
        Me.GroupBox5.Controls.Add(Me.txtLogFile)
        Me.GroupBox5.Controls.Add(Me.Label6)
        Me.GroupBox5.Location = New System.Drawing.Point(17, 556)
        Me.GroupBox5.Name = "GroupBox5"
        Me.GroupBox5.Size = New System.Drawing.Size(585, 72)
        Me.GroupBox5.TabIndex = 5
        Me.GroupBox5.TabStop = False
        Me.GroupBox5.Text = "Result && Logging"
        '
        'btnView
        '
        Me.btnView.Location = New System.Drawing.Point(498, 44)
        Me.btnView.Name = "btnView"
        Me.btnView.Size = New System.Drawing.Size(76, 23)
        Me.btnView.TabIndex = 4
        Me.btnView.Text = "&View..."
        '
        'Label3
        '
        Me.Label3.Location = New System.Drawing.Point(16, 47)
        Me.Label3.Name = "Label3"
        Me.Label3.Size = New System.Drawing.Size(52, 16)
        Me.Label3.TabIndex = 2
        Me.Label3.Text = "Lo&g file:"
        '
        'txtResult
        '
        Me.txtResult.Font = New System.Drawing.Font("Microsoft Sans Serif", 8.25!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.txtResult.Location = New System.Drawing.Point(80, 19)
        Me.txtResult.Name = "txtResult"
        Me.txtResult.ReadOnly = True
        Me.txtResult.Size = New System.Drawing.Size(494, 20)
        Me.txtResult.TabIndex = 1
        '
        'txtLogFile
        '
        Me.txtLogFile.Location = New System.Drawing.Point(80, 44)
        Me.txtLogFile.Name = "txtLogFile"
        Me.txtLogFile.Size = New System.Drawing.Size(411, 20)
        Me.txtLogFile.TabIndex = 3
        '
        'Label6
        '
        Me.Label6.Font = New System.Drawing.Font("Microsoft Sans Serif", 8.25!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label6.Location = New System.Drawing.Point(16, 23)
        Me.Label6.Name = "Label6"
        Me.Label6.Size = New System.Drawing.Size(48, 16)
        Me.Label6.TabIndex = 0
        Me.Label6.Text = "Res&ult:"
        '
        'lblInfo
        '
        Me.lblInfo.AutoSize = True
        Me.lblInfo.Location = New System.Drawing.Point(14, 641)
        Me.lblInfo.Name = "lblInfo"
        Me.lblInfo.Size = New System.Drawing.Size(31, 13)
        Me.lblInfo.TabIndex = 6
        Me.lblInfo.Text = "[Info]"
        '
        'frmGsm
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(611, 665)
        Me.Controls.Add(Me.ctlListGsmModems)
        Me.Controls.Add(Me.lblInfo)
        Me.Controls.Add(Me.Label7)
        Me.Controls.Add(Me.GroupBox2)
        Me.Controls.Add(Me.groupBox6)
        Me.Controls.Add(Me.GroupBox1)
        Me.Controls.Add(Me.GroupBox5)
        Me.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedDialog
        Me.MaximizeBox = False
        Me.MinimizeBox = False
        Me.Name = "frmGsm"
        Me.Text = "Auron SMS Component - VB .NET GSM Demo"
        Me.GroupBox2.ResumeLayout(False)
        Me.GroupBox2.PerformLayout()
        Me.groupBox6.ResumeLayout(False)
        Me.GroupBox1.ResumeLayout(False)
        Me.GroupBox1.PerformLayout()
        Me.GroupBox5.ResumeLayout(False)
        Me.GroupBox5.PerformLayout()
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub
    Friend WithEvents btnReceiveOptions As System.Windows.Forms.Button
    Friend WithEvents Label7 As System.Windows.Forms.Label
    Friend WithEvents GroupBox2 As System.Windows.Forms.GroupBox
    Friend WithEvents llblUrlRecipientFormat As System.Windows.Forms.LinkLabel
    Friend WithEvents btnSendOptions As System.Windows.Forms.Button
    Friend WithEvents Label5 As System.Windows.Forms.Label
    Friend WithEvents Label4 As System.Windows.Forms.Label
    Friend WithEvents txtToAddress As System.Windows.Forms.TextBox
    Friend WithEvents txtBody As System.Windows.Forms.TextBox
    Friend WithEvents btnSend As System.Windows.Forms.Button
    Friend WithEvents btnReceive As System.Windows.Forms.Button
    Friend WithEvents lvReceivedMessages As System.Windows.Forms.ListView
    Friend WithEvents lvSentMessages As System.Windows.Forms.ListView
    Friend WithEvents cbxDeviceSpeed As System.Windows.Forms.ComboBox
    Friend WithEvents Label2 As System.Windows.Forms.Label
    Friend WithEvents groupBox6 As System.Windows.Forms.GroupBox
    Friend WithEvents btnQuerySent As System.Windows.Forms.Button
    Friend WithEvents cbxDevices As System.Windows.Forms.ComboBox
    Friend WithEvents GroupBox1 As System.Windows.Forms.GroupBox
    Friend WithEvents Label1 As System.Windows.Forms.Label
    Friend WithEvents ctlListGsmModems As System.Windows.Forms.LinkLabel
    Friend WithEvents GroupBox5 As System.Windows.Forms.GroupBox
    Friend WithEvents btnView As System.Windows.Forms.Button
    Friend WithEvents Label3 As System.Windows.Forms.Label
    Friend WithEvents txtResult As System.Windows.Forms.TextBox
    Friend WithEvents txtLogFile As System.Windows.Forms.TextBox
    Friend WithEvents Label6 As System.Windows.Forms.Label
    Friend WithEvents txtPincode As System.Windows.Forms.TextBox
    Private WithEvents label9 As System.Windows.Forms.Label
    Friend WithEvents lblInfo As System.Windows.Forms.Label
    Friend WithEvents Label8 As System.Windows.Forms.Label
    Friend WithEvents cbxDataCoding As System.Windows.Forms.ComboBox
    Friend WithEvents Label11 As System.Windows.Forms.Label
    Friend WithEvents Label10 As System.Windows.Forms.Label
  Private WithEvents txtPort As TextBox
  Friend WithEvents label13 As Label
  Friend WithEvents label12 As Label
  Private WithEvents txtIP As TextBox
End Class
