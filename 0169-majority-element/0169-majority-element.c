int majorityElement(int* nums, int numsSize) {

    int indx = 0, flag;
    int arr[numsSize];
    for(int i=0;i<numsSize;i++)
    {
        flag=0;
        for(int t=0;t<indx;t++)
        { 
            if(nums[i]==arr[t])
            {
                flag=1;
                break;
            }
        }

        if(!flag)
        {
            arr[indx++]=nums[i];
        }
        else
        continue;
        
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
    return 0;
    
}