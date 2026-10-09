class Solution {
public:
    int subarraysDivByK(std::vector<int>& nums, int k) {
        std::vector<int> freq(k, 0);
        freq[0] = 1;

        int sum = 0;
        int count = 0;

        for (int x : nums) {
            sum += x;

            int r = sum % k;
            if (r < 0)
                r += k;

            count += freq[r];
            freq[r]++;
        }

        return count;
    }
};