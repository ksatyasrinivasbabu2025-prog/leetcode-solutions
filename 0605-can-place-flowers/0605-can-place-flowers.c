bool canPlaceFlowers(int* bed, int size, int n) {
    int c=0;
    for(int i=0;i<size;i++){
        if(bed[i]==0&&(i==0||bed[i-1]==0)&&(i==size-1||bed[i+1]==0)){
        c++;
        bed[i]=1;}
    }
    if(c>=n)
    return true;
    else
    return false;
}