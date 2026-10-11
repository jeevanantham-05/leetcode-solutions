int searchInsert(int* nums, int numsSize, int target) {

    for(int i=0;i<numsSize;i++)
    {
        if(nums[i] == target)
        return i;
    }

    int i;
    for(i=0;i<numsSize-1;i++)
    {
        if(target > nums[i] && target < nums[i+1])
        return i+1;
    }
    
    if(target==0 ||target<nums[0])
    {
        return 0;
    }
    else if(target > nums[numsSize-1])
    {
        return numsSize;
    }
    else
    return 0;
}