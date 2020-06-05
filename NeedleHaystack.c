int NeedleHaystack(char* haystack, char* needle, int offset)
{
    // initialization
    char* pthaystack;
    char* ptneedle = needle;
    int firstoccurence = 0;
    int needlestrlen = 0;
    int ii = 0;

    // initialize haystack 
    if (offset == 0)
    {
        pthaystack = haystack;
    }
    else
    {
        pthaystack = --offset + haystack;
    }

    // validate inputs
    if (*haystack == '\0')
    {
        return -1; //empty haystack
    }
    else if (*needle == '\0')
    {
        return -1; //empty needle
    }

    // calculate string length of needle
    while (*ptneedle != '\0')
    {
        needlestrlen++;
        ptneedle++;
    }
    ptneedle = needle;

    // find first occurence in haystack 
    while (*pthaystack != '\0')
    {
        printf("value of haystack: %c", *pthaystack);
        printf(" needle %c\n", *ptneedle);
        firstoccurence++;
        if (*pthaystack == *ptneedle)// check first character of needle string
        {
            if (needlestrlen == 1) // only one character in needle string
            {
                firstoccurence = firstoccurence + offset;
                return firstoccurence;
            }
            else // more than one character in needle string
            {
                for (ii = 0; ii < needlestrlen; ii++)
                {

                    if (*pthaystack == *ptneedle)
                    {
                        if (ii == needlestrlen - 1) // entire needle found in haystack
                        {
                            firstoccurence = firstoccurence + offset;
                            return firstoccurence;
                        }
                        pthaystack++;
                        ptneedle++;
                    }
                    else // needle matches with haystack partially
                    {
                        pthaystack = pthaystack - ii;    // continue search in haystack
                        ptneedle = needle;               // reset needle pointer
                        ii = needlestrlen;               //escape the for-loop
                    }
                }
            }
        }
        pthaystack++;
    }

    // needle not found in the haysatack    
    return -1;
}