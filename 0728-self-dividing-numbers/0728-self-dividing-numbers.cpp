class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> a;
        for(int i=left; i<=right; ++i){
            a.push_back(i);
            for(int j = i; j>0; j /= 10){
                if((j % 10) == 0 || i % (j % 10) != 0){
                    a.pop_back();
                    break;
                }
            }
        }
        return a;
    }
};