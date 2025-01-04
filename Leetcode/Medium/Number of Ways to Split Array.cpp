class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        // using prefix and suffix sum arrays
        int i,n=nums.size(),validSplits=0;

        long long int prefixSum[n],suffixSum[n];

        // store prefix sums
        prefixSum[0]=nums[0];
        for(i=1;i<=n-1;i++)
            prefixSum[i]=prefixSum[i-1]+nums[i];

        // store suffix sums
        suffixSum[n-1]=nums[n-1];
        for(i=n-2;i>=0;i--)
            suffixSum[i]=suffixSum[i+1]+nums[i];

        for(i=0;i<n-1;i++){
            if(prefixSum[i]>=suffixSum[i+1])
                validSplits++;
        }
        return validSplits;
    }
};
