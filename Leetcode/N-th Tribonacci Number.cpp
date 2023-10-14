class Solution {
public:
    int tribonacci(int n) {
        vector<int> dp(n+1,-1);
        return tribo(n,dp);
    }

    int tribo(int n,vector<int> &dp){
        if(n==0)
            return 0;
        else if(n==1||n==2)
            return 1;

        int nthTerm,n1,n2,n3; // n1= n-1, n2= m-2, n3= n-3
        if(dp[n-1]==-1){
            dp[n-1]=tribo(n-1,dp);
        }
        if(dp[n-2]==-1){
            dp[n-2]=tribo(n-2,dp);
        }
        if(dp[n-3]==-1){
            dp[n-3]=tribo(n-3,dp);
        }

        nthTerm=dp[n-1]+dp[n-2]+dp[n-3];
        return nthTerm;
    }
};
