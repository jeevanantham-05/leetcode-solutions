int majorityElement(int* nums, int numsSize) {

    int flag;

    for(int i=0;i<numsSize;i++)
    {
        flag=0;
        for(int t=i-1;t>=0;t--)
        { 
            if(nums[i]==nums[t])
            {
                flag=1;
                break;
            }
        }

        if(flag)
        {
            continue;
        }
        else
        {
        
            int j=0,c=0;
            while(j<numsSize)
            {
                if(nums[i] == nums[j])
                c++;
                j++;
            }

            if(c>(numsSize/2))
            return nums[i];
        }

    }
    return 0;
    
}