class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth=0,customerWealth,i,j;
        for(i=0;i<accounts.size();i++){
            customerWealth=0;
            for(j=0;j<accounts[i].size();j++){
                customerWealth=customerWealth+accounts[i][j];
            }
            if(customerWealth>maxWealth)
                maxWealth=customerWealth;
        }
        return maxWealth;
    }
};
