int missingNumber(int* nums, int numsSize) {

    for(int i=0;i<numsSize-1;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            if(nums[i]>nums[j])
            {
                int temp = nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
            }
        }
    }

    for(int k=0;k<numsSize;k++)
    {
        if(k!=nums[k])
        return k;
    }
    return numsSize;
  

    

}