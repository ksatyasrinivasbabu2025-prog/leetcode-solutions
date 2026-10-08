int numRabbits(int* answers, int answersSize) {
    int freq[1000] = {0}, i=0, total=0, temp=0;
    for(i=0;i<answersSize;i++){
        freq[answers[i]]++;
    }
    
    for(i=0;i<1000;i++){
        if(freq[i] == 0){
            continue;
        }
        
        temp = (((freq[i] - 1) / (i + 1)) + 1) * (i + 1);
        
        total += temp;
        
    }
    return total;  
}