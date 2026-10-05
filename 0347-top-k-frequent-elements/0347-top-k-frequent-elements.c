int* topKFrequent(int* nums, int numsSize, int k, int* returnSize)
{
    if (numsSize == k) {
        *returnSize = k;
        return nums;
    }
    int freq[10000] = {0};
    for (int i = 0; i < numsSize; i++)
        freq[nums[i] + 1000]++;

    int *res = malloc(sizeof(int) * k);
    int prev = INT_MAX;
    for (int i = 0; i < k; i++) {
        int max = INT_MIN;
        int idx = 0;
        for (int j = 0; j < 10000; j++) {
            if (max < freq[j] && freq[j] <= prev) {
                int b = 0;
                for (int k = 0; k < i; k++)
                    if (res[k] == j - 1000)
                        b = 1;
                if (b)
                    continue;
                max = freq[j];
                res[i] = j - 1000;
            } 
        }
        prev = max;
    }
    
   *returnSize = k;
    return res;
}