class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> b;
        b.insert(b.end(), nums.begin(), nums.end());
        b.insert(b.end(), nums.begin(), nums.end());
        return b;
    }
};