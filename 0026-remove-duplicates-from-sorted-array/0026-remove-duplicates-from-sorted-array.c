int removeDuplicates(int* nums, int numsSize) 
{
    int k=0;
    nums[k++]=nums[0];



//remove duplicate
    for(int i=1; i<numsSize; i++)
    {
        int flag=0;
        for(int j=0;j<i;j++)
        {
            if(nums[i] == nums[j])
            {
                flag=1;
                break;
            }
        }
        if(!flag)
        nums[k++] = nums[i];      
    }
    
    return k;
}