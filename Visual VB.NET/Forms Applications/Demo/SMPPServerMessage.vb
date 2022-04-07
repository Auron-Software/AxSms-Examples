Imports AxSms

Public Class SMPPServerMessage
    Private strSystemID As String
    Private objMessageToSend As AxSms.Message

    Public Property SystemID()
        Get
            Return strSystemID
        End Get
        Set(ByVal value)
            strSystemID = value
        End Set
    End Property

    Public Property MessageToSend()
        Get
            Return objMessageToSend
        End Get
        Set(ByVal value)
            objMessageToSend = value
        End Set
    End Property

    Public Sub New(ByVal strSystemID As String, ByVal objMessageToSend As AxSms.Message)
        SystemID = strSystemID
        MessageToSend = objMessageToSend
    End Sub

End Class
