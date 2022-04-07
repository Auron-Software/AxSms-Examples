
//-----------------------------------------------------------------------
// <copyright file="MultipartProgram.cs" company="Auron">
//     Copyright (c) Auron Software - www.auronsoftware.com
// </copyright>
//-----------------------------------------------------------------------

namespace Multipart
{
    using System;
    using System.Collections.Generic;
    using System.Text;
    using AxSms;

    class MultipartProgram
    {
        static void Main(string[] args)
        {
            var objSmpp = new AxSms.Smpp();
            var objMessage = new AxSms.Message();

            objMessage.ToAddress = "+31122334455";
            objMessage.Body = "The most merciful thing in the world, I think, is the inability of the human mind to correlate all its contents. We live on a placid island of ignorance in the midst of black seas of infinity, and it was not meant that we should voyage far. The sciences, each straining in its own direction, have hitherto harmed us little; but some day the piecing together of dissociated knowledge will open up such terrifying vistas of reality, and of our frightful position therein, that we shall either go mad from the revelation or flee from the light into the peace and safety of a new dark age.";
            Console.WriteLine("Original message:\n{0}\n", objMessage.Body);

            int nNumberOfParts = objSmpp.CountParts(objMessage);
            if (objSmpp.LastError != 0)
            {
                Console.WriteLine("CountParts failed, {0} ({1})", objSmpp.LastError, objSmpp.GetErrorDescription(objSmpp.LastError));
                return;
            }

            int nCurrentPartNumber = 0;
            Console.WriteLine("There are {0} parts required.\n", nNumberOfParts);

            var lsParts = new List<Message>();
            Message objPart;

            objPart = objSmpp.GetFirstPart(objMessage);
            while (objSmpp.LastError == 0)
            {
                Console.WriteLine("Part #{0}, ref #{1}: {2}", ++nCurrentPartNumber, objPart.MultipartRef, objPart.Body);
                lsParts.Add(objMessage);
                objPart = objSmpp.GetNextPart();
            }

            Console.WriteLine("\nAssemble again from parts:");
            objSmpp.ResetSmsAssembler();

            if (objSmpp.LastError != 0)
            {
                Console.WriteLine("ResetSmsAssembler failed, {0} ({1})", objSmpp.LastError, objSmpp.GetErrorDescription(objSmpp.LastError));
                return;
            }

            foreach (var objMessagePart in lsParts)
                objSmpp.AssembleSms(objMessagePart);

            if (objSmpp.LastError != 0)
            {
                Console.WriteLine("AssembleSms failed, {0} ({1})", objSmpp.LastError, objSmpp.GetErrorDescription(objSmpp.LastError));
                return;
            }

            objMessage = objSmpp.GetAssembledSms(true);
            Console.WriteLine(objMessage.Body);
            Console.WriteLine("Ready.\nPress <ENTER> to continue.");
            Console.ReadLine();
        }
    }
}
