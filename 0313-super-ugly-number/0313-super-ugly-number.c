int nthSuperUglyNumber(int n, int* primes, int primesSize) {
    if(n==1) 
        return n;
    long long ugnum[n];
    int primein[primesSize];
    long long res[primesSize];
    long long c=1;
    for(int i=0;i<primesSize;i++){
        res[i]=1; 
        primein[i]=0;
    }
    for(int i=0;i<n;i++) {
        ugnum[i]=c;
        c=LLONG_MAX;
        for(int j=0;j<primesSize;j++) {
            if(res[j]==ugnum[i]) {
                res[j]=(long long)ugnum[primein[j]]*primes[j];
                primein[j]++;
            }
            c=res[j]<c?res[j]:c;
        }
    }
    return (int)ugnum[n-1];
}