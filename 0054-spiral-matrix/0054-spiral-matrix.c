/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {

    *returnSize = matrixSize * (*matrixColSize);

    int *arr=malloc(sizeof(int) *(*returnSize));

    int idx=0;


     int r=matrixSize, c= *matrixColSize;

     int top=0, bot=r-1, lft=0, ryt=c-1;

    while(top<=bot && lft<=ryt)
    {
        for(int i=lft; i<=ryt;i++)
        {
            arr[idx++] = matrix[top][i];
        }
        top++;

        for(int i=top; i<=bot;i++)
        {
            arr[idx++]  = matrix[i][ryt];
        }
        ryt--;

        if(top<=bot)
        {
            for(int i=ryt;i>=lft;i--)
            {
                arr[idx++]  = matrix[bot][i];
            }
            bot--;
        }

        if(lft<=ryt)
        {
            for(int i=bot;i>=top;i--)
            {
                arr[idx++]  = matrix[i][lft];
            }
            lft++;
        }
    }

    return arr;
    
}