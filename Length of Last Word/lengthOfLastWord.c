int lengthOfLastWord(char *s) 
{
    int length;
    int i;

    length = 0;         // @chiki.cpp
    i = strlen(s) - 1; 
    while (i >= 0 && s[i] == ' ') 
    {
        i--;
    }
    while (i >= 0 && s[i] != ' ') 
    {
        length++;
        i--;
    }
    return length;
}