/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
    
    int i, j;
    int *nIndeies = (int *)malloc(2 * sizeof(int));//malloc returned array
    
    //main loop :  O(N * N)
    
    for(i = 0; i < numsSize; i++)
    {
        for(j = i + 1; j < numsSize; j++)
        {
            if(nums[j] == target - nums[i])
            {
                nIndeies[0] = i;
                nIndeies[1] = j;
                return nIndeies;
            }
        }
    }
    return nIndeies;
}
