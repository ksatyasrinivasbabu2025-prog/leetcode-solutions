/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generate(int numRows, int* returnSize, int** returnColumnSizes) {
    int** a;
    int i, j;
    *returnSize = numRows;
    
    a = (int**)malloc(numRows * sizeof(int*));
    *returnColumnSizes = (int*)malloc(numRows * sizeof(int));

    for (i = 0; i < numRows; i++) {
        (*returnColumnSizes)[i] = i + 1;
        a[i] = (int*)malloc((i + 1) * sizeof(int));
    }

  
    for (i = 0; i < numRows; i++) {
        a[i][0] = 1;
        for (j = 1; j < i; j++) {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
        a[i][i] = 1;
    }

    return a;
}