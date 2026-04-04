class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        string s = to_string(x);
        int sum=0;
        for(int i : s) sum += i - '0';
        if(x%sum) return -1;
        else return sum;
    }
};