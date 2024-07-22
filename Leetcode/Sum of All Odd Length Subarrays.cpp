class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int k,n=arr.size(),i,subLen,sum=0;

        // for each index i take subarrays of odd length only
        for(i=0;i<=n-1;i++){
            for(subLen=1;subLen<=n-i;subLen+=2){
                for(k=0;k<=subLen-1;k++){
                    sum+=arr[i+k];
                }
            }
        }

        return sum;
    }
};
