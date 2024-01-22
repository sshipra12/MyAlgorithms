class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int i;
        vector<bool> presence(nums.size()+1,false);
        vector<int> ans;
        for(i=0;i<=nums.size()-1;i++){
            if(presence[nums[i]]){
                ans.push_back(nums[i]);
            }
            else{
                presence[nums[i]]=true;
            }
        }
        for(i=1;i<=nums.size();i++){
            if(!presence[i])
                ans.push_back(i);
        }
        return ans;
    }
};
