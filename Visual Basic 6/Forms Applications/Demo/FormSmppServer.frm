VERSION 5.00
Object = "{831FDD16-0C5C-11D2-A9FC-0000F8754DA1}#2.0#0"; "MSCOMCTL.OCX"
Begin VB.Form FormSmppServer 
   Caption         =   "SMPP Server - Built with Auron SMS Component"
   ClientHeight    =   9795
   ClientLeft      =   12000
   ClientTop       =   510
   ClientWidth     =   10365
   LinkTopic       =   "Form1"
   ScaleHeight     =   9795
   ScaleWidth      =   10365
   Begin VB.Frame Frame5 
      Caption         =   "Results & Logging"
      Height          =   1215
      Left            =   120
      TabIndex        =   19
      Top             =   8400
      Width           =   10095
      Begin VB.TextBox textResult 
         BackColor       =   &H80000004&
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
         Left            =   1560
         TabIndex        =   22
         Top             =   360
         Width           =   6495
      End
      Begin VB.TextBox textLogfile 
         Height          =   285
         Left            =   1560
         TabIndex        =   21
         Top             =   720
         Width           =   6495
      End
      Begin VB.CommandButton buttonView 
         Caption         =   "View"
         Height          =   375
         Left            =   8160
         TabIndex        =   20
         Top             =   600
         Width           =   1695
      End
      Begin VB.Label Label9 
         Caption         =   "Result:"
         BeginProperty Font 
            Name            =   "MS Sans Serif"
            Size            =   8.25
            Charset         =   0
            Weight          =   700
            Underline       =   0   'False
            Italic          =   0   'False
            Strikethrough   =   0   'False
         EndProperty
         Height          =   255
         Left            =   240
         TabIndex        =   24
         Top             =   360
         Width           =   735
      End
      Begin VB.Label Label10 
         Caption         =   "Log File:"
         Height          =   255
         Left            =   240
         TabIndex        =   23
         Top             =   720
         Width           =   735
      End
   End
   Begin VB.Frame frameSendMessage 
      Caption         =   "Message"
      Height          =   2535
      Left            =   120
      TabIndex        =   8
      Top             =   5760
      Width           =   10095
      Begin VB.ComboBox comboSystemID 
         Height          =   315
         Left            =   1440
         Style           =   2  'Dropdown List
         TabIndex        =   18
         Top             =   360
         Width           =   2535
      End
      Begin VB.TextBox textToAddress 
         Height          =   285
         Left            =   1440
         TabIndex        =   13
         Top             =   720
         Width           =   6615
      End
      Begin VB.ComboBox comboFormat 
         Height          =   315
         Left            =   5520
         Style           =   2  'Dropdown List
         TabIndex        =   12
         Top             =   360
         Width           =   2535
      End
      Begin VB.TextBox textBody 
         Height          =   855
         Left            =   1440
         MultiLine       =   -1  'True
         TabIndex        =   11
         Top             =   1080
         Width           =   6615
      End
      Begin VB.CommandButton buttonSend 
         Caption         =   "Send"
         Height          =   375
         Left            =   1440
         TabIndex        =   10
         Top             =   2040
         Width           =   6615
      End
      Begin VB.Timer timerUpdate 
         Enabled         =   0   'False
         Interval        =   750
         Left            =   9000
         Top             =   1800
      End
      Begin VB.CheckBox checkDeliverReport 
         Caption         =   "Delivery Report"
         Height          =   195
         Left            =   8400
         TabIndex        =   9
         Top             =   480
         Width           =   1455
      End
      Begin VB.Label Label2 
         Caption         =   "SystemID:"
         Height          =   255
         Left            =   240
         TabIndex        =   17
         Top             =   360
         Width           =   975
      End
      Begin VB.Label Label6 
         Caption         =   "To Address:"
         Height          =   255
         Left            =   240
         TabIndex        =   16
         Top             =   720
         Width           =   975
      End
      Begin VB.Label Label7 
         Caption         =   "Body:"
         Height          =   255
         Left            =   240
         TabIndex        =   15
         Top             =   1080
         Width           =   495
      End
      Begin VB.Label Label8 
         Caption         =   "Body Format:"
         Height          =   255
         Left            =   4320
         TabIndex        =   14
         Top             =   360
         Width           =   1095
      End
   End
   Begin VB.Frame frameMessages 
      Caption         =   "Messages"
      Height          =   2895
      Left            =   120
      TabIndex        =   7
      Top             =   2760
      Width           =   10095
      Begin MSComctlLib.ListView listMessages 
         Height          =   2535
         Left            =   720
         TabIndex        =   26
         Top             =   240
         Width           =   9135
         _ExtentX        =   16113
         _ExtentY        =   4471
         View            =   3
         LabelWrap       =   -1  'True
         HideSelection   =   -1  'True
         _Version        =   393217
         ColHdrIcons     =   "ImageList1"
         ForeColor       =   -2147483640
         BackColor       =   -2147483643
         BorderStyle     =   1
         Appearance      =   1
         NumItems        =   0
      End
   End
   Begin VB.Frame frameSessions 
      Caption         =   "Sessions"
      Height          =   1695
      Left            =   120
      TabIndex        =   6
      Top             =   960
      Width           =   10095
      Begin MSComctlLib.ListView listSessions 
         Height          =   1335
         Left            =   720
         TabIndex        =   25
         Top             =   240
         Width           =   9135
         _ExtentX        =   16113
         _ExtentY        =   2355
         View            =   3
         LabelWrap       =   -1  'True
         HideSelection   =   -1  'True
         _Version        =   393217
         ColHdrIcons     =   "ImageList1"
         ForeColor       =   -2147483640
         BackColor       =   -2147483643
         BorderStyle     =   1
         Appearance      =   1
         NumItems        =   0
      End
   End
   Begin VB.CommandButton buttonNewClient 
      Caption         =   "New Client"
      Height          =   375
      Left            =   8880
      TabIndex        =   5
      Top             =   360
      Width           =   1215
   End
   Begin VB.CommandButton buttonStopServer 
      Caption         =   "Stop Server"
      Height          =   375
      Left            =   3360
      TabIndex        =   4
      Top             =   360
      Width           =   1215
   End
   Begin VB.Frame Frame1 
      Caption         =   "Control Panel"
      Height          =   735
      Left            =   120
      TabIndex        =   0
      Top             =   120
      Width           =   10095
      Begin VB.CommandButton buttonStartServer 
         Caption         =   "Start Server"
         Height          =   375
         Left            =   1920
         TabIndex        =   3
         Top             =   240
         Width           =   1215
      End
      Begin VB.TextBox textPort 
         Height          =   285
         Left            =   720
         TabIndex        =   2
         Text            =   "2775"
         Top             =   240
         Width           =   975
      End
      Begin VB.Label Label1 
         Caption         =   "Port:"
         Height          =   255
         Left            =   240
         TabIndex        =   1
         Top             =   240
         Width           =   375
      End
   End
End
Attribute VB_Name = "FormSmppServer"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit

Private Declare Function GetTempPath Lib "kernel32" Alias "GetTempPathA" (ByVal nBufferLength As Long, ByVal lpBuffer As String) As Long

Private Declare Function ShellExecute Lib "shell32.dll" _
Alias "ShellExecuteA" (ByVal hWnd As Long, _
ByVal lpOperation As String, ByVal lpFile As String, _
ByVal lpParameters As String, ByVal lpDirectory As String, _
ByVal nShowCmd As Long) As Long

Private Const MAX_PATH = 260

Private objSmppServer As SmppServer
Private objSmsConstants As SmsConstants
Private objSession As SmppSession
Private objMessage
Private nClientsCount As Integer
Private lsMessagesToSend As Collection
Private mNUserTag

Private Sub buttonSend_Click()
        Dim objMessageToSend 'As SmsMessage
        Set objMessageToSend = CreateObject("AxSms.SmsMessage")

        objMessageToSend.Clear
        objMessageToSend.RequestDeliveryReport = IIf(checkDeliverReport = vbChecked, True, False)
        objMessageToSend.ToAddress = textToAddress.Text
        objMessageToSend.FromAddress = "[SMPP Server Demo]"
        objMessageToSend.Body = textBody.Text

        If (comboFormat.Text = "Unicode") Then
            objMessage.DataCoding = objMessage.DataCoding Or objSmsConstants.DATACODING_UNICODE
        ElseIf (comboFormat.Text = "Hex") Then
            objMessage.BodyFormat = objSmsConstants.BODYFORMAT_HEX
            objMessage.DataCoding = objMessage.DataCoding Or objSmsConstants.DATACODING_8BIT_DATA
        End If

        mNUserTag = mNUserTag + 1
        objMessageToSend.UserTag = mNUserTag ' To identify this message when the client responds
        
        Dim newServerMessage As SmppServerMessage
        Set newServerMessage = New SmppServerMessage
        newServerMessage.Construct comboSystemID.Text, objMessageToSend
        lsMessagesToSend.Add newServerMessage
End Sub

Private Sub buttonStartServer_Click()
    If Not IsNumeric(textPort.Text) Then
        MsgBox "The port number should be a numeric value.", vbExclamation, Me.Caption
        Exit Sub
    End If
    
    Dim nPort As Integer: nPort = CInt(textPort.Text)
    objSmppServer.Start (nPort)
    UpdateResult (objSmppServer.LastError)
    EnableControls
End Sub

Private Sub UpdateResult(ByVal nResult)
    textResult.Text = nResult & ": " & objSmppServer.GetErrorDescription(nResult)
End Sub

Private Sub buttonStopServer_Click()
    objSmppServer.Stop
    UpdateResult (objSmppServer.LastError)
    EnableControls
End Sub

Private Sub Form_Load()
    nClientsCount = 0
    mNUserTag = 0
    
    Set objSmppServer = CreateObject("AxSms.SmppServer")
    Set objSmsConstants = CreateObject("AxSms.SmsConstants")
    
    addValueToCombo comboFormat, "Text", objSmsConstants.DATACODING_DEFAULT, 0
    addValueToCombo comboFormat, "Unicode", objSmsConstants.DATACODING_UNICODE, 1
    addValueToCombo comboFormat, "Hex", objSmsConstants.DATACODING_8BIT_DATA, 2
    
    Dim newCol As ColumnHeader
    Set newCol = listSessions.ColumnHeaders.Add(, , "Client IP", listSessions.Width * 0.5)
    Set newCol = listSessions.ColumnHeaders.Add(, , "SystemID", listSessions.Width * 0.49)
    
    Set newCol = listMessages.ColumnHeaders.Add(, , "Dir.", listMessages.Width * 0.05)
    Set newCol = listMessages.ColumnHeaders.Add(, , "SystemID", listMessages.Width * 0.15)
    Set newCol = listMessages.ColumnHeaders.Add(, , "ToAddress", listMessages.Width * 0.15)
    Set newCol = listMessages.ColumnHeaders.Add(, , "Reference", listMessages.Width * 0.11)
    Set newCol = listMessages.ColumnHeaders.Add(, , "State", listMessages.Width * 0.1)
    Set newCol = listMessages.ColumnHeaders.Add(, , "Body", listMessages.Width * 0.43)
    
    Set lsMessagesToSend = New Collection
    
    LoadSettings
    SetDefaultLogFile
    EnableControls
End Sub

Private Sub buttonNewClient_Click()
    nClientsCount = nClientsCount + 1

    ' We are starting the demo app again so it runs in a different Thread.
    ShellExecute Me.hWnd, "open", App.Path & "\demo.exe", "TestSystemID" & nClientsCount & " Localhost", "C:\", ByVal 1&
End Sub

Private Function GetResult() As Long
    Dim lResult As Long
    
    lResult = objSmppServer.LastError                                ' Get Last Error
    textResult.Text = objSmppServer.LastError & ": " & objSmppServer.GetErrorDescription(lResult) ' Set Result
    GetResult = lResult
End Function

Private Function SetDefaultLogFile()
    Dim Buffer As String
    Buffer = Space(MAX_PATH)
    
    If GetTempPath(MAX_PATH, Buffer) <> 0 Then
       textLogfile.Text = Left$(Buffer, InStr(Buffer, vbNullChar) - 1) & "SmppLog.txt"
    Else
        textLogfile.Text = "C:\SmppLog.txt"
    End If
End Function

Private Function GetDefaultLogFileLocation()
    Dim Buffer As String
    Buffer = Space(MAX_PATH)
    
    If GetTempPath(MAX_PATH, Buffer) <> 0 Then
        GetDefaultLogFileLocation = Left$(Buffer, InStr(Buffer, vbNullChar) - 1)
    Else
        GetDefaultLogFileLocation = "C:\"
    End If
End Function

Public Function FileExists(sFileName As String) As Boolean
  FileExists = CBool(Len(Dir$(sFileName))) And CBool(Len(sFileName))
End Function


Private Sub setComboToValue(combo As ComboBox, nValue As Integer)
    Dim i As Integer
    For i = 0 To combo.ListCount - 1
        If combo.ItemData(i) = nValue Then
            combo.ListIndex = i
            Exit Sub
        End If
    Next
End Sub

Private Sub addValueToCombo(combo As ComboBox, strText As String, nValue As Integer, nIndex As Integer)
    combo.AddItem strText, nIndex
    combo.ItemData(nIndex) = nValue
End Sub

Private Function getSelValueFromCombo(combo As ComboBox)
    Dim idx As Integer
    idx = combo.ListIndex
    If idx < 0 Then
        getSelValueFromCombo = 0
    Else
        getSelValueFromCombo = combo.ItemData(combo.ListIndex)
    End If
End Function

Private Sub LoadSettings()
    textPort.Text = "2775"
    setComboToValue comboFormat, objSmsConstants.BODYFORMAT_TEXT
End Sub

Private Sub EnableControls()
    If (objSmppServer.IsStarted) Then
        frameSendMessage.Enabled = False
    End If

    buttonStartServer.Enabled = Not objSmppServer.IsStarted
    textPort.Enabled = Not objSmppServer.IsStarted
    
    buttonStopServer.Enabled = objSmppServer.IsStarted
    frameMessages.Enabled = objSmppServer.IsStarted
    frameSessions.Enabled = objSmppServer.IsStarted
    timerUpdate.Enabled = objSmppServer.IsStarted
    buttonNewClient.Enabled = objSmppServer.IsStarted
End Sub

Private Sub timerUpdate_Timer()
     Dim objResponseMessage 'As SmsMessage
    If (Not objSmppServer.IsStarted) Then
        EnableControls
        Return
    End If

    Dim strChosenSystemID As String: strChosenSystemID = comboSystemID.Text

    ' Loop through the sessions untill all sessions has been handled
    listSessions.ListItems.Clear
    comboSystemID.Clear
    Set objSession = objSmppServer.GetFirstSession()

    While (objSmppServer.LastError = 0)
        
        ' Accept all sessions that request a bind
        If (objSession.ConnectionState = objSmsConstants.SMPP_SESSIONSTATE_BINDING) Then
            ' Always accept the client bind request
            objSession.RespondToBind (objSmsConstants.SMPP_ESME_ROK)
        End If
        
        Dim newItem As ListItem
        Set newItem = listSessions.ListItems.Add(, , objSession.Ip)
        newItem.SubItems(1) = objSession.SystemID
        newItem.Tag = 0
        
        objSession.LogFile = GetDefaultLogFileLocation() & objSession.SystemID & ".log"
        
        If (objSession.ConnectionState = objSmsConstants.SMPP_SESSIONSTATE_BOUND_TRX) Then
            ' Tranceiver
            ReceiveMessages (True)
        ElseIf (objSession.ConnectionState = objSmsConstants.SMPP_SESSIONSTATE_BOUND_TX) Then
            ' Transmitter
            ReceiveMessages (False)
        End If

        ' Only check to send out SMS messages when session is either tranceiver or receiver
        If (objSession.ConnectionState = objSmsConstants.SMPP_SESSIONSTATE_BOUND_TRX Or objSession.ConnectionState = objSmsConstants.SMPP_SESSIONSTATE_BOUND_RX) Then
            comboSystemID.AddItem (objSession.SystemID)
            Dim message As SmppServerMessage
            
            Dim i As Integer
            For i = lsMessagesToSend.Count To 1 Step -1
                    Set message = lsMessagesToSend(i)
                    
                If (message.SystemID = objSession.SystemID) Then
                    ' Message found to send to this Session
                    SendMessage message.MessageToSend

                    ' Remove this message from the list since it's not needed anymore
                    ' This is allowed since we started to loop at the end of the List
                    lsMessagesToSend.Remove (i)
                End If
            Next
        End If

        ' Check if the client accepted any messages
        Set objResponseMessage = objSession.ReceiveDeliverResponse()
        While (objSession.LastError = 0)
            Dim item As ListItem
            For Each item In listMessages.ListItems
                If (item.Tag = objResponseMessage.UserTag) Then
                    item.ListSubItems(4).Text = "Delivered"
                End If
            Next
            Set objResponseMessage = objSession.ReceiveDeliverResponse()
        Wend
        Set objSession = objSmppServer.GetNextSession()
    Wend

    ' Since we reload the SystemID's in comboSystemID we want to select the previously chosen SystemID in the combobox.
    Dim nSelectedIndex As Integer

    For i = 0 To comboSystemID.ListCount - 1
        If (comboSystemID.List(i) = strChosenSystemID) Then
            nSelectedIndex = i
        End If
    Next

    If (comboSystemID.ListCount > 0) Then
        frameSendMessage.Enabled = True
        comboSystemID.ListIndex = IIf(nSelectedIndex >= 0, nSelectedIndex, 0)
    Else
        frameSendMessage.Enabled = False
    End If
End Sub

Private Sub ReceiveMessages(ByVal bSendDeliveryReport As Boolean)
    Set objMessage = objSession.ReceiveSubmitSms()
    
    While (objSession.LastError = 0)

        Dim newItem As ListItem
        
        Set newItem = listMessages.ListItems.Add(, , "In")
        newItem.SubItems(1) = objSession.SystemID
        newItem.SubItems(2) = objMessage.ToAddress
        newItem.SubItems(3) = objMessage.Reference
        newItem.SubItems(4) = "Received"
        newItem.SubItems(5) = objMessage.Body

        ' Accept the incoming message with the suggested message reference
        objSession.RespondToSubmitSms objMessage

        If (objSession.LastError <> 0) Then
            UpdateResult (objSession.LastError)
            Return
        End If

        ' Send a successful delivery report for the incoming message
        If (bSendDeliveryReport And objMessage.RequestDeliveryReport) Then
            objMessage.SmppStatus = objSmsConstants.SMPP_MESSAGESTATE_DELIVERED
            objSession.DeliverReport objMessage

            If (objSession.LastError <> 0) Then
                UpdateResult (objSession.LastError)
                Exit Sub
            End If
        End If
        Set objMessage = objSession.ReceiveSubmitSms()
    Wend
End Sub

Private Sub SendMessage(ByVal objMessageToSend) 'As SmsMessage
    ' Send the new message to the client
    objSession.DeliverSms objMessageToSend
    
    Dim newItem As ListItem
    Set newItem = listMessages.ListItems.Add(, , "Out")
    newItem.SubItems(1) = objSession.SystemID
    newItem.SubItems(2) = objMessageToSend.ToAddress
    newItem.SubItems(3) = objMessageToSend.Reference
    newItem.SubItems(4) = "Pending"
    newItem.SubItems(5) = objMessageToSend.Body
    newItem.Tag = objMessageToSend.UserTag
    
    UpdateResult objSession.LastError
    If (objSession.LastError <> 0) Then
        Exit Sub
    End If
End Sub


