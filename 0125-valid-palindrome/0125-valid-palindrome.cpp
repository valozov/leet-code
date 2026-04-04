class Solution {
public:
    bool isPalindrome(string s) {
        string res;
        for (int i = 0; i < s.size(); ++i) {
            if (!isalnum(s[i]));
            else res.push_back(tolower(s[i]));
        }
        int i = 0, j = res.size()-1;
        while (i < j) {
            if (res[i++] != res[j--]) return false;
        }
        return true;
    }
};