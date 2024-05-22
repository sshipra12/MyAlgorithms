class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        // make pairs of max with 2nd max and so on, so that min(a1,a2) in any pair is maximised
        
        int i,sum=0;
        sort(nums.begin(),nums.end());
        i=nums.size()-2;
        while(i>=0){
            sum+=nums[i];
            i-=2;
        }
        return sum;
    }
};
