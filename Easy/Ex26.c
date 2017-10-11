int removeDuplicates(int* nums, int numsSize) {
    if(numsSize <= 1)
        return numsSize;
    int i = 0;
    int j = 0;
    int len = numsSize;
    int temp = 0;
    for(i = 0; i < numsSize - 1; i++)
    {
        if(nums[i] == nums[i + 1])
        {
            len--;   
        }
        else
        {
            j++;
            nums[j] = nums[i + 1];
        }
    }
    return len;
}
