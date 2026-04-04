class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0, j=1, low=prices[0], mprof=0;
        if(prices.size()<=1) return 0;
        while(j<prices.size()){
            if(low>=prices[j]) {low=prices[j]; ++j; continue;}
            mprof = max(mprof, prices[j]-low);
            ++j;
        }
        return mprof;
    }
};