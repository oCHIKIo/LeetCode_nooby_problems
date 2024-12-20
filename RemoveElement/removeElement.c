int removeElement(int *nums, int numsSize, int val) 
{
    int k = 0;
    int i = 0;
    while (i < numsSize) 
    {                           // @chiki.cpp
        if (nums[i] != val) 
        {
            nums[k] = nums[i];
            k++;
        }
        i++;
    }
    return k;
}
