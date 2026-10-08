class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        vector<int> ans(2,0);
        int n = s.size();
        if(n==0){
            return ans;
        }
        int sum = 0;
        ans[0] = 1;
        for(int i=0;i<n;i++){
            int temp = widths[s[i] - 'a'];
            if(temp + sum <= 100){
                sum += temp;
            }
            else{
                ans[0]++;
                sum = temp;
            }
        }
        ans[1] = sum;
        return ans;
    }
};