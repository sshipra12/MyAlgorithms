class Solution {
public:
    bool checkIfPangram(string sentence) {
        int i;
        vector<bool> alphabets(26,false);
        //we create 26 size array to check which alphabets are present in string
        //we iterate over the given string and use each char in string 
        //as index for alphabets array by subtracting 97 (starting ASCII of lowercase) to ith char (example 'a'-97 = 0)
        for(i=0;i<sentence.size();i++){
            alphabets[sentence[i]-97]=true;;
        }
        for(i=0;i<26;i++){
            if(alphabets[i]==false)
                return false;
        }
        return true;
    }
};
