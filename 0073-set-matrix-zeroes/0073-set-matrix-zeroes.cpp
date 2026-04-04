class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
    unordered_set <int> set1;
    unordered_set <int> set2;
    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < matrix[0].size(); ++j) {
            if (matrix[i][j] == 0) {
                set1.insert(i);
                set2.insert(j);
                }
            }
        }
    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < matrix[0].size(); ++j) {
            if(set1.contains(i) || set2.contains(j)) matrix[i][j] = 0;
            }
        }
    }
};