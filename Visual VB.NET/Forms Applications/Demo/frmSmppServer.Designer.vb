<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class frmSmppServer
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
    Me.cbxSystemID = New System.Windows.Forms.ComboBox()
    Me.label2 = New System.Windows.Forms.Label()
    Me.cbxDataCoding = New System.Windows.Forms.ComboBox()
    Me.label11 = New System.Windows.Forms.Label()
    Me.grbControlPanel = New System.Windows.Forms.GroupBox()
    Me.cbxIpVersion = New System.Windows.Forms.ComboBox()
    Me.btnAddClient = New System.Windows.Forms.Button()
    Me.btnStopServer = New System.Windows.Forms.Button()
    Me.btnStartServer = New System.Windows.Forms.Button()
    Me.txtPort = New System.Windows.Forms.TextBox()
    Me.label1 = New System.Windows.Forms.Label()
    Me.llblUrlRecipientFormat = New System.Windows.Forms.LinkLabel()
    Me.btnSendOptions = New System.Windows.Forms.Button()
    Me.Label5 = New System.Windows.Forms.Label()
    Me.Label4 = New System.Windows.Forms.Label()
    Me.txtToAddress = New System.Windows.Forms.TextBox()
    Me.txtBody = New System.Windows.Forms.TextBox()
    Me.btnDeliver = New System.Windows.Forms.Button()
    Me.btnView = New System.Windows.Forms.Button()
    Me.Label12 = New System.Windows.Forms.Label()
    Me.grpSendMessage = New System.Windows.Forms.GroupBox()
    Me.txtLogFile = New System.Windows.Forms.TextBox()
    Me.lblInfo = New System.Windows.Forms.Label()
    Me.GroupBox4 = New System.Windows.Forms.GroupBox()
    Me.txtResult = New System.Windows.Forms.TextBox()
    Me.Label10 = New System.Windows.Forms.Label()
    Me.tmrHandleSessions = New System.Windows.Forms.Timer(Me.components)
    Me.lvSessions = New System.Windows.Forms.ListView()
    Me.grpSessions = New System.Windows.Forms.GroupBox()
    Me.lvMessages = New System.Windows.Forms.ListView()
    Me.grpIncommingMessages = New System.Windows.Forms.GroupBox()
    Me.Label3 = New System.Windows.Forms.Label()
    Me.cbxCertificate = New System.Windows.Forms.ComboBox()
    Me.Label6 = New System.Windows.Forms.Label()
    Me.grbControlPanel.SuspendLayout()
    Me.grpSendMessage.SuspendLayout()
    Me.GroupBox4.SuspendLayout()
    Me.grpSessions.SuspendLayout()
    Me.grpIncommingMessages.SuspendLayout()
    Me.SuspendLayout()
    '
    'cbxSystemID
    '
    Me.cbxSystemID.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList
    Me.cbxSystemID.FormattingEnabled = True
    Me.cbxSystemID.Location = New System.Drawing.Point(80, 19)
    Me.cbxSystemID.Name = "cbxSystemID"
    Me.cbxSystemID.Size = New System.Drawing.Size(182, 21)
    Me.cbxSystemID.TabIndex = 1
    '
    'label2
    '
    Me.label2.AutoSize = True
    Me.label2.Location = New System.Drawing.Point(16, 27)
    Me.label2.Name = "label2"
    Me.label2.Size = New System.Drawing.Size(55, 13)
    Me.label2.TabIndex = 0
    Me.label2.Text = "SystemID:"
    '
    'cbxDataCoding
    '
    Me.cbxDataCoding.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList
    Me.cbxDataCoding.FormattingEnabled = True
    Me.cbxDataCoding.Items.AddRange(New Object() {"Text", "Unicode", "Data", "Data (UDH)"})
    Me.cbxDataCoding.Location = New System.Drawing.Point(359, 19)
    Me.cbxDataCoding.Name = "cbxDataCoding"
    Me.cbxDataCoding.Size = New System.Drawing.Size(182, 21)
    Me.cbxDataCoding.TabIndex = 3
    '
    'label11
    '
    Me.label11.AutoSize = True
    Me.label11.Location = New System.Drawing.Point(281, 22)
    Me.label11.Name = "label11"
    Me.label11.Size = New System.Drawing.Size(69, 13)
    Me.label11.TabIndex = 2
    Me.label11.Text = "Data Coding:"
    '
    'grbControlPanel
    '
    Me.grbControlPanel.Controls.Add(Me.Label6)
    Me.grbControlPanel.Controls.Add(Me.cbxCertificate)
    Me.grbControlPanel.Controls.Add(Me.Label3)
    Me.grbControlPanel.Controls.Add(Me.cbxIpVersion)
    Me.grbControlPanel.Controls.Add(Me.btnAddClient)
    Me.grbControlPanel.Controls.Add(Me.btnStopServer)
    Me.grbControlPanel.Controls.Add(Me.btnStartServer)
    Me.grbControlPanel.Controls.Add(Me.txtPort)
    Me.grbControlPanel.Controls.Add(Me.label1)
    Me.grbControlPanel.Location = New System.Drawing.Point(15, 10)
    Me.grbControlPanel.Name = "grbControlPanel"
    Me.grbControlPanel.Size = New System.Drawing.Size(667, 80)
    Me.grbControlPanel.TabIndex = 6
    Me.grbControlPanel.TabStop = False
    Me.grbControlPanel.Text = "Control Panel"
    '
    'cbxIpVersion
    '
    Me.cbxIpVersion.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList
    Me.cbxIpVersion.FormattingEnabled = True
    Me.cbxIpVersion.Location = New System.Drawing.Point(130, 17)
    Me.cbxIpVersion.Name = "cbxIpVersion"
    Me.cbxIpVersion.Size = New System.Drawing.Size(102, 21)
    Me.cbxIpVersion.TabIndex = 6
    '
    'btnAddClient
    '
    Me.btnAddClient.Location = New System.Drawing.Point(239, 44)
    Me.btnAddClient.Name = "btnAddClient"
    Me.btnAddClient.Size = New System.Drawing.Size(104, 24)
    Me.btnAddClient.TabIndex = 4
    Me.btnAddClient.Text = "Add Client"
    Me.btnAddClient.UseVisualStyleBackColor = True
    '
    'btnStopServer
    '
    Me.btnStopServer.Enabled = False
    Me.btnStopServer.Location = New System.Drawing.Point(129, 44)
    Me.btnStopServer.Name = "btnStopServer"
    Me.btnStopServer.Size = New System.Drawing.Size(104, 24)
    Me.btnStopServer.TabIndex = 3
    Me.btnStopServer.Text = "Stop Server"
    Me.btnStopServer.UseVisualStyleBackColor = True
    '
    'btnStartServer
    '
    Me.btnStartServer.Location = New System.Drawing.Point(19, 44)
    Me.btnStartServer.Name = "btnStartServer"
    Me.btnStartServer.Size = New System.Drawing.Size(104, 24)
    Me.btnStartServer.TabIndex = 2
    Me.btnStartServer.Text = "Start Server"
    Me.btnStartServer.UseVisualStyleBackColor = True
    '
    'txtPort
    '
    Me.txtPort.Location = New System.Drawing.Point(59, 18)
    Me.txtPort.Name = "txtPort"
    Me.txtPort.Size = New System.Drawing.Size(62, 20)
    Me.txtPort.TabIndex = 1
    Me.txtPort.Text = "2775"
    '
    'label1
    '
    Me.label1.AutoSize = True
    Me.label1.Location = New System.Drawing.Point(16, 21)
    Me.label1.Name = "label1"
    Me.label1.Size = New System.Drawing.Size(29, 13)
    Me.label1.TabIndex = 0
    Me.label1.Text = "Port:"
    '
    'llblUrlRecipientFormat
    '
    Me.llblUrlRecipientFormat.Location = New System.Drawing.Point(547, 49)
    Me.llblUrlRecipientFormat.Name = "llblUrlRecipientFormat"
    Me.llblUrlRecipientFormat.Size = New System.Drawing.Size(95, 16)
    Me.llblUrlRecipientFormat.TabIndex = 6
    Me.llblUrlRecipientFormat.TabStop = True
    Me.llblUrlRecipientFormat.Text = "Number format"
    '
    'btnSendOptions
    '
    Me.btnSendOptions.Location = New System.Drawing.Point(547, 128)
    Me.btnSendOptions.Name = "btnSendOptions"
    Me.btnSendOptions.Size = New System.Drawing.Size(104, 24)
    Me.btnSendOptions.TabIndex = 11
    Me.btnSendOptions.Text = "&Options..."
    '
    'Label5
    '
    Me.Label5.Location = New System.Drawing.Point(16, 79)
    Me.Label5.Name = "Label5"
    Me.Label5.Size = New System.Drawing.Size(56, 16)
    Me.Label5.TabIndex = 7
    Me.Label5.Text = "&Body:"
    '
    'Label4
    '
    Me.Label4.Location = New System.Drawing.Point(16, 50)
    Me.Label4.Name = "Label4"
    Me.Label4.Size = New System.Drawing.Size(64, 16)
    Me.Label4.TabIndex = 4
    Me.Label4.Text = "&ToAddress:"
    '
    'txtToAddress
    '
    Me.txtToAddress.Location = New System.Drawing.Point(80, 46)
    Me.txtToAddress.Name = "txtToAddress"
    Me.txtToAddress.Size = New System.Drawing.Size(461, 20)
    Me.txtToAddress.TabIndex = 5
    '
    'txtBody
    '
    Me.txtBody.Location = New System.Drawing.Point(80, 76)
    Me.txtBody.Multiline = True
    Me.txtBody.Name = "txtBody"
    Me.txtBody.Size = New System.Drawing.Size(461, 46)
    Me.txtBody.TabIndex = 8
    '
    'btnDeliver
    '
    Me.btnDeliver.Location = New System.Drawing.Point(80, 128)
    Me.btnDeliver.Name = "btnDeliver"
    Me.btnDeliver.Size = New System.Drawing.Size(461, 24)
    Me.btnDeliver.TabIndex = 10
    Me.btnDeliver.Text = "&Deliver"
    '
    'btnView
    '
    Me.btnView.Location = New System.Drawing.Point(547, 40)
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
    'grpSendMessage
    '
    Me.grpSendMessage.Controls.Add(Me.cbxSystemID)
    Me.grpSendMessage.Controls.Add(Me.label2)
    Me.grpSendMessage.Controls.Add(Me.cbxDataCoding)
    Me.grpSendMessage.Controls.Add(Me.label11)
    Me.grpSendMessage.Controls.Add(Me.llblUrlRecipientFormat)
    Me.grpSendMessage.Controls.Add(Me.btnSendOptions)
    Me.grpSendMessage.Controls.Add(Me.Label5)
    Me.grpSendMessage.Controls.Add(Me.Label4)
    Me.grpSendMessage.Controls.Add(Me.txtToAddress)
    Me.grpSendMessage.Controls.Add(Me.txtBody)
    Me.grpSendMessage.Controls.Add(Me.btnDeliver)
    Me.grpSendMessage.Enabled = False
    Me.grpSendMessage.Location = New System.Drawing.Point(15, 378)
    Me.grpSendMessage.Name = "grpSendMessage"
    Me.grpSendMessage.Size = New System.Drawing.Size(667, 163)
    Me.grpSendMessage.TabIndex = 9
    Me.grpSendMessage.TabStop = False
    Me.grpSendMessage.Text = "Send Message"
    '
    'txtLogFile
    '
    Me.txtLogFile.Location = New System.Drawing.Point(80, 43)
    Me.txtLogFile.Name = "txtLogFile"
    Me.txtLogFile.Size = New System.Drawing.Size(461, 20)
    Me.txtLogFile.TabIndex = 3
    '
    'lblInfo
    '
    Me.lblInfo.AutoSize = True
    Me.lblInfo.Location = New System.Drawing.Point(12, 623)
    Me.lblInfo.Name = "lblInfo"
    Me.lblInfo.Size = New System.Drawing.Size(31, 13)
    Me.lblInfo.TabIndex = 11
    Me.lblInfo.Text = "[Info]"
    '
    'GroupBox4
    '
    Me.GroupBox4.Controls.Add(Me.btnView)
    Me.GroupBox4.Controls.Add(Me.Label12)
    Me.GroupBox4.Controls.Add(Me.txtLogFile)
    Me.GroupBox4.Controls.Add(Me.txtResult)
    Me.GroupBox4.Controls.Add(Me.Label10)
    Me.GroupBox4.Location = New System.Drawing.Point(15, 547)
    Me.GroupBox4.Name = "GroupBox4"
    Me.GroupBox4.Size = New System.Drawing.Size(667, 73)
    Me.GroupBox4.TabIndex = 10
    Me.GroupBox4.TabStop = False
    Me.GroupBox4.Text = "Result && Logging"
    '
    'txtResult
    '
    Me.txtResult.Font = New System.Drawing.Font("Microsoft Sans Serif", 8.25!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
    Me.txtResult.Location = New System.Drawing.Point(80, 19)
    Me.txtResult.Name = "txtResult"
    Me.txtResult.ReadOnly = True
    Me.txtResult.Size = New System.Drawing.Size(461, 20)
    Me.txtResult.TabIndex = 1
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
    'tmrHandleSessions
    '
    Me.tmrHandleSessions.Interval = 750
    '
    'lvSessions
    '
    Me.lvSessions.Location = New System.Drawing.Point(19, 19)
    Me.lvSessions.Name = "lvSessions"
    Me.lvSessions.Size = New System.Drawing.Size(632, 81)
    Me.lvSessions.TabIndex = 0
    Me.lvSessions.UseCompatibleStateImageBehavior = False
    Me.lvSessions.View = System.Windows.Forms.View.Details
    '
    'grpSessions
    '
    Me.grpSessions.Controls.Add(Me.lvSessions)
    Me.grpSessions.Enabled = False
    Me.grpSessions.Location = New System.Drawing.Point(15, 96)
    Me.grpSessions.Name = "grpSessions"
    Me.grpSessions.Size = New System.Drawing.Size(667, 108)
    Me.grpSessions.TabIndex = 7
    Me.grpSessions.TabStop = False
    Me.grpSessions.Text = "Sessions"
    '
    'lvMessages
    '
    Me.lvMessages.Location = New System.Drawing.Point(19, 19)
    Me.lvMessages.Name = "lvMessages"
    Me.lvMessages.Size = New System.Drawing.Size(632, 135)
    Me.lvMessages.TabIndex = 0
    Me.lvMessages.UseCompatibleStateImageBehavior = False
    Me.lvMessages.View = System.Windows.Forms.View.Details
    '
    'grpIncommingMessages
    '
    Me.grpIncommingMessages.Controls.Add(Me.lvMessages)
    Me.grpIncommingMessages.Enabled = False
    Me.grpIncommingMessages.Location = New System.Drawing.Point(15, 210)
    Me.grpIncommingMessages.Name = "grpIncommingMessages"
    Me.grpIncommingMessages.Size = New System.Drawing.Size(667, 162)
    Me.grpIncommingMessages.TabIndex = 8
    Me.grpIncommingMessages.TabStop = False
    Me.grpIncommingMessages.Text = "Messages"
    '
    'Label3
    '
    Me.Label3.AutoSize = True
    Me.Label3.Location = New System.Drawing.Point(239, 23)
    Me.Label3.Name = "Label3"
    Me.Label3.Size = New System.Drawing.Size(98, 13)
    Me.Label3.TabIndex = 7
    Me.Label3.Text = "Security Certificate:"
    '
    'cbxCertificate
    '
    Me.cbxCertificate.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList
    Me.cbxCertificate.FormattingEnabled = True
    Me.cbxCertificate.Location = New System.Drawing.Point(359, 17)
    Me.cbxCertificate.Name = "cbxCertificate"
    Me.cbxCertificate.Size = New System.Drawing.Size(292, 21)
    Me.cbxCertificate.TabIndex = 8
    '
    'Label6
    '
    Me.Label6.AutoSize = True
    Me.Label6.Location = New System.Drawing.Point(359, 44)
    Me.Label6.Name = "Label6"
    Me.Label6.Size = New System.Drawing.Size(248, 13)
    Me.Label6.TabIndex = 9
    Me.Label6.Text = "(Server certificates in 'My' store under current user.)"
    '
    'frmSmppServer
    '
    Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
    Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
    Me.ClientSize = New System.Drawing.Size(694, 665)
    Me.Controls.Add(Me.grbControlPanel)
    Me.Controls.Add(Me.grpSendMessage)
    Me.Controls.Add(Me.lblInfo)
    Me.Controls.Add(Me.GroupBox4)
    Me.Controls.Add(Me.grpSessions)
    Me.Controls.Add(Me.grpIncommingMessages)
    Me.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedDialog
    Me.Name = "frmSmppServer"
    Me.Text = "Auron SMS Component - VB.NET SMPP Server Demo"
    Me.grbControlPanel.ResumeLayout(False)
    Me.grbControlPanel.PerformLayout()
    Me.grpSendMessage.ResumeLayout(False)
    Me.grpSendMessage.PerformLayout()
    Me.GroupBox4.ResumeLayout(False)
    Me.GroupBox4.PerformLayout()
    Me.grpSessions.ResumeLayout(False)
    Me.grpIncommingMessages.ResumeLayout(False)
    Me.ResumeLayout(False)
    Me.PerformLayout()

  End Sub
  Private WithEvents cbxSystemID As System.Windows.Forms.ComboBox
    Private WithEvents label2 As System.Windows.Forms.Label
    Private WithEvents cbxDataCoding As System.Windows.Forms.ComboBox
    Private WithEvents label11 As System.Windows.Forms.Label
    Private WithEvents grbControlPanel As System.Windows.Forms.GroupBox
    Private WithEvents btnAddClient As System.Windows.Forms.Button
    Private WithEvents btnStopServer As System.Windows.Forms.Button
    Private WithEvents btnStartServer As System.Windows.Forms.Button
    Private WithEvents txtPort As System.Windows.Forms.TextBox
    Private WithEvents label1 As System.Windows.Forms.Label
    Friend WithEvents llblUrlRecipientFormat As System.Windows.Forms.LinkLabel
    Friend WithEvents btnSendOptions As System.Windows.Forms.Button
    Friend WithEvents Label5 As System.Windows.Forms.Label
    Friend WithEvents Label4 As System.Windows.Forms.Label
    Friend WithEvents txtToAddress As System.Windows.Forms.TextBox
    Friend WithEvents txtBody As System.Windows.Forms.TextBox
    Friend WithEvents btnDeliver As System.Windows.Forms.Button
    Friend WithEvents btnView As System.Windows.Forms.Button
    Friend WithEvents Label12 As System.Windows.Forms.Label
    Friend WithEvents grpSendMessage As System.Windows.Forms.GroupBox
    Friend WithEvents txtLogFile As System.Windows.Forms.TextBox
    Private WithEvents lblInfo As System.Windows.Forms.Label
    Friend WithEvents GroupBox4 As System.Windows.Forms.GroupBox
    Friend WithEvents txtResult As System.Windows.Forms.TextBox
    Friend WithEvents Label10 As System.Windows.Forms.Label
    Private WithEvents tmrHandleSessions As System.Windows.Forms.Timer
    Friend WithEvents lvSessions As System.Windows.Forms.ListView
    Private WithEvents grpSessions As System.Windows.Forms.GroupBox
    Friend WithEvents lvMessages As System.Windows.Forms.ListView
    Private WithEvents grpIncommingMessages As System.Windows.Forms.GroupBox
    Private WithEvents cbxIpVersion As System.Windows.Forms.ComboBox
  Friend WithEvents Label6 As Label
  Friend WithEvents cbxCertificate As ComboBox
  Friend WithEvents Label3 As Label
End Class
