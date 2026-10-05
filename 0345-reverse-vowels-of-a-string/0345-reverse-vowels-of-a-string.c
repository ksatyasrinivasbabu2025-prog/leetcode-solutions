char* reverseVowels(char* s) {  
    int len = strlen(s);
    int j = len -1;
    char swap;
    for(int i = 0; i< j ;i++)
     {
        if(s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' ||s[i] == 'O' || s[i] == 'u'|| s[i] == 'U') 
        { 
            while(!(s[j] == 'a' || s[j] == 'A' || s[j] == 'e' || s[j] == 'E' || s[j] == 'i' || s[j] == 'I' || s[j] == 'o' ||s[j] == 'O' || s[j] == 'u'|| s[j] == 'U')){
                j--;
            }
            swap = s[i];
            s[i] = s[j];
            s[j] = swap;
            j--;
        }
    }
    return s;    
}