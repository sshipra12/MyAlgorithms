class Solution {
public:
    bool isPalindrome(int x) { 
        //we get each digit from the integer ( by x%10 ) and store it in array 
        //we match corresponding left end and right end indices to check for palindrome
        if(x<0)
            return false;
        int i,left=0,right;
        vector<int> digits;
        while(x>0){
            digits.push_back(x%10);
            x=x/10;
        }
        right=digits.size()-1;
        while(left<=right){
            if(digits[left]!=digits[right])
                return false; 
            left++;
            right--;    
        }
        return true;
    }
};
