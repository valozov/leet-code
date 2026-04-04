class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for (int i : nums) ++mp[i];

        multimap<int, int, greater<int>> invmp;
        for (auto& i : mp)
            invmp.insert({ i.second, i.first });

        vector<int> ans;
        for (auto& i : invmp){
            if (k--)ans.push_back(i.second);
            else return ans;
        }
        return ans;
    }
};