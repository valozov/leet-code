class Solution {
public:
    bool isValid(string s) {
        stack<char> a;
        if (s.size() < 2) return false;
        for (auto i : s) {
            if (i == '(' || i == '{' || i == '[') a.push(i);
            else if (a.empty() == false && (a.top() == i - 1 || a.top() == i - 2)) a.pop();
            else return false;
        }
        if(a.empty()) return true;
        else return false;
    }
};
