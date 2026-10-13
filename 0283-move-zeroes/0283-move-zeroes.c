void moveZeroes(int* nums, int numsSize) {
    int indx=0;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]!=0)
        {
            nums[indx++]=nums[i];
        }

    }
    
    while(indx<numsSize){
        nums[indx++]=0;
    }
    
}