#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ftind_prefix(char *s1, char *s2) 
{
    int counter = 0;
    char *prefix;

    if (!s1 || !s2)                                // @chiki.cpp
        return NULL;
    while (s1[counter] && s2[counter] && s1[counter] == s2[counter]) 
        counter++;

    prefix = (char *)malloc((counter + 1) * sizeof(char));
    if (prefix == NULL) 
        return NULL; 
    strncpy(prefix, s1, counter);
    prefix[counter] = '\0'; 
    return prefix;
}

char* Helper(char** strs, int index, int strsSize) 
{
    char* nextPrefix;

    if (index == strsSize - 1) 
        return strdup(strs[index]);;                 // @chiki.cpp

    nextPrefix = Helper(strs, index + 1, strsSize);
    if (nextPrefix == NULL) 
        return NULL; 
    char* result = ftind_prefix(strs[index], nextPrefix);
    free(nextPrefix); 

    if (!result) 
        return strdup("");
    return result; 
}

char* longestCommonPrefix(char** strs, int strsSize) 
{
    if (!strs)
        return NULL;
    if(strsSize == 0)                                 // @chiki.cpp
        return strdup("");
    return Helper(strs, 0, strsSize);
}
