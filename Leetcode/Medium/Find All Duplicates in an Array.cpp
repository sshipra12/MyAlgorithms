class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        // since all elements are in range [1,n] we can create a frequency array for all n elements
        int i;
        vector<int> freq(nums.size()+1,0),ans;
        for(i=0;i<=nums.size()-1;i++){
            freq[nums[i]]++;
            if(freq[nums[i]]==2)
                ans.push_back(nums[i]);
        }
        return ans;
    }
};
