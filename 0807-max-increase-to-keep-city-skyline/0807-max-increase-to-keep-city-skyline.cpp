class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        vector<int>mRow;
        vector<int>mCol;
        int y = 0;

        for (int i = 0; i < grid.size(); ++i) {
            for (int m = 0; m < grid.size(); ++m) {
                y = max(y, grid[i][m]);
            }
            mRow.push_back(y); 
            y = 0;
        }

        int x = 0;
        for (int i = 0; i < grid.size(); ++i) {
            for (int k = 0; k < grid.size(); ++k) {
                x = max(x, grid[k][i]);
            }
            mCol.push_back(x);
            x = 0;
        }

        int ahuy = 0;
        for (int i = 0; i < grid.size(); ++i) {

            for (int j = 0; j < grid.size(); ++j) {
               

                ahuy += min(mCol[j], mRow[i]) - grid[i][j];
            }

        }
        return ahuy;
    }
};