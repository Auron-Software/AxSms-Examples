'-----------------------------------------------------------------------
' <copyright file="HttpXmlProgram.vb" company="Auron">
'     Copyright (c) Auron Software - www.auronsoftware.com
' </copyright>
'-----------------------------------------------------------------------

Imports AxSms
Imports System.IO
Imports Microsoft.Win32
Imports System.Threading
Imports System.Xml

Module HttpXmlProgram

    Sub Main()
        Dim objHttp As AxSms.Http = New AxSms.Http()
        
        Dim objDemoAccount As AxSms.DemoAccount = New AxSms.DemoAccount()
        Dim strSystemID As String = objDemoAccount.SystemId
        Dim strPassword As String = objDemoAccount.Password

        ' A license key is required to unlock this component after the trial period has expired.
        ' Assign the LicenseKey property every time a new instance of this component is created (see code below). 
        ' Alternatively, the LicenseKey property can be set automatically. This requires the license key to be stored in the registry.
        ' For details, see manual, chapter "Product Activation".
        ' objHttp.LicenseKey = "XXXXX-XXXXX-XXXXX"

        Console.WriteLine("Auron SMS Component {0}{1}Build: {2}{3}Module: {4}{5}License Status: {6}{7}License Key: {8}{9}", _
                          objHttp.Version, Environment.NewLine, objHttp.Build, Environment.NewLine, objHttp.Module, Environment.NewLine, _
                          objHttp.LicenseStatus, Environment.NewLine, objHttp.LicenseKey, Environment.NewLine)

        ' Set Logfile (optional, for debugging purposes)
        ' objHttp.LogFile = Path.GetTempPath() + "Gsm.txt"
        Console.WriteLine("Log file used: {0}{1}", objHttp.LogFile, Environment.NewLine)

        ' Build an XML file that's going to contain the SMS message to send to the server.
        Dim xmlDoc As XmlDocument = New XmlDocument()
        Dim xmlDec As XmlDeclaration = xmlDoc.CreateXmlDeclaration("1.0", Nothing, Nothing)

        xmlDoc.AppendChild(xmlDec)

        Dim xmlRoot As XmlElement = xmlDoc.CreateElement("httpmessage")
        xmlDoc.AppendChild(xmlRoot)

        Dim xmlCredentials As XmlElement = xmlDoc.CreateElement("credentials")
        xmlCredentials.SetAttribute("systemid", strSystemID)
        xmlCredentials.SetAttribute("password", strPassword)
        xmlRoot.AppendChild(xmlCredentials)

        Dim xmlSettings As XmlElement = xmlDoc.CreateElement("settings")
        xmlSettings.SetAttribute("bodyformat", "0")
        xmlSettings.SetAttribute("requestdeliveryreport", "True")
        xmlSettings.SetAttribute("datacoding", "0")
        xmlSettings.SetAttribute("deliveryreporturl", "http:'www.auronsoftware.com")
        xmlRoot.AppendChild(xmlSettings)

        Dim xmlMessage As XmlElement = xmlDoc.CreateElement("message")
        xmlMessage.SetAttribute("toaddress", ReadInput("Enter recipient (recommended to start with a '+')", False))

        Dim xmlBody As XmlElement = xmlDoc.CreateElement("body")
        xmlBody.InnerText = objHttp.Base64Encode(ReadInput("Type SMS text", False))
        xmlMessage.AppendChild(xmlBody)
        xmlRoot.AppendChild(xmlMessage)

        Console.WriteLine("Generating XML data to post...")
        Console.WriteLine(xmlDoc.OuterXml)

        Dim strXmlToSend As String = xmlDoc.OuterXml
        Dim strUrl As String = "https://gateway.auronsoftware.com:8181/sendsms/sendsmsHttpXML.asp"
        Dim strXmlReponse As String = objHttp.Post(strUrl, strXmlToSend)

        Console.WriteLine("Post, result: " & objHttp.LastError.ToString() & " (" & objHttp.GetErrorDescription(objHttp.LastError) & ")")
        Console.WriteLine(String.Empty)
        Console.WriteLine("Response from server:")
        Console.WriteLine(strXmlReponse)

        Console.WriteLine("Ready.")
        Console.WriteLine("Press <ENTER> to continue.")
        Console.ReadLine()
    End Sub

    Function ReadInput(ByVal strTitle As String, ByVal bAllowEmpty As Boolean)

        Dim strInput As String = String.Empty
        Dim strReturn As String = String.Empty

        Console.WriteLine(strTitle)

        Do
            Console.Write("  > ")
            strInput = Console.ReadLine()
            If (strInput.Length > 1) Then
                strReturn = strInput
            End If
        Loop While (strReturn = String.Empty And Not bAllowEmpty)

        Return strReturn
    End Function
End Module
