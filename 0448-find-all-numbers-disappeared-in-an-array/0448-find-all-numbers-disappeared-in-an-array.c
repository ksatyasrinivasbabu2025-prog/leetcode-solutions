/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {

    int i,f,j,k;
    int n = numsSize+1;
    int *num = (int*) calloc(n, sizeof(int));
    int *res = (int*) calloc(n, sizeof(int));

    for(i=0;i<numsSize;i++)
    num[nums[i]] = 1;
    j=0;
    for(i=1;i<n;i++)
    if(num[i] == 0)
    res[j++] = i;
    *returnSize = j;
    return res;  
}