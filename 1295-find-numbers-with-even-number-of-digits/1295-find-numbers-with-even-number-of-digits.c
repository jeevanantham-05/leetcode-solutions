int digit(int num)
{
    int sum=0;
    while(num)
    {
        num /= 10;
        sum++;
    }
    
    if(sum%2==0)
    return 1;
    else 
    return 0;
}

int findNumbers(int* nums, int numsSize) {
    int count =0, flag=0;
    for(int i=0;i<numsSize;i++)
    {
        flag=0;

        if(nums[i]>9 && nums[i]<99)
        count += 1;
        else
        flag = digit(nums[i]);

        if(flag)
        count +=1;
    }

    return count;
    
}