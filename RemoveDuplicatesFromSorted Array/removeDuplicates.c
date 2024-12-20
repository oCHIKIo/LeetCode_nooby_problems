int removeDuplicates(int* nums, int numsSize)
{
    int k;
    int x;

    k = 1;
    x = 1;
    if (numsSize == 0)          // @chiki.cpp
        return 0;
    while (numsSize > x)
    {
        if(nums[x] != nums[x-1])
        {
            nums[k] = nums[x];
            k++;
        }
        x++;
    }
    return k;
}