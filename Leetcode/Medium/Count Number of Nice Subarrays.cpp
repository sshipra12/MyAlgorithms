class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        // Pattern: Find valid SEGMENT/SUBARRAY while iterating and stretch it until it is valid (here from both sides)
        // using two pointers left and right, left points to 1st odd and right points to kth odd
        // of a segment, and then we stretch this segment from both ends towards left and right side
        // upto it only contains k odd elements

        int left=0,right=0,lBoundary=0,rBoundary,i,n=nums.size(),segOddCount=0,segments=0;

        while(right<=n-1){
            if(nums[right]&1){
                segOddCount++;
                if(segOddCount==k){
                    // set left pointer and right Boundary Pointer
                    while(!(nums[left]&1))
                        left++;

                    rBoundary=right+1;
                    while(rBoundary<=n-1&&!(nums[rBoundary]&1))
                        rBoundary++;
                    rBoundary--;
                    
                    // update count of subarrays
                    segments+=((left-lBoundary)+1)*((rBoundary-right)+1);

                    // move the left pointer one towards right to decrease the count of odd elements by 1
                    lBoundary=left+1;
                    left++;
                    segOddCount--;
                }
            }
            right++;
        }

        return segments;
    }
};
