class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int maxVal=nums[0],minVal=nums[0];
        for(int n : nums) {
            if(n > maxVal) maxVal=n; 
            if(n < minVal) minVal=n; 
        }
        int diff=maxVal-minVal-2*k;
        return diff>0?diff:0;   
    }
};