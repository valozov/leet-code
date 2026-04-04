class Solution {
    vector<vector<int>> res;
    vector<int> can;
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        int temp = 0;
        dfs(target, 0, candidates, temp);
        return res;
    }

    void dfs(int target, int i, vector<int>& candidates, int temp) {
        if (target == temp) {
            res.push_back(can); return;
        }
        if (temp > target || i >= candidates.size())
            return;

        can.push_back(candidates[i]);
        dfs(target, i + 1, candidates, temp + candidates[i]);
        can.pop_back();

        while(i+1 < candidates.size() && candidates[i] == candidates[i + 1]) {
            ++i;
        }
        dfs(target, i + 1, candidates, temp);
    }
};