Set objConst = CreateObject("AxSms.Constants")
Set objSms = CreateObject("AxSms.Message")
Set objSmpp = CreateObject("AxSms.Smpp")

' Opening paragraph in H.P Lovecraft's horror classic: Call of Cthulhu
objSms.ToAddress = "+31122334455"
objSms.Body = "The most merciful thing in the world, I think, is the inability of the human mind to correlate all its contents. We live on a placid island of ignorance in the midst of black seas of infinity, and it was not meant that we should voyage far. The sciences, each straining in its own direction, have hitherto harmed us little; but some day the piecing together of dissociated knowledge will open up such terrifying vistas of reality, and of our frightful position therein, that we shall either go mad from the revelation or flee from the light into the peace and safety of a new dark age."

WScript.Echo "Original message: " 
WScript.Echo objSms.Body
WScript.Echo

iNumberOfParts = objSmpp.CountParts(objSms)
WScript.Echo "There are " & iNumberOfParts & " parts required"
WScript.Echo

ReDim arrParts(iNumberOfParts - 1)				' ReDim always allocates one extra unit
iPartNumber = 1
Set objPart = objSmpp.GetFirstPart(objSms)
While objSmpp.LastError = 0	
	WScript.Echo "Part #" & iPartNumber & ", ref #" & objPart.MultipartRef & ": " & objPart.Body
	Set arrParts(iPartNumber - 1) = objPart		' The array index starts at '0'
	iPartNumber = iPartNumber + 1	
	Set objPart = objSmpp.GetNextPart()
WEnd
WScript.Echo

WScript.Echo "Assemble again from parts:"
objSmpp.ResetSmsAssembler
For Each objPart In arrParts
	objSmpp.AssembleSms objPart
Next
Set objSms = objSmpp.GetAssembledSms(true)
WScript.Echo objSms.Body
