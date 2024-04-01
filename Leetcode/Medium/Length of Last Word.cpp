class Solution {
public:
    int lengthOfLastWord(string s) {
        // Problem is EASY but due to learning purposes added in MEDIUM section
        int i;
        // we start with an empty string
        string word="";
        char previousChar;
        for(i=0;i<=s.size()-1;i++){
            // since there can spaces even after the last word, the breaking condition (i.e making current word invalid by emptying it)
            // when we meet a non-space char and the previous char/chars was ' ', then we discard the ongoing word and start it again at current index
            if(s[i]!=' '&&previousChar==' '){
                word="";
                word+=s[i];
            }
            else if(s[i]!=' '){
                // if all other cases we just add the current char of 's' to the current word 
                word+=s[i];
            }
            previousChar=s[i];
        }
        return word.size();
    }
};
