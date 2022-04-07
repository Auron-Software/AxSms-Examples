Imports System.IO
Imports System.Threading

Module SmppServerProgram

    Sub Main()
        Dim objSmppServer As New AxSms.SmppServer()
        Dim objSmsConstants As New AxSms.Constants()

        Dim iPort As Integer = 2775

        ' A license key is required to unlock this component after the trial period has expired.
        ' Assign the LicenseKey property every time a new instance of this component is created (see code below). 
        ' Alternatively, the LicenseKey property can be set automatically. This requires the license key to be stored in the registry.
        ' For details, see manual, chapter "Product Activation".
        '
        '            objSmppServer.LicenseKey = "XXXXX-XXXXX-XXXXX";
        '            
        Console.WriteLine("Auron SMS Component {0}{1}Build: {2}{3}Module: {4}{5}License Status: {6}{7}License Key: {8}{9}", _
                          objSmppServer.Version, Environment.NewLine, objSmppServer.Build, Environment.NewLine, objSmppServer.Module, Environment.NewLine, _
                          objSmppServer.LicenseStatus, Environment.NewLine, objSmppServer.LicenseKey, Environment.NewLine)

        ' Set Logfile (optional, for debugging purposes)
        objSmppServer.LogFile = Path.GetTempPath() & "SmppServer.log"
        Console.WriteLine("Log file used: {0}" & vbLf, objSmppServer.LogFile)
        Console.WriteLine()

        ' The Smpp server can generate message references automatically. This is a simple 8 character numerical reference, starting
        ' at 0 and incremented by 1 for every message. When using the automatically generated references set the start offset here
        ' to be sure that clients are not receiving duplicate message references.
        objSmppServer.LastReference = 0

        ' Start the SMPP server. This starts a background thread which listens on the specified port for incoming connections.
        ' It's possible to start the server to listen to either IPv4, IPv6 or both. The 'Both' option is a so called 'dual stack'
        ' implementation. It opens 2 sockets and listens on both.
        objSmppServer.Start(iPort, objSmsConstants.SMPP_IPVERSION_BOTH)
        If objSmppServer.LastError = 0 Then
            Console.WriteLine("SMPP Server listening on port: {0}", iPort)
            Console.WriteLine("To connect bind as 'Transceiver', login: 'test', password: 'password'")
        Else
            Console.WriteLine("Error starting server: {0}, ({1})", objSmppServer.LastError, objSmppServer.GetErrorDescription(objSmppServer.LastError))
            Console.WriteLine("Press <ENTER> to continue.")
            Console.ReadLine()
            Return
        End If

        Dim lDeliverIntervalMs As Long = 1000, lNextDeliver As Long = Environment.TickCount + lDeliverIntervalMs
        Console.WriteLine("Enter mainloop; press 'q' to quit...")
        While objSmppServer.IsStarted AndAlso (Not (Console.KeyAvailable AndAlso Console.ReadKey().Key = ConsoleKey.Q))
            ' Continuously iterate over all connected session to handle bind request and send/receive messages.
            Dim objSession As AxSms.SmppSession = objSmppServer.GetFirstSession()
            While objSmppServer.LastError = 0
                If objSession.ConnectionState = objSmsConstants.SMPP_SESSIONSTATE_BINDING Then
                    ' Respond to the bind request, check if the credentials and bind-type is ok.
                    ' If the response is other than 'ROK' the connection is closed automatically.
                    Dim iResponse As Integer = 0
                    If objSession.RequestedBind = objSmsConstants.SMPP_BIND_TRANSCEIVER AndAlso objSession.SystemId = "test" AndAlso objSession.Password = "password" Then
                        iResponse = objSmsConstants.SMPP_ESME_ROK
                    Else
                        iResponse = objSmsConstants.SMPP_ESME_RINVPASWD
                    End If

                    ' Enable the next line to create a logfile for a session
                    'objSession.LogFile = "session.log"; 
                    objSession.RespondToBind(iResponse)
                    Console.WriteLine("Bind from: [{0}]:{1}, response: {2}", objSession.Ip, objSession.Port, objSmsConstants.SmppEsmeToString(iResponse))
                End If

                ' Receive and handle any submission that a client may have done
                Dim iMaxReceive As Integer = 10
                Dim objSms As AxSms.Message = objSession.ReceiveSubmitSms()
                While objSession.LastError = 0 AndAlso iMaxReceive > 0
                    ' Every submission requires a response, either accept or reject the message.
                    ' If the message is accepted it needs a message reference to uniquely identify this 
                    ' message in the future. The SmppServer automatically generates a reference which
                    ' can be replaced by a custom reference.
                    'objSms.Reference = ".. custom message reference (max 64 chars) ..";
                    objSms.SmppCommandStatus = objSmsConstants.SMPP_ESME_ROK
                    ' Anything other than 'ROK' rejects the message
                    objSession.RespondToSubmitSms(objSms)

                    ' Pass the message through the internal SMS assembler. This assembles multipart message if neccisary.
                    objSession.AssembleSms(objSms)

                    If objSms.RequestDeliveryReport Then
                        ' This is a helper function to quickly generate a delivery report based on the message status.
                        ' Since a delivery report is just an SMS messages with 'objSms.SmppIsDeliveryReport' set to true
                        ' it's easy to generate your own delivery report for more flexibility.                             
                        objSms.SmppStatus = objSmsConstants.SMPP_MESSAGESTATE_DELIVERED
                        objSession.DeliverReport(objSms)
                    End If

                    iMaxReceive -= 1
                    objSms = objSession.ReceiveSubmitSms()
                End While

                ' Get complete messages. These are the messages that are entered through the previous 'AssembleSms' call.
                objSms = objSession.GetAssembledSms(False)
                While objSession.LastError = 0
                    Console.WriteLine("Message from: {0}, address: {1}, reference: {2}" & vbLf & "body: {3}", objSession.SystemId, objSms.FromAddress, objSms.Reference, objSms.Body)
                    objSms = objSession.GetAssembledSms(False)
                End While

                ' Receive and handle SMS queries. In this example all SMS queries are rejected.
                Dim iMaxQuery As Integer = 10
                objSms = objSession.ReceiveQuerySms()
                While objSession.LastError = 0 AndAlso iMaxQuery > 0
                    Console.WriteLine("Sms query from: {0}, for reference: {1}", objSession.SystemId, objSms.Reference)
                    objSms.SmppCommandStatus = objSmsConstants.SMPP_ESME_RINVCMDID
                    objSession.RespondToQuerySms(objSms)
                    objSms = objSession.ReceiveQuerySms()
                End While

                ' Delivery a test SMS every .. milliseconds. This call is asynchonous, use ReceiveDeliverResponse
                ' to find out if the client accepted the message
                If lNextDeliver < Environment.TickCount Then
                    objSms = New AxSms.Message()
                    objSms.ToAddress = "1234567890"
                    objSms.FromAddress = "SMPPSAMPLE"
                    objSms.Body = "Test SMS from Auron SMS Component SMPP Server object"
                    objSession.DeliverSms(objSms)
                    If objSession.LastError <> 0 Then
                        Console.WriteLine("Error on DeliverSms: {0}, ({1})", objSmppServer.LastError, objSmppServer.GetErrorDescription(objSmppServer.LastError))
                    End If
                End If

                ' Test the delivery reponses from the connected session.
                objSms = objSession.ReceiveDeliverResponse()
                While objSession.LastError = 0
                    Console.WriteLine("Message delivered on {0}, status: {1}", objSession.SystemId, objSmsConstants.SmppEsmeToString(objSms.SmppCommandStatus))
                    objSms = objSession.ReceiveDeliverResponse()
                End While

                objSession = objSmppServer.GetNextSession()
            End While

            ' Process sessions that have disconnected in the mean time.
            objSession = objSmppServer.GetClosedSession()
            While objSmppServer.LastError = 0
                ' Get an overview of SMS messages that where supposed to be delivered to the message but either
                ' never made it out of the deliver queue or where never acknowledged by the client.
                Console.WriteLine("Session [{0}]:{1} closed.", objSession.Ip, objSession.Port)
                Console.WriteLine("Not Responded:")
                Dim objNotResponsedSMS As AxSms.Message
                objNotResponsedSMS = objSession.FetchNotResponded()
                While objSession.LastError = 0
                    Console.WriteLine("Usertag: {0}; SequenceNumber: {1}", objNotResponsedSMS.UserTag, objNotResponsedSMS.SmppSequenceNumber)
                    objNotResponsedSMS = objSession.FetchNotResponded()
                End While

                Console.WriteLine("Not Delivered:")
                Dim objNotDeliveredSMS As AxSms.Message
                objNotDeliveredSMS = objSession.FetchNotDelivered()
                While objSession.LastError = 0
                    Console.WriteLine("Usertag: {0}", objNotDeliveredSMS.UserTag)
                    objNotDeliveredSMS = objSession.FetchNotDelivered()
                End While

                objSession = objSmppServer.GetClosedSession()
            End While

            If lNextDeliver < Environment.TickCount Then
                lNextDeliver = Environment.TickCount + lDeliverIntervalMs
            End If

            Thread.Sleep(1)
        End While

        objSmppServer.Stop()

        Console.WriteLine("Disconnected.")
        Console.WriteLine("Ready.")
        Console.WriteLine("Press <ENTER> to continue.")
        Console.ReadLine()
    End Sub

End Module
