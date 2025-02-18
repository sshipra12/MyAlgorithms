class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        // Use priority queue data structure and perform operations
       // until the minimum of the array becomes greater than or equal to k.
        long long int i,n=nums.size(),opsCount=0,newEle,ele;
        // create min priority queue
        priority_queue<long long int,vector<long long int>,greater<long long int>> pq;
        for(i=0;i<=n-1;i++)
            pq.push(nums[i]);

        // here it was already mentioned that an answer always exists so we dont have to check if pq becomes empty
        while(pq.top()<k){
            newEle=pq.top()*2;
            pq.pop();
            newEle+=pq.top();
            pq.pop();

            pq.push(newEle);
            opsCount++;
        }
        return opsCount;
    }
};
