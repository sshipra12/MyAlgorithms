class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        // using two pointers left and right
        int left=0,right=0,n=nums.size(),maxConsecutiveSub=0;

        while(right<=n-1){
            if(nums[right]!=1){
                // then we check if we landed at the end of consecutive 1's subarray or its starting
                // if left was on 1 then it is the end if consecutive 1's subarray, else it is its starting
              
                if(nums[left]==1){     // ongoing consecutive 1s' subarray ended at (right-1) index
                    maxConsecutiveSub=max(maxConsecutiveSub, (right-1)-left+1);
                    left=right;
                }
            }
            else {   // new consecutive 1s' subarray started from (right) index
                if(nums[left]!=1)
                    left=right;
            }
            
            // when we are at end of iterating , we check if we have any ongoing consecutive 1's subarray
            if(right==n-1&&nums[left]==1){     // ongoing consecutive 1s' subarray ending at (right) index as we are at array's end
                maxConsecutiveSub=max(maxConsecutiveSub, right-left+1);
            }

            right++;
        }
        return maxConsecutiveSub;
    }
};
