'-----------------------------------------------------------------------
' <copyright file="frmGsmReceiveOptions.vb" company="Auron">
'     Copyright (c) Auron Software - www.auronsoftware.com
' </copyright>
' <author>Dennis van de Giessen</author>
'-----------------------------------------------------------------------
Imports AxSms

Public Class frmGsmReceiveOptions

    Private nMessageStorage As Integer
    Private nMessageStatus As Integer
    Private bDeleteAfterReceive As Boolean
    Private objSmsConstants As AxSms.Constants

#Region "Properties"
    Public ReadOnly Property MessageStorage() As Integer
        Get
            Return nMessageStorage
        End Get
    End Property
    Public ReadOnly Property MessageStatus() As Integer
        Get
            Return nMessageStatus
        End Get
    End Property
    Public ReadOnly Property DeleteAfterReceive() As Boolean
        Get
            Return bDeleteAfterReceive
        End Get
    End Property
#End Region

    Public Sub New()
        InitializeComponent()

        objSmsConstants = New AxSms.Constants()

        nMessageStorage = objSmsConstants.GSM_STORAGETYPE_ALL
        nMessageStatus = objSmsConstants.GSM_MESSAGESTATE_ALL
        bDeleteAfterReceive = False
    End Sub

    Private Sub fillComboboxes()
        Dim dctMessageStorage = New Dictionary(Of [String], Integer)()
        dctMessageStorage.Add(objSmsConstants.GsmStorageTypeToString(objSmsConstants.GSM_STORAGETYPE_ALL), objSmsConstants.GSM_STORAGETYPE_ALL)
        dctMessageStorage.Add(objSmsConstants.GsmStorageTypeToString(objSmsConstants.GSM_STORAGETYPE_COMBINED), objSmsConstants.GSM_STORAGETYPE_COMBINED)
        dctMessageStorage.Add(objSmsConstants.GsmStorageTypeToString(objSmsConstants.GSM_STORAGETYPE_MEMORY), objSmsConstants.GSM_STORAGETYPE_MEMORY)
        dctMessageStorage.Add(objSmsConstants.GsmStorageTypeToString(objSmsConstants.GSM_STORAGETYPE_SIM), objSmsConstants.GSM_STORAGETYPE_SIM)

        cbxMessageStorage.DisplayMember = "Key"
        cbxMessageStorage.ValueMember = "Value"
        cbxMessageStorage.DataSource = New BindingSource(dctMessageStorage, Nothing)

        Dim dctMessageState = New Dictionary(Of [String], Integer)()
        dctMessageState.Add(objSmsConstants.GsmMessageStateToString(objSmsConstants.GSM_MESSAGESTATE_ALL), objSmsConstants.GSM_MESSAGESTATE_ALL)
        dctMessageState.Add(objSmsConstants.GsmMessageStateToString(objSmsConstants.GSM_MESSAGESTATE_RECEIVED_READ), objSmsConstants.GSM_MESSAGESTATE_RECEIVED_READ)
        dctMessageState.Add(objSmsConstants.GsmMessageStateToString(objSmsConstants.GSM_MESSAGESTATE_RECEIVED_UNREAD), objSmsConstants.GSM_MESSAGESTATE_RECEIVED_UNREAD)

        cbxMessageState.DisplayMember = "Key"
        cbxMessageState.ValueMember = "Value"
        cbxMessageState.DataSource = New BindingSource(dctMessageState, Nothing)
    End Sub

    Private Sub btnOK_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnOK.Click
        nMessageStatus = CInt(cbxMessageState.SelectedValue)
        nMessageStorage = CInt(cbxMessageStorage.SelectedValue)
        bDeleteAfterReceive = cbDeleteAfterReceive.Checked

        DialogResult = Windows.Forms.DialogResult.OK
        Close()
    End Sub

    Private Sub btnCancel_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnCancel.Click
        DialogResult = Windows.Forms.DialogResult.Cancel
        Close()
    End Sub

    Private Sub frmGsmReceiveOptions_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        fillComboboxes()

        cbDeleteAfterReceive.Checked = bDeleteAfterReceive
        cbxMessageStorage.SelectedValue = nMessageStorage
        cbxMessageState.SelectedValue = nMessageStatus
    End Sub
End Class