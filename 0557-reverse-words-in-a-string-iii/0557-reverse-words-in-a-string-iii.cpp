class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();        
        for(int i=0;i<n;i++) {
            int j=i;
            
            // find end of word
            while(j < n && s[j] != ' ') {
                j++;
            }
            
            // reverse word
            int l=i, r=j-1;
            while(l < r) {
                swap(s[l], s[r]);
                l++;
                r--;
            }
            
            i = j; // move to next word
        }
        
        return s;
    }
};