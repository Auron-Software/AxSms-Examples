<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class frmGsmReceiveOptions
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
        Me.GroupBox1 = New System.Windows.Forms.GroupBox
        Me.cbxMessageState = New System.Windows.Forms.ComboBox
        Me.label2 = New System.Windows.Forms.Label
        Me.cbxMessageStorage = New System.Windows.Forms.ComboBox
        Me.cbDeleteAfterReceive = New System.Windows.Forms.CheckBox
        Me.Label1 = New System.Windows.Forms.Label
        Me.btnCancel = New System.Windows.Forms.Button
        Me.btnOK = New System.Windows.Forms.Button
        Me.GroupBox1.SuspendLayout()
        Me.SuspendLayout()
        '
        'GroupBox1
        '
        Me.GroupBox1.Controls.Add(Me.cbxMessageState)
        Me.GroupBox1.Controls.Add(Me.label2)
        Me.GroupBox1.Controls.Add(Me.cbxMessageStorage)
        Me.GroupBox1.Controls.Add(Me.cbDeleteAfterReceive)
        Me.GroupBox1.Controls.Add(Me.Label1)
        Me.GroupBox1.Location = New System.Drawing.Point(12, 12)
        Me.GroupBox1.Name = "GroupBox1"
        Me.GroupBox1.Size = New System.Drawing.Size(408, 127)
        Me.GroupBox1.TabIndex = 14
        Me.GroupBox1.TabStop = False
        Me.GroupBox1.Text = "Advanced receive options"
        '
        'cbxMessageState
        '
        Me.cbxMessageState.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList
        Me.cbxMessageState.Location = New System.Drawing.Point(102, 55)
        Me.cbxMessageState.Name = "cbxMessageState"
        Me.cbxMessageState.Size = New System.Drawing.Size(300, 21)
        Me.cbxMessageState.TabIndex = 3
        '
        'label2
        '
        Me.label2.Location = New System.Drawing.Point(8, 58)
        Me.label2.Name = "label2"
        Me.label2.Size = New System.Drawing.Size(100, 16)
        Me.label2.TabIndex = 2
        Me.label2.Text = "Message &type:"
        '
        'cbxMessageStorage
        '
        Me.cbxMessageStorage.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList
        Me.cbxMessageStorage.Location = New System.Drawing.Point(102, 28)
        Me.cbxMessageStorage.Name = "cbxMessageStorage"
        Me.cbxMessageStorage.Size = New System.Drawing.Size(300, 21)
        Me.cbxMessageStorage.TabIndex = 1
        '
        'cbDeleteAfterReceive
        '
        Me.cbDeleteAfterReceive.Location = New System.Drawing.Point(9, 87)
        Me.cbDeleteAfterReceive.Name = "cbDeleteAfterReceive"
        Me.cbDeleteAfterReceive.Size = New System.Drawing.Size(200, 24)
        Me.cbDeleteAfterReceive.TabIndex = 0
        Me.cbDeleteAfterReceive.Text = "&Delete after receive"
        '
        'Label1
        '
        Me.Label1.Location = New System.Drawing.Point(8, 31)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(100, 16)
        Me.Label1.TabIndex = 1
        Me.Label1.Text = "&Message storage:"
        '
        'btnCancel
        '
        Me.btnCancel.Location = New System.Drawing.Point(348, 145)
        Me.btnCancel.Name = "btnCancel"
        Me.btnCancel.Size = New System.Drawing.Size(72, 24)
        Me.btnCancel.TabIndex = 16
        Me.btnCancel.Text = "Cancel"
        '
        'btnOK
        '
        Me.btnOK.Location = New System.Drawing.Point(270, 145)
        Me.btnOK.Name = "btnOK"
        Me.btnOK.Size = New System.Drawing.Size(72, 24)
        Me.btnOK.TabIndex = 15
        Me.btnOK.Text = "OK"
        '
        'frmGsmReceiveOptions
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(429, 180)
        Me.Controls.Add(Me.GroupBox1)
        Me.Controls.Add(Me.btnCancel)
        Me.Controls.Add(Me.btnOK)
        Me.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedDialog
        Me.MaximizeBox = False
        Me.MinimizeBox = False
        Me.Name = "frmGsmReceiveOptions"
        Me.Text = "GSM Receive Options"
        Me.GroupBox1.ResumeLayout(False)
        Me.ResumeLayout(False)

    End Sub
    Friend WithEvents GroupBox1 As System.Windows.Forms.GroupBox
    Friend WithEvents cbxMessageState As System.Windows.Forms.ComboBox
    Friend WithEvents label2 As System.Windows.Forms.Label
    Friend WithEvents cbxMessageStorage As System.Windows.Forms.ComboBox
    Friend WithEvents cbDeleteAfterReceive As System.Windows.Forms.CheckBox
    Friend WithEvents Label1 As System.Windows.Forms.Label
    Friend WithEvents btnCancel As System.Windows.Forms.Button
    Friend WithEvents btnOK As System.Windows.Forms.Button
End Class
