class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int i,maxEle=0,score=0;
        // we get the max element from the array
        for(i=0;i<nums.size();i++){
            if(nums[i]>maxEle)
                maxEle=nums[i];
        }
        // in each operation we pick the max and max changes to (max+1)
        while(k--){
            score=score+maxEle;
            maxEle++;
        }
        return score;
    }
};
