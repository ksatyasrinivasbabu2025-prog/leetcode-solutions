bool isPerfectSquare(int num) {
    long long int i;
    if(num==1 || num==0)
    return true;
    for(i=1;i*i<=num;i++)
    {
        if(i*i==num)
       return true;
    }
    return false;
}