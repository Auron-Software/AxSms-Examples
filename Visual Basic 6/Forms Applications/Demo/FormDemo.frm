VERSION 5.00
Begin VB.Form FormDemo 
   BorderStyle     =   3  'Fixed Dialog
   Caption         =   "Auron SMS Component Sample - Visual Basic 6"
   ClientHeight    =   3465
   ClientLeft      =   45
   ClientTop       =   330
   ClientWidth     =   8955
   LinkTopic       =   "Form1"
   MaxButton       =   0   'False
   MinButton       =   0   'False
   ScaleHeight     =   3465
   ScaleWidth      =   8955
   ShowInTaskbar   =   0   'False
   StartUpPosition =   3  'Windows Default
   Begin VB.Frame Frame1 
      Height          =   1140
      Index           =   1
      Left            =   180
      TabIndex        =   5
      Top             =   135
      Width           =   8655
      Begin VB.CommandButton btnGsm 
         Caption         =   "SMS via &GSM..."
         Height          =   375
         Left            =   270
         TabIndex        =   7
         Top             =   360
         Width           =   2130
      End
      Begin VB.Label Label1 
         Caption         =   $"FormDemo.frx":0000
         Height          =   645
         Index           =   1
         Left            =   2640
         TabIndex        =   6
         Top             =   315
         Width           =   5820
      End
   End
   Begin VB.CommandButton btnSmpp 
      Caption         =   "SMS via SMPP..."
      Height          =   390
      Index           =   0
      Left            =   450
      TabIndex        =   2
      Top             =   1800
      Width           =   2115
   End
   Begin VB.Frame Frame1 
      Height          =   1140
      Index           =   0
      Left            =   180
      TabIndex        =   3
      Top             =   1440
      Width           =   8655
      Begin VB.Label Label1 
         Caption         =   $"FormDemo.frx":00BC
         Height          =   645
         Index           =   0
         Left            =   2640
         TabIndex        =   4
         Top             =   315
         Width           =   5775
      End
   End
   Begin VB.Label Label2 
      Caption         =   "Source code for this application is located in the 'Samples' folder of the installation directory."
      Height          =   240
      Left            =   165
      TabIndex        =   8
      Top             =   3060
      Width           =   6600
   End
   Begin VB.Label textVersion 
      Caption         =   "<version>"
      Height          =   255
      Left            =   3645
      TabIndex        =   1
      Top             =   2865
      Width           =   3975
   End
   Begin VB.Label Label4 
      Caption         =   "This sample uses Auron SMS Component"
      Height          =   240
      Left            =   165
      TabIndex        =   0
      Top             =   2865
      Width           =   3495
   End
End
Attribute VB_Name = "FormDemo"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub btnGsm_Click()
        Set newForm = New FormGsm
        newForm.Show
End Sub

Private Sub btnSmpp_Click(Index As Integer)
        Set newForm = New FormSmpp
        newForm.Show
End Sub

Private Sub Form_Load()
    
    Dim o
    Set o = CreateObject("AxSms.Gsm")
    textVersion = o.Version & "; Build " & o.Build & "; Module " & o.Module
End Sub

