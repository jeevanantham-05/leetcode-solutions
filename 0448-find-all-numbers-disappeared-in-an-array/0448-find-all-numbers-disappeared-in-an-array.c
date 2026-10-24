/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    int *arr = malloc(sizeof(int)*(numsSize+1));
    
    memset(arr,0,sizeof(int)*(numsSize+1));

    for(int i=0;i<numsSize;i++)
    {
        arr[nums[i]] = nums[i];
    }



    int *arr2 = malloc(sizeof(int)*numsSize);
    int indx=0;

    for(int i=1;i<=numsSize;i++)
    {
        
        if(arr[i]==0)
        {
            arr2[indx++] = i;
        }
    }

    *returnSize = indx;

    return arr2;
    
}