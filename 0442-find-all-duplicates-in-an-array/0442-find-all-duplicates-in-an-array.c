/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* findDuplicates(int* nums, int numsSize, int* returnSize) 
{
    int *arr = malloc(sizeof(int)*numsSize);
    int indx=0;

    for(int i=0;i<numsSize;i++)
    {
        int a = abs(nums[i]);
        int n = a-1 ;
        if(nums[n]<0)
        arr[indx++]=a;
        else
        nums[n] = -(nums[n]);

    }

    *returnSize=indx;
    return arr;
}