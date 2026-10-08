class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        long long maximum = 0;
        for(int i = shifts.size() - 1; i >= 0; i--) {
            maximum = maximum + shifts[i];
            s[i] = 'a' + (s[i]-'a'+maximum) % 26;
        }return s;
    }
};