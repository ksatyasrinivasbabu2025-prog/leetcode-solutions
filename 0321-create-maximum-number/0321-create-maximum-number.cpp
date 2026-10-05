#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<int> maxNumber(std::vector<int>& nums1, std::vector<int>& nums2, int k) {
        std::vector<int> bestResult;

        // Try all ways to split k between both arrays
        for (int i = 0; i <= k; ++i) {
            if (i <= nums1.size() && (k - i) <= nums2.size()) {
                auto sub1 = getBest(nums1, i);
                auto sub2 = getBest(nums2, k - i);
                auto combined = merge(sub1, sub2);
                
                // Keep the absolute largest array
                if (combined > bestResult) {
                    bestResult = combined;
                }
            }
        }
        return bestResult;
    }

private:
    // Step 1: Get the largest sequence of a given length
    std::vector<int> getBest(const std::vector<int>& nums, int len) {
        std::vector<int> result;
        int canDrop = nums.size() - len;
        
        for (int digit : nums) {
            while (canDrop > 0 && !result.empty() && result.back() < digit) {
                result.pop_back(); // Kick out smaller digit
                canDrop--;
            }
            result.push_back(digit);
        }
        result.resize(len);
        return result;
    }

    // Step 2: Merge them by looking ahead on ties
    std::vector<int> merge(std::vector<int>& sub1, std::vector<int>& sub2) {
        std::vector<int> result;
        auto i = sub1.begin(), j = sub2.begin();
        
        while (i != sub1.end() || j != sub2.end()) {
            // std::lexicographical_compare handles look-ahead automatically
            if (std::lexicographical_compare(i, sub1.end(), j, sub2.end())) {
                result.push_back(*j++);
            } else {
                result.push_back(*i++);
            }
        }
        return result;
    }
};
