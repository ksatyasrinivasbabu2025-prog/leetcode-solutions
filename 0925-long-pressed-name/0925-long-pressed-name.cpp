class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i = 0;
        for (char c : typed)
            if (i < name.size() && name[i] == c) i++;
            else if (i == 0 || name[i-1] != c) return false;
        return i == name.size();
    }
};