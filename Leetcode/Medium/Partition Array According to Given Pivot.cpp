class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        // simple version : using one pointer fix elements less than pivot to the leftmost side
        // also count elements equal to pivot along the way
        int i,left=0,n=nums.size(),pivotCount=0;
        vector<int> ans(n);
        for(i=0;i<=n-1;i++){
            // set the less than pivot elements to the leftmost side of the array
            if(nums[i]<pivot){
                ans[left]=nums[i];
                left++;
            }
            else if(nums[i]==pivot)
                pivotCount++;
        }
        // set pivot elements to middle
        while(pivotCount--){
            ans[left]=pivot;
            left++;
        }

        // set elements greater than pivot to the rightmost side
        for(i=0;i<=n-1;i++){
            if(nums[i]>pivot){
                ans[left]=nums[i];
                left++;
            }
        }
        return ans;
    }
};

// OLD Solution:
/*
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        // TODO: A BETTER SOLUTION USING TWO POINTERS
        // simple solution by iterating the array 2 times and using only 1 pointer at a time
        int n=nums.size(),left=0,right=n-1,i;
        vector<int> ans(n);

        // 1st full iteration of array from left to right to store the elements less than pivot
        for(i=0;i<=n-1;i++){
            if(nums[i]<pivot){
                ans[left]=nums[i];
                left++;
            }
        }

        // 2nd full iteration of array from right to left to store the elements greater than pivot
        for(i=n-1;i>=0;i--){
            if(nums[i]>pivot){
                ans[right]=nums[i];
                right--;
            }
        }

        // to store the elements equal to pivot in between the less than and greater than elements
        for(i=left;i<=right;i++)
            ans[i]=pivot;

        return ans;    
    }
};
*/
