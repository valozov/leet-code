class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> num;
        for(string s : tokens){
            if (s == "+" || s == "-" || s == "*" || s == "/") {
                int b = num.top(); num.pop();   // second operand
                int a = num.top(); num.pop();   // first operand
                if (s == "+") num.push(a + b);
                else if (s == "-") num.push(a - b);
                else if (s == "*") num.push(a * b);
                else num.push(a / b);               
            }
            else num.push(stoi(s));
        }
        return num.top();
    }
};