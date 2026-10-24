int search(int* nums, int numsSize, int target) {
    int low=0, high = numsSize-1, mid;

    while(low<=high)
    {
        mid = (low+high)/2;

        if(target > nums[mid])
        {
            low = (mid +1);
        }
        else if(target < nums[mid])
        {
            high = (mid -1);
        }
        else if(nums[mid] == target)
        {
            return mid;
        }
    }

    return -1;
    
}