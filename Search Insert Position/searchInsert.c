int searchInsert(int* nums, int numsSize, int target) 
{
    int x;
    int y;
    int z;

    x = 0;              // @chiki.cpp
    y = numsSize - 1;
    while (x <= y)
    {
        z = x + (y - x) / 2;
        if (nums[z] == target)
            return z;
        else if (nums[z] < target)
            x = z + 1;
        else 
            y = z - 1; 
    }
    return x;
}