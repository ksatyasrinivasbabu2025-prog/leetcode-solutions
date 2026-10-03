class Solution {
public:
    void kssb(int idx, int tgt, vector<int>& arr, vector<int>& temp, vector<vector<int>>& ans){
        if(tgt == 0){
            ans.push_back(temp);
            return;
        }

        for(int i = idx; i < arr.size(); i++){
            if(i > idx && arr[i] == arr[i-1]) continue;

            if(arr[i] > tgt) break;

            temp.push_back(arr[i]);
            kssb(i + 1, tgt - arr[i], arr, temp, ans);
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& arr, int tgt) {
        sort(arr.begin(), arr.end());
        vector<vector<int>> ans;
        vector<int> temp;

        kssb(0, tgt, arr, temp, ans);
        return ans;
    }
};