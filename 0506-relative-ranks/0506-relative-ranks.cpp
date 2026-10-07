class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<int> temp = score;
        sort(temp.begin(), temp.end(), greater<int>());

        unordered_map<int, string> rank;

        for (int i = 0; i < n; i++) {
            if (i == 0)
                rank[temp[i]] = "Gold Medal";
            else if (i == 1)
                rank[temp[i]] = "Silver Medal";
            else if (i == 2)
                rank[temp[i]] = "Bronze Medal";
            else
                rank[temp[i]] = to_string(i+1);
        }

       
        vector<string> ans;
        for (int i=0;i<n;i++) {
            ans.push_back(rank[score[i]]);
        }
        return ans;
    }
};