class Solution {
public:
    int findComplement(int num) {
        int cut = 1;
        while(pow(2,cut)< num)
            ++cut;
        int res = (~num) & ((long long)(1 << cut) -1);
        return res;
    }
};