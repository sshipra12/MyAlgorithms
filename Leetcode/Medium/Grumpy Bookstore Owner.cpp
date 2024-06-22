class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int i,saveUnsatisfied=0,maxSaveUnsatisfied,totalSatisfied=0,n=customers.size();
        // first we calculate initial the total satisfied customers when we have not used the secret technique
        for(i=0;i<=n-1;i++){
            if(grumpy[i]==0)
                totalSatisfied+=customers[i];
        }

        // we use sliding window technique to find the subarray/segment of size 'minutes'
        // where we can save max people from being unsatisfaction (by removing every grumpy minute from this segment)
        for(i=0;i<=minutes-1;i++){
            if(grumpy[i]==1)
                saveUnsatisfied+=customers[i];
        }
        maxSaveUnsatisfied = saveUnsatisfied;

        // now we use the power of sliding window technique
        for(i=1;i<=n-minutes;i++){
            if(grumpy[i-1]==1)
                saveUnsatisfied-=customers[i-1];
            if(grumpy[i+(minutes-1)]==1)
                saveUnsatisfied+=customers[i+(minutes-1)];
            
            if(saveUnsatisfied>maxSaveUnsatisfied)
                maxSaveUnsatisfied = saveUnsatisfied;
        }

        return totalSatisfied+maxSaveUnsatisfied;
    }
};
