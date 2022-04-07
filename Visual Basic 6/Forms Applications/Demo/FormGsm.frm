VERSION 5.00
Begin VB.Form FormGsm 
   Caption         =   "Auron SMS Component Sample - Visual Basic 6 GSM"
   ClientHeight    =   5385
   ClientLeft      =   60
   ClientTop       =   345
   ClientWidth     =   9135
   LinkTopic       =   "FormGsm"
   ScaleHeight     =   5385
   ScaleWidth      =   9135
   StartUpPosition =   3  'Windows Default
   Begin VB.TextBox textLogFile 
      Height          =   300
      Left            =   1065
      TabIndex        =   13
      Top             =   4275
      Width           =   7875
   End
   Begin VB.CommandButton btnSend 
      Caption         =   "&Send"
      Height          =   390
      Left            =   120
      TabIndex        =   11
      Top             =   3690
      Width           =   8820
   End
   Begin VB.Frame Frame2 
      Caption         =   "Send Message"
      Height          =   1770
      Left            =   135
      TabIndex        =   19
      Top             =   1665
      Width           =   8805
      Begin VB.TextBox TextMessage 
         Height          =   645
         Left            =   915
         TabIndex        =   10
         Top             =   825
         Width           =   7710
      End
      Begin VB.TextBox textToAddress 
         Height          =   285
         Left            =   915
         TabIndex        =   8
         Top             =   330
         Width           =   2820
      End
      Begin VB.Label Label4 
         Caption         =   "Text:"
         Height          =   210
         Left            =   285
         TabIndex        =   9
         Top             =   885
         Width           =   420
      End
      Begin VB.Label Label2 
         Caption         =   "To:"
         Height          =   255
         Left            =   285
         TabIndex        =   7
         Top             =   375
         Width           =   450
      End
   End
   Begin VB.ComboBox cbSpeed 
      Height          =   315
      Left            =   4515
      TabIndex        =   4
      Top             =   1050
      Width           =   1755
   End
   Begin VB.TextBox textPincode 
      Height          =   300
      Left            =   7200
      TabIndex        =   6
      Top             =   1065
      Width           =   1560
   End
   Begin VB.ComboBox cbDevice 
      Height          =   315
      Left            =   1035
      TabIndex        =   2
      Top             =   1035
      Width           =   2865
   End
   Begin VB.Frame Frame1 
      Caption         =   "GSM Modem/Phone Connection Properties"
      Height          =   870
      Left            =   105
      TabIndex        =   18
      Top             =   675
      Width           =   8820
      Begin VB.Label Label7 
         Caption         =   "Pincode:"
         Height          =   180
         Left            =   6375
         TabIndex        =   5
         Top             =   435
         Width           =   735
      End
      Begin VB.Label Label6 
         Caption         =   "Speed:"
         Height          =   210
         Left            =   3840
         TabIndex        =   3
         Top             =   420
         Width           =   570
      End
      Begin VB.Label Label5 
         Caption         =   "Device:"
         Height          =   270
         Left            =   285
         TabIndex        =   1
         Top             =   420
         Width           =   900
      End
   End
   Begin VB.Label textMessageRef 
      BorderStyle     =   1  'Fixed Single
      Height          =   270
      Left            =   1065
      TabIndex        =   17
      Top             =   4980
      Width           =   1875
   End
   Begin VB.Label Label9 
      Caption         =   "Msg. Ref.:"
      Height          =   210
      Left            =   255
      TabIndex        =   16
      Top             =   5040
      Width           =   900
   End
   Begin VB.Label Label3 
      Caption         =   "Log File:"
      Height          =   285
      Left            =   270
      TabIndex        =   12
      Top             =   4320
      Width           =   675
   End
   Begin VB.Label textResult 
      BorderStyle     =   1  'Fixed Single
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   8.25
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   285
      Left            =   1065
      TabIndex        =   15
      Top             =   4635
      Width           =   7875
   End
   Begin VB.Label Label8 
      Caption         =   "Result:"
      Height          =   270
      Left            =   255
      TabIndex        =   14
      Top             =   4665
      Width           =   600
   End
   Begin VB.Label Label1 
      Caption         =   "This sample requires a GSM modem or GSM phone connected to your computer. A SIM crd is required in this GSM modem."
      Height          =   405
      Left            =   105
      TabIndex        =   0
      Top             =   120
      Width           =   5865
   End
End
Attribute VB_Name = "FormGsm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Public objGsm As AxSms.Gsm
Public objSmsMessage As AxSms.Message

Private Sub btnSend_Click()
    Dim strPin
    
    textResult = ""
    textMessageRef = ""
        
    ' Set Logfile
    objGsm.LogFile = textLogFile
        
    ' Open connection to the device
    objGsm.Open cbDevice.Text
    textResult.Caption = objGsm.LastError & " (" & objGsm.GetErrorDescription(objGsm.LastError) & ")"
    If (objGsm.LastError = 36101) Then '36101 means: modem requires pin code, see also: www.auronsoftware.com/kb/api-error-codes/
      strPin = textPincode
      objGsm.Open cbDevice.Text, strPin
    textResult.Caption = objGsm.LastError & " (" & objGsm.GetErrorDescription(objGsm.LastError) & ")"
    End If
    
    If (objGsm.LastError <> 0) Then
      Exit Sub
    End If
    
    ' Message: set all properties
    objSmsMessage.ToAddress = textToAddress
    objSmsMessage.Body = TextMessage
    
    ' Send the message
    objGsm.SendSms objSmsMessage
    textResult.Caption = objGsm.LastError & " (" & objGsm.GetErrorDescription(objGsm.LastError) & ")"
    textMessageRef = objSmsMessage.Reference
End Sub

Private Sub Form_Load()
    Dim strDevice, so
    
    Set objGsm = CreateObject("AxSms.Gsm")
    Set objSmsMessage = CreateObject("AxSms.Message")

    ' A license key is required to unlock this component after the trial period has expired.
    ' Assign the LicenseKey property every time a new instance of this component is created (see code below).
    ' Alternatively, the LicenseKey property can be set automatically. This requires the license key to be stored in the registry.
    ' For details, see manual, chapter "Product Activation".
    ' objGsm.LicenseKey = "XXXXX-XXXXX-XXXXX"
    
    Set objFso = CreateObject("Scripting.FileSystemObject")
    textLogFile.Text = objFso.GetSpecialFolder(2) & "\Gsm.log"
        
    strDevice = objGsm.FindFirstDevice
    While objGsm.LastError = 0
        cbDevice.AddItem (strDevice)
        strDevice = objGsm.FindNextDevice
    Wend
    strDevice = objGsm.FindFirstPort
    While objGsm.LastError = 0
        cbDevice.AddItem (strDevice)
        strDevice = objGsm.FindNextPort
    Wend
    cbDevice.ListIndex = 0
    
    cbSpeed.AddItem "Default"
    cbSpeed.AddItem "110"
    cbSpeed.AddItem "300"
    cbSpeed.AddItem "600"
    cbSpeed.AddItem "1200"
    cbSpeed.AddItem "2400"
    cbSpeed.AddItem "4800"
    cbSpeed.AddItem "9600"
    cbSpeed.AddItem "14400"
    cbSpeed.AddItem "19200"
    cbSpeed.AddItem "38400"
    cbSpeed.AddItem "57600"
    cbSpeed.AddItem "64000"
    cbSpeed.AddItem "115200"
    cbSpeed.AddItem "128000"
    cbSpeed.AddItem "256000"
    cbSpeed.ListIndex = 0

End Sub
