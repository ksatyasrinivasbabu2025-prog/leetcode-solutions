class Solution {
public:
    int longestStrChain(vector<string>& w) {
        sort(w.begin(),w.end(),[](string &a,string &b){return a.size()<b.size();});
        unordered_map<string,int> dp;
        int ans=1;
        for(auto &s:w){
            dp[s]=1;
            for(int i=0;i<s.size();i++){
                string t=s.substr(0,i)+s.substr(i+1);
                dp[s]=max(dp[s],dp[t]+1);
            }
            ans=max(ans,dp[s]);
        }
        return ans;
    }
};