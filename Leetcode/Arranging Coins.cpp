class Solution {
public:
    int arrangeCoins(int n) {
        // we use of formula of sum of 1st n positive integers
        // TODO: write explanation
        long long int m=0,firstMSum=0;
        while(firstMSum<n){
            m++;
            firstMSum=(m*(m+1))/2;
        }

        if(firstMSum==n)
            return m;
        else return m-1;
    }
};
