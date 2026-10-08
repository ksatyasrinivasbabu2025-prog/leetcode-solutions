class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for (auto &r : image) {
            reverse(r.begin(), r.end());
            for (int &x : r) x ^= 1;
        }
        return image;
    }
};
