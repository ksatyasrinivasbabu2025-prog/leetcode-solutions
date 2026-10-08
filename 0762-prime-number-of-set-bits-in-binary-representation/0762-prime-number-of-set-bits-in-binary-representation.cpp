class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int ans = 0;
        for(int i = left; i <= right; i++) {
            int x = i, cnt = 0;
            while(x) {
                cnt += x & 1;
                x >>= 1;
            }
            if(cnt==2||cnt==3||cnt==5||cnt==7||
               cnt==11||cnt==13||cnt==17||cnt==19)
                ans++;
        }
        return ans;
    }
};