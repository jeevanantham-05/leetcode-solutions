int missingNumber(int* nums, int numsSize) {
    int arr[numsSize+1];
    memset(arr,0,sizeof(arr));

    for(int i=0;i<=numsSize;i++)
    {
        for(int j=0;j<numsSize;j++)
        {
            if(i==nums[j])
            arr[i]=nums[j];
        }
     
    }

    for(int k=1;k<=numsSize;k++)
    {
        if(arr[k]==0)
        return k;
    }
    return 0;
}