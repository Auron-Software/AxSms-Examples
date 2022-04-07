<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class frmHttpServer
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
        Me.tmrCheckReceive = New System.Windows.Forms.Timer(Me.components)
        Me.groupBox4 = New System.Windows.Forms.GroupBox()
        Me.txtLastRequestBody = New System.Windows.Forms.TextBox()
        Me.txtLastRequestHeaders = New System.Windows.Forms.TextBox()
        Me.groupBox3 = New System.Windows.Forms.GroupBox()
        Me.lvRequestLog = New System.Windows.Forms.ListView()
        Me.groupBox2 = New System.Windows.Forms.GroupBox()
        Me.btnView = New System.Windows.Forms.Button()
        Me.Label3 = New System.Windows.Forms.Label()
        Me.lblInfo = New System.Windows.Forms.Label()
        Me.lnkFindOutMore = New System.Windows.Forms.LinkLabel()
        Me.txtResult = New System.Windows.Forms.TextBox()
        Me.txtLogFile = New System.Windows.Forms.TextBox()
        Me.Label6 = New System.Windows.Forms.Label()
        Me.Label7 = New System.Windows.Forms.Label()
        Me.btnBrowse = New System.Windows.Forms.Button()
        Me.btnStartStop = New System.Windows.Forms.Button()
        Me.label12 = New System.Windows.Forms.Label()
        Me.txtUrl = New System.Windows.Forms.TextBox()
        Me.GroupBox5 = New System.Windows.Forms.GroupBox()
        Me.GroupBox1 = New System.Windows.Forms.GroupBox()
        Me.groupBox4.SuspendLayout()
        Me.groupBox3.SuspendLayout()
        Me.groupBox2.SuspendLayout()
        Me.GroupBox5.SuspendLayout()
        Me.GroupBox1.SuspendLayout()
        Me.SuspendLayout()
        '
        'tmrCheckReceive
        '
        '
        'groupBox4
        '
        Me.groupBox4.Controls.Add(Me.txtLastRequestBody)
        Me.groupBox4.Location = New System.Drawing.Point(12, 323)
        Me.groupBox4.Name = "groupBox4"
        Me.groupBox4.Size = New System.Drawing.Size(516, 100)
        Me.groupBox4.TabIndex = 21
        Me.groupBox4.TabStop = False
        Me.groupBox4.Text = "Last request body"
        '
        'txtLastRequestBody
        '
        Me.txtLastRequestBody.Location = New System.Drawing.Point(7, 20)
        Me.txtLastRequestBody.Multiline = True
        Me.txtLastRequestBody.Name = "txtLastRequestBody"
        Me.txtLastRequestBody.ReadOnly = True
        Me.txtLastRequestBody.ScrollBars = System.Windows.Forms.ScrollBars.Vertical
        Me.txtLastRequestBody.Size = New System.Drawing.Size(500, 74)
        Me.txtLastRequestBody.TabIndex = 0
        '
        'txtLastRequestHeaders
        '
        Me.txtLastRequestHeaders.Location = New System.Drawing.Point(6, 19)
        Me.txtLastRequestHeaders.Multiline = True
        Me.txtLastRequestHeaders.Name = "txtLastRequestHeaders"
        Me.txtLastRequestHeaders.ReadOnly = True
        Me.txtLastRequestHeaders.ScrollBars = System.Windows.Forms.ScrollBars.Vertical
        Me.txtLastRequestHeaders.Size = New System.Drawing.Size(501, 75)
        Me.txtLastRequestHeaders.TabIndex = 0
        '
        'groupBox3
        '
        Me.groupBox3.Controls.Add(Me.txtLastRequestHeaders)
        Me.groupBox3.Location = New System.Drawing.Point(12, 217)
        Me.groupBox3.Name = "groupBox3"
        Me.groupBox3.Size = New System.Drawing.Size(516, 100)
        Me.groupBox3.TabIndex = 20
        Me.groupBox3.TabStop = False
        Me.groupBox3.Text = "Last request headers"
        '
        'lvRequestLog
        '
        Me.lvRequestLog.FullRowSelect = True
        Me.lvRequestLog.HeaderStyle = System.Windows.Forms.ColumnHeaderStyle.None
        Me.lvRequestLog.HideSelection = False
        Me.lvRequestLog.Location = New System.Drawing.Point(6, 19)
        Me.lvRequestLog.Name = "lvRequestLog"
        Me.lvRequestLog.Size = New System.Drawing.Size(501, 75)
        Me.lvRequestLog.TabIndex = 0
        Me.lvRequestLog.UseCompatibleStateImageBehavior = False
        Me.lvRequestLog.View = System.Windows.Forms.View.Details
        '
        'groupBox2
        '
        Me.groupBox2.Controls.Add(Me.lvRequestLog)
        Me.groupBox2.Location = New System.Drawing.Point(12, 111)
        Me.groupBox2.Name = "groupBox2"
        Me.groupBox2.Size = New System.Drawing.Size(516, 100)
        Me.groupBox2.TabIndex = 19
        Me.groupBox2.TabStop = False
        Me.groupBox2.Text = "Request Log"
        '
        'btnView
        '
        Me.btnView.Location = New System.Drawing.Point(433, 43)
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
        'lblInfo
        '
        Me.lblInfo.AutoSize = True
        Me.lblInfo.Location = New System.Drawing.Point(12, 503)
        Me.lblInfo.Name = "lblInfo"
        Me.lblInfo.Size = New System.Drawing.Size(31, 13)
        Me.lblInfo.TabIndex = 18
        Me.lblInfo.Text = "[Info]"
        '
        'lnkFindOutMore
        '
        Me.lnkFindOutMore.AutoSize = True
        Me.lnkFindOutMore.Location = New System.Drawing.Point(54, 24)
        Me.lnkFindOutMore.Name = "lnkFindOutMore"
        Me.lnkFindOutMore.Size = New System.Drawing.Size(98, 13)
        Me.lnkFindOutMore.TabIndex = 16
        Me.lnkFindOutMore.TabStop = True
        Me.lnkFindOutMore.Text = "Find out more here."
        '
        'txtResult
        '
        Me.txtResult.Font = New System.Drawing.Font("Microsoft Sans Serif", 8.25!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.txtResult.Location = New System.Drawing.Point(80, 19)
        Me.txtResult.Name = "txtResult"
        Me.txtResult.ReadOnly = True
        Me.txtResult.Size = New System.Drawing.Size(430, 20)
        Me.txtResult.TabIndex = 1
        '
        'txtLogFile
        '
        Me.txtLogFile.Location = New System.Drawing.Point(80, 43)
        Me.txtLogFile.Name = "txtLogFile"
        Me.txtLogFile.Size = New System.Drawing.Size(347, 20)
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
        'Label7
        '
        Me.Label7.Location = New System.Drawing.Point(12, 11)
        Me.Label7.Name = "Label7"
        Me.Label7.Size = New System.Drawing.Size(516, 28)
        Me.Label7.TabIndex = 15
        Me.Label7.Text = "Use 'netsh http' in the commandline to configure your endpoint access control and" &
    " security certficate settings. "
        '
        'btnBrowse
        '
        Me.btnBrowse.Location = New System.Drawing.Point(428, 24)
        Me.btnBrowse.Name = "btnBrowse"
        Me.btnBrowse.Size = New System.Drawing.Size(77, 23)
        Me.btnBrowse.TabIndex = 11
        Me.btnBrowse.Text = "Browse"
        Me.btnBrowse.UseVisualStyleBackColor = True
        '
        'btnStartStop
        '
        Me.btnStartStop.Location = New System.Drawing.Point(345, 24)
        Me.btnStartStop.Name = "btnStartStop"
        Me.btnStartStop.Size = New System.Drawing.Size(77, 23)
        Me.btnStartStop.TabIndex = 10
        Me.btnStartStop.Text = "Start"
        Me.btnStartStop.UseVisualStyleBackColor = True
        '
        'label12
        '
        Me.label12.Location = New System.Drawing.Point(16, 29)
        Me.label12.Name = "label12"
        Me.label12.Size = New System.Drawing.Size(37, 16)
        Me.label12.TabIndex = 6
        Me.label12.Text = "Url:"
        '
        'txtUrl
        '
        Me.txtUrl.Location = New System.Drawing.Point(80, 26)
        Me.txtUrl.Name = "txtUrl"
        Me.txtUrl.Size = New System.Drawing.Size(259, 20)
        Me.txtUrl.TabIndex = 7
        Me.txtUrl.Text = "http://localhost:8002/TEST/"
        '
        'GroupBox5
        '
        Me.GroupBox5.Controls.Add(Me.btnView)
        Me.GroupBox5.Controls.Add(Me.Label3)
        Me.GroupBox5.Controls.Add(Me.txtResult)
        Me.GroupBox5.Controls.Add(Me.txtLogFile)
        Me.GroupBox5.Controls.Add(Me.Label6)
        Me.GroupBox5.Location = New System.Drawing.Point(12, 429)
        Me.GroupBox5.Name = "GroupBox5"
        Me.GroupBox5.Size = New System.Drawing.Size(516, 71)
        Me.GroupBox5.TabIndex = 17
        Me.GroupBox5.TabStop = False
        Me.GroupBox5.Text = "Result && Logging"
        '
        'GroupBox1
        '
        Me.GroupBox1.Controls.Add(Me.btnBrowse)
        Me.GroupBox1.Controls.Add(Me.btnStartStop)
        Me.GroupBox1.Controls.Add(Me.label12)
        Me.GroupBox1.Controls.Add(Me.txtUrl)
        Me.GroupBox1.Location = New System.Drawing.Point(12, 43)
        Me.GroupBox1.Name = "GroupBox1"
        Me.GroupBox1.Size = New System.Drawing.Size(516, 62)
        Me.GroupBox1.TabIndex = 14
        Me.GroupBox1.TabStop = False
        Me.GroupBox1.Text = "Server end-point settings"
        '
        'frmHttpServer
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(540, 526)
        Me.Controls.Add(Me.groupBox4)
        Me.Controls.Add(Me.groupBox3)
        Me.Controls.Add(Me.groupBox2)
        Me.Controls.Add(Me.lblInfo)
        Me.Controls.Add(Me.lnkFindOutMore)
        Me.Controls.Add(Me.Label7)
        Me.Controls.Add(Me.GroupBox5)
        Me.Controls.Add(Me.GroupBox1)
        Me.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedDialog
        Me.Name = "frmHttpServer"
        Me.Text = "Auron SMS Component - VB.Net HTTP Server Demo"
        Me.groupBox4.ResumeLayout(False)
        Me.groupBox4.PerformLayout()
        Me.groupBox3.ResumeLayout(False)
        Me.groupBox3.PerformLayout()
        Me.groupBox2.ResumeLayout(False)
        Me.GroupBox5.ResumeLayout(False)
        Me.GroupBox5.PerformLayout()
        Me.GroupBox1.ResumeLayout(False)
        Me.GroupBox1.PerformLayout()
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Private WithEvents tmrCheckReceive As Timer
    Private WithEvents groupBox4 As GroupBox
    Private WithEvents txtLastRequestBody As TextBox
    Private WithEvents txtLastRequestHeaders As TextBox
    Private WithEvents groupBox3 As GroupBox
    Private WithEvents lvRequestLog As ListView
    Private WithEvents groupBox2 As GroupBox
    Friend WithEvents btnView As Button
    Friend WithEvents Label3 As Label
    Private WithEvents lblInfo As Label
    Private WithEvents lnkFindOutMore As LinkLabel
    Friend WithEvents txtResult As TextBox
    Friend WithEvents txtLogFile As TextBox
    Friend WithEvents Label6 As Label
    Friend WithEvents Label7 As Label
    Private WithEvents btnBrowse As Button
    Private WithEvents btnStartStop As Button
    Friend WithEvents label12 As Label
    Private WithEvents txtUrl As TextBox
    Friend WithEvents GroupBox5 As GroupBox
    Friend WithEvents GroupBox1 As GroupBox
End Class
