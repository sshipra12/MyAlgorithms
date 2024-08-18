class Solution {
public:
    bool canReachFromIthToTarget(int index, vector<int> &nums){
        
        // TDOD: solution in better time complexity
        // base case: when we have reached target or beyond it
        if(index==nums.size()-1)
            return true;
        else if(index>nums.size()-1)
            return false;

        // transition: from all the choices we have from current state/subproblem
        // if from any one of them we can reach target then return true
        for(int i=1;i<=nums[index];i++){
            if(canReachFromIthToTarget(index+i,nums))
                return true;
        }
        return false;
    }

    bool canJump(vector<int>& nums) {
        // understand state/subproblem meaning and provide required inputs to get answer
        return canReachFromIthToTarget(0,nums);
    }
};
