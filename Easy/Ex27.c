int removeElement(int* nums, int numsSize, int val) {
    
    int * buf = (int *)malloc(numsSize * sizeof(int));
    int i, j;
    j = 0;
    
    for(i = 0; i < numsSize; i++)
    {
        if(nums[i] != val)
        {
            buf[j] = nums[i];
            j++;
        }
    }
    
    int len = j;
    j--;
    
    while(j >= 0)
    {
        nums[j] = buf[j];
        j--;
    }
    
    free(buf);
    return len;
    
}
