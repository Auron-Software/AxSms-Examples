VERSION 5.00
Object = "{831FDD16-0C5C-11D2-A9FC-0000F8754DA1}#2.0#0"; "MSCOMCTL.OCX"
Begin VB.Form FormSmpp 
   Caption         =   "Auron SMS Component Sample - Visual Basic 6 SMPP"
   ClientHeight    =   10395
   ClientLeft      =   165
   ClientTop       =   450
   ClientWidth     =   10365
   LinkTopic       =   "Form1"
   ScaleHeight     =   10395
   ScaleWidth      =   10365
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton buttonClearReceived 
      Caption         =   "Clear"
      Height          =   345
      Left            =   8280
      TabIndex        =   29
      Top             =   8520
      Width           =   1695
   End
   Begin VB.Frame Frame4 
      Caption         =   "Received Messages"
      Height          =   2295
      Left            =   120
      TabIndex        =   27
      Top             =   6840
      Width           =   10095
      Begin MSComctlLib.ListView listReceivedMessages 
         Height          =   1695
         Left            =   1440
         TabIndex        =   28
         Top             =   360
         Width           =   6615
         _ExtentX        =   11668
         _ExtentY        =   2990
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
   Begin VB.Frame Frame3 
      Caption         =   "Sent Messages"
      Height          =   2295
      Left            =   120
      TabIndex        =   23
      Top             =   4440
      Width           =   10095
      Begin VB.CommandButton buttonClearSent 
         Caption         =   "Clear"
         Height          =   360
         Left            =   8160
         TabIndex        =   25
         Top             =   1305
         Width           =   1695
      End
      Begin MSComctlLib.ListView listSentMessages 
         Height          =   1455
         Left            =   1440
         TabIndex        =   24
         Top             =   240
         Width           =   6615
         _ExtentX        =   11668
         _ExtentY        =   2566
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
      Begin VB.Label llblUrlNotReceived 
         Caption         =   "Help, I didn't receive the SMS message on my mobile phone"
         BeginProperty Font 
            Name            =   "MS Sans Serif"
            Size            =   8.25
            Charset         =   0
            Weight          =   400
            Underline       =   -1  'True
            Italic          =   0   'False
            Strikethrough   =   0   'False
         EndProperty
         ForeColor       =   &H8000000D&
         Height          =   255
         Left            =   1440
         TabIndex        =   26
         Top             =   1920
         Width           =   4575
      End
   End
   Begin VB.Frame Frame5 
      Caption         =   "Results & Logging"
      Height          =   1215
      Left            =   120
      TabIndex        =   30
      Top             =   9240
      Width           =   10095
      Begin VB.CommandButton buttonView 
         Caption         =   "View"
         Height          =   330
         Left            =   8160
         TabIndex        =   35
         Top             =   675
         Width           =   1695
      End
      Begin VB.TextBox textLogfile 
         Height          =   285
         Left            =   1560
         TabIndex        =   34
         Top             =   720
         Width           =   6495
      End
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
         TabIndex        =   32
         Top             =   360
         Width           =   6495
      End
      Begin VB.Label Label10 
         Caption         =   "Log File:"
         Height          =   255
         Left            =   240
         TabIndex        =   33
         Top             =   720
         Width           =   735
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
         TabIndex        =   31
         Top             =   360
         Width           =   735
      End
   End
   Begin VB.Frame Frame2 
      Caption         =   "Message"
      Height          =   2295
      Left            =   120
      TabIndex        =   14
      Top             =   2040
      Width           =   10095
      Begin VB.CheckBox checkDeliverReport 
         Caption         =   "Delivery Report"
         Height          =   195
         Left            =   8310
         TabIndex        =   19
         Top             =   420
         Width           =   1455
      End
      Begin VB.Timer timerUpdate 
         Enabled         =   0   'False
         Left            =   9000
         Top             =   1200
      End
      Begin VB.CommandButton buttonSend 
         Caption         =   "Send"
         Height          =   375
         Left            =   1440
         TabIndex        =   22
         Top             =   1680
         Width           =   6615
      End
      Begin VB.TextBox textBody 
         Height          =   855
         Left            =   1440
         MultiLine       =   -1  'True
         TabIndex        =   21
         Top             =   720
         Width           =   6615
      End
      Begin VB.ComboBox comboFormat 
         Height          =   315
         Left            =   5880
         Style           =   2  'Dropdown List
         TabIndex        =   18
         Top             =   360
         Width           =   2175
      End
      Begin VB.TextBox textToAddress 
         Height          =   285
         Left            =   1440
         TabIndex        =   16
         Top             =   360
         Width           =   3135
      End
      Begin VB.Label Label8 
         Caption         =   "Body Format:"
         Height          =   255
         Left            =   4680
         TabIndex        =   17
         Top             =   390
         Width           =   1095
      End
      Begin VB.Label Label7 
         Caption         =   "Body:"
         Height          =   255
         Left            =   240
         TabIndex        =   20
         Top             =   720
         Width           =   495
      End
      Begin VB.Label Label6 
         Caption         =   "To Address:"
         Height          =   255
         Left            =   225
         TabIndex        =   15
         Top             =   390
         Width           =   975
      End
   End
   Begin VB.Frame Frame1 
      Caption         =   "Connection"
      Height          =   1815
      Left            =   120
      TabIndex        =   0
      Top             =   120
      Width           =   10095
      Begin VB.CommandButton buttonAdvanced 
         Caption         =   "Advanced..."
         Height          =   315
         Left            =   8160
         TabIndex        =   11
         Top             =   720
         Width           =   1695
      End
      Begin VB.CommandButton buttonDisconnect 
         Caption         =   "Disconnect"
         Height          =   330
         Left            =   3480
         TabIndex        =   13
         Top             =   1200
         Width           =   1935
      End
      Begin VB.CommandButton buttonConnect 
         Caption         =   "Connect"
         Height          =   330
         Left            =   1440
         TabIndex        =   12
         Top             =   1200
         Width           =   1935
      End
      Begin VB.ComboBox comboMode 
         Height          =   315
         Left            =   6600
         Style           =   2  'Dropdown List
         TabIndex        =   10
         Top             =   720
         Width           =   1455
      End
      Begin VB.TextBox textPassword 
         Height          =   285
         IMEMode         =   3  'DISABLE
         Left            =   4200
         PasswordChar    =   "*"
         TabIndex        =   8
         Top             =   720
         Width           =   1215
      End
      Begin VB.TextBox textPort 
         Height          =   285
         Left            =   6600
         TabIndex        =   4
         Text            =   "2775"
         Top             =   360
         Width           =   1455
      End
      Begin VB.TextBox textSystemId 
         Height          =   285
         Left            =   1440
         TabIndex        =   6
         Top             =   720
         Width           =   1815
      End
      Begin VB.TextBox textServer 
         Height          =   285
         Left            =   1440
         TabIndex        =   2
         Text            =   "gateway.auronsoftware.com"
         Top             =   360
         Width           =   3975
      End
      Begin VB.Label Label5 
         Caption         =   "Password:"
         Height          =   255
         Left            =   3360
         TabIndex        =   7
         Top             =   750
         Width           =   855
      End
      Begin VB.Label Label4 
         Caption         =   "System Mode:"
         Height          =   255
         Left            =   5520
         TabIndex        =   9
         Top             =   765
         Width           =   1095
      End
      Begin VB.Label Label3 
         Caption         =   "Server Port:"
         Height          =   255
         Left            =   5520
         TabIndex        =   3
         Top             =   360
         Width           =   975
      End
      Begin VB.Label Label2 
         Caption         =   "System ID:"
         Height          =   255
         Left            =   240
         TabIndex        =   5
         Top             =   720
         Width           =   855
      End
      Begin VB.Label Label1 
         Caption         =   "Server:"
         Height          =   255
         Left            =   240
         TabIndex        =   1
         Top             =   360
         Width           =   615
      End
   End
End
Attribute VB_Name = "FormSmpp"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit

Public objSmpp As AxSms.Smpp
Public objSmsConstants As AxSms.Constants
Public objDemoAccount As AxSms.DemoAccount

Private strSystemType As String
Private strAddressRange As String
Private nAddressTon As Integer
Private nAddressNpi As Integer
Private nInterfaceVersion As Integer
Private nEnquireInterval As Integer

Private bInfoMessageShowed As Boolean
Private bSender As Boolean
Private bReceiver As Boolean
Private nSendMessagesCount As Integer

Private Declare Function GetTempPath Lib "kernel32" Alias "GetTempPathA" (ByVal nBufferLength As Long, ByVal lpBuffer As String) As Long
Private Const MAX_PATH = 260

Private Declare Function ShellExecute Lib "shell32.dll" _
Alias "ShellExecuteA" (ByVal hWnd As Long, _
ByVal lpOperation As String, ByVal lpFile As String, _
ByVal lpParameters As String, ByVal lpDirectory As String, _
ByVal nShowCmd As Long) As Long

Private Declare Sub Sleep Lib "kernel32.dll" (ByVal dwMilliseconds As Long)

Private Sub buttonAdvanced_Click()

    With DialogSmppAdvanced
        .textSystemType.Text = strSystemType
        .textAddressRange.Text = strAddressRange
        .textEnquireInterval = CStr(nEnquireInterval)
                
        .comboInterfaceVersion.Clear
        addValueToCombo .comboInterfaceVersion, "3.3", objSmsConstants.SMPP_VERSION_33, 0
        addValueToCombo .comboInterfaceVersion, "3.4", objSmsConstants.SMPP_VERSION_34, 1
        addValueToCombo .comboInterfaceVersion, "5.0", objSmsConstants.SMPP_VERSION_50, 2
    
        .comboTon.Clear
        addValueToCombo .comboTon, "0, Unknown", objSmsConstants.TON_UNKNOWN, 0
        addValueToCombo .comboTon, "1, International", objSmsConstants.TON_INTERNATIONAL, 1
        addValueToCombo .comboTon, "2, National", objSmsConstants.TON_NATIONAL, 2
        addValueToCombo .comboTon, "3, Network specific", objSmsConstants.TON_NETWORK_SPECIFIC, 3
        addValueToCombo .comboTon, "4, Subscriber number", objSmsConstants.TON_SUBSCRIBER_NUMBER, 4
        addValueToCombo .comboTon, "5, Alphanumeric", objSmsConstants.TON_ALPHANUMERIC, 5
        addValueToCombo .comboTon, "6, Abbreviated", objSmsConstants.SMPP_TON_ABBREVIATED, 6
        
        .comboNpi.Clear
        addValueToCombo .comboNpi, "0, Unknown", objSmsConstants.NPI_UNKNOWN, 0
        addValueToCombo .comboNpi, "1, ISDN", objSmsConstants.NPI_ISDN, 1
        addValueToCombo .comboNpi, "3, Data", objSmsConstants.NPI_DATA, 2
        addValueToCombo .comboNpi, "4, Telex", objSmsConstants.NPI_TELEX, 3
        addValueToCombo .comboNpi, "8, National", objSmsConstants.NPI_NATIONAL, 4
        addValueToCombo .comboNpi, "9, Private", objSmsConstants.NPI_PRIVATE, 5
        addValueToCombo .comboNpi, "10, Ermes", objSmsConstants.NPI_ERMES, 6
        addValueToCombo .comboNpi, "14, Internet", objSmsConstants.SMPP_NPI_INTERNET, 7
        
        setComboToValue .comboInterfaceVersion, nInterfaceVersion
        setComboToValue .comboTon, nAddressTon
        setComboToValue .comboNpi, nAddressNpi
    End With
    
    DialogSmppAdvanced.Show vbModal
    If DialogSmppAdvanced.bOkClicked Then
        With DialogSmppAdvanced
            strSystemType = .textSystemType.Text
            strAddressRange = .textAddressRange.Text
            nEnquireInterval = CInt(.textEnquireInterval.Text)
            nInterfaceVersion = getSelValueFromCombo(.comboInterfaceVersion)
            nAddressTon = getSelValueFromCombo(.comboTon)
            nAddressNpi = getSelValueFromCombo(.comboNpi)
        End With
    End If
End Sub

Private Sub buttonClearReceived_Click()
    listReceivedMessages.ListItems.Clear
End Sub

Private Sub buttonClearSent_Click()
    listSentMessages.ListItems.Clear
End Sub

Private Sub buttonConnect_Click()
    Dim iSystemMode: iSystemMode = -1
    
    If (comboMode.Text = "Transmitter") Then
        bSender = True
        bReceiver = False
        iSystemMode = objSmsConstants.SMPP_BIND_TRANSMITTER
    ElseIf (comboMode.Text = "Receiver") Then
        bSender = False
        bReceiver = True
        iSystemMode = objSmsConstants.SMPP_BIND_RECEIVER
    Else
        bSender = True
        bReceiver = True
        iSystemMode = objSmsConstants.SMPP_BIND_TRANSCEIVER
    End If

    If Not IsNumeric(textPort.Text) Then
        MsgBox "The port number should be a numeric value.", vbExclamation, Me.Caption
        Exit Sub
    End If

    objSmpp.LogFile = textLogfile.Text
    objSmpp.Connect textServer.Text, CInt(textPort.Text), 5000, False
    If GetResult <> 0 Then
        Exit Sub
    End If
    
    Dim nType As Integer
    nType = getSelValueFromCombo(comboMode)
    objSmpp.Bind iSystemMode, textSystemId.Text, textPassword.Text, strSystemType, nInterfaceVersion, nAddressTon, nAddressNpi, strAddressRange, 0
    If GetResult <> 0 Then
        Exit Sub
    End If
    
    If (objSmpp.LastError = 0) Then
        If (Not bInfoMessageShowed And textServer.Text = "gateway.auronsoftware.com") Then
            MsgBox "The gateway.auronsoftware.com server allows you to send  only a few SMS messages, to any destination in the world." & vbCrLf & _
                          "If you need more credits, please apply for it using the following URL: www.auronsoftware.com/support/smscredits", vbInformation, Me.Caption
            bInfoMessageShowed = True
        End If
    End If
    
    EnableControls
End Sub

Private Sub buttonDisconnect_Click()
    objSmpp.Disconnect
    EnableControls
End Sub

Private Sub buttonSend_Click()
    Dim objMessage
    Dim strMessageReference
    
    Set objMessage = CreateObject("AxSms.Message")
    
    objMessage.Clear
    objMessage.ToAddress = textToAddress.Text
    objMessage.Body = textBody.Text
    objMessage.RequestDeliveryReport = IIf(checkDeliverReport.value = vbChecked, True, False)
    
    ' Give the message a custom user
    nSendMessagesCount = nSendMessagesCount + 1
    objMessage.UserTag = nSendMessagesCount

    If (comboFormat.Text = "Unicode") Then
        objMessage.DataCoding = objMessage.DataCoding Or objSmsConstants.DATACODING_UNICODE
    ElseIf (comboFormat.Text = "Hex") Then
        objMessage.BodyFormat = objSmsConstants.BODYFORMAT_HEX
        objMessage.DataCoding = objMessage.DataCoding Or objSmsConstants.DATACODING_8BIT_DATA
    End If
    
    objSmpp.SubmitSms objMessage, objSmsConstants.MULTIPART_ACCEPT
    If GetResult <> 0 Then
        Exit Sub
    End If
    
    Dim newItem As ListItem
    Set newItem = listSentMessages.ListItems.Add(, , "n/a")
    newItem.Tag = nSendMessagesCount
    newItem.SubItems(1) = objMessage.ToAddress
    newItem.SubItems(2) = "n/a"
    newItem.SubItems(3) = "n/a"
End Sub

Private Sub Form_Load()
    Set objSmpp = CreateObject("AxSms.Smpp")
    Set objSmsConstants = CreateObject("AxSms.Constants")
    Set objDemoAccount = CreateObject("AxSms.DemoAccount")

    ' A license key is required to unlock this component after the trial period has expired.
    ' Assign the LicenseKey property every time a new instance of this component is created (see code below).
    ' Alternatively, the LicenseKey property can be set automatically. This requires the license key to be stored in the registry.
    ' For details, see manual, chapter "Product Activation".
    ' objGsm.LicenseKey = "XXXXX-XXXXX-XXXXX"

    addValueToCombo comboMode, "Transmitter", objSmsConstants.SMPP_BIND_TRANSMITTER, 0
    addValueToCombo comboMode, "Receiver", objSmsConstants.SMPP_BIND_RECEIVER, 1
    addValueToCombo comboMode, "Transceiver", objSmsConstants.SMPP_BIND_TRANSCEIVER, 2
    
    addValueToCombo comboFormat, "Text", objSmsConstants.DATACODING_DEFAULT, 0
    addValueToCombo comboFormat, "Unicode", objSmsConstants.DATACODING_UNICODE, 1
    addValueToCombo comboFormat, "Hex", objSmsConstants.DATACODING_8BIT_DATA, 2
    
    Dim newCol As ColumnHeader
    
    Set newCol = listSentMessages.ColumnHeaders.Add(, , "Reference", listSentMessages.Width * 0.25)
    Set newCol = listSentMessages.ColumnHeaders.Add(, , "Recipient", listSentMessages.Width * 0.25)
    Set newCol = listSentMessages.ColumnHeaders.Add(, , "Time", listSentMessages.Width * 0.25)
    Set newCol = listSentMessages.ColumnHeaders.Add(, , "Status", listSentMessages.Width * 0.24)
    
    Set newCol = listReceivedMessages.ColumnHeaders.Add(, , "Sender", listReceivedMessages.Width * 0.25)
    Set newCol = listReceivedMessages.ColumnHeaders.Add(, , "Time", listReceivedMessages.Width * 0.25)
    Set newCol = listReceivedMessages.ColumnHeaders.Add(, , "Message", listReceivedMessages.Width * 0.49)
    
    nSendMessagesCount = 0

    LoadSettings
    SetDefaultLogFile
    EnableControls
    
    timerUpdate.Interval = 2000
    timerUpdate.Enabled = True
End Sub

Private Sub EnableControls()
    textServer.Enabled = objSmpp.IsConnected = False
    textPort.Enabled = objSmpp.IsConnected = False
    textSystemId.Enabled = objSmpp.IsConnected = False
    textPassword.Enabled = objSmpp.IsConnected = False
    comboMode.Enabled = objSmpp.IsConnected = False
    buttonAdvanced.Enabled = objSmpp.IsConnected = False
    
    buttonConnect.Enabled = objSmpp.IsConnected = False
    buttonDisconnect.Enabled = objSmpp.IsConnected <> False
    textToAddress.Enabled = objSmpp.IsConnected <> False And bSender
    textBody.Enabled = objSmpp.IsConnected <> False And bSender
    comboFormat.Enabled = objSmpp.IsConnected <> False And bSender
    buttonSend.Enabled = objSmpp.IsConnected <> False And bSender
    listSentMessages.Enabled = objSmpp.IsConnected <> False And bSender
    buttonClearSent.Enabled = objSmpp.IsConnected <> False And bSender
    checkDeliverReport.Enabled = objSmpp.IsConnected <> False And bSender
    listReceivedMessages.Enabled = objSmpp.IsConnected <> False And bReceiver
    buttonClearReceived.Enabled = objSmpp.IsConnected <> False And bReceiver
End Sub

Private Sub llblUrlNotReceived_Click()
    Dim dummy
    dummy = ShellExecute(0&, "open", "https://www.auronsoftware.com/knowledge-base/#sms-component", vbNullString, vbNullString, vbNormalFocus)
End Sub

Private Sub textPort_KeyPress(KeyAscii As Integer)
    Select Case KeyAscii
      Case vbKey0 To vbKey9
      Case vbKeyBack, vbKeyClear, vbKeyDelete
      Case vbKeyLeft, vbKeyRight, vbKeyUp, vbKeyDown, vbKeyTab
      Case Else
        KeyAscii = 0
        Beep
    End Select
End Sub

Private Sub buttonView_Click()
    If FileExists(textLogfile.Text) = True Then
        Shell "notepad " + textLogfile.Text, vbNormalFocus
    End If
End Sub

Private Sub LoadSettings()
    textServer.Text = "gateway.auronsoftware.com"
    textPort.Text = "2775"
    setComboToValue comboMode, objSmsConstants.SMPP_BIND_TRANSCEIVER
    setComboToValue comboFormat, objSmsConstants.BODYFORMAT_TEXT
    
    strSystemType = "SMPP"
    strAddressRange = ""
    nAddressNpi = 0
    nAddressTon = 0
    nInterfaceVersion = objSmsConstants.SMPP_VERSION_34
    nEnquireInterval = 30000
    textSystemId.Text = objDemoAccount.SystemID
    textPassword.Text = objDemoAccount.Password

End Sub

Private Function GetResult() As Long
    Dim lResult As Long
    
    lResult = objSmpp.LastError                                ' Get Last Error
    textResult.Text = objSmpp.LastError & ": " & objSmpp.GetErrorDescription(lResult) ' Set Result
    GetResult = lResult
    
End Function

Private Function SetDefaultLogFile()
    Dim Buffer As String
    Buffer = Space(MAX_PATH)
    
    If GetTempPath(MAX_PATH, Buffer) <> 0 Then
        textLogfile.Text = Left$(Buffer, InStr(Buffer, vbNullChar) - 1) & "Smpp.log"
    Else
        textLogfile.Text = "C:\SmppLog.txt"
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

Private Sub UpdateResult(ByVal nResult)
    textResult.Text = nResult & ": " & objSmpp.GetErrorDescription(nResult)
End Sub


Private Sub timerUpdate_Timer()
    EnableControls
    Receive
End Sub

Private Sub Receive()
    Dim objReceivedMessage As Message
    
    
    ' Check for message updates
    Set objReceivedMessage = objSmpp.FetchSmsUpdate()
    While (objSmpp.LastError = 0)
        Dim item As ListItem
        For Each item In listSentMessages.ListItems
            If (item.Tag = objReceivedMessage.UserTag) Then
                Dim strStatus As String
                strStatus = "n/a"
                If (objReceivedMessage.SmppCommandStatus <> 0) Then
                    strStatus = objSmsConstants.SmppEsmeToString(objReceivedMessage.SmppCommandStatus)
                End If
            
                item.Text = objReceivedMessage.Reference
                item.ListSubItems(3) = strStatus
            End If
        Next
        Set objReceivedMessage = objSmpp.FetchSmsUpdate()
    Wend
    
    
    ' Gets an incomming Message
    Set objReceivedMessage = objSmpp.ReceiveMessage()
    Dim strSmppMessageStatus As String: strSmppMessageStatus = ""
    
    Dim nStartIndex, nEndIndex
    
    Dim objTlvStatus As Tlv
    Dim objTlvMessageRef As Tlv
    Dim strMessageReference As String: strMessageReference = ""
    
    While (objSmpp.LastError = 0)
        ' Checks if incomming message is a deliveryreport
        If (objReceivedMessage.SmppIsDeliveryReport) Then
            ' Gets the incomming messages status
            Set objTlvStatus = objReceivedMessage.SmppGetTlv(objSmsConstants.SMPP_TLV_MESSAGE_STATE)
    
            If (objReceivedMessage.LastError = 0) Then
                strSmppMessageStatus = Replace(objSmsConstants.SmppMessageStateToString(objTlvStatus.ValueAsInt8), "SMPP_MESSAGESTATE_", "")
            Else
                nStartIndex = InStr(objReceivedMessage.Body, "stat:") + 5
                nEndIndex = InStr(nStartIndex, objReceivedMessage.Body, " ")
                strSmppMessageStatus = Replace(objSmsConstants.SmppMessageStateToString(Mid(objReceivedMessage.Body, nStartIndex, nEndIndex - nStartIndex)), "SMPP_MESSAGESTATE_", "")
            End If
    
            ' Gets the incomming messages reference
            Set objTlvMessageRef = objReceivedMessage.SmppGetTlv(objSmsConstants.SMPP_TLV_RECEIPTED_MESSAGE_ID)
    
            If (objReceivedMessage.LastError = 0) Then
                strMessageReference = objTlvMessageRef.ValueAsString
            Else
                nStartIndex = InStr(objReceivedMessage.Body, "id:") + 3
                nEndIndex = InStr(nStartIndex, objReceivedMessage.Body, " ")
                strMessageReference = Mid(objReceivedMessage.Body, nStartIndex, nEndIndex - nStartIndex)
            End If
    
            For Each item In listSentMessages.ListItems
                'If (item.Text = strMessageReference) Then
                If (item.Text = strMessageReference) Then
                    item.ListSubItems(2).Text = objReceivedMessage.ReceiveTime
                    item.ListSubItems(3).Text = strSmppMessageStatus
                End If
            Next
        Else
            Dim newItem As ListItem
            Set newItem = listReceivedMessages.ListItems.Add(, , objReceivedMessage.FromAddress)
            newItem.SubItems(1) = objReceivedMessage.ReceiveTime
            newItem.SubItems(2) = objReceivedMessage.Body
        End If
        ' Gets an incomming Message
        Set objReceivedMessage = objSmpp.ReceiveMessage()
    Wend
End Sub

Public Sub Construct(ByVal strSystemID As String, ByVal strPassword As String, ByVal strServer As String)
    textSystemId.Text = strSystemID
    textPassword.Text = strPassword
    textServer.Text = strServer
End Sub
