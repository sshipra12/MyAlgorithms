class Solution {
public:
    void sortColors(vector<int>& nums) {
        // using two pointers for sorting 0 and 1
        int i,left=0,right=0,n=nums.size();

        // pointer for '0' is always in the segment of '1'
        // so when we encounter '0' and place it in that pointer place
        // then we also have to move the segment of '1' one place forward (if it is present)
        for(i=0;i<=n-1;i++){
            if(nums[i]==0){
                if(left==right){
                    // means currently the segment of 1's is of size zero
                    nums[left]=0;
                }
                else{
                    nums[left]=0;
                    nums[right]=1;
                }
                left++;
                right++;
            }
            else if(nums[i]==1){
                nums[right]=1;
                right++;
            }
        }

        while(right<=n-1){
            nums[right]=2;
            right++;
        }
    }
};
