bool checkPerfectNumber(int num) {
    int i,sum=0;
    if(num==1 || num<0)
    return false;
    for(i=1;i*i<=num;i++)
    {
        if(num%i==0)
        sum=sum+(i)+(num/i);
    }
    sum=sum-num;
    if(sum==num)
    return true;
    else
    return false;
}