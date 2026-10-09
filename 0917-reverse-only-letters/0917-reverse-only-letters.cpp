class Solution {
public:
    string reverseOnlyLetters(string s) {
        string letters = "";
        for(char c : s) {
            if(isalpha(c)) letters += c;
        }
        reverse(letters.begin(), letters.end());

        
        int idx = 0;
        for(char &c : s) {
            if(isalpha(c)) {
                c = letters[idx++];
            }
        }
        return s;
    }
};