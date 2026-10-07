int cmp(void const *a,void const *b){
    return *(int *)a - *(int *)b;
}
int maxOfThree(int a,int b){
    int max = a > b ? a : b;
    //max = max > c ? max : c;
    return max;
}
int maximumProduct(int* nums, int numsSize) {
    qsort(nums,numsSize,sizeof(int),cmp);
    int max1 = nums[numsSize-1] * nums[numsSize-2] * nums[numsSize-3];
    int max2 = nums[0] * nums[1] * nums[numsSize-1];
    //int max3 = nums[0] * nums[1] * nums[2];
    int max = maxOfThree(max1,max2);
    return max;
}