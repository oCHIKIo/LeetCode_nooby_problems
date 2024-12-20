#include <stdio.h>

void damn(int* digits, int digitSize)
{
    if (digitSize == 0)
        return ;                    // @chiki.cpp
    digits[digitSize - 1]++;
    if (digits[digitSize - 1] == 10)
    {
        digits[digitSize - 1] = 0 ;
        damn(digits, digitSize - 1);
    }
}
int* plusOne(int* digits, int digitsSize, int* returnSize)
{
    int *result;

    if (digitsSize == 0)            // @chiki.cpp
        return NULL;
    result = (int *)malloc(sizeof(int) * (digitsSize + 1));
    if(result == NULL)
        return NULL;
    damn(digits, digitsSize);
    if (digits[0] == 0) 
    {
        result[0] = 1;              
        *returnSize = digitsSize + 1;   
        for (int i = 1; i < *returnSize; i++)
            result[i] = digits[i - 1]; 
    }
    else 
    {
        *returnSize = digitsSize; 
        for (int i = 0; i < digitsSize; i++)
            result[i] = digits[i]; 
    }
    return result; 
}
