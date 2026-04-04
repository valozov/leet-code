class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty())
            return false;
        int rows = matrix.size();
        int cols = matrix[0].size();

        int up = 0, down = rows - 1;
        int row = -1;

        while (up <= down) {
            int mid = up + (down - up) / 2;
            if (target < matrix[mid][0]) {
                down = mid - 1;
            } else if (target > matrix[mid][cols - 1]) {
                up = mid + 1;
            } else {
                row = mid;
                break;
            }
        }
        if (row == -1)
            return false;

        int left = 0, right = cols - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (matrix[row][mid] == target)
                return true;
            else if (matrix[row][mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return false;
    }
};