
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** transpose(int** A, int ASize, int* AColSize, int* returnSize, int** returnColumnSizes)
{
    int i,j,x,y,temp;
    x = ASize;
    y = *AColSize;
    int **B = malloc(sizeof(int *[y]));
    *returnColumnSizes = malloc(sizeof(int)* y);
    *returnSize = y;
    for(i=0;i<y;i++)
    {
        B[i] = malloc(sizeof(int)* x);
        (*returnColumnSizes)[i] = x;
    }
    
    for(i=0;i<y;i++)
    {
        for(j=0;j<x;j++)
        {
            B[i][j] = A[j][i];    
        }
    }
    return B;
    
}