class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        // we use a data structure which provides with max value at top 
        // and we use current max , remove it, change it, and then add the updated value to this max heap data structure
        long long int i,n=nums.size(),maxEle,score=0;
        priority_queue<int> pq;
        // add elements in pq to arrange elements in max heap manner
        for(i=0;i<=n-1;i++){
            pq.push(nums[i]);
        }
        while(k--){
            maxEle=pq.top();
            score+=maxEle;
            pq.pop();
            if(maxEle%3==0)
                pq.push(maxEle/3);
            else pq.push((maxEle/3)+1);
        }
        return score;
    }
};
