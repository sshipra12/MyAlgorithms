class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        // problem is EASY but due to learning of two sorted vectors iteration simultaneously it is placed in MEDIUM
        // since both arrays are already sorted
        // we just have to move pointers/index of both arrays by comparing their elements with each other
        int ind1=0,ind2=0,common=-1;
        while(ind1<=nums1.size()-1&&ind2<=nums2.size()-1){
            if(nums1[ind1]==nums2[ind2]){
                common=nums1[ind1];
                break;
            }
            else if(nums1[ind1]>nums2[ind2]){
                ind2++;
            }
            else{
                ind1++;
            }
        }
        return common;
    }
};
