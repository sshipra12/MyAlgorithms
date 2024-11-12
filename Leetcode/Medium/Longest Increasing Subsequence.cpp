class Solution {
public:
    //state definition: longest increasing subsequence upto ith with choosing last (max) ele of this inc sequence less than x
    int longestIncSubseqUptoIth(int index, int x, vector<int> &nums){
        if(index==-1)
            return 0;

        // transition: we have two choices here, to pick or not pick this element in longest inc subseqquence 
        // NOTE: since according to state definition, we can only pick this element if it is less than x
        if(nums[index]<x)
            return max(longestIncSubseqUptoIth(index-1,x,nums),1+longestIncSubseqUptoIth(index-1,nums[index],nums));
        
        else return longestIncSubseqUptoIth(index-1,x,nums);
    }

    int lengthOfLIS(vector<int>& nums) {
        return longestIncSubseqUptoIth(nums.size()-1,1e5,nums);
    }
};
