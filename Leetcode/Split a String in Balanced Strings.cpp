class Solution {
public:
    int balancedStringSplit(string s) {
        //we iterate and count the number of 'L' and 'R' in the current substring
        //whenever count of L and R in current substring becomes equal
        //then we have found one smallest balanced substring and then we start again with L=0 and R=0
      
        int i,countL=0,countR=0,balsubstr=0;
        for(i=0;i<s.size();i++){
            if(s[i]=='L')
              countL=countL+1;
            else countR=countR+1;

            if(countL==countR){
                balsubstr=balsubstr+1;
                countL=0;
                countR=0;
            }  
        }
        return balsubstr;
    }
};
