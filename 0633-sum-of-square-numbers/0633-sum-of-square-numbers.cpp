class Solution {
public:
    bool judgeSquareSum(int c) {
        long long a=0,b=sqrt(c);
        while(a<=b){
            long long s=a*a+b*b;
            if(s==c) return 1;
            if(s>c) b--;
            else a++;
        }
        return 0;
    }
};