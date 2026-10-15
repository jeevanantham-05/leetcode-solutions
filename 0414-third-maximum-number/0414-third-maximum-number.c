int thirdMax(int* nums, int numsSize) {
    int max=nums[0], min=nums[0];
    

    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]>max)
        max=nums[i];

        if(nums[i]<min)
        min = nums[i];
    }

    int flag=0, sec_max=0, trd_max=0;

    int min2=min;

    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]<max && nums[i]>min)
        {
            min=nums[i];
            sec_max=nums[i];
            flag=1;
        }
    }
    if(!flag) return max;

    flag=0;
    
    min=min2;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]<sec_max && nums[i]>min)
        {
            flag=1;
            min=nums[i];
            trd_max=nums[i];
        }
    }

    if(!flag) return min;

    return trd_max;



   



}