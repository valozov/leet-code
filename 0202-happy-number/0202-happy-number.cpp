class Solution {
public:
    bool isHappy(int n) {
    unordered_set<int> h;
    if (n == 1) return true;
    while (n != 1 && !h.contains(n)) {
        h.insert(n);
        string s = to_string(n);
        n = 0;
        for (char c : s) {
            int digit = c - '0';
            n += digit * digit;
        }
        if (n == 1) return true;
    }
    return false;
    }
};