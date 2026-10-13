/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize) {
    int *arr = malloc(sizeof(int)*(n+1));
    if(!arr) return NULL;
    *returnSize = n+1;
    
    for(int i=0;i<=n;i++)
    {
        int sum=0;
        int num=i;
        while(num)
        {
            num = num & (num-1);
            sum++;
        }

        arr[i]=sum;
    }
    return arr;
    free(arr);
}