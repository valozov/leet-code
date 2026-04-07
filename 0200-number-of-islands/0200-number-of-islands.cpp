class Solution {
public:
    bool check(vector<vector<char>>& grid, int i, int j) {
        if (i<0 || j<0 || i >= grid.size() || j >= grid[0].size()) return false;
        else if (grid[i][j] == '1') {
            grid[i][j] = '0';
            check(grid, i, j + 1);
            check(grid, i, j - 1);
            check(grid, i + 1, j);
            check(grid, i - 1, j);
            return true;
        }
        return false;
    }
    int numIslands(vector<vector<char>>& grid) {
        int ans = 0;
        for (auto i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[0].size(); ++j) {
                if (grid[i][j] == '1'){
                    check(grid, i, j);
                    ++ans;
                    }
            }
        }
        return ans;
    }
};