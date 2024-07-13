class Solution {
public:
    int differenceOfSums(int n, int m) {
        int num1=0,num2=0,num,sumUptoN;

        // total sum upto n
        sumUptoN=(n*(n+1))/2;

        //  sum of all integers in the range [1, n] that are divisible by m
        // i.e sum of all multiples of m in range [1,n]
        for(num=m;num<=n;num+=m){
            num2+=num;
        }

        // num1 is sum of integers upto n - sum of multiples of m in range [1,n]
        num1=sumUptoN-num2;

        return num1-num2;
    }
};
