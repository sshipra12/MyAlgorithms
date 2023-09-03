class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int i;
        vector<int> runningSum(nums.size(),0);
        for(i=0;i<nums.size();i++){
            if(i==0)
                runningSum[i]=nums[i];
            else
                runningSum[i]=runningSum[i-1]+nums[i];    
        }
        return runningSum;
    }
};
