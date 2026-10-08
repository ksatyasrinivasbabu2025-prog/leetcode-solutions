
int* selfDividingNumbers(int left, int right, int* returnSize){
    int tmp, *a, r=1, count=0;
    a = (int*)calloc(right-left,sizeof(int));
    for(int flag=1;left<=right;left++, r=1){
        tmp = left;
        r=tmp%10;
        while(tmp!=0){
            if(r==0) flag = 0;
            else
                if(left%r!=0) flag = 0;
            tmp/=10;
            r=tmp%10;
        }
        if(flag++)    a[count++]=left;
    }
    *returnSize= count;
    return a;
}