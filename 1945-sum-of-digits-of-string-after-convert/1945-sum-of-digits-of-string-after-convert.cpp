class Solution {
public:
    int getLucky(string s, int k) {
        int n = 0;
        string b;
        for (auto i : s)
            b += to_string(i - 'a' + 1);
        for (char c : b) {
            int digit = c - '0';
            n += digit;
        }
        while (k > 1) {
            string t = to_string(n);
            n = 0;
            for (char c : t) {
                int digit = c - '0';
                n += digit;
            }
            --k;
        }
        return n;
    }
};