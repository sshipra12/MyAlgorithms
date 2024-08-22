class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // using formula of sum of first n positive numbers
        int i,n=nums.size(),totalSum=0;
        for(i=0;i<=n-1;i++)
            totalSum+=nums[i];
        return (n*(n+1))/2 - totalSum;
    }
};

// OLD Solution
/*
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i,missing=nums.size();  // we assign missing var 'n' as for 0 to n-1 we cam compare those with the indecies of the array itself
        sort(nums.begin(),nums.end());  // after osrting we compare each element ith the index and if mismatch then that index 'i' ele is missing
        for(i=0;i<=nums.size()-1;i++){
            if(i!=nums[i]){
                missing=i;
                break;
            }
        }
        return missing;
    }
};
*/
