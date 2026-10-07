/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *arr = malloc(sizeof(int)*2);
    if(!arr) return NULL;

    int indx=0;
    for(int i=0;i<numsSize-1;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            if(nums[i]+nums[j] == target)
            {
                arr[indx]=i;
                arr[++indx] = j;
                *returnSize = 2;
                return arr;
            }
        }
    }

    free(arr);
    *returnSize = 0;
    return NULL;
}