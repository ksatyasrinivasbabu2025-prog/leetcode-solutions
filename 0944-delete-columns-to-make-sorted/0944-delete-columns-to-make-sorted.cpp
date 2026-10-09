class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int deletecount=0;
        int rows = strs.size();
        int column = strs[0].size();
        
        for(int j=0; j<column; j++)
        {
            for(int i=0; i<rows-1; i++)
            {
                if(strs[i][j]>strs[i+1][j])
                {
                    deletecount++;
                    break;
                }
            }
        }
        return deletecount;
    }
};