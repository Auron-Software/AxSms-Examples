<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class frmSmpp
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
    Me.llblUrlRecipientFormat = New System.Windows.Forms.LinkLabel()
    Me.btnSendOptions = New System.Windows.Forms.Button()
    Me.Label6 = New System.Windows.Forms.GroupBox()
    Me.btnAdvancedProviderSettings = New System.Windows.Forms.Button()
    Me.llblUrlSmppProviders = New System.Windows.Forms.LinkLabel()
    Me.Label9 = New System.Windows.Forms.Label()
    Me.btnDisconnect = New System.Windows.Forms.Button()
    Me.btnConnect = New System.Windows.Forms.Button()
    Me.cbxBindType = New System.Windows.Forms.ComboBox()
    Me.Label5 = New System.Windows.Forms.Label()
    Me.txtServerPort = New System.Windows.Forms.TextBox()
    Me.Label4 = New System.Windows.Forms.Label()
    Me.txtSystemPassword = New System.Windows.Forms.TextBox()
    Me.txtSystemID = New System.Windows.Forms.TextBox()
    Me.txtServer = New System.Windows.Forms.TextBox()
    Me.Label3 = New System.Windows.Forms.Label()
    Me.Label2 = New System.Windows.Forms.Label()
    Me.Label1 = New System.Windows.Forms.Label()
    Me.btnSend = New System.Windows.Forms.Button()
    Me.lvSentMessages = New System.Windows.Forms.ListView()
    Me.Label8 = New System.Windows.Forms.Label()
    Me.txtResult = New System.Windows.Forms.TextBox()
    Me.GroupBox2 = New System.Windows.Forms.GroupBox()
    Me.cbxDataCoding = New System.Windows.Forms.ComboBox()
    Me.Label11 = New System.Windows.Forms.Label()
    Me.txtBody = New System.Windows.Forms.TextBox()
    Me.Label7 = New System.Windows.Forms.Label()
    Me.txtToAddress = New System.Windows.Forms.TextBox()
    Me.GroupBox3 = New System.Windows.Forms.GroupBox()
    Me.llblUrlNotReceived = New System.Windows.Forms.LinkLabel()
    Me.btnClearSent = New System.Windows.Forms.Button()
    Me.GroupBox4 = New System.Windows.Forms.GroupBox()
    Me.btnView = New System.Windows.Forms.Button()
    Me.Label12 = New System.Windows.Forms.Label()
    Me.txtLogFile = New System.Windows.Forms.TextBox()
    Me.Label10 = New System.Windows.Forms.Label()
    Me.TmrCheckReceive = New System.Windows.Forms.Timer(Me.components)
    Me.btnClearReceived = New System.Windows.Forms.Button()
    Me.lvReceivedMessages = New System.Windows.Forms.ListView()
    Me.GroupBox5 = New System.Windows.Forms.GroupBox()
    Me.lblInfo = New System.Windows.Forms.Label()
    Me.TmrCheckUpdate = New System.Windows.Forms.Timer(Me.components)
    Me.cbSecure = New System.Windows.Forms.CheckBox()
    Me.Label6.SuspendLayout()
    Me.GroupBox2.SuspendLayout()
    Me.GroupBox3.SuspendLayout()
    Me.GroupBox4.SuspendLayout()
    Me.GroupBox5.SuspendLayout()
    Me.SuspendLayout()
    '
    'llblUrlRecipientFormat
    '
    Me.llblUrlRecipientFormat.Location = New System.Drawing.Point(550, 21)
    Me.llblUrlRecipientFormat.Name = "llblUrlRecipientFormat"
    Me.llblUrlRecipientFormat.Size = New System.Drawing.Size(128, 16)
    Me.llblUrlRecipientFormat.TabIndex = 2
    Me.llblUrlRecipientFormat.TabStop = True
    Me.llblUrlRecipientFormat.Text = "Number format"
    '
    'btnSendOptions
    '
    Me.btnSendOptions.Location = New System.Drawing.Point(549, 102)
    Me.btnSendOptions.Name = "btnSendOptions"
    Me.btnSendOptions.Size = New System.Drawing.Size(104, 24)
    Me.btnSendOptions.TabIndex = 9
    Me.btnSendOptions.Text = "&Advanced..."
    '
    'Label6
    '
    Me.Label6.Controls.Add(Me.cbSecure)
    Me.Label6.Controls.Add(Me.btnAdvancedProviderSettings)
    Me.Label6.Controls.Add(Me.llblUrlSmppProviders)
    Me.Label6.Controls.Add(Me.Label9)
    Me.Label6.Controls.Add(Me.btnDisconnect)
    Me.Label6.Controls.Add(Me.btnConnect)
    Me.Label6.Controls.Add(Me.cbxBindType)
    Me.Label6.Controls.Add(Me.Label5)
    Me.Label6.Controls.Add(Me.txtServerPort)
    Me.Label6.Controls.Add(Me.Label4)
    Me.Label6.Controls.Add(Me.txtSystemPassword)
    Me.Label6.Controls.Add(Me.txtSystemID)
    Me.Label6.Controls.Add(Me.txtServer)
    Me.Label6.Controls.Add(Me.Label3)
    Me.Label6.Controls.Add(Me.Label2)
    Me.Label6.Controls.Add(Me.Label1)
    Me.Label6.Location = New System.Drawing.Point(12, 12)
    Me.Label6.Name = "Label6"
    Me.Label6.Size = New System.Drawing.Size(670, 101)
    Me.Label6.TabIndex = 0
    Me.Label6.TabStop = False
    Me.Label6.Text = "Connection"
    '
    'btnAdvancedProviderSettings
    '
    Me.btnAdvancedProviderSettings.Location = New System.Drawing.Point(549, 42)
    Me.btnAdvancedProviderSettings.Name = "btnAdvancedProviderSettings"
    Me.btnAdvancedProviderSettings.Size = New System.Drawing.Size(104, 24)
    Me.btnAdvancedProviderSettings.TabIndex = 10
    Me.btnAdvancedProviderSettings.Text = "Advanced..."
    '
    'llblUrlSmppProviders
    '
    Me.llblUrlSmppProviders.Location = New System.Drawing.Point(489, 75)
    Me.llblUrlSmppProviders.Name = "llblUrlSmppProviders"
    Me.llblUrlSmppProviders.Size = New System.Drawing.Size(56, 23)
    Me.llblUrlSmppProviders.TabIndex = 14
    Me.llblUrlSmppProviders.TabStop = True
    Me.llblUrlSmppProviders.Text = "click here"
    '
    'Label9
    '
    Me.Label9.Location = New System.Drawing.Point(354, 75)
    Me.Label9.Name = "Label9"
    Me.Label9.Size = New System.Drawing.Size(211, 23)
    Me.Label9.TabIndex = 13
    Me.Label9.Text = "For a list of SMPP providers,"
    '
    'btnDisconnect
    '
    Me.btnDisconnect.Location = New System.Drawing.Point(218, 69)
    Me.btnDisconnect.Name = "btnDisconnect"
    Me.btnDisconnect.Size = New System.Drawing.Size(127, 23)
    Me.btnDisconnect.TabIndex = 12
    Me.btnDisconnect.Text = "&Disconnect"
    '
    'btnConnect
    '
    Me.btnConnect.Location = New System.Drawing.Point(88, 69)
    Me.btnConnect.Name = "btnConnect"
    Me.btnConnect.Size = New System.Drawing.Size(127, 23)
    Me.btnConnect.TabIndex = 11
    Me.btnConnect.Text = "&Connect"
    '
    'cbxBindType
    '
    Me.cbxBindType.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList
    Me.cbxBindType.Location = New System.Drawing.Point(438, 45)
    Me.cbxBindType.Name = "cbxBindType"
    Me.cbxBindType.Size = New System.Drawing.Size(105, 21)
    Me.cbxBindType.TabIndex = 9
    '
    'Label5
    '
    Me.Label5.Location = New System.Drawing.Point(354, 48)
    Me.Label5.Name = "Label5"
    Me.Label5.Size = New System.Drawing.Size(76, 16)
    Me.Label5.TabIndex = 8
    Me.Label5.Text = "B&ind Type:"
    '
    'txtServerPort
    '
    Me.txtServerPort.Location = New System.Drawing.Point(438, 19)
    Me.txtServerPort.Name = "txtServerPort"
    Me.txtServerPort.Size = New System.Drawing.Size(105, 20)
    Me.txtServerPort.TabIndex = 3
    Me.txtServerPort.Text = "2775"
    '
    'Label4
    '
    Me.Label4.Location = New System.Drawing.Point(354, 22)
    Me.Label4.Name = "Label4"
    Me.Label4.Size = New System.Drawing.Size(64, 16)
    Me.Label4.TabIndex = 2
    Me.Label4.Text = "Server &Port:"
    '
    'txtSystemPassword
    '
    Me.txtSystemPassword.Location = New System.Drawing.Point(247, 46)
    Me.txtSystemPassword.Name = "txtSystemPassword"
    Me.txtSystemPassword.PasswordChar = Global.Microsoft.VisualBasic.ChrW(42)
    Me.txtSystemPassword.Size = New System.Drawing.Size(98, 20)
    Me.txtSystemPassword.TabIndex = 7
    '
    'txtSystemID
    '
    Me.txtSystemID.Location = New System.Drawing.Point(88, 46)
    Me.txtSystemID.Name = "txtSystemID"
    Me.txtSystemID.Size = New System.Drawing.Size(93, 20)
    Me.txtSystemID.TabIndex = 5
    '
    'txtServer
    '
    Me.txtServer.Location = New System.Drawing.Point(88, 19)
    Me.txtServer.Name = "txtServer"
    Me.txtServer.Size = New System.Drawing.Size(257, 20)
    Me.txtServer.TabIndex = 1
    Me.txtServer.Text = "gateway.auronsoftware.com"
    '
    'Label3
    '
    Me.Label3.Location = New System.Drawing.Point(187, 49)
    Me.Label3.Name = "Label3"
    Me.Label3.Size = New System.Drawing.Size(60, 20)
    Me.Label3.TabIndex = 6
    Me.Label3.Text = "Password:"
    '
    'Label2
    '
    Me.Label2.Location = New System.Drawing.Point(20, 48)
    Me.Label2.Name = "Label2"
    Me.Label2.Size = New System.Drawing.Size(60, 16)
    Me.Label2.TabIndex = 4
    Me.Label2.Text = "System &ID:"
    '
    'Label1
    '
    Me.Label1.Location = New System.Drawing.Point(20, 22)
    Me.Label1.Name = "Label1"
    Me.Label1.Size = New System.Drawing.Size(44, 16)
    Me.Label1.TabIndex = 0
    Me.Label1.Text = "&Server:"
    '
    'btnSend
    '
    Me.btnSend.Location = New System.Drawing.Point(88, 102)
    Me.btnSend.Name = "btnSend"
    Me.btnSend.Size = New System.Drawing.Size(455, 24)
    Me.btnSend.TabIndex = 8
    Me.btnSend.Text = "S&end"
    '
    'lvSentMessages
    '
    Me.lvSentMessages.Location = New System.Drawing.Point(88, 19)
    Me.lvSentMessages.Name = "lvSentMessages"
    Me.lvSentMessages.Size = New System.Drawing.Size(455, 86)
    Me.lvSentMessages.TabIndex = 0
    Me.lvSentMessages.UseCompatibleStateImageBehavior = False
    Me.lvSentMessages.View = System.Windows.Forms.View.Details
    '
    'Label8
    '
    Me.Label8.Location = New System.Drawing.Point(20, 46)
    Me.Label8.Name = "Label8"
    Me.Label8.Size = New System.Drawing.Size(56, 16)
    Me.Label8.TabIndex = 5
    Me.Label8.Text = "&Body:"
    '
    'txtResult
    '
    Me.txtResult.Font = New System.Drawing.Font("Microsoft Sans Serif", 8.25!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
    Me.txtResult.Location = New System.Drawing.Point(88, 19)
    Me.txtResult.Name = "txtResult"
    Me.txtResult.ReadOnly = True
    Me.txtResult.Size = New System.Drawing.Size(453, 20)
    Me.txtResult.TabIndex = 1
    '
    'GroupBox2
    '
    Me.GroupBox2.Controls.Add(Me.cbxDataCoding)
    Me.GroupBox2.Controls.Add(Me.Label11)
    Me.GroupBox2.Controls.Add(Me.llblUrlRecipientFormat)
    Me.GroupBox2.Controls.Add(Me.btnSendOptions)
    Me.GroupBox2.Controls.Add(Me.btnSend)
    Me.GroupBox2.Controls.Add(Me.Label8)
    Me.GroupBox2.Controls.Add(Me.txtBody)
    Me.GroupBox2.Controls.Add(Me.Label7)
    Me.GroupBox2.Controls.Add(Me.txtToAddress)
    Me.GroupBox2.Location = New System.Drawing.Point(12, 119)
    Me.GroupBox2.Name = "GroupBox2"
    Me.GroupBox2.Size = New System.Drawing.Size(670, 139)
    Me.GroupBox2.TabIndex = 1
    Me.GroupBox2.TabStop = False
    Me.GroupBox2.Text = "Message"
    '
    'cbxDataCoding
    '
    Me.cbxDataCoding.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList
    Me.cbxDataCoding.FormattingEnabled = True
    Me.cbxDataCoding.Items.AddRange(New Object() {"Text", "Unicode", "Data", "Data (UDH)"})
    Me.cbxDataCoding.Location = New System.Drawing.Point(357, 18)
    Me.cbxDataCoding.Name = "cbxDataCoding"
    Me.cbxDataCoding.Size = New System.Drawing.Size(186, 21)
    Me.cbxDataCoding.TabIndex = 4
    '
    'Label11
    '
    Me.Label11.AutoSize = True
    Me.Label11.Location = New System.Drawing.Point(282, 23)
    Me.Label11.Name = "Label11"
    Me.Label11.Size = New System.Drawing.Size(69, 13)
    Me.Label11.TabIndex = 3
    Me.Label11.Text = "Data Coding:"
    '
    'txtBody
    '
    Me.txtBody.Location = New System.Drawing.Point(88, 46)
    Me.txtBody.Multiline = True
    Me.txtBody.Name = "txtBody"
    Me.txtBody.Size = New System.Drawing.Size(457, 50)
    Me.txtBody.TabIndex = 6
    '
    'Label7
    '
    Me.Label7.Location = New System.Drawing.Point(20, 23)
    Me.Label7.Name = "Label7"
    Me.Label7.Size = New System.Drawing.Size(62, 23)
    Me.Label7.TabIndex = 0
    Me.Label7.Text = "&ToAddress:"
    '
    'txtToAddress
    '
    Me.txtToAddress.Location = New System.Drawing.Point(88, 19)
    Me.txtToAddress.Name = "txtToAddress"
    Me.txtToAddress.Size = New System.Drawing.Size(189, 20)
    Me.txtToAddress.TabIndex = 1
    '
    'GroupBox3
    '
    Me.GroupBox3.Controls.Add(Me.llblUrlNotReceived)
    Me.GroupBox3.Controls.Add(Me.btnClearSent)
    Me.GroupBox3.Controls.Add(Me.lvSentMessages)
    Me.GroupBox3.Location = New System.Drawing.Point(12, 264)
    Me.GroupBox3.Name = "GroupBox3"
    Me.GroupBox3.Size = New System.Drawing.Size(670, 126)
    Me.GroupBox3.TabIndex = 2
    Me.GroupBox3.TabStop = False
    Me.GroupBox3.Text = "Sent Messages"
    '
    'llblUrlNotReceived
    '
    Me.llblUrlNotReceived.Location = New System.Drawing.Point(85, 105)
    Me.llblUrlNotReceived.Name = "llblUrlNotReceived"
    Me.llblUrlNotReceived.Size = New System.Drawing.Size(332, 16)
    Me.llblUrlNotReceived.TabIndex = 2
    Me.llblUrlNotReceived.TabStop = True
    Me.llblUrlNotReceived.Text = "Help, I didn't receive the SMS message on my mobile phone"
    '
    'btnClearSent
    '
    Me.btnClearSent.Location = New System.Drawing.Point(549, 81)
    Me.btnClearSent.Name = "btnClearSent"
    Me.btnClearSent.Size = New System.Drawing.Size(104, 24)
    Me.btnClearSent.TabIndex = 1
    Me.btnClearSent.Text = "Clear"
    '
    'GroupBox4
    '
    Me.GroupBox4.Controls.Add(Me.btnView)
    Me.GroupBox4.Controls.Add(Me.Label12)
    Me.GroupBox4.Controls.Add(Me.txtLogFile)
    Me.GroupBox4.Controls.Add(Me.txtResult)
    Me.GroupBox4.Controls.Add(Me.Label10)
    Me.GroupBox4.Location = New System.Drawing.Point(12, 514)
    Me.GroupBox4.Name = "GroupBox4"
    Me.GroupBox4.Size = New System.Drawing.Size(670, 72)
    Me.GroupBox4.TabIndex = 4
    Me.GroupBox4.TabStop = False
    Me.GroupBox4.Text = "Result && Logging"
    '
    'btnView
    '
    Me.btnView.Location = New System.Drawing.Point(547, 41)
    Me.btnView.Name = "btnView"
    Me.btnView.Size = New System.Drawing.Size(104, 23)
    Me.btnView.TabIndex = 4
    Me.btnView.Text = "&View..."
    '
    'Label12
    '
    Me.Label12.Location = New System.Drawing.Point(20, 47)
    Me.Label12.Name = "Label12"
    Me.Label12.Size = New System.Drawing.Size(52, 16)
    Me.Label12.TabIndex = 2
    Me.Label12.Text = "Lo&g file:"
    '
    'txtLogFile
    '
    Me.txtLogFile.Location = New System.Drawing.Point(88, 43)
    Me.txtLogFile.Name = "txtLogFile"
    Me.txtLogFile.Size = New System.Drawing.Size(453, 20)
    Me.txtLogFile.TabIndex = 3
    '
    'Label10
    '
    Me.Label10.Font = New System.Drawing.Font("Microsoft Sans Serif", 8.25!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
    Me.Label10.Location = New System.Drawing.Point(20, 23)
    Me.Label10.Name = "Label10"
    Me.Label10.Size = New System.Drawing.Size(48, 16)
    Me.Label10.TabIndex = 0
    Me.Label10.Text = "&Result:"
    '
    'TmrCheckReceive
    '
    '
    'btnClearReceived
    '
    Me.btnClearReceived.Location = New System.Drawing.Point(547, 81)
    Me.btnClearReceived.Name = "btnClearReceived"
    Me.btnClearReceived.Size = New System.Drawing.Size(104, 24)
    Me.btnClearReceived.TabIndex = 1
    Me.btnClearReceived.Text = "Clear"
    '
    'lvReceivedMessages
    '
    Me.lvReceivedMessages.Location = New System.Drawing.Point(88, 19)
    Me.lvReceivedMessages.Name = "lvReceivedMessages"
    Me.lvReceivedMessages.Size = New System.Drawing.Size(453, 86)
    Me.lvReceivedMessages.TabIndex = 0
    Me.lvReceivedMessages.UseCompatibleStateImageBehavior = False
    Me.lvReceivedMessages.View = System.Windows.Forms.View.Details
    '
    'GroupBox5
    '
    Me.GroupBox5.Controls.Add(Me.btnClearReceived)
    Me.GroupBox5.Controls.Add(Me.lvReceivedMessages)
    Me.GroupBox5.Location = New System.Drawing.Point(12, 396)
    Me.GroupBox5.Name = "GroupBox5"
    Me.GroupBox5.Size = New System.Drawing.Size(670, 112)
    Me.GroupBox5.TabIndex = 3
    Me.GroupBox5.TabStop = False
    Me.GroupBox5.Text = "Received Messages"
    '
    'lblInfo
    '
    Me.lblInfo.AutoSize = True
    Me.lblInfo.Location = New System.Drawing.Point(9, 589)
    Me.lblInfo.Name = "lblInfo"
    Me.lblInfo.Size = New System.Drawing.Size(31, 13)
    Me.lblInfo.TabIndex = 5
    Me.lblInfo.Text = "[Info]"
    '
    'TmrCheckUpdate
    '
    '
    'cbSecure
    '
    Me.cbSecure.AutoSize = True
    Me.cbSecure.Location = New System.Drawing.Point(553, 21)
    Me.cbSecure.Name = "cbSecure"
    Me.cbSecure.Size = New System.Drawing.Size(89, 17)
    Me.cbSecure.TabIndex = 15
    Me.cbSecure.Text = "Secure (TLS)"
    Me.cbSecure.UseVisualStyleBackColor = True
    '
    'frmSmpp
    '
    Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
    Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
    Me.ClientSize = New System.Drawing.Size(694, 613)
    Me.Controls.Add(Me.lblInfo)
    Me.Controls.Add(Me.Label6)
    Me.Controls.Add(Me.GroupBox2)
    Me.Controls.Add(Me.GroupBox3)
    Me.Controls.Add(Me.GroupBox4)
    Me.Controls.Add(Me.GroupBox5)
    Me.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedDialog
    Me.MaximizeBox = False
    Me.MinimizeBox = False
    Me.Name = "frmSmpp"
    Me.Text = "Auron SMS Component - VB.NET SMPP Demo"
    Me.Label6.ResumeLayout(False)
    Me.Label6.PerformLayout()
    Me.GroupBox2.ResumeLayout(False)
    Me.GroupBox2.PerformLayout()
    Me.GroupBox3.ResumeLayout(False)
    Me.GroupBox4.ResumeLayout(False)
    Me.GroupBox4.PerformLayout()
    Me.GroupBox5.ResumeLayout(False)
    Me.ResumeLayout(False)
    Me.PerformLayout()

  End Sub
  Friend WithEvents llblUrlRecipientFormat As System.Windows.Forms.LinkLabel
    Friend WithEvents btnSendOptions As System.Windows.Forms.Button
    Friend WithEvents Label6 As System.Windows.Forms.GroupBox
    Friend WithEvents btnAdvancedProviderSettings As System.Windows.Forms.Button
    Friend WithEvents llblUrlSmppProviders As System.Windows.Forms.LinkLabel
    Friend WithEvents Label9 As System.Windows.Forms.Label
    Friend WithEvents btnDisconnect As System.Windows.Forms.Button
    Friend WithEvents btnConnect As System.Windows.Forms.Button
    Friend WithEvents cbxBindType As System.Windows.Forms.ComboBox
    Friend WithEvents Label5 As System.Windows.Forms.Label
    Friend WithEvents txtServerPort As System.Windows.Forms.TextBox
    Friend WithEvents Label4 As System.Windows.Forms.Label
    Friend WithEvents txtSystemPassword As System.Windows.Forms.TextBox
    Friend WithEvents txtSystemID As System.Windows.Forms.TextBox
    Friend WithEvents txtServer As System.Windows.Forms.TextBox
    Friend WithEvents Label3 As System.Windows.Forms.Label
    Friend WithEvents Label2 As System.Windows.Forms.Label
    Friend WithEvents Label1 As System.Windows.Forms.Label
    Friend WithEvents btnSend As System.Windows.Forms.Button
    Friend WithEvents lvSentMessages As System.Windows.Forms.ListView
    Friend WithEvents Label8 As System.Windows.Forms.Label
    Friend WithEvents txtResult As System.Windows.Forms.TextBox
    Friend WithEvents GroupBox2 As System.Windows.Forms.GroupBox
    Friend WithEvents txtBody As System.Windows.Forms.TextBox
    Friend WithEvents Label7 As System.Windows.Forms.Label
    Friend WithEvents txtToAddress As System.Windows.Forms.TextBox
    Friend WithEvents GroupBox3 As System.Windows.Forms.GroupBox
    Friend WithEvents llblUrlNotReceived As System.Windows.Forms.LinkLabel
    Friend WithEvents btnClearSent As System.Windows.Forms.Button
    Friend WithEvents GroupBox4 As System.Windows.Forms.GroupBox
    Friend WithEvents btnView As System.Windows.Forms.Button
    Friend WithEvents Label12 As System.Windows.Forms.Label
    Friend WithEvents txtLogFile As System.Windows.Forms.TextBox
    Friend WithEvents Label10 As System.Windows.Forms.Label
    Friend WithEvents TmrCheckReceive As System.Windows.Forms.Timer
    Friend WithEvents btnClearReceived As System.Windows.Forms.Button
    Friend WithEvents lvReceivedMessages As System.Windows.Forms.ListView
    Friend WithEvents GroupBox5 As System.Windows.Forms.GroupBox
    Friend WithEvents lblInfo As System.Windows.Forms.Label
    Friend WithEvents cbxDataCoding As System.Windows.Forms.ComboBox
    Friend WithEvents Label11 As System.Windows.Forms.Label
    Friend WithEvents TmrCheckUpdate As System.Windows.Forms.Timer
  Friend WithEvents cbSecure As CheckBox
End Class
