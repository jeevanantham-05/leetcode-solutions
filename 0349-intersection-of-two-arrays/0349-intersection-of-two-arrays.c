/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int *arr = malloc(sizeof(int) * (nums1Size+nums2Size));
    if(!arr) return NULL;
    int indx=0;

    for(int i=0;i<nums1Size;i++)
    {
        for(int j=0;j<nums2Size;j++)
        {
            if(nums1[i]==nums2[j])
            {
                int flag=0;
                for(int k=0;k<indx;k++)
                {
                    if(nums1[i]==arr[k])
                    {
                        flag=1;
                        break;
                    }
                }
                if(!flag)
                {
                    arr[indx++]=nums1[i];
                    break;
                }
                
            }

        }
    }
    *returnSize = indx;
    return arr;
    free(arr);

    
}