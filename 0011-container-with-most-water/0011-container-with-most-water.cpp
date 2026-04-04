using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0, j = height.size() - 1;
        int res = min(height[i], height[j]) * (j - i);
        while (i < j) {
            if (height[i] < height[j]) i += 1;
            else j -= 1;
            res = max(res, min(height[i], height[j]) * (j - i));
        }
        return res;
    }
};