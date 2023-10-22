class Solution {
public:
    bool canSplitArray(vector<int>& nums, int m) {
        // check for atleast one subarray of size 2 has sum greater than or equal to m
        // if atleast one such subarray is present then we can take that as base
        // and remove elements one by one from its left side and similarly from its right side
        if(nums.size()==1||nums.size()==2)
            return true;
        int left=0,right=nums.size()-1,tim=nums.size()-2,i,sum=0;
        //bool cnd=false;
        for(i=0;i<nums.size()-1;i++){
            if((nums[i]+nums[i+1])>=m)
                return true;
        }
        return false;
    }
};
