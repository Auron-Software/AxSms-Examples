//-----------------------------------------------------------------------
// <copyright file="frmGsmReceiveOptions.cs" company="Auron">
//     Copyright (c) Auron Software - www.auronsoftware.com
// </copyright>
// <author>Dennis van de Giessen</author>
//-----------------------------------------------------------------------
namespace Demo
{
    using System;
    using System.Windows.Forms;
    using System.Collections.Generic;
    
    public partial class frmGsmReceiveOptions : Form
    {
        private int nMessageStorage;
        private int nMessageStatus;
        private bool bDeleteAfterReceive;
        private AxSms.Constants objSmsConstants;

        #region Properties
        public int MessageStorage
        {
            get { return nMessageStorage; }
        }
        public int MessageStatus
        {
            get { return nMessageStatus; }
        }
        public bool DeleteAfterReceive
        {
            get { return bDeleteAfterReceive; }
        }
        #endregion

        public frmGsmReceiveOptions()
        {
            InitializeComponent();

            objSmsConstants = new AxSms.Constants();

            nMessageStorage = objSmsConstants.GSM_STORAGETYPE_ALL;
            nMessageStatus = objSmsConstants.GSM_MESSAGESTATE_ALL;
            bDeleteAfterReceive = false;
        }

        private void frmGsmReceiveOptions_Load(object sender, EventArgs e)
        {
            fillComboboxes();

            cbDeleteAfterReceive.Checked = bDeleteAfterReceive;
            cbxMessageStorage.SelectedValue = nMessageStorage;
            cbxMessageState.SelectedValue = nMessageStatus;
        }

        private void fillComboboxes()
        {
            var dctMessageStorage = new Dictionary<String, int>();
            dctMessageStorage.Add(objSmsConstants.GsmStorageTypeToString(objSmsConstants.GSM_STORAGETYPE_ALL), objSmsConstants.GSM_STORAGETYPE_ALL);
            dctMessageStorage.Add(objSmsConstants.GsmStorageTypeToString(objSmsConstants.GSM_STORAGETYPE_COMBINED), objSmsConstants.GSM_STORAGETYPE_COMBINED);
            dctMessageStorage.Add(objSmsConstants.GsmStorageTypeToString(objSmsConstants.GSM_STORAGETYPE_MEMORY), objSmsConstants.GSM_STORAGETYPE_MEMORY);
            dctMessageStorage.Add(objSmsConstants.GsmStorageTypeToString(objSmsConstants.GSM_STORAGETYPE_SIM), objSmsConstants.GSM_STORAGETYPE_SIM);

            cbxMessageStorage.DisplayMember = "Key";
            cbxMessageStorage.ValueMember = "Value";
            cbxMessageStorage.DataSource = new BindingSource(dctMessageStorage, null);

            var dctMessageState = new Dictionary<String, int>();
            dctMessageState.Add(objSmsConstants.GsmMessageStateToString(objSmsConstants.GSM_MESSAGESTATE_ALL), objSmsConstants.GSM_MESSAGESTATE_ALL);
            dctMessageState.Add(objSmsConstants.GsmMessageStateToString(objSmsConstants.GSM_MESSAGESTATE_RECEIVED_READ), objSmsConstants.GSM_MESSAGESTATE_RECEIVED_READ);
            dctMessageState.Add(objSmsConstants.GsmMessageStateToString(objSmsConstants.GSM_MESSAGESTATE_RECEIVED_UNREAD), objSmsConstants.GSM_MESSAGESTATE_RECEIVED_UNREAD);

            cbxMessageState.DisplayMember = "Key";
            cbxMessageState.ValueMember = "Value";
            cbxMessageState.DataSource = new BindingSource(dctMessageState, null);        
        }

        private void btnOK_Click(object sender, EventArgs e)
        {
            nMessageStatus = (int)cbxMessageState.SelectedValue;
            nMessageStorage = (int)cbxMessageStorage.SelectedValue;
            bDeleteAfterReceive = cbDeleteAfterReceive.Checked;

            DialogResult = DialogResult.OK;
            this.Close();
        }

        private void btnCancel_Click(object sender, EventArgs e)
        {
            DialogResult = DialogResult.Cancel;
            this.Close();
        }
    }
}
