class Solution {
public:
    int day(string s) {
        int d[] = {31,28,31,30,31,30,31,31,30,31,30,31};
        int m = (s[0]-'0')*10 + (s[1]-'0');
        int dd = (s[3]-'0')*10 + (s[4]-'0');
        int sum = dd;
        for(int i=0;i<m-1;i++) sum += d[i];
        return sum;
    }

    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int a = day(arriveAlice);
        int b = day(leaveAlice);
        int c = day(arriveBob);
        int d = day(leaveBob);

        int l = max(a,c);
        int r = min(b,d);

        if(l>r) return 0;
        return r-l+1;
    }
};