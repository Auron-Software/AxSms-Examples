<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class frmSmppAdvanced
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
        Me.lblInfo = New System.Windows.Forms.LinkLabel
        Me.Label8 = New System.Windows.Forms.GroupBox
        Me.label3 = New System.Windows.Forms.Label
        Me.label5 = New System.Windows.Forms.Label
        Me.txtBindTimeout = New System.Windows.Forms.TextBox
        Me.label2 = New System.Windows.Forms.Label
        Me.Label4 = New System.Windows.Forms.Label
        Me.txtSystemType = New System.Windows.Forms.TextBox
        Me.cbxAddressNpi = New System.Windows.Forms.ComboBox
        Me.Label15 = New System.Windows.Forms.Label
        Me.cbxAddressTon = New System.Windows.Forms.ComboBox
        Me.Label14 = New System.Windows.Forms.Label
        Me.txtAddressRange = New System.Windows.Forms.TextBox
        Me.Label12 = New System.Windows.Forms.Label
        Me.Label11 = New System.Windows.Forms.Label
        Me.txtEnquireInterval = New System.Windows.Forms.TextBox
        Me.txtConnectTimeout = New System.Windows.Forms.TextBox
        Me.cbxInterfaceVersion = New System.Windows.Forms.ComboBox
        Me.Label7 = New System.Windows.Forms.Label
        Me.Label6 = New System.Windows.Forms.Label
        Me.Label1 = New System.Windows.Forms.Label
        Me.Label8.SuspendLayout()
        Me.SuspendLayout()
        '
        'btnCancel
        '
        Me.btnCancel.Location = New System.Drawing.Point(417, 292)
        Me.btnCancel.Name = "btnCancel"
        Me.btnCancel.Size = New System.Drawing.Size(72, 23)
        Me.btnCancel.TabIndex = 12
        Me.btnCancel.Text = "Cancel"
        '
        'btnOK
        '
        Me.btnOK.Location = New System.Drawing.Point(339, 292)
        Me.btnOK.Name = "btnOK"
        Me.btnOK.Size = New System.Drawing.Size(72, 23)
        Me.btnOK.TabIndex = 11
        Me.btnOK.Text = "OK"
        '
        'lblInfo
        '
        Me.lblInfo.LinkArea = New System.Windows.Forms.LinkArea(0, 0)
        Me.lblInfo.Location = New System.Drawing.Point(9, 259)
        Me.lblInfo.Name = "lblInfo"
        Me.lblInfo.Size = New System.Drawing.Size(480, 30)
        Me.lblInfo.TabIndex = 13
        Me.lblInfo.Text = "When using the Auron Demo Gateway please fill 'Address Range' with 'S' and" & _
            " your mobile nr. E.g. S+441122334455"
        '
        'Label8
        '
        Me.Label8.Controls.Add(Me.label3)
        Me.Label8.Controls.Add(Me.label5)
        Me.Label8.Controls.Add(Me.txtBindTimeout)
        Me.Label8.Controls.Add(Me.label2)
        Me.Label8.Controls.Add(Me.Label4)
        Me.Label8.Controls.Add(Me.txtSystemType)
        Me.Label8.Controls.Add(Me.cbxAddressNpi)
        Me.Label8.Controls.Add(Me.Label15)
        Me.Label8.Controls.Add(Me.cbxAddressTon)
        Me.Label8.Controls.Add(Me.Label14)
        Me.Label8.Controls.Add(Me.txtAddressRange)
        Me.Label8.Controls.Add(Me.Label12)
        Me.Label8.Controls.Add(Me.Label11)
        Me.Label8.Controls.Add(Me.txtEnquireInterval)
        Me.Label8.Controls.Add(Me.txtConnectTimeout)
        Me.Label8.Controls.Add(Me.cbxInterfaceVersion)
        Me.Label8.Controls.Add(Me.Label7)
        Me.Label8.Controls.Add(Me.Label6)
        Me.Label8.Controls.Add(Me.Label1)
        Me.Label8.Location = New System.Drawing.Point(12, 12)
        Me.Label8.Name = "Label8"
        Me.Label8.Size = New System.Drawing.Size(477, 244)
        Me.Label8.TabIndex = 10
        Me.Label8.TabStop = False
        Me.Label8.Text = "Advanced SMPP Settings"
        '
        'label3
        '
        Me.label3.Location = New System.Drawing.Point(224, 106)
        Me.label3.Name = "label3"
        Me.label3.Size = New System.Drawing.Size(68, 12)
        Me.label3.TabIndex = 26
        Me.label3.Text = "milliseconds"
        '
        'label5
        '
        Me.label5.Location = New System.Drawing.Point(224, 54)
        Me.label5.Name = "label5"
        Me.label5.Size = New System.Drawing.Size(68, 12)
        Me.label5.TabIndex = 25
        Me.label5.Text = "milliseconds"
        '
        'txtBindTimeout
        '
        Me.txtBindTimeout.Location = New System.Drawing.Point(118, 77)
        Me.txtBindTimeout.Name = "txtBindTimeout"
        Me.txtBindTimeout.Size = New System.Drawing.Size(100, 20)
        Me.txtBindTimeout.TabIndex = 24
        Me.txtBindTimeout.Text = "5000"
        '
        'label2
        '
        Me.label2.Location = New System.Drawing.Point(18, 80)
        Me.label2.Name = "label2"
        Me.label2.Size = New System.Drawing.Size(96, 16)
        Me.label2.TabIndex = 23
        Me.label2.Text = "&Bind Timeout:"
        '
        'Label4
        '
        Me.Label4.Location = New System.Drawing.Point(224, 80)
        Me.Label4.Name = "Label4"
        Me.Label4.Size = New System.Drawing.Size(68, 12)
        Me.Label4.TabIndex = 4
        Me.Label4.Text = "milliseconds"
        '
        'txtSystemType
        '
        Me.txtSystemType.Location = New System.Drawing.Point(118, 129)
        Me.txtSystemType.Name = "txtSystemType"
        Me.txtSystemType.Size = New System.Drawing.Size(100, 20)
        Me.txtSystemType.TabIndex = 12
        Me.txtSystemType.Text = "SMPP"
        '
        'cbxAddressNpi
        '
        Me.cbxAddressNpi.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList
        Me.cbxAddressNpi.Location = New System.Drawing.Point(118, 208)
        Me.cbxAddressNpi.Name = "cbxAddressNpi"
        Me.cbxAddressNpi.Size = New System.Drawing.Size(180, 21)
        Me.cbxAddressNpi.TabIndex = 22
        '
        'Label15
        '
        Me.Label15.Location = New System.Drawing.Point(18, 210)
        Me.Label15.Name = "Label15"
        Me.Label15.Size = New System.Drawing.Size(96, 16)
        Me.Label15.TabIndex = 21
        Me.Label15.Text = "Address N&PI:"
        '
        'cbxAddressTon
        '
        Me.cbxAddressTon.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList
        Me.cbxAddressTon.Location = New System.Drawing.Point(118, 181)
        Me.cbxAddressTon.Name = "cbxAddressTon"
        Me.cbxAddressTon.Size = New System.Drawing.Size(180, 21)
        Me.cbxAddressTon.TabIndex = 20
        '
        'Label14
        '
        Me.Label14.Location = New System.Drawing.Point(18, 184)
        Me.Label14.Name = "Label14"
        Me.Label14.Size = New System.Drawing.Size(96, 16)
        Me.Label14.TabIndex = 19
        Me.Label14.Text = "Address &TON:"
        '
        'txtAddressRange
        '
        Me.txtAddressRange.Location = New System.Drawing.Point(118, 155)
        Me.txtAddressRange.Name = "txtAddressRange"
        Me.txtAddressRange.Size = New System.Drawing.Size(180, 20)
        Me.txtAddressRange.TabIndex = 16
        '
        'Label12
        '
        Me.Label12.Location = New System.Drawing.Point(18, 158)
        Me.Label12.Name = "Label12"
        Me.Label12.Size = New System.Drawing.Size(96, 16)
        Me.Label12.TabIndex = 15
        Me.Label12.Text = "A&ddress Range:"
        '
        'Label11
        '
        Me.Label11.Location = New System.Drawing.Point(18, 132)
        Me.Label11.Name = "Label11"
        Me.Label11.Size = New System.Drawing.Size(96, 16)
        Me.Label11.TabIndex = 11
        Me.Label11.Text = "S&ystem Type:"
        '
        'txtEnquireInterval
        '
        Me.txtEnquireInterval.Location = New System.Drawing.Point(118, 103)
        Me.txtEnquireInterval.Name = "txtEnquireInterval"
        Me.txtEnquireInterval.Size = New System.Drawing.Size(100, 20)
        Me.txtEnquireInterval.TabIndex = 6
        '
        'txtConnectTimeout
        '
        Me.txtConnectTimeout.Location = New System.Drawing.Point(118, 51)
        Me.txtConnectTimeout.Name = "txtConnectTimeout"
        Me.txtConnectTimeout.Size = New System.Drawing.Size(100, 20)
        Me.txtConnectTimeout.TabIndex = 3
        Me.txtConnectTimeout.Text = "5000"
        '
        'cbxInterfaceVersion
        '
        Me.cbxInterfaceVersion.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList
        Me.cbxInterfaceVersion.Location = New System.Drawing.Point(118, 24)
        Me.cbxInterfaceVersion.Name = "cbxInterfaceVersion"
        Me.cbxInterfaceVersion.Size = New System.Drawing.Size(100, 21)
        Me.cbxInterfaceVersion.TabIndex = 1
        '
        'Label7
        '
        Me.Label7.Location = New System.Drawing.Point(18, 54)
        Me.Label7.Name = "Label7"
        Me.Label7.Size = New System.Drawing.Size(96, 16)
        Me.Label7.TabIndex = 2
        Me.Label7.Text = "Connect &Timeout:"
        '
        'Label6
        '
        Me.Label6.Location = New System.Drawing.Point(18, 106)
        Me.Label6.Name = "Label6"
        Me.Label6.Size = New System.Drawing.Size(100, 16)
        Me.Label6.TabIndex = 5
        Me.Label6.Text = "&Enquire Interval:"
        '
        'Label1
        '
        Me.Label1.Location = New System.Drawing.Point(18, 28)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(96, 16)
        Me.Label1.TabIndex = 0
        Me.Label1.Text = "Interface &Version:"
        '
        'frmSmppAdvanced
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(501, 329)
        Me.Controls.Add(Me.btnCancel)
        Me.Controls.Add(Me.btnOK)
        Me.Controls.Add(Me.lblInfo)
        Me.Controls.Add(Me.Label8)
        Me.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedDialog
        Me.MaximizeBox = False
        Me.MinimizeBox = False
        Me.Name = "frmSmppAdvanced"
        Me.Text = "frmSmppAdvanced"
        Me.Label8.ResumeLayout(False)
        Me.Label8.PerformLayout()
        Me.ResumeLayout(False)

    End Sub
    Friend WithEvents btnCancel As System.Windows.Forms.Button
    Friend WithEvents btnOK As System.Windows.Forms.Button
    Private WithEvents lblInfo As System.Windows.Forms.LinkLabel
    Friend WithEvents Label8 As System.Windows.Forms.GroupBox
    Friend WithEvents label3 As System.Windows.Forms.Label
    Friend WithEvents label5 As System.Windows.Forms.Label
    Friend WithEvents txtBindTimeout As System.Windows.Forms.TextBox
    Friend WithEvents label2 As System.Windows.Forms.Label
    Friend WithEvents Label4 As System.Windows.Forms.Label
    Friend WithEvents txtSystemType As System.Windows.Forms.TextBox
    Friend WithEvents cbxAddressNpi As System.Windows.Forms.ComboBox
    Friend WithEvents Label15 As System.Windows.Forms.Label
    Friend WithEvents cbxAddressTon As System.Windows.Forms.ComboBox
    Friend WithEvents Label14 As System.Windows.Forms.Label
    Friend WithEvents txtAddressRange As System.Windows.Forms.TextBox
    Friend WithEvents Label12 As System.Windows.Forms.Label
    Friend WithEvents Label11 As System.Windows.Forms.Label
    Friend WithEvents txtEnquireInterval As System.Windows.Forms.TextBox
    Friend WithEvents txtConnectTimeout As System.Windows.Forms.TextBox
    Friend WithEvents cbxInterfaceVersion As System.Windows.Forms.ComboBox
    Friend WithEvents Label7 As System.Windows.Forms.Label
    Friend WithEvents Label6 As System.Windows.Forms.Label
    Friend WithEvents Label1 As System.Windows.Forms.Label
End Class
