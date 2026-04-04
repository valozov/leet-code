class Solution {
    vector<vector<int>> res;
    vector<int> can;
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int temp = 0;
        dfs(target, 0, candidates, temp);
        return res;
    }

    void dfs(int target, int i, vector<int>& candidates, int temp) {
        if (temp > target) return;
        if (target == temp) { res.push_back(can); return; }
        if (i >= candidates.size()) {
            return;
        }

        can.push_back(candidates[i]);
        dfs(target, i, candidates, temp+candidates[i]);
        can.pop_back();
        dfs(target, i+1, candidates, temp);
    }
};