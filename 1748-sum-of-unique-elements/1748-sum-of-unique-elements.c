int sumOfUnique(int* nums, int numsSize) {
    unsigned long int sum=0;
    for(int i=0;i<numsSize;i++)
    {
        short int flag=0;
        for(int j=0;j<numsSize;j++)
        {
            if(i==j) continue;

            if(nums[i] == nums[j])
            {
                flag=1;
                break;
            }

        }
        if(!flag)
        sum = sum + nums[i];
    }

    return sum;
    
}