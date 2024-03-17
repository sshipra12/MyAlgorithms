class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        // using brute force
        string ans="";
        for(int i=0;i<=words.size()-1;i++){
            if(checkPalindrome(words[i])){
                ans=words[i];
                break;
            }
        }
        return ans;
    }
    bool checkPalindrome(string s){
        int left=0,right=s.size()-1;
        while(left<right){
            if(s[left]!=s[right])
                return false;
            left++;
            right--;
        }
        return true;
    }
};
