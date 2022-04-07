'-----------------------------------------------------------------------
' <copyright file="MultipartProgram.vb" company="Auron">
'     Copyright (c) Auron Software - www.auronsoftware.com
' </copyright>
'-----------------------------------------------------------------------

Imports AxSms

Module MultipartProgram

    Sub Main()
        Dim objSmpp = New AxSms.Smpp()
        Dim objMessage = New AxSms.Message()

        objMessage.ToAddress = "+31122334455"
        objMessage.Body = "The most merciful thing in the world, I think, is the inability of the human mind to correlate all its contents. We live on a placid island of ignorance in the midst of black seas of infinity, and it was not meant that we should voyage far. The sciences, each straining in its own direction, have hitherto harmed us little; but some day the piecing together of dissociated knowledge will open up such terrifying vistas of reality, and of our frightful position therein, that we shall either go mad from the revelation or flee from the light into the peace and safety of a new dark age."
        Console.WriteLine("Original message:" & vbLf & "{0}" & vbLf, objMessage.Body)

        Dim nNumberOfParts As Integer = objSmpp.CountParts(objMessage)
        If objSmpp.LastError <> 0 Then
            Console.WriteLine("CountParts failed, {0} ({1})", objSmpp.LastError, objSmpp.GetErrorDescription(objSmpp.LastError))
            Return
        End If

        Dim nCurrentPartNumber As Integer = 0
        Console.WriteLine("There are {0} parts required." & vbLf, nNumberOfParts)

        Dim lsParts = New List(Of Message)()
        Dim objPart As Message

        objPart = objSmpp.GetFirstPart(objMessage)
        While objSmpp.LastError = 0
            Console.WriteLine("Part #{0}, ref #{1}: {2}", System.Threading.Interlocked.Increment(nCurrentPartNumber), objPart.MultipartRef, objPart.Body)
            lsParts.Add(objMessage)
            objPart = objSmpp.GetNextPart()
        End While

        Console.WriteLine(vbLf & "Assemble again from parts:")
        objSmpp.ResetSmsAssembler()

        If objSmpp.LastError <> 0 Then
            Console.WriteLine("ResetSmsAssembler failed, {0} ({1})", objSmpp.LastError, objSmpp.GetErrorDescription(objSmpp.LastError))
            Return
        End If

        For Each objMessagePart As AxSms.Message In lsParts
            objSmpp.AssembleSms(objMessagePart)
        Next

        If objSmpp.LastError <> 0 Then
            Console.WriteLine("AssembleSms failed, {0} ({1})", objSmpp.LastError, objSmpp.GetErrorDescription(objSmpp.LastError))
            Return
        End If

        objMessage = objSmpp.GetAssembledSms(True)
        Console.WriteLine(objMessage.Body)
        Console.WriteLine("Ready." & vbLf & "Press <ENTER> to continue.")
        Console.ReadLine()
    End Sub

End Module
