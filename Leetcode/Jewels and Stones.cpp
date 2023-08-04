class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int i,j,totaljewels=0;
        for(i=0;i<jewels.size();i++){
            for(j=0;j<stones.size();j++){
                if(jewels[i]==stones[j]){
                    totaljewels=totaljewels+1;
                }
            }
        }
        return totaljewels;
    }
};
