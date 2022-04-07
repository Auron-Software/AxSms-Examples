<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class frmHttp
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
        Me.btnView = New System.Windows.Forms.Button
        Me.GroupBox3 = New System.Windows.Forms.GroupBox
        Me.Label12 = New System.Windows.Forms.Label
        Me.txtLogFile = New System.Windows.Forms.TextBox
        Me.txtLastResponse = New System.Windows.Forms.TextBox
        Me.Label11 = New System.Windows.Forms.Label
        Me.txtResult = New System.Windows.Forms.TextBox
        Me.Label10 = New System.Windows.Forms.Label
        Me.btnSend = New System.Windows.Forms.Button
        Me.txtURL = New System.Windows.Forms.TextBox
        Me.txtMessage = New System.Windows.Forms.TextBox
        Me.txtRecipient = New System.Windows.Forms.TextBox
        Me.GroupBox1 = New System.Windows.Forms.GroupBox
        Me.Label1 = New System.Windows.Forms.Label
        Me.Label6 = New System.Windows.Forms.Label
        Me.GroupBox2 = New System.Windows.Forms.GroupBox
        Me.llblUrlRecipientFormat = New System.Windows.Forms.LinkLabel
        Me.Label9 = New System.Windows.Forms.Label
        Me.cbxMessageType = New System.Windows.Forms.ComboBox
        Me.Label8 = New System.Windows.Forms.Label
        Me.lblInfo = New System.Windows.Forms.Label
        Me.GroupBox3.SuspendLayout()
        Me.GroupBox1.SuspendLayout()
        Me.GroupBox2.SuspendLayout()
        Me.SuspendLayout()
        '
        'btnView
        '
        Me.btnView.Location = New System.Drawing.Point(540, 67)
        Me.btnView.Name = "btnView"
        Me.btnView.Size = New System.Drawing.Size(75, 23)
        Me.btnView.TabIndex = 6
        Me.btnView.Text = "&View..."
        '
        'GroupBox3
        '
        Me.GroupBox3.Controls.Add(Me.btnView)
        Me.GroupBox3.Controls.Add(Me.Label12)
        Me.GroupBox3.Controls.Add(Me.txtLogFile)
        Me.GroupBox3.Controls.Add(Me.txtLastResponse)
        Me.GroupBox3.Controls.Add(Me.Label11)
        Me.GroupBox3.Controls.Add(Me.txtResult)
        Me.GroupBox3.Controls.Add(Me.Label10)
        Me.GroupBox3.Location = New System.Drawing.Point(11, 221)
        Me.GroupBox3.Name = "GroupBox3"
        Me.GroupBox3.Size = New System.Drawing.Size(621, 95)
        Me.GroupBox3.TabIndex = 2
        Me.GroupBox3.TabStop = False
        Me.GroupBox3.Text = "Result && Logging"
        '
        'Label12
        '
        Me.Label12.Location = New System.Drawing.Point(20, 70)
        Me.Label12.Name = "Label12"
        Me.Label12.Size = New System.Drawing.Size(52, 16)
        Me.Label12.TabIndex = 4
        Me.Label12.Text = "Lo&g file:"
        '
        'txtLogFile
        '
        Me.txtLogFile.Location = New System.Drawing.Point(148, 67)
        Me.txtLogFile.Name = "txtLogFile"
        Me.txtLogFile.Size = New System.Drawing.Size(386, 20)
        Me.txtLogFile.TabIndex = 5
        '
        'txtLastResponse
        '
        Me.txtLastResponse.Location = New System.Drawing.Point(148, 43)
        Me.txtLastResponse.Name = "txtLastResponse"
        Me.txtLastResponse.ReadOnly = True
        Me.txtLastResponse.Size = New System.Drawing.Size(467, 20)
        Me.txtLastResponse.TabIndex = 3
        '
        'Label11
        '
        Me.Label11.Location = New System.Drawing.Point(20, 46)
        Me.Label11.Name = "Label11"
        Me.Label11.Size = New System.Drawing.Size(100, 16)
        Me.Label11.TabIndex = 2
        Me.Label11.Text = "&Last Response:"
        '
        'txtResult
        '
        Me.txtResult.Font = New System.Drawing.Font("Microsoft Sans Serif", 8.25!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.txtResult.Location = New System.Drawing.Point(148, 19)
        Me.txtResult.Name = "txtResult"
        Me.txtResult.ReadOnly = True
        Me.txtResult.Size = New System.Drawing.Size(467, 20)
        Me.txtResult.TabIndex = 1
        '
        'Label10
        '
        Me.Label10.Font = New System.Drawing.Font("Microsoft Sans Serif", 8.25!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label10.Location = New System.Drawing.Point(20, 23)
        Me.Label10.Name = "Label10"
        Me.Label10.Size = New System.Drawing.Size(60, 16)
        Me.Label10.TabIndex = 0
        Me.Label10.Text = "&Result:"
        '
        'btnSend
        '
        Me.btnSend.Location = New System.Drawing.Point(148, 121)
        Me.btnSend.Name = "btnSend"
        Me.btnSend.Size = New System.Drawing.Size(467, 23)
        Me.btnSend.TabIndex = 7
        Me.btnSend.Text = "Send Message"
        '
        'txtURL
        '
        Me.txtURL.Location = New System.Drawing.Point(148, 19)
        Me.txtURL.Name = "txtURL"
        Me.txtURL.Size = New System.Drawing.Size(467, 20)
        Me.txtURL.TabIndex = 1
        '
        'txtMessage
        '
        Me.txtMessage.Location = New System.Drawing.Point(148, 73)
        Me.txtMessage.Multiline = True
        Me.txtMessage.Name = "txtMessage"
        Me.txtMessage.Size = New System.Drawing.Size(467, 40)
        Me.txtMessage.TabIndex = 6
        '
        'txtRecipient
        '
        Me.txtRecipient.Location = New System.Drawing.Point(148, 19)
        Me.txtRecipient.Name = "txtRecipient"
        Me.txtRecipient.Size = New System.Drawing.Size(280, 20)
        Me.txtRecipient.TabIndex = 1
        '
        'GroupBox1
        '
        Me.GroupBox1.Controls.Add(Me.txtURL)
        Me.GroupBox1.Controls.Add(Me.Label1)
        Me.GroupBox1.Location = New System.Drawing.Point(11, 11)
        Me.GroupBox1.Name = "GroupBox1"
        Me.GroupBox1.Size = New System.Drawing.Size(624, 47)
        Me.GroupBox1.TabIndex = 0
        Me.GroupBox1.TabStop = False
        Me.GroupBox1.Text = "Connection"
        '
        'Label1
        '
        Me.Label1.Location = New System.Drawing.Point(20, 22)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(60, 16)
        Me.Label1.TabIndex = 0
        Me.Label1.Text = "&Url:"
        '
        'Label6
        '
        Me.Label6.Location = New System.Drawing.Point(20, 23)
        Me.Label6.Name = "Label6"
        Me.Label6.Size = New System.Drawing.Size(72, 16)
        Me.Label6.TabIndex = 0
        Me.Label6.Text = "&ToAddress:"
        '
        'GroupBox2
        '
        Me.GroupBox2.Controls.Add(Me.llblUrlRecipientFormat)
        Me.GroupBox2.Controls.Add(Me.btnSend)
        Me.GroupBox2.Controls.Add(Me.txtMessage)
        Me.GroupBox2.Controls.Add(Me.Label9)
        Me.GroupBox2.Controls.Add(Me.cbxMessageType)
        Me.GroupBox2.Controls.Add(Me.Label8)
        Me.GroupBox2.Controls.Add(Me.txtRecipient)
        Me.GroupBox2.Controls.Add(Me.Label6)
        Me.GroupBox2.Location = New System.Drawing.Point(11, 64)
        Me.GroupBox2.Name = "GroupBox2"
        Me.GroupBox2.Size = New System.Drawing.Size(624, 151)
        Me.GroupBox2.TabIndex = 1
        Me.GroupBox2.TabStop = False
        Me.GroupBox2.Text = "Message"
        '
        'llblUrlRecipientFormat
        '
        Me.llblUrlRecipientFormat.Location = New System.Drawing.Point(434, 22)
        Me.llblUrlRecipientFormat.Name = "llblUrlRecipientFormat"
        Me.llblUrlRecipientFormat.Size = New System.Drawing.Size(128, 16)
        Me.llblUrlRecipientFormat.TabIndex = 2
        Me.llblUrlRecipientFormat.TabStop = True
        Me.llblUrlRecipientFormat.Text = "ToAddress number format"
        '
        'Label9
        '
        Me.Label9.Location = New System.Drawing.Point(20, 73)
        Me.Label9.Name = "Label9"
        Me.Label9.Size = New System.Drawing.Size(100, 16)
        Me.Label9.TabIndex = 5
        Me.Label9.Text = "&Body:"
        '
        'cbxMessageType
        '
        Me.cbxMessageType.Location = New System.Drawing.Point(148, 45)
        Me.cbxMessageType.Name = "cbxMessageType"
        Me.cbxMessageType.Size = New System.Drawing.Size(280, 21)
        Me.cbxMessageType.TabIndex = 4
        '
        'Label8
        '
        Me.Label8.Location = New System.Drawing.Point(20, 49)
        Me.Label8.Name = "Label8"
        Me.Label8.Size = New System.Drawing.Size(100, 16)
        Me.Label8.TabIndex = 3
        Me.Label8.Text = "Body T&ype:"
        '
        'lblInfo
        '
        Me.lblInfo.AutoSize = True
        Me.lblInfo.Location = New System.Drawing.Point(8, 329)
        Me.lblInfo.Name = "lblInfo"
        Me.lblInfo.Size = New System.Drawing.Size(31, 13)
        Me.lblInfo.TabIndex = 3
        Me.lblInfo.Text = "[Info]"
        '
        'frmHttp
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(646, 351)
        Me.Controls.Add(Me.lblInfo)
        Me.Controls.Add(Me.GroupBox3)
        Me.Controls.Add(Me.GroupBox1)
        Me.Controls.Add(Me.GroupBox2)
        Me.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedDialog
        Me.MaximizeBox = False
        Me.MinimizeBox = False
        Me.Name = "frmHttp"
        Me.Text = "Auron SMS Component - VB .NET HTTP  Demo"
        Me.GroupBox3.ResumeLayout(False)
        Me.GroupBox3.PerformLayout()
        Me.GroupBox1.ResumeLayout(False)
        Me.GroupBox1.PerformLayout()
        Me.GroupBox2.ResumeLayout(False)
        Me.GroupBox2.PerformLayout()
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub
    Friend WithEvents btnView As System.Windows.Forms.Button
    Friend WithEvents GroupBox3 As System.Windows.Forms.GroupBox
    Friend WithEvents Label12 As System.Windows.Forms.Label
    Friend WithEvents txtLogFile As System.Windows.Forms.TextBox
    Friend WithEvents txtLastResponse As System.Windows.Forms.TextBox
    Friend WithEvents Label11 As System.Windows.Forms.Label
    Friend WithEvents txtResult As System.Windows.Forms.TextBox
    Friend WithEvents Label10 As System.Windows.Forms.Label
    Friend WithEvents btnSend As System.Windows.Forms.Button
    Friend WithEvents txtURL As System.Windows.Forms.TextBox
    Friend WithEvents txtMessage As System.Windows.Forms.TextBox
    Friend WithEvents txtRecipient As System.Windows.Forms.TextBox
    Friend WithEvents GroupBox1 As System.Windows.Forms.GroupBox
    Friend WithEvents Label1 As System.Windows.Forms.Label
    Friend WithEvents Label6 As System.Windows.Forms.Label
    Friend WithEvents GroupBox2 As System.Windows.Forms.GroupBox
    Friend WithEvents Label9 As System.Windows.Forms.Label
    Friend WithEvents cbxMessageType As System.Windows.Forms.ComboBox
    Friend WithEvents Label8 As System.Windows.Forms.Label
    Friend WithEvents llblUrlRecipientFormat As System.Windows.Forms.LinkLabel
    Friend WithEvents lblInfo As System.Windows.Forms.Label
End Class
