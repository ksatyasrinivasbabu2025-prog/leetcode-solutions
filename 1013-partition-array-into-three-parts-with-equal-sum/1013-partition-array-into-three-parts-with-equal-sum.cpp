#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int total = accumulate(arr.begin(), arr.end(), 0);
        if (total % 3) return false;
        int part = total / 3, sum = 0, cnt = 0;
        for (int x : arr) {
            sum += x;
            if (sum == part) sum = 0, cnt++;
        }
        return cnt >= 3;
    }
};