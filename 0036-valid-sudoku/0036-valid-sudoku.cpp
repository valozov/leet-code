class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (auto& i : board) {
                unordered_set<int> checkhor;
            for (char j : i) {
                if (j != '.' && checkhor.contains(j)) return false;
                else checkhor.insert(j);
            }
        }
        for (int i = 0; i < 9; ++i) {
            unordered_set<int> checkvert;
            for (auto& j : board) {
                if (j[i] != '.' && checkvert.contains(j[i])) return false;
                else checkvert.insert(j[i]);
            }
        }
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                unordered_set<int> checksud;
                for (int v= i*3; v < i*3+3; ++v) {
                    for(int g = j*3; g < j*3+3; ++g){
                        if (board[v][g] != '.' && checksud.contains(board[v][g])) return false;
                        else checksud.insert(board[v][g]);
                    }
                }
            }
        }
        return true;
    }
};