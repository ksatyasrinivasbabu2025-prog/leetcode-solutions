char  findTheDifference(char* s, char* t) {
    int l=strlen(s);
    int res=t[l];
    for(int i=0;i<l;i++){
        res^=(t[i]^s[i]);
    }
    return res;
}