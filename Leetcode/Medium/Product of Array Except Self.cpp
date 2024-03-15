class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // using prefix and suffix array concept
        // just store the product of elements in a prefix and suffix array way
        int i;
        vector<int> prefix(nums.size());
        vector<int> suffix(nums.size());

        // create products of elements in prefix array manner
        for(i=0;i<=nums.size()-1;i++){
            if(i==0)
                prefix[i]=nums[i];
            else    
                prefix[i]=prefix[i-1]*nums[i];
        }

        // create products of elements in suffix array manner
        for(i=nums.size()-1;i>=0;i--){
            if(i==nums.size()-1)
                suffix[i]=nums[i];
            else
                suffix[i]=suffix[i+1]*nums[i];
        }

        vector<int> ans(nums.size());
        for(i=0;i<=nums.size()-1;i++){
            if(i==0)
                ans[i]=suffix[i+1];
            else if(i==nums.size()-1)
                ans[i]=prefix[i-1];
            else ans[i]=prefix[i-1]*suffix[i+1];  // NOTE: not taking into the case where gievn nums array is of 1 size
        }

        return ans;
        
    }
};
