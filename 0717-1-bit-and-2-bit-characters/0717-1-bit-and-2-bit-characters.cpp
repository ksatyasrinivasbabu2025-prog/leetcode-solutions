class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits)
    {
        int i = 0, n = bits.size();
        while (i < n)
        {
            if (bits[i] == 1 && ++i == n - 1)
                return false;
            i++;
        }
        return true;
    }
};
