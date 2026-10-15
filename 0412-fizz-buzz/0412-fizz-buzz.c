/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    char **arr = malloc(sizeof(char *)*n);
    if(!arr) return NULL;

    for(int i=1;i<=n;i++)
    {
        arr[i-1] = malloc(20);
        if(i%5==0 && i%3==0)
        {
            strcpy(arr[i-1],"FizzBuzz");

        }
        else if(i%3==0)
        {
            strcpy(arr[i-1],"Fizz");
        }
        else if(i%5==0)
        {
            strcpy(arr[i-1],"Buzz");
        }
        else
        {
            sprintf(arr[i-1],"%d",i);
        }
    }
    *returnSize = n;

    return arr;
    free(arr);
    
}