class Solution {
public:
    int maximum69Number (int num) {
        int i,ans=0;
        vector<int> digits;
        // we store the digits of the number
        while(num>0){
            digits.push_back(num%10);
            num=num/10;
        }
        for(i=digits.size()-1;i>=0;i--){
            if(digits[i]==6){
                digits[i]=9;
                break;
            }
        }
        for(i=digits.size()-1;i>=0;i--){
            ans=ans+digits[i]*pow(10,i);
        }
        return ans;
    }
};
