class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while (stones.size() > 1){
            sort(stones.begin(), stones.end());
            int y = stones[stones.size() - 1];
            int x = stones[stones.size() - 2];
            if (y > x) {
                stones.pop_back();
                stones[stones.size()-1] = y-x;
            }
            else if (y < x) {
                stones.pop_back();
                stones[stones.size()-1] = x-y;
            }
            else {
                stones.pop_back();
                stones.pop_back();
            }
        }
        return stones.empty() ? 0 : stones[0];
    }
};