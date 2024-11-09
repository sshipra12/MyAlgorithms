class Solution {
public:
    int minChanges(string s) {
        int i,n=s.size(),consecutive=1,changes=0;
        vector<int> substringsLen;
        for(i=1;i<=n-1;i++){
            if(s[i]==s[i-1])
                consecutive++;
            else{
                substringsLen.push_back(consecutive);
                consecutive=1;
            }

            if(i==n-1)
                    substringsLen.push_back(consecutive);
        }
        
        // for each ODD length substring of consecutive 1's or 0's
        // we should either remove one (1 or 0) from its right end or take one (1 or 0)
        // from the substring to its right side, both choices changes the parity of the length of the substring on the right side
        // that is, after making the current substring length EVEN, the right side substring will change its length (from ODD to EVEN, or EVEN to ODD)
        for(i=0;i<=substringsLen.size()-1;i++){
            if(substringsLen[i]&1){
                changes++;
                substringsLen[i+1]++;  // here we give one 1 or 0 to the right side substring

            }
        }
        return changes;
    }
};
