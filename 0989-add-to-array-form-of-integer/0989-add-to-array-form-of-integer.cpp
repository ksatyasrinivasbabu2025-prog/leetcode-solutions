class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        for (int i = num.size() - 1; i >= 0 || k; i--) {
            if (i >= 0) k += num[i];
            if (i >= 0) num[i] = k % 10;
            else num.insert(num.begin(), k % 10);
            k /= 10;
        }
        return num;
    }
};
