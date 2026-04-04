class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1, i = (nums.size() - 1) / 2;
        while (left < right) {
            if (target == nums[i]) return i;
            else if(target < nums[i]) { right = i - 1; i = left + (right - left + 1) / 2; }
            else { left = i + 1; i = left + (right - left + 1) / 2; }
        }
        if (target == nums[i]) return i;
        return -1;
    }
};
