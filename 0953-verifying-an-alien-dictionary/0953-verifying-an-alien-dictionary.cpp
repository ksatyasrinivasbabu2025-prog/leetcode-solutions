class Solution {
public:
    bool isAlienSorted(vector<string>& w, string o) {
        int m[26];
        for (int i = 0; i < 26; i++) m[o[i] - 'a'] = i;

        for (int i = 0; i + 1 < w.size(); i++) {
            int j = 0;
            while (j < w[i].size() && j < w[i+1].size() && w[i][j] == w[i+1][j]) j++;
            if (j < w[i].size() && j < w[i+1].size() && m[w[i][j]-'a'] > m[w[i+1][j]-'a']) return false;
            if (j == w[i+1].size() && j < w[i].size()) return false;
        }
        return true;
    }
};
