VERSION 5.00
Begin VB.Form DialogSmppAdvanced 
   BorderStyle     =   3  'Fixed Dialog
   Caption         =   "SMPP Advanced Settings"
   ClientHeight    =   3780
   ClientLeft      =   2760
   ClientTop       =   3750
   ClientWidth     =   5310
   LinkTopic       =   "Form1"
   MaxButton       =   0   'False
   MinButton       =   0   'False
   ScaleHeight     =   3780
   ScaleWidth      =   5310
   ShowInTaskbar   =   0   'False
   Begin VB.ComboBox comboNpi 
      Height          =   315
      Left            =   1920
      Style           =   2  'Dropdown List
      TabIndex        =   14
      Top             =   2040
      Width           =   3135
   End
   Begin VB.ComboBox comboTon 
      Height          =   315
      Left            =   1920
      Style           =   2  'Dropdown List
      TabIndex        =   13
      Top             =   1662
      Width           =   3135
   End
   Begin VB.TextBox textAddressRange 
      Height          =   285
      Left            =   1920
      TabIndex        =   12
      Top             =   1314
      Width           =   3135
   End
   Begin VB.TextBox textSystemType 
      Height          =   285
      Left            =   1920
      TabIndex        =   11
      Top             =   966
      Width           =   3135
   End
   Begin VB.TextBox textEnquireInterval 
      BeginProperty DataFormat 
         Type            =   1
         Format          =   "0"
         HaveTrueFalseNull=   0
         FirstDayOfWeek  =   0
         FirstWeekOfYear =   0
         LCID            =   1033
         SubFormatType   =   1
      EndProperty
      Height          =   285
      Left            =   1920
      TabIndex        =   9
      Top             =   618
      Width           =   2055
   End
   Begin VB.ComboBox comboInterfaceVersion 
      Height          =   315
      Left            =   1920
      Style           =   2  'Dropdown List
      TabIndex        =   8
      Top             =   240
      Width           =   3135
   End
   Begin VB.CommandButton CancelButton 
      Caption         =   "Cancel"
      Height          =   375
      Left            =   3840
      TabIndex        =   1
      Top             =   3240
      Width           =   1215
   End
   Begin VB.CommandButton OKButton 
      Caption         =   "OK"
      Height          =   375
      Left            =   2520
      TabIndex        =   0
      Top             =   3240
      Width           =   1215
   End
   Begin VB.Label Label8 
      Caption         =   "When using the Auron Demo Gateway please fill 'Address Range' with 'S' and your mobile nr. E.g: S+441122334455"
      Height          =   495
      Left            =   240
      TabIndex        =   15
      Top             =   2520
      Width           =   4815
   End
   Begin VB.Label Label7 
      Caption         =   "Milliseconds"
      Height          =   255
      Left            =   4065
      TabIndex        =   10
      Top             =   660
      Width           =   1215
   End
   Begin VB.Label Label6 
      Caption         =   "Address Range NPI:"
      Height          =   255
      Left            =   225
      TabIndex        =   7
      Top             =   2100
      Width           =   1575
   End
   Begin VB.Label Label5 
      Caption         =   "Address range TON:"
      Height          =   255
      Left            =   225
      TabIndex        =   6
      Top             =   1734
      Width           =   1455
   End
   Begin VB.Label Label4 
      Caption         =   "Address Range:"
      Height          =   255
      Left            =   225
      TabIndex        =   5
      Top             =   1368
      Width           =   1335
   End
   Begin VB.Label Label3 
      Caption         =   "System Type:"
      Height          =   255
      Left            =   225
      TabIndex        =   4
      Top             =   1002
      Width           =   1335
   End
   Begin VB.Label Label2 
      Caption         =   "Enquire Interval:"
      Height          =   255
      Left            =   225
      TabIndex        =   3
      Top             =   636
      Width           =   1335
   End
   Begin VB.Label Label1 
      Caption         =   "Interface version:"
      Height          =   255
      Left            =   225
      TabIndex        =   2
      Top             =   270
      Width           =   1335
   End
End
Attribute VB_Name = "DialogSmppAdvanced"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Option Explicit

Public bOkClicked As Boolean

Private Sub CancelButton_Click()
    Hide
End Sub

Private Sub Form_Activate()
    bOkClicked = False
End Sub

Private Sub OKButton_Click()
    If Not IsNumeric(textEnquireInterval.Text) Then
        MsgBox "The enquire timeout should be a numeric value.", vbExclamation, Me.Caption
    Else
        bOkClicked = True
        Hide
    End If
End Sub

Private Sub textEnquireInterval_KeyPress(KeyAscii As Integer)
    Select Case KeyAscii
      Case vbKey0 To vbKey9
      Case vbKeyBack, vbKeyClear, vbKeyDelete
      Case vbKeyLeft, vbKeyRight, vbKeyUp, vbKeyDown, vbKeyTab
      Case Else
        KeyAscii = 0
        Beep
    End Select
End Sub
