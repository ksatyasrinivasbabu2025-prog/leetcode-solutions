int dominantIndex(int* nums, int numsSize) {
    int max = 0, index;
    for (int i = 0; i < numsSize; i++) {
        if (max < nums[i]) {
            max = nums[i];
            index = i;
        }
    }
    for (int i = 0; i < numsSize; i++) {
        if (max < nums[i] * 2 && i != index)
            return -1;
    }
    return index;
}