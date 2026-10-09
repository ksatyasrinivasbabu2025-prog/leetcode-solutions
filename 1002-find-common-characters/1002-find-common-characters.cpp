#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> cnt(26, 100);
        for (auto &w : words) {
            vector<int> cur(26);
            for (char c : w) cur[c - 'a']++;
            for (int i = 0; i < 26; i++) cnt[i] = min(cnt[i], cur[i]);
        }
        vector<string> ans;
        for (int i = 0; i < 26; i++)
            while (cnt[i]--) ans.push_back(string(1, 'a' + i));
        return ans;
    }
};
