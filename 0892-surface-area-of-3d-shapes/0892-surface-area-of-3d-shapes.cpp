class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int n = grid.size();
        int area = 0;

        for (int i=0;i<n;i++) {
            for (int j=0;j<n;j++) {

                int h=grid[i][j];
                area+=h*6;   // each cube has 6 faces

                if (h>1)
                    area -= (h - 1) * 2;   // cubes stacked vertically

                if (i>0)
                    area -= 2 * min(h, grid[i - 1][j]); // front-back touch

                if (j>0)
                    area -= 2 * min(h, grid[i][j - 1]); // left-right touch
            }
        }
        return area;
    }
};
