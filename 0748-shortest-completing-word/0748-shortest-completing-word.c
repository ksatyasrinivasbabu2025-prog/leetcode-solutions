char* shortestCompletingWord(char* licensePlate, char** words, int wordsSize) {
    int hash1[26] = {0};
    int hash2[26] = {0};
    int dig = 0,min=INT_MAX;
    char *ans = (char *)malloc(16*sizeof(char));
    for(int i = 0;i<strlen(licensePlate);i++){
        if(licensePlate[i]>='A' && licensePlate[i]<='Z'){
            dig = licensePlate[i]-'A';
            hash1[dig]++;
        }
        else if(licensePlate[i]>='a' && licensePlate[i]<='z'){
            dig = licensePlate[i]-'a';
            hash1[dig]++;
        }
    }

    for(int i =0;i<wordsSize;i++){
        char *word = (char *)malloc(16*sizeof(char));
        strcpy(word,words[i]);
        int size = strlen(word);

        //setting has for word-2
        for(int j=0;j<size;j++){
            if(word[j]>='A' && word[j]<='Z'){
                dig = word[j]-'A';
                hash2[dig]++;
            }
            else if(word[j]>='a' && word[j]<='z'){
                dig = word[j]-'a';
                hash2[dig]++;
            }
        }

        //checking if it can be the possible answer
        int flag = 1;
        for(int j=0;j<26;j++){
            if(hash2[j] < hash1[j]){
                flag = 0;
                break;
            }
        }
        //it is a possible answer
        if(flag == 1){

            //the answer length is less than existing answer length
            if(size < min){
                min = size;
                strcpy(ans,word);
            }
        }

        free(word);
        memset(hash2,0,26*sizeof(int));
    }
    return ans;
}