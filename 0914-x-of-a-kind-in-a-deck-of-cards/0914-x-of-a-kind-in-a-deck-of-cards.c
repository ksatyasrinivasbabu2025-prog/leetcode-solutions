bool hasGroupsSizeX(int* deck, int deckSize) {
     int* hash = (int*) calloc(10000, sizeof(int));
    int count=-1;
    for(int i=0;i<deckSize;i++){
        hash[deck[i]]++;
    }
    
    for(int i=0;i<10000;i++){
        if(hash[i]>0){
            if(count==-1){
                count =hash[i];
            }
            else{
                int a=count, b=hash[i];
                while(b!=0){
                    int temp=b;
                    b=a%b;
                    a=temp;
                }
                count =a;
            }
        }
    }
    free(hash);
    if(count>=2){
        return true;
    }
    return false;
}