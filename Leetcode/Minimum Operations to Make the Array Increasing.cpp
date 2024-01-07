class Solution {
public:
    int minOperations(vector<int>& nums) {
        // there is no way to decrease so we will only increase the elements one by one if necessary
        int i,minOps=0;
        for(i=1;i<=nums.size()-1;i++){
            if(nums[i]<=nums[i-1]){
                minOps+=nums[i-1]-nums[i]+1;
                nums[i]=nums[i]+(nums[i-1]-nums[i]+1);
            }
        }
        return minOps;
    }
};
