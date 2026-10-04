bool isHappy(int n) { 
     int d,s=0;
 do
{
s=0;
   while(n>0)
    {
        d=n%10;
        n=n/10;
        s=s+(d*d);
    }
n=s;
}                                                                                                              
while(n>9);

    if(s==1 || s==7) return true;
    else return false;
}