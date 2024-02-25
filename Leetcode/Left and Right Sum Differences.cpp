class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        // we use prefix sum and suffix sum concept here
        // we store the suffix sum array first and 
        // make prefix sum array while iterating the array left to right

        int i,prefixSum=0;
        vector<int> suffixSum(nums.size());
        for(i=nums.size()-1;i>=0;i--){
            if(i==nums.size()-1)
                suffixSum[i]=nums[i];
            else 
                suffixSum[i]=suffixSum[i+1]+nums[i];    
        }
        // we append 0 for suffix sum for (n+1)th index
        suffixSum.push_back(0);
        vector<int> ans(nums.size());
        for(i=0;i<nums.size();i++){
            ans[i]=abs(prefixSum-suffixSum[i+1]);
            prefixSum=prefixSum+nums[i];             // prefixSum var already stores the prefix sum upto (i-1)th index before each operation
        }
        return ans;
    }
};
