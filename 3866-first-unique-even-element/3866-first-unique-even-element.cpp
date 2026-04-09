class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        unordered_map<int, int> a;
        for(int i : nums) ++a[i];
        int ans=0;
        for(int i : nums) {
            if(i%2==0 && a[i] == 1) return i;
        }
        return -1;
    }
};