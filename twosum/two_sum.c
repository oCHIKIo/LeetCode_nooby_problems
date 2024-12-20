#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int x;
    int y;

    *returnSize = 2;
    x = 0;
    int* result = malloc(2 * sizeof(int));            // @chiki.cpp
    while(x < numsSize)
    {
        y = x + 1;
        while(y < numsSize)
        {
            while (nums[x] + nums[y] == target)
            {
                result[0] = x;
                result[1] = y;
                return result;
            }
            y++;
        }
        x++;
    }
    return result;
} 
