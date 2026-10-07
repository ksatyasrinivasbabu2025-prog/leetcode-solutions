class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(), pairs.end(),
             [](vector<int>& a, vector<int>& b) {
                 return a[1] < b[1];
             });

        int chainLength = 0;
        int lastRight = -1000000000;

        for (auto& pair : pairs) {
            if (pair[0] > lastRight) {
                chainLength++;
                lastRight = pair[1];
            }
        }

        return chainLength;
    }
};
