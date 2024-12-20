int strStr(char* haystack, char* needle) 
{
    int counter = 0;
    int bounter = 0;

    if (needle[bounter] == '\0')
        return 0;
    while (haystack[counter])           // @chiki.cpp
    {                               
        if (haystack[counter] == needle[bounter]) 
        {
            bounter++;
            if (needle[bounter] == '\0')
                return counter - bounter + 1;
        } 
        else 
        {
            counter = counter - bounter;
            bounter = 0;
        }
        counter++;
    }
    return -1;
}
