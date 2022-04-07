'-----------------------------------------------------------------------
' <copyright file="frmGsm.vb" company="Auron">
'     Copyright (c) Auron Software - www.auronsoftware.com
' </copyright>
' <author>Dennis van de Giessen</author>
'-----------------------------------------------------------------------
Imports AxSms
Imports System.IO

Public Class frmGsm

    Dim objGsm As AxSms.Gsm = New AxSms.Gsm
    Dim objSmsConstants As AxSms.Constants = New AxSms.Constants

    Dim objFrmSendAdvanced As frmGsmAdvanced = New frmGsmAdvanced
    Dim objFrmGsmReceiveOptions As frmGsmReceiveOptions = New frmGsmReceiveOptions

    Public Sub New()
        InitializeComponent()

        objGsm = New AxSms.Gsm()
        objSmsConstants = New AxSms.Constants()

        ' Display SMS Component Info
        lblInfo.Text = [String].Format("Auron SMS Component {0}; Build: {1}; Module: {2}", objGsm.Version, objGsm.Build, objGsm.[Module])

        objFrmGsmReceiveOptions = New frmGsmReceiveOptions()
        objFrmSendAdvanced = New frmGsmAdvanced()
    End Sub

    Private Sub frmGsm_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        fillComboBoxes()
        setupListBoxes()

        If cbxDevices.Items.Count > 0 Then
            cbxDevices.SelectedIndex = 0
        End If
        cbxDeviceSpeed.SelectedValue = objSmsConstants.GSM_BAUDRATE_DEFAULT
        cbxDataCoding.SelectedValue = objSmsConstants.DATACODING_DEFAULT

        txtLogFile.Text = Path.GetTempPath() & "Gsm.log"
        txtBody.Text = "Hello World!"
    End Sub

    Private Sub btnSend_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnSend.Click
        ' Set the wait cursor. Sending an SMS message can take a couple of seconds depending
        ' on the provider and the GSM device used.
        Cursor.Current = Cursors.WaitCursor

        ' Set the log file to a file path. This will generate a logfile which contains all
        ' communication with the GSM modem. This is very useful for troubleshooting.
        objGsm.LogFile = txtLogFile.Text

        ' Open the GSM device. This can take a couple of seconds. When the device is opened
        ' the AxSms.Gsm component will enter the PIN and do some basic initialization. By
        ' default the component will wait until the GSM device is registered on a GSM network.
        If txtIP.Text <> "" Then
            If txtPort.Text = "" Then
                MessageBox.Show("Port number required. Should be 2001 on Digi-one SP unless differently configured.", "Error", MessageBoxButtons.OK, MessageBoxIcon.[Error])
                Return
            End If

            ' If an IP adress or hostname was entered we assume it's an IP GSM device. Just combine port and IP.
            ' In case of an IPv6 IP it needs to be in brackets.
            Dim sDevice As String = If(txtIP.Text.Contains(":"), "[" + txtIP.Text + "]", txtIP.Text)
            sDevice += ":" + txtPort.Text
            objGsm.Open(sDevice, txtPincode.Text)
        Else
            objGsm.Open(cbxDevices.SelectedItem.ToString(), txtPincode.Text, CInt(cbxDeviceSpeed.SelectedValue))
        End If

        ' If there was a problem opening the GSM device there's no use in trying to continue.
        If UpdateResult(objGsm.LastError) <> 0 Then
            Return
        End If

        ' Create a new SMS message and configure it for sending.
        Dim objSms As New AxSms.Message()
        objSms.ToAddress = txtToAddress.Text
        objSms.DataCoding = CInt(cbxDataCoding.SelectedValue)
        objSms.Body = txtBody.Text

        ' Set the SMS properties from the advanced dialog            
        objSms.BodyFormat = objFrmSendAdvanced.BodyFormat

        objSms.ToAddressTON = objFrmSendAdvanced.ToTon
        objSms.ToAddressNPI = objFrmSendAdvanced.ToNpi

        objSms.RequestDeliveryReport = objFrmSendAdvanced.RequestDeliveryReport
        objSms.HasUdh = objFrmSendAdvanced.HasUdh

        ' Actually send out the SMS message. Multipart messages will be accepted
        ' and the timeout is set to 0 ms. This forces the Gsm component to use the
        ' default send timeout which is set to 15000 ms.
        ' 
        ' This function returns the SMS message reference obtained from the GSM device
        ' The message reference is used to match an SMS message with a delivery report
        ' if a delivery report was requested.
        Dim strReference As [String] = objGsm.SendSms(objSms, objSmsConstants.MULTIPART_ACCEPT, 0)

        ' There was a problem sending the SMS message return early and don't add the 
        ' message to the listbox.
        If UpdateResult(objGsm.LastError) <> 0 Then
            ' Close the GSM object.
            objGsm.Close()
            Return
        End If

        ' Create a new listview item and add it to the sent sms messages.
        Dim item As New ListViewItem(New [String]() {"n/a", strReference, objSms.ToAddress, "SENT", objSms.Body})

        ' Tag the listview item with the message reference, that way we can easily find
        ' the message again if we receive a delivery report for it.
        item.Tag = strReference
        lvSentMessages.Items.Add(item)

        ' It's recommended to close and re-open the GSM object between sending or receiving
        ' batches of messages. This forces the Gsm component to re-initialize the device.
        ' re-initialization may be necessary if the device could have been disconnected or
        ' powercycled (e.g. maybe the device was hot-swapped or the SIM was swapped).
        objGsm.Close()
    End Sub

    Private Sub btnReceive_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnReceive.Click
        ' Clear the received messages listbox and set a wait cursor.
        ' Depending on the device settings and the GSM modem receiving could
        ' take a couple of seconds.
        Cursor.Current = Cursors.WaitCursor
        lvReceivedMessages.Items.Clear()

        ' Set the log file to a file path. This will generate a logfile which contains all
        ' communication with the GSM modem. This is very useful for troubleshooting.
        objGsm.LogFile = txtLogFile.Text

        ' Open the GSM device. This can take a couple of seconds. When the device is opened
        ' the AxSms.Gsm component will enter the PIN and do some basic initialization. By
        ' default the component will wait until the GSM device is registered on a GSM network.
        If txtIP.Text <> "" Then
            If txtPort.Text = "" Then
                MessageBox.Show("Port number required. Should be 2001 on Digi-one SP unless differently configured.", "Error", MessageBoxButtons.OK, MessageBoxIcon.[Error])
                Return
            End If

            ' If an IP adress or hostname was entered we assume it's an IP GSM device. Just combine port and IP.
            ' In case of an IPv6 IP it needs to be in brackets.
            Dim sDevice As String = If(txtIP.Text.Contains(":"), "[" + txtIP.Text + "]", txtIP.Text)
            sDevice += ":" + txtPort.Text
            objGsm.Open(sDevice, txtPincode.Text)
        Else
            Dim sDevice As String = If(txtIP.Text.Contains(":"), "[" + txtIP.Text + "]", txtIP.Text)
            sDevice += txtPort.Text
            objGsm.Open(cbxDevices.SelectedItem.ToString(), txtPincode.Text, CInt(cbxDeviceSpeed.SelectedValue))
        End If

        ' If there was a problem opening the GSM device there's no using in trying to continue.
        If UpdateResult(objGsm.LastError) <> 0 Then
            Return
        End If

        ' Receive SMS messages as well as delivery reports from the GSM device. This operation could
        ' take a couple of seconds. The timeout parameters is set 0 ms. This will enable the default
        ' timeout of 15000 ms.
        objGsm.Receive(objFrmGsmReceiveOptions.MessageStatus, objFrmGsmReceiveOptions.DeleteAfterReceive, objFrmGsmReceiveOptions.MessageStorage, 0)

        ' If there was a problem during receive then it's no use to continue.
        If UpdateResult(objGsm.LastError) <> 0 Then
            objGsm.Close()
            Return
        End If

        ' Retrieve all of the SMS message. The SMS messages as well as the delivery reports have already
        ' been transported into an internal buffer in the AxSms.Gsm object by calling 'Receive'. With
        ' this loop we are retrieving the SMS messages from this internal buffer into our application.
        Dim objSms As AxSms.Message = objGsm.GetFirstSms()
        While objGsm.LastError = 0
            ' Create a new listbox item for every received message
            lvReceivedMessages.Items.Add(New ListViewItem(New [String]() {objSms.ReceiveTime, objSms.FromAddress, objSms.GsmMemoryLocation, objSms.Body}))
            objSms = objGsm.GetNextSms()
        End While

        ' Retrieve the delivery reports. If a delivery report can be matches with one of the sent SMS
        ' messages we'll update the status for that message.
        Dim objReport As AxSms.GsmDeliveryReport = objGsm.GetFirstReport()
        While objGsm.LastError = 0
            ' For every delivery report, iterate over all sent message and test
            ' if the message references match.
            For Each item As ListViewItem In lvSentMessages.Items
                ' If the message reference match then we know more about the status
                ' of this message, so update it accordingly.
                If DirectCast(item.Tag, [String]) = objReport.Reference Then
                    item.SubItems(3).Text = objSmsConstants.GsmStatusToString(objReport.Status)
                    ' Break from the foreach loop since only one SMS message will match.
                    Exit For
                End If
            Next
            objReport = objGsm.GetNextReport()
        End While

        ' It's recommended to close and re-open the GSM object between sending or receiving
        ' batches of messages. This forces the Gsm component to re-initialize the device.
        ' re-initialization may be necessary if the device could have been disconnected or
        ' powercycled (e.g. maybe the device was hot-swapped or the SIM was swapped).
        objGsm.Close()
    End Sub

    Private Sub UpdateControls()
        Dim strDevice As [String] = If(cbxDevices.Items.Count > 0, cbxDevices.SelectedItem.ToString(), "")
        Dim bUseCOM As Boolean = strDevice.StartsWith("COM", StringComparison.OrdinalIgnoreCase)
        Dim bUseIp As Boolean = txtIP.Text <> ""

        cbxDeviceSpeed.Enabled = bUseCOM AndAlso Not bUseIp
        cbxDevices.Enabled = Not bUseIp
    End Sub

    Private Sub setupListBoxes()
        lvSentMessages.Columns.Clear()
        lvSentMessages.Columns.Add("Time", 60, HorizontalAlignment.Left)
        lvSentMessages.Columns.Add("Reference", 60, HorizontalAlignment.Left)
        lvSentMessages.Columns.Add("To", 90, HorizontalAlignment.Left)
        lvSentMessages.Columns.Add("Status", 100, HorizontalAlignment.Left)
        lvSentMessages.Columns.Add("Message", 200, HorizontalAlignment.Left)

        lvReceivedMessages.Items.Clear()
        lvReceivedMessages.Columns.Clear()
        lvReceivedMessages.Columns.Add("Time", 60, HorizontalAlignment.Left)
        lvReceivedMessages.Columns.Add("From", 90, HorizontalAlignment.Left)
        lvReceivedMessages.Columns.Add("Storage", 50, HorizontalAlignment.Left)
        lvReceivedMessages.Columns.Add("Message", 300, HorizontalAlignment.Left)
    End Sub

    Private Sub fillComboBoxes()
        ' Fill the devices combobox by autodetecting them. Adding COM ports
        ' and TAPI devices to the same list.
        cbxDevices.Items.Clear()
        Dim strDevice As [String] = objGsm.FindFirstPort()
        While objGsm.LastError = 0
            cbxDevices.Items.Add(strDevice)
            strDevice = objGsm.FindNextPort()
        End While
        strDevice = objGsm.FindFirstDevice()
        While objGsm.LastError = 0
            cbxDevices.Items.Add(strDevice)
            strDevice = objGsm.FindNextDevice()
        End While

        Dim dctDeviceSpeed = New Dictionary(Of [String], Integer)()
        dctDeviceSpeed.Add("Default", objSmsConstants.GSM_BAUDRATE_DEFAULT)
        dctDeviceSpeed.Add(Convert.ToString(objSmsConstants.GSM_BAUDRATE_110), objSmsConstants.GSM_BAUDRATE_110)
        dctDeviceSpeed.Add(Convert.ToString(objSmsConstants.GSM_BAUDRATE_300), objSmsConstants.GSM_BAUDRATE_300)
        dctDeviceSpeed.Add(Convert.ToString(objSmsConstants.GSM_BAUDRATE_600), objSmsConstants.GSM_BAUDRATE_600)
        dctDeviceSpeed.Add(Convert.ToString(objSmsConstants.GSM_BAUDRATE_1200), objSmsConstants.GSM_BAUDRATE_1200)
        dctDeviceSpeed.Add(Convert.ToString(objSmsConstants.GSM_BAUDRATE_2400), objSmsConstants.GSM_BAUDRATE_2400)
        dctDeviceSpeed.Add(Convert.ToString(objSmsConstants.GSM_BAUDRATE_4800), objSmsConstants.GSM_BAUDRATE_4800)
        dctDeviceSpeed.Add(Convert.ToString(objSmsConstants.GSM_BAUDRATE_9600), objSmsConstants.GSM_BAUDRATE_9600)
        dctDeviceSpeed.Add(Convert.ToString(objSmsConstants.GSM_BAUDRATE_14400), objSmsConstants.GSM_BAUDRATE_14400)
        dctDeviceSpeed.Add(Convert.ToString(objSmsConstants.GSM_BAUDRATE_19200), objSmsConstants.GSM_BAUDRATE_19200)
        dctDeviceSpeed.Add(Convert.ToString(objSmsConstants.GSM_BAUDRATE_38400), objSmsConstants.GSM_BAUDRATE_38400)
        dctDeviceSpeed.Add(Convert.ToString(objSmsConstants.GSM_BAUDRATE_56000), objSmsConstants.GSM_BAUDRATE_56000)
        dctDeviceSpeed.Add(Convert.ToString(objSmsConstants.GSM_BAUDRATE_57600), objSmsConstants.GSM_BAUDRATE_57600)
        dctDeviceSpeed.Add(Convert.ToString(objSmsConstants.GSM_BAUDRATE_64000), objSmsConstants.GSM_BAUDRATE_64000)
        dctDeviceSpeed.Add(Convert.ToString(objSmsConstants.GSM_BAUDRATE_115200), objSmsConstants.GSM_BAUDRATE_115200)
        dctDeviceSpeed.Add(Convert.ToString(objSmsConstants.GSM_BAUDRATE_128000), objSmsConstants.GSM_BAUDRATE_128000)
        dctDeviceSpeed.Add(Convert.ToString(objSmsConstants.GSM_BAUDRATE_230400), objSmsConstants.GSM_BAUDRATE_230400)
        dctDeviceSpeed.Add(Convert.ToString(objSmsConstants.GSM_BAUDRATE_256000), objSmsConstants.GSM_BAUDRATE_256000)
        dctDeviceSpeed.Add(Convert.ToString(objSmsConstants.GSM_BAUDRATE_460800), objSmsConstants.GSM_BAUDRATE_460800)
        dctDeviceSpeed.Add(Convert.ToString(objSmsConstants.GSM_BAUDRATE_921600), objSmsConstants.GSM_BAUDRATE_921600)

        cbxDeviceSpeed.DisplayMember = "Key"
        cbxDeviceSpeed.ValueMember = "Value"
        cbxDeviceSpeed.DataSource = New BindingSource(dctDeviceSpeed, Nothing)

        Dim dctDataCoding = New Dictionary(Of [String], Integer)()
        dctDataCoding.Add("Text", objSmsConstants.DATACODING_DEFAULT)
        dctDataCoding.Add("Unicode", objSmsConstants.DATACODING_UNICODE)
        dctDataCoding.Add("Data", objSmsConstants.DATACODING_8BIT_DATA)
        dctDataCoding.Add("Flash", objSmsConstants.DATACODING_FLASH)
        dctDataCoding.Add("Flash Unicode", objSmsConstants.DATACODING_FLASH Or objSmsConstants.DATACODING_UNICODE)

        cbxDataCoding.DisplayMember = "Key"
        cbxDataCoding.ValueMember = "Value"
        cbxDataCoding.DataSource = New BindingSource(dctDataCoding, Nothing)
    End Sub

    Private Sub btnSendOptions_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnSendOptions.Click
        objFrmSendAdvanced.ShowDialog()
    End Sub

    Private Sub btnReceiveOptions_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnReceiveOptions.Click
        objFrmGsmReceiveOptions.ShowDialog()
    End Sub

    Private Function UpdateResult(ByVal nErrorCode As Integer) As Integer
        txtResult.Text = nErrorCode.ToString() & ": " & objGsm.GetErrorDescription(nErrorCode)
        Return nErrorCode
    End Function

    Private Sub btnView_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnView.Click
        If (File.Exists(txtLogFile.Text)) Then
            Process.Start(txtLogFile.Text)
        End If
    End Sub

    Private Sub ctlListGsmModems_LinkClicked(ByVal sender As System.Object, ByVal e As System.Windows.Forms.LinkLabelLinkClickedEventArgs) Handles ctlListGsmModems.LinkClicked
        Process.Start("https://www.auronsoftware.com/products/modems/?p=ax004")
    End Sub

    Private Sub llblUrlRecipientFormat_LinkClicked(ByVal sender As System.Object, ByVal e As System.Windows.Forms.LinkLabelLinkClickedEventArgs) Handles llblUrlRecipientFormat.LinkClicked
        Process.Start("https://www.auronsoftware.com/knowledge-base/#sms-component")
    End Sub

    Private Sub cbxDevices_SelectedIndexChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles cbxDevices.SelectedIndexChanged
        UpdateControls()
    End Sub

    Private Sub txtIP_TextChanged(sender As Object, e As EventArgs) Handles txtIP.TextChanged
        UpdateControls()
    End Sub
End Class

