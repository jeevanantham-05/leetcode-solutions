int singleNumber(int* nums, int numsSize) {
    int flag=0;
    for(int i=0;i<numsSize;i++)
    {
        flag=0;
        for(int j=0;j<numsSize;j++)
        {
            if(i==j) continue;

            if(nums[i]==nums[j])
            {
                flag=1;
                break;
            }
        }
        if(!flag) return nums[i];
    }
    return 0;
    
}