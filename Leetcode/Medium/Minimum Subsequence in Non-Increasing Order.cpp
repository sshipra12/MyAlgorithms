class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        // we sort the given array and choose the max elements of the array
        // until our chosen elements' sum exceed the non-chosen/remaining elements
        int i,chosenSum=0,totalSum=0,n=nums.size(),ind;
        vector<int> ans;
        for(i=0;i<=n-1;i++)
            totalSum+=nums[i];
        
        sort(nums.begin(),nums.end());

        // by choosing max elements after sorting from right end one by one, we ensure:
        // 1. that chosen set size is minimum because max elemenst will give more sum in less quantity
        // 2. if there are multiple answers with same set size, chosing max elements give max set sum among these
        ind=n-1;
        while((totalSum-chosenSum)>=chosenSum){  //NOTE: here, condition for ind out of range (i.e to check ind>=0) is skipped 
                                                // because after sometime chosenSum will definitely become > totalSum
            chosenSum+=nums[ind];
            ans.push_back(nums[ind]);
            ind--;
        }

        return ans;
    }
};
