bool isAnagram(char* s, char* t) {
    int len_S =strlen(s);
    int len_T = strlen(t);
    int freq_S[26] = {};
    int freq_T[26] = {};
    for(int i= 0;i < len_S; i++){
        freq_S[s[i] - 'a']++;
    }
    for(int i= 0;i < len_T; i++){
        freq_T[t[i] - 'a']++;
    }
    for(int i = 0; i <26 ;i++){
        if(freq_S[i] != freq_T[i]){
            return false;
        }
    }
    return true;
}