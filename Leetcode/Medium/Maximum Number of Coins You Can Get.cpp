class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int times=piles.size()/3,i=piles.size()-2,coins=0;
        //if we sort the array, then each time we choose the 2nd best maximum
        sort(piles.begin(),piles.end());
        while(times--){
            coins=coins+piles[i];
            i=i-2;
        }
        return coins;
    }
};
