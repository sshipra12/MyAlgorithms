class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int i,left=-1,right=-1,n=nums.size();
        for(i=0;i<=n-1;i++){          // NOTE : here if we directly use loop like for(i=0; i<=nums.size()-1; i++) then it gives runtime error
            if(nums[i]==target){
                left=i;
                break;
            }
        }
        for(i=n-1;i>=0;i--){
            if(nums[i]==target){
                right=i;
                break;
            }
        }
        vector<int> vc;
        vc.push_back(left);
        vc.push_back(right);
        return vc;
    }
};
