using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

enum ExitCode : int
{
    Success = 0,
    ErrorInvalidInput = 1,
    ErrorException = 2
}

namespace WarbandAddressFinder
{
    class Program
    {
        static int Main(string[] args)
        {
            string optionInputExe = "";
            string optionInputMask = "";
            string optionOutputFile = @".\found_wb_addresses.cpp";

            byte[] data;

            if (args.Length < 2)
            {
                Console.WriteLine("No input file specified!");
                return (int)ExitCode.ErrorInvalidInput;
            }

            for (int i = 0; i < args.Length; i++)
            {
                if (i == 0)
                {
                    optionInputExe = args[i];
                    if (!File.Exists(optionInputExe))
                    {
                        Console.WriteLine("Input exe does not exist!");
                        return (int)ExitCode.ErrorInvalidInput;
                    }
                }
                else if (i == 1)
                {
                    optionInputMask = args[i];
                    if (!File.Exists(optionInputMask))
                    {
                        Console.WriteLine("Input mask does not exist!");
                        return (int)ExitCode.ErrorInvalidInput;
                    }
                }
                else if (i == 2)
                {
                    optionOutputFile = args[i];
                }
            }

            try
            {
                using (FileStream exeFS = File.Open(optionInputExe, FileMode.Open, FileAccess.Read, FileShare.Read))
                {
                    data = new byte[exeFS.Length];

                    for (int i = 0; i < exeFS.Length; i++)
                    {
                        data[i] = (Byte)exeFS.ReadByte();
                    }
                }

                using (StreamReader maskSR = new StreamReader(optionInputMask))
                {
                    if (File.Exists(optionOutputFile))
                    {
                        File.Delete(optionOutputFile);
                    }

                    using (StreamWriter outputSW = new StreamWriter(optionOutputFile))
                    {
                        doStuff(maskSR, outputSW);
                    }
                }
            }
            catch (Exception e)
            {
                Console.WriteLine("Error: {0}", e.ToString());
                return (int)ExitCode.ErrorException;
            }

            return (int)ExitCode.Success;
        }

        static void doStuff(StreamReader maskSR, StreamWriter outputSW)
        {
            bool gotAddressName = false;
            string addressName;
            string curMaskLine;

            while ((curMaskLine = maskSR.ReadLine()) != null)
            {
                if (curMaskLine.StartsWith("<<"))
                {
                    outputSW.WriteLine(curMaskLine.Substring(2));
                }

                if (curMaskLine.StartsWith("<"))
                {
                    continue;
                }

                if (!gotAddressName)
                {
                    addressName = curMaskLine;
                }
                else
                {
                    BinaryMask mask = new BinaryMask(curMaskLine);
                }
            }
        }
    }
}
