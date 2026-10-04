class Solution {
public:
    string reverseWords(string s) {
        string r;
        
        for(int i=s.size()-1;i>=0;){
            while(i>=0 && s[i]==32) i--;
            if(i<0) break;

            int j=i;
            while(j>=0 && s[j]!=32) j--;

            if(r.size()) r+=32;
            r+=s.substr(j+1,i-j);

            i=j;
        }
        return r;
    }
};