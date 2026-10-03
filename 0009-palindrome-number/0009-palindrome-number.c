bool isPalindrome(int x) {
  long long int d,s=0,t=x;
    while(x>0)
    {
        d=x%10;
        x=x/10;
        s=s*10+d;
    }
    if(s==t)
    return true;
    return false;
}