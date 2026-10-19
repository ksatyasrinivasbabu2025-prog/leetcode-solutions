//C Code
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int cmp(const void* a, const void* b) { 
    return *(int*)a - *(int*)b;
}

int* targetIndices(int* nums, int numsSize, int target, int* returnSize) {
    int* arr = (int*)calloc(sizeof(int), 101);
    *returnSize = 0;

    qsort(nums, numsSize, sizeof(int), cmp);
    
    for (int i = 0; i < numsSize; i++)
        if (nums[i] == target)
            arr[(*returnSize)++] = i;
    return arr;
}