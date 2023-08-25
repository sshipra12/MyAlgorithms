class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int i,j,smaller;
        vector<int> ans;
        // TODO: Find optimal solution better than O(n^2)
        for(i=0;i<nums.size();i++){
            smaller=0;
            for(j=0;j<nums.size();j++){
                if(j!=i&&nums[j]<nums[i])
                    smaller++;
            }
            ans.push_back(smaller);
        }
        return ans;
    }
};
