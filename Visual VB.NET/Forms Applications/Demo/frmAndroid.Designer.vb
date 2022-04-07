<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class frmAndroid
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
        Me.components = New System.ComponentModel.Container()
        Me.lnkAuronSMSAgentForAndroid = New System.Windows.Forms.LinkLabel()
        Me.tmrCheckReceive = New System.Windows.Forms.Timer(Me.components)
        Me.btnView = New System.Windows.Forms.Button()
        Me.Label3 = New System.Windows.Forms.Label()
        Me.txtResult = New System.Windows.Forms.TextBox()
        Me.txtLogFile = New System.Windows.Forms.TextBox()
        Me.Label6 = New System.Windows.Forms.Label()
        Me.lblInfo = New System.Windows.Forms.Label()
        Me.GroupBox5 = New System.Windows.Forms.GroupBox()
        Me.label10 = New System.Windows.Forms.Label()
        Me.label8 = New System.Windows.Forms.Label()
        Me.lvReceivedMessages = New System.Windows.Forms.ListView()
        Me.lvSentMessages = New System.Windows.Forms.ListView()
        Me.label1 = New System.Windows.Forms.Label()
        Me.groupBox6 = New System.Windows.Forms.GroupBox()
        Me.Label5 = New System.Windows.Forms.Label()
        Me.Label4 = New System.Windows.Forms.Label()
        Me.txtToAddress = New System.Windows.Forms.TextBox()
        Me.txtBody = New System.Windows.Forms.TextBox()
        Me.GroupBox2 = New System.Windows.Forms.GroupBox()
        Me.btnSend = New System.Windows.Forms.Button()
        Me.btnConnect = New System.Windows.Forms.Button()
        Me.txtPort = New System.Windows.Forms.TextBox()
        Me.label13 = New System.Windows.Forms.Label()
        Me.label12 = New System.Windows.Forms.Label()
        Me.txtIP = New System.Windows.Forms.TextBox()
        Me.GroupBox1 = New System.Windows.Forms.GroupBox()
        Me.Label7 = New System.Windows.Forms.Label()
        Me.GroupBox5.SuspendLayout()
        Me.groupBox6.SuspendLayout()
        Me.GroupBox2.SuspendLayout()
        Me.GroupBox1.SuspendLayout()
        Me.SuspendLayout()
        '
        'lnkAuronSMSAgentForAndroid
        '
        Me.lnkAuronSMSAgentForAndroid.AutoSize = True
        Me.lnkAuronSMSAgentForAndroid.Location = New System.Drawing.Point(269, 26)
        Me.lnkAuronSMSAgentForAndroid.Name = "lnkAuronSMSAgentForAndroid"
        Me.lnkAuronSMSAgentForAndroid.Size = New System.Drawing.Size(200, 13)
        Me.lnkAuronSMSAgentForAndroid.TabIndex = 18
        Me.lnkAuronSMSAgentForAndroid.TabStop = True
        Me.lnkAuronSMSAgentForAndroid.Text = "Download Auron SMS Agent for Android."
        '
        'tmrCheckReceive
        '
        '
        'btnView
        '
        Me.btnView.Location = New System.Drawing.Point(501, 42)
        Me.btnView.Name = "btnView"
        Me.btnView.Size = New System.Drawing.Size(77, 23)
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
        Me.txtResult.Size = New System.Drawing.Size(498, 20)
        Me.txtResult.TabIndex = 1
        '
        'txtLogFile
        '
        Me.txtLogFile.Location = New System.Drawing.Point(80, 43)
        Me.txtLogFile.Name = "txtLogFile"
        Me.txtLogFile.Size = New System.Drawing.Size(415, 20)
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
        Me.lblInfo.Location = New System.Drawing.Point(12, 611)
        Me.lblInfo.Name = "lblInfo"
        Me.lblInfo.Size = New System.Drawing.Size(31, 13)
        Me.lblInfo.TabIndex = 16
        Me.lblInfo.Text = "[Info]"
        '
        'GroupBox5
        '
        Me.GroupBox5.Controls.Add(Me.btnView)
        Me.GroupBox5.Controls.Add(Me.Label3)
        Me.GroupBox5.Controls.Add(Me.txtResult)
        Me.GroupBox5.Controls.Add(Me.txtLogFile)
        Me.GroupBox5.Controls.Add(Me.Label6)
        Me.GroupBox5.Location = New System.Drawing.Point(14, 534)
        Me.GroupBox5.Name = "GroupBox5"
        Me.GroupBox5.Size = New System.Drawing.Size(584, 71)
        Me.GroupBox5.TabIndex = 15
        Me.GroupBox5.TabStop = False
        Me.GroupBox5.Text = "Result && Logging"
        '
        'label10
        '
        Me.label10.Location = New System.Drawing.Point(16, 134)
        Me.label10.Name = "label10"
        Me.label10.Size = New System.Drawing.Size(56, 16)
        Me.label10.TabIndex = 3
        Me.label10.Text = "&Received:"
        '
        'label8
        '
        Me.label8.Location = New System.Drawing.Point(16, 23)
        Me.label8.Name = "label8"
        Me.label8.Size = New System.Drawing.Size(56, 16)
        Me.label8.TabIndex = 0
        Me.label8.Text = "Se&nt:"
        '
        'lvReceivedMessages
        '
        Me.lvReceivedMessages.Location = New System.Drawing.Point(80, 130)
        Me.lvReceivedMessages.Name = "lvReceivedMessages"
        Me.lvReceivedMessages.Size = New System.Drawing.Size(498, 100)
        Me.lvReceivedMessages.TabIndex = 4
        Me.lvReceivedMessages.UseCompatibleStateImageBehavior = False
        Me.lvReceivedMessages.View = System.Windows.Forms.View.Details
        '
        'lvSentMessages
        '
        Me.lvSentMessages.Location = New System.Drawing.Point(80, 19)
        Me.lvSentMessages.Name = "lvSentMessages"
        Me.lvSentMessages.Size = New System.Drawing.Size(498, 100)
        Me.lvSentMessages.TabIndex = 1
        Me.lvSentMessages.UseCompatibleStateImageBehavior = False
        Me.lvSentMessages.View = System.Windows.Forms.View.Details
        '
        'label1
        '
        Me.label1.AutoSize = True
        Me.label1.Location = New System.Drawing.Point(273, 28)
        Me.label1.Name = "label1"
        Me.label1.Size = New System.Drawing.Size(0, 13)
        Me.label1.TabIndex = 17
        '
        'groupBox6
        '
        Me.groupBox6.Controls.Add(Me.label10)
        Me.groupBox6.Controls.Add(Me.label8)
        Me.groupBox6.Controls.Add(Me.lvReceivedMessages)
        Me.groupBox6.Controls.Add(Me.lvSentMessages)
        Me.groupBox6.Location = New System.Drawing.Point(14, 283)
        Me.groupBox6.Name = "groupBox6"
        Me.groupBox6.Size = New System.Drawing.Size(584, 244)
        Me.groupBox6.TabIndex = 14
        Me.groupBox6.TabStop = False
        Me.groupBox6.Text = "Messages"
        '
        'Label5
        '
        Me.Label5.Location = New System.Drawing.Point(16, 48)
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
        Me.txtToAddress.AcceptsReturn = True
        Me.txtToAddress.Location = New System.Drawing.Point(80, 18)
        Me.txtToAddress.Name = "txtToAddress"
        Me.txtToAddress.Size = New System.Drawing.Size(163, 20)
        Me.txtToAddress.TabIndex = 1
        '
        'txtBody
        '
        Me.txtBody.Location = New System.Drawing.Point(80, 45)
        Me.txtBody.Multiline = True
        Me.txtBody.Name = "txtBody"
        Me.txtBody.Size = New System.Drawing.Size(498, 78)
        Me.txtBody.TabIndex = 6
        '
        'GroupBox2
        '
        Me.GroupBox2.Controls.Add(Me.Label5)
        Me.GroupBox2.Controls.Add(Me.Label4)
        Me.GroupBox2.Controls.Add(Me.txtToAddress)
        Me.GroupBox2.Controls.Add(Me.txtBody)
        Me.GroupBox2.Controls.Add(Me.btnSend)
        Me.GroupBox2.Location = New System.Drawing.Point(14, 112)
        Me.GroupBox2.Name = "GroupBox2"
        Me.GroupBox2.Size = New System.Drawing.Size(584, 165)
        Me.GroupBox2.TabIndex = 13
        Me.GroupBox2.TabStop = False
        Me.GroupBox2.Text = "Send Message"
        '
        'btnSend
        '
        Me.btnSend.Location = New System.Drawing.Point(501, 129)
        Me.btnSend.Name = "btnSend"
        Me.btnSend.Size = New System.Drawing.Size(77, 23)
        Me.btnSend.TabIndex = 8
        Me.btnSend.Text = "S&end"
        '
        'btnConnect
        '
        Me.btnConnect.Location = New System.Drawing.Point(497, 26)
        Me.btnConnect.Name = "btnConnect"
        Me.btnConnect.Size = New System.Drawing.Size(77, 23)
        Me.btnConnect.TabIndex = 10
        Me.btnConnect.Text = "Connect"
        Me.btnConnect.UseVisualStyleBackColor = True
        '
        'txtPort
        '
        Me.txtPort.Location = New System.Drawing.Point(321, 26)
        Me.txtPort.Name = "txtPort"
        Me.txtPort.Size = New System.Drawing.Size(87, 20)
        Me.txtPort.TabIndex = 9
        '
        'label13
        '
        Me.label13.AutoSize = True
        Me.label13.Location = New System.Drawing.Point(249, 29)
        Me.label13.Name = "label13"
        Me.label13.Size = New System.Drawing.Size(29, 13)
        Me.label13.TabIndex = 8
        Me.label13.Text = "Port:"
        '
        'label12
        '
        Me.label12.Location = New System.Drawing.Point(16, 29)
        Me.label12.Name = "label12"
        Me.label12.Size = New System.Drawing.Size(56, 16)
        Me.label12.TabIndex = 6
        Me.label12.Text = "IP:"
        '
        'txtIP
        '
        Me.txtIP.Location = New System.Drawing.Point(80, 26)
        Me.txtIP.Name = "txtIP"
        Me.txtIP.Size = New System.Drawing.Size(163, 20)
        Me.txtIP.TabIndex = 7
        '
        'GroupBox1
        '
        Me.GroupBox1.Controls.Add(Me.btnConnect)
        Me.GroupBox1.Controls.Add(Me.txtPort)
        Me.GroupBox1.Controls.Add(Me.label13)
        Me.GroupBox1.Controls.Add(Me.label12)
        Me.GroupBox1.Controls.Add(Me.txtIP)
        Me.GroupBox1.Location = New System.Drawing.Point(14, 44)
        Me.GroupBox1.Name = "GroupBox1"
        Me.GroupBox1.Size = New System.Drawing.Size(578, 62)
        Me.GroupBox1.TabIndex = 12
        Me.GroupBox1.TabStop = False
        Me.GroupBox1.Text = "Android Connection Properties"
        '
        'Label7
        '
        Me.Label7.Location = New System.Drawing.Point(14, 13)
        Me.Label7.Name = "Label7"
        Me.Label7.Size = New System.Drawing.Size(578, 28)
        Me.Label7.TabIndex = 11
        Me.Label7.Text = "This demo requires you to have the Auron SMS Agent installed and ready on your An" &
    "droid phone. Your Android phone should be connected to the same network as this " &
    "PC."
        '
        'frmAndroid
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(611, 637)
        Me.Controls.Add(Me.lnkAuronSMSAgentForAndroid)
        Me.Controls.Add(Me.lblInfo)
        Me.Controls.Add(Me.GroupBox5)
        Me.Controls.Add(Me.label1)
        Me.Controls.Add(Me.groupBox6)
        Me.Controls.Add(Me.GroupBox2)
        Me.Controls.Add(Me.GroupBox1)
        Me.Controls.Add(Me.Label7)
        Me.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedDialog
        Me.Name = "frmAndroid"
        Me.Text = "Auron SMS Component - VB.Net Android Demo"
        Me.GroupBox5.ResumeLayout(False)
        Me.GroupBox5.PerformLayout()
        Me.groupBox6.ResumeLayout(False)
        Me.GroupBox2.ResumeLayout(False)
        Me.GroupBox2.PerformLayout()
        Me.GroupBox1.ResumeLayout(False)
        Me.GroupBox1.PerformLayout()
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Private WithEvents lnkAuronSMSAgentForAndroid As LinkLabel
    Private WithEvents tmrCheckReceive As Timer
    Friend WithEvents btnView As Button
    Friend WithEvents Label3 As Label
    Friend WithEvents txtResult As TextBox
    Friend WithEvents txtLogFile As TextBox
    Friend WithEvents Label6 As Label
    Private WithEvents lblInfo As Label
    Friend WithEvents GroupBox5 As GroupBox
    Friend WithEvents label10 As Label
    Friend WithEvents label8 As Label
    Friend WithEvents lvReceivedMessages As ListView
    Friend WithEvents lvSentMessages As ListView
    Private WithEvents label1 As Label
    Friend WithEvents groupBox6 As GroupBox
    Friend WithEvents Label5 As Label
    Friend WithEvents Label4 As Label
    Friend WithEvents txtToAddress As TextBox
    Friend WithEvents txtBody As TextBox
    Friend WithEvents GroupBox2 As GroupBox
    Friend WithEvents btnSend As Button
    Private WithEvents btnConnect As Button
    Private WithEvents txtPort As TextBox
    Friend WithEvents label13 As Label
    Friend WithEvents label12 As Label
    Private WithEvents txtIP As TextBox
    Friend WithEvents GroupBox1 As GroupBox
    Friend WithEvents Label7 As Label
End Class
