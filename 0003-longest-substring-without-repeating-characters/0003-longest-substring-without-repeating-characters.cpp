class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seq;
        int maxi=0, left=0;
        for(int right=0; right<s.size(); ++right){
            while(seq.find({s[right]}) != seq.end()){
                seq.erase(s[left]);
                left++;
            }
            
            seq.insert(s[right]);
            maxi = max(maxi, right-left+1);
        }
        return maxi;
    }
};