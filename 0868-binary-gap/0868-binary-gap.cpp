class Solution {
public:
    int binaryGap(int n) {
        int last = -1;
        int pos = 0;
        int ans = 0;

        while(n > 0) {
            if(n % 2 == 1) {
                if(last != -1) {
                    int diff = pos - last;
                    if(diff > ans)
                        ans = diff;
                }
                last = pos;
            }
            pos++;
            n = n / 2;
        }
        return ans;
    }
};