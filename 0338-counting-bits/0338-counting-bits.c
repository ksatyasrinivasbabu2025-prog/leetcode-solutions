/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize) {
    int*arr=(int*)malloc(sizeof(int)*(n+1));
    int count;
    int b;
    int index=0;
    int r;
    for(int i=0;i<=n;i++){
        count=0;
        b=i;
        while(b!=0){
            r=b%2;
            if(r==1) count++;
            b=b/2;
        }
        arr[index++]=count;   
    }
    *returnSize=n+1;
    return arr;
}