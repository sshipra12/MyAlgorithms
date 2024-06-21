class Solution {
public:
    int noOfWaysRecursive(int step, int n, int dp[]){
        if(step==n)
            return 1;

        // if we are at second last step we have only choice to jump to step+1
        if(step==n-1){
            if(dp[step]==-1)
                dp[step]=noOfWaysRecursive(step+1,n,dp);
            return dp[step];
        }

        // at any other step, we have two choices to jump to step+1 or step+2
        if(dp[step]==-1)
            dp[step]=noOfWaysRecursive(step+1,n,dp) + noOfWaysRecursive(step+2,n,dp);
        return dp[step];
    }

    int climbStairs(int n) {
        // we use memoization to store precomputed recursive calls
        int dp[n+1];
        for(int i=0;i<=n;i++)
            dp[i]=-1;

        return noOfWaysRecursive(0,n,dp);
    }
};

// Other solution which gives another view point on the problem
// It is all about understanding decision tree/recursive tree and which node/state we are calculating
/*
class Solution {
public:
    int noOfWaysRecursive(int step, int n, int dp[]){
        if(step==n)
            return 1;
        
        // if we are at second last step we only have 1 choice to jump step+1
        if(step==n-1){
            if(dp[step+1]==-1)
                dp[step+1] = noOfWaysRecursive(step+1,n,dp);
            return dp[step+1];
        }
        
        // at any other step we have two choices , i.e to jump step+1 or step+2
        if(dp[step+1]==-1){
            dp[step+1] = noOfWaysRecursive(step+1,n,dp);
        }

        if(dp[step+2]==-1){
            dp[step+2] = noOfWaysRecursive(step+2,n,dp);
        }

        return dp[step+1]+dp[step+2];
    }

    int climbStairs(int n) {

        // we use memoization to store the precomputed recursive calls
        // since each recursive call is dependent on only 1 parameter i.e step number, we create 1D dp array
        int dp[n+1];
        for(int i=0;i<=n;i++)
            dp[i]=-1;
        
        return noOfWaysRecursive(0,n,dp);
    }
};
*/
