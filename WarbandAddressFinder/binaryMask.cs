using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;

namespace WarbandAddressFinder
{
    class BinaryMask
    {
        private enum tokenType : int
        {
            value = 0,
            address = 1,
            exactWildcard = 2,
            maxWildcard = 3
        }

        private struct token
        {
            public tokenType type;
            public int val;

            public token(tokenType t, int val = 0)
            {
                type = t;
                this.val = val;
            }
        }

        private List<token> tokens = new List<token>();

        public BinaryMask(string mask)
        {
            mask = mask.Replace("\t", string.Empty);
            mask = mask.Replace(" ", string.Empty);
            mask = mask.ToUpper();

            Regex r = new Regex(@"^(([0-9]|[A-F]){2}|(\[m?\d+\])|!)+$");

            int count = mask.Split('!').Length - 1;

            if (!r.IsMatch(mask) || count != 1 || mask.StartsWith("["))
            {
                throw new Exception("Invalid mask: " + mask);
            }

            int i = 0;
            while (i < mask.Length)
            {
                if (isHexDigit(mask[i]))
                {
                    tokens.Add(new token(tokenType.value, readHexByteToInt(mask, i)));
                    i += 2;
                }
                else if(mask[i] == '!')
                {
                    tokens.Add(new token(tokenType.address));
                    i++;
                }
                else
                {
                    i++;

                    if (mask[i] == 'm')
                    {
                        i++;
                        int val = 0;
                        i += readNum(ref val, mask, i);

                        tokens.Add(new token(tokenType.maxWildcard, val));
                    }
                    else
                    {
                        int val = 0;
                        i += readNum(ref val, mask, i);

                        tokens.Add(new token(tokenType.exactWildcard, val));
                    }

                    i++;
                }
            }
        }

        public uint match(ref byte[] data){
            int firstMaskByte = tokens[0].val;

            for (int i = 0; i < data.Length; i++)
            {
                if (data[i] == firstMaskByte)
                {
                    bool succ = false;
                    int curMaskIndex = 1;
                    int j = i + 1;
                    int jokers = 0;

                    while(j < data.Length){
                        if (tokens[curMaskIndex].type == tokenType.value)
                        {
                            if (data[j] == tokens[curMaskIndex].val)
                            {
                                j++;
                                curMaskIndex++;
                            }
                            else
                            {
                                break;
                            }
                        }
                        else if (tokens[curMaskIndex].type == tokenType.exactWildcard)
                        {
                            j += tokens[curMaskIndex].val;
                            curMaskIndex++;
                        }
                        else if (tokens[curMaskIndex].type == tokenType.maxWildcard)
                        {

                        }
                    }
                }
            }

            return 0;
        }

        private bool isHexDigit(char c)
        {
            return Char.IsDigit(c) || (c >= 'A' && c <= 'F');
        }

        private int readHexByteToInt(string s, int index)
        {
            int res = 0;
            for (int i = index; i < index + 2; i++)
            {
                Char c = s[i];
                int val;

                if (Char.IsDigit(c))
                {
                    val =  c - '0';
                }
                else
                {
                    val = c - 'A' + 10;
                }

                res = res * 16 + val;
            }

            return res;
        }

        private int readNum(ref int num, string s, int startIndex)
        {
            num = 0;
            int i = startIndex;

            while(i < s.Length && (s[i] >= '0' || s[i] <= '9'))
            {
                num = num * 10 + s[i] - '0';
                i++;
            }

            return i - startIndex;
        }
    }
}
