class Solution {
public:
    bool canTransform(string start, string result) {
        const int n = start.length();
        for (int i = 0, j = 0; i < n || j < n; ++i, ++j) {
            while (i < n && start[i] == 'X') ++i;
            while (j < n && result[j] == 'X') ++j;
            if (i == n && j == n) return true;
            if (i == n || j == n) return false;
            if (start[i] != result[j]) return false;
            if ((start[i] == 'L' && i < j) || (start[i] == 'R' && i > j)) return false;
        }
        return true;
    }
};