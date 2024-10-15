class Solution {
public:
    long long minimumSteps(string s) {
        // algorithm: for each 1 we encounter in array
        // it has to move right to each zero preset in the right side
        long long int i,countZero=0,step=0,n=s.size();
        for(i=n-1;i>=0;i--){
            if(s[i]=='0')
                countZero++;
            else{
                // since this is '1' , it has to move right to every '0' on its right side
                step+=countZero;
            }
        }
        return step;
    }
};
