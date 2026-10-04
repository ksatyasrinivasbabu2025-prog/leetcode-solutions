int titleToNumber(char* columnTitle) {
    int i=0,result=0;
    while(columnTitle[i]!='\0'){
        result*=26;
        result+=(columnTitle[i]-'A'+1);
        i++;
    }
    return result;
}