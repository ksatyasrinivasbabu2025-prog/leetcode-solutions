class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;

        int n = s.size();
        int m = p.size();

        if(n < m) return ans;

        for(int i = 0; i <= n - m; i++){
            int count[26] = {0};

            for(int j = 0; j < m; j++){
                count[p[j] - 'a']++;
            }

            for(int j = 0; j < m; j++){
                count[s[i + j] - 'a']--;
            }

            bool ok = true;
            for(int k = 0; k < 26; k++){
                if(count[k] != 0){
                    ok = false;
                    break;
                }
            }

            if(ok)
                ans.push_back(i);
        }

        return ans;
    }
};