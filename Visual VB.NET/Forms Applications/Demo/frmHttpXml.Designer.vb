<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class frmHttpXml
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
        Me.llblUrlRecipientFormat = New System.Windows.Forms.LinkLabel
        Me.groupBox1 = New System.Windows.Forms.GroupBox
        Me.btnClearSent = New System.Windows.Forms.Button
        Me.txtXmlTemplate = New System.Windows.Forms.TextBox
        Me.btnClearResponse = New System.Windows.Forms.Button
        Me.groupBox3 = New System.Windows.Forms.GroupBox
        Me.txtResponse = New System.Windows.Forms.TextBox
        Me.btnSend = New System.Windows.Forms.Button
        Me.Label8 = New System.Windows.Forms.Label
        Me.txtMessage = New System.Windows.Forms.TextBox
        Me.GroupBox2 = New System.Windows.Forms.GroupBox
        Me.Label7 = New System.Windows.Forms.Label
        Me.txtMessageRecipient = New System.Windows.Forms.TextBox
        Me.groupBox4 = New System.Windows.Forms.GroupBox
        Me.btnView = New System.Windows.Forms.Button
        Me.Label12 = New System.Windows.Forms.Label
        Me.txtLogFile = New System.Windows.Forms.TextBox
        Me.txtResult = New System.Windows.Forms.TextBox
        Me.Label10 = New System.Windows.Forms.Label
        Me.GroupBox5 = New System.Windows.Forms.GroupBox
        Me.txtHost = New System.Windows.Forms.TextBox
        Me.Label1 = New System.Windows.Forms.Label
        Me.lblInfo = New System.Windows.Forms.Label
        Me.Label2 = New System.Windows.Forms.Label
        Me.groupBox1.SuspendLayout()
        Me.groupBox3.SuspendLayout()
        Me.GroupBox2.SuspendLayout()
        Me.groupBox4.SuspendLayout()
        Me.GroupBox5.SuspendLayout()
        Me.SuspendLayout()
        '
        'llblUrlRecipientFormat
        '
        Me.llblUrlRecipientFormat.Location = New System.Drawing.Point(392, 23)
        Me.llblUrlRecipientFormat.Name = "llblUrlRecipientFormat"
        Me.llblUrlRecipientFormat.Size = New System.Drawing.Size(128, 16)
        Me.llblUrlRecipientFormat.TabIndex = 2
        Me.llblUrlRecipientFormat.TabStop = True
        Me.llblUrlRecipientFormat.Text = "ToAddress number format"
        '
        'groupBox1
        '
        Me.groupBox1.Controls.Add(Me.Label2)
        Me.groupBox1.Controls.Add(Me.btnClearSent)
        Me.groupBox1.Controls.Add(Me.txtXmlTemplate)
        Me.groupBox1.Location = New System.Drawing.Point(12, 65)
        Me.groupBox1.Name = "groupBox1"
        Me.groupBox1.Size = New System.Drawing.Size(629, 107)
        Me.groupBox1.TabIndex = 1
        Me.groupBox1.TabStop = False
        Me.groupBox1.Text = "XML Template"
        '
        'btnClearSent
        '
        Me.btnClearSent.Location = New System.Drawing.Point(528, 75)
        Me.btnClearSent.Name = "btnClearSent"
        Me.btnClearSent.Size = New System.Drawing.Size(84, 24)
        Me.btnClearSent.TabIndex = 2
        Me.btnClearSent.Text = "Clear"
        '
        'txtXmlTemplate
        '
        Me.txtXmlTemplate.Location = New System.Drawing.Point(88, 19)
        Me.txtXmlTemplate.Multiline = True
        Me.txtXmlTemplate.Name = "txtXmlTemplate"
        Me.txtXmlTemplate.Size = New System.Drawing.Size(432, 80)
        Me.txtXmlTemplate.TabIndex = 1
        '
        'btnClearResponse
        '
        Me.btnClearResponse.Location = New System.Drawing.Point(528, 75)
        Me.btnClearResponse.Name = "btnClearResponse"
        Me.btnClearResponse.Size = New System.Drawing.Size(84, 24)
        Me.btnClearResponse.TabIndex = 1
        Me.btnClearResponse.Text = "Clear"
        '
        'groupBox3
        '
        Me.groupBox3.Controls.Add(Me.btnClearResponse)
        Me.groupBox3.Controls.Add(Me.txtResponse)
        Me.groupBox3.Location = New System.Drawing.Point(12, 321)
        Me.groupBox3.Name = "groupBox3"
        Me.groupBox3.Size = New System.Drawing.Size(629, 107)
        Me.groupBox3.TabIndex = 3
        Me.groupBox3.TabStop = False
        Me.groupBox3.Text = "Server response"
        '
        'txtResponse
        '
        Me.txtResponse.Location = New System.Drawing.Point(88, 19)
        Me.txtResponse.Multiline = True
        Me.txtResponse.Name = "txtResponse"
        Me.txtResponse.Size = New System.Drawing.Size(432, 80)
        Me.txtResponse.TabIndex = 0
        '
        'btnSend
        '
        Me.btnSend.Location = New System.Drawing.Point(88, 107)
        Me.btnSend.Name = "btnSend"
        Me.btnSend.Size = New System.Drawing.Size(432, 24)
        Me.btnSend.TabIndex = 5
        Me.btnSend.Text = "S&end"
        '
        'Label8
        '
        Me.Label8.Location = New System.Drawing.Point(20, 47)
        Me.Label8.Name = "Label8"
        Me.Label8.Size = New System.Drawing.Size(56, 16)
        Me.Label8.TabIndex = 3
        Me.Label8.Text = "&Body:"
        '
        'txtMessage
        '
        Me.txtMessage.Location = New System.Drawing.Point(88, 43)
        Me.txtMessage.Multiline = True
        Me.txtMessage.Name = "txtMessage"
        Me.txtMessage.Size = New System.Drawing.Size(432, 58)
        Me.txtMessage.TabIndex = 4
        '
        'GroupBox2
        '
        Me.GroupBox2.Controls.Add(Me.llblUrlRecipientFormat)
        Me.GroupBox2.Controls.Add(Me.btnSend)
        Me.GroupBox2.Controls.Add(Me.Label8)
        Me.GroupBox2.Controls.Add(Me.txtMessage)
        Me.GroupBox2.Controls.Add(Me.Label7)
        Me.GroupBox2.Controls.Add(Me.txtMessageRecipient)
        Me.GroupBox2.Location = New System.Drawing.Point(12, 177)
        Me.GroupBox2.Name = "GroupBox2"
        Me.GroupBox2.Size = New System.Drawing.Size(629, 138)
        Me.GroupBox2.TabIndex = 2
        Me.GroupBox2.TabStop = False
        Me.GroupBox2.Text = "Message"
        '
        'Label7
        '
        Me.Label7.Location = New System.Drawing.Point(20, 23)
        Me.Label7.Name = "Label7"
        Me.Label7.Size = New System.Drawing.Size(62, 23)
        Me.Label7.TabIndex = 0
        Me.Label7.Text = "&ToAddress:"
        '
        'txtMessageRecipient
        '
        Me.txtMessageRecipient.Location = New System.Drawing.Point(88, 19)
        Me.txtMessageRecipient.Name = "txtMessageRecipient"
        Me.txtMessageRecipient.Size = New System.Drawing.Size(298, 20)
        Me.txtMessageRecipient.TabIndex = 1
        '
        'groupBox4
        '
        Me.groupBox4.Controls.Add(Me.btnView)
        Me.groupBox4.Controls.Add(Me.Label12)
        Me.groupBox4.Controls.Add(Me.txtLogFile)
        Me.groupBox4.Controls.Add(Me.txtResult)
        Me.groupBox4.Controls.Add(Me.Label10)
        Me.groupBox4.Location = New System.Drawing.Point(12, 434)
        Me.groupBox4.Name = "groupBox4"
        Me.groupBox4.Size = New System.Drawing.Size(629, 73)
        Me.groupBox4.TabIndex = 4
        Me.groupBox4.TabStop = False
        Me.groupBox4.Text = "Result && Logging"
        '
        'btnView
        '
        Me.btnView.Location = New System.Drawing.Point(528, 45)
        Me.btnView.Name = "btnView"
        Me.btnView.Size = New System.Drawing.Size(84, 23)
        Me.btnView.TabIndex = 4
        Me.btnView.Text = "&View..."
        '
        'Label12
        '
        Me.Label12.Location = New System.Drawing.Point(20, 49)
        Me.Label12.Name = "Label12"
        Me.Label12.Size = New System.Drawing.Size(52, 16)
        Me.Label12.TabIndex = 2
        Me.Label12.Text = "Lo&g file:"
        '
        'txtLogFile
        '
        Me.txtLogFile.Location = New System.Drawing.Point(88, 45)
        Me.txtLogFile.Name = "txtLogFile"
        Me.txtLogFile.Size = New System.Drawing.Size(432, 20)
        Me.txtLogFile.TabIndex = 3
        '
        'txtResult
        '
        Me.txtResult.Font = New System.Drawing.Font("Microsoft Sans Serif", 8.25!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.txtResult.Location = New System.Drawing.Point(88, 19)
        Me.txtResult.Name = "txtResult"
        Me.txtResult.ReadOnly = True
        Me.txtResult.Size = New System.Drawing.Size(524, 20)
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
        'GroupBox5
        '
        Me.GroupBox5.Controls.Add(Me.txtHost)
        Me.GroupBox5.Controls.Add(Me.Label1)
        Me.GroupBox5.Location = New System.Drawing.Point(12, 12)
        Me.GroupBox5.Name = "GroupBox5"
        Me.GroupBox5.Size = New System.Drawing.Size(629, 47)
        Me.GroupBox5.TabIndex = 0
        Me.GroupBox5.TabStop = False
        Me.GroupBox5.Text = "Host"
        '
        'txtHost
        '
        Me.txtHost.Location = New System.Drawing.Point(88, 19)
        Me.txtHost.Name = "txtHost"
        Me.txtHost.Size = New System.Drawing.Size(432, 20)
        Me.txtHost.TabIndex = 1
        Me.txtHost.Text = "https://gateway.auronsoftware.com:8181/sendsms/sendsmsHttpXML.asp"
        '
        'Label1
        '
        Me.Label1.Location = New System.Drawing.Point(20, 22)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(56, 16)
        Me.Label1.TabIndex = 0
        Me.Label1.Text = "&Host:"
        '
        'lblInfo
        '
        Me.lblInfo.AutoSize = True
        Me.lblInfo.Location = New System.Drawing.Point(9, 520)
        Me.lblInfo.Name = "lblInfo"
        Me.lblInfo.Size = New System.Drawing.Size(31, 13)
        Me.lblInfo.TabIndex = 5
        Me.lblInfo.Text = "[Info]"
        '
        'Label2
        '
        Me.Label2.AutoSize = True
        Me.Label2.Location = New System.Drawing.Point(20, 22)
        Me.Label2.Name = "Label2"
        Me.Label2.Size = New System.Drawing.Size(51, 13)
        Me.Label2.TabIndex = 0
        Me.Label2.Text = "T&emplate"
        '
        'frmHttpXml
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(653, 542)
        Me.Controls.Add(Me.lblInfo)
        Me.Controls.Add(Me.GroupBox5)
        Me.Controls.Add(Me.groupBox4)
        Me.Controls.Add(Me.GroupBox2)
        Me.Controls.Add(Me.groupBox1)
        Me.Controls.Add(Me.groupBox3)
        Me.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedDialog
        Me.MaximizeBox = False
        Me.MinimizeBox = False
        Me.Name = "frmHttpXml"
        Me.Text = "Auron SMS Component - VB.NET HTTP XML  Demo"
        Me.groupBox1.ResumeLayout(False)
        Me.groupBox1.PerformLayout()
        Me.groupBox3.ResumeLayout(False)
        Me.groupBox3.PerformLayout()
        Me.GroupBox2.ResumeLayout(False)
        Me.GroupBox2.PerformLayout()
        Me.groupBox4.ResumeLayout(False)
        Me.groupBox4.PerformLayout()
        Me.GroupBox5.ResumeLayout(False)
        Me.GroupBox5.PerformLayout()
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub
    Friend WithEvents llblUrlRecipientFormat As System.Windows.Forms.LinkLabel
    Private WithEvents groupBox1 As System.Windows.Forms.GroupBox
    Friend WithEvents btnClearSent As System.Windows.Forms.Button
    Friend WithEvents txtXmlTemplate As System.Windows.Forms.TextBox
    Friend WithEvents btnClearResponse As System.Windows.Forms.Button
    Private WithEvents groupBox3 As System.Windows.Forms.GroupBox
    Friend WithEvents txtResponse As System.Windows.Forms.TextBox
    Friend WithEvents btnSend As System.Windows.Forms.Button
    Friend WithEvents Label8 As System.Windows.Forms.Label
    Friend WithEvents txtMessage As System.Windows.Forms.TextBox
    Friend WithEvents GroupBox2 As System.Windows.Forms.GroupBox
    Friend WithEvents Label7 As System.Windows.Forms.Label
    Friend WithEvents txtMessageRecipient As System.Windows.Forms.TextBox
    Friend WithEvents groupBox4 As System.Windows.Forms.GroupBox
    Friend WithEvents btnView As System.Windows.Forms.Button
    Friend WithEvents Label12 As System.Windows.Forms.Label
    Friend WithEvents txtLogFile As System.Windows.Forms.TextBox
    Friend WithEvents txtResult As System.Windows.Forms.TextBox
    Friend WithEvents Label10 As System.Windows.Forms.Label
    Friend WithEvents GroupBox5 As System.Windows.Forms.GroupBox
    Friend WithEvents txtHost As System.Windows.Forms.TextBox
    Friend WithEvents Label1 As System.Windows.Forms.Label
    Friend WithEvents lblInfo As System.Windows.Forms.Label
    Friend WithEvents Label2 As System.Windows.Forms.Label
End Class
