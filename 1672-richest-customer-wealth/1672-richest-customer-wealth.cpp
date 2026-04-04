class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;
        int temp = 0;
        for(int i=0; i < accounts.size(); i++){
            for(int j=0; j < accounts[0].size(); j++){
                temp += accounts[i][j];
            }
            if(temp > maxWealth)
                maxWealth = temp;
            temp = 0;
        }
    return maxWealth;
    }
};