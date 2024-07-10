class Solution {
public:
    int minSteps(string s, string t) {
        // for anagrams, we can use 26 length arrays to store the frequencies of chars for both strings and then compare
        int i,n=s.size(),m=t.size(),needs=0;
        vector<int> freqS(26,0),freqT(26,0);
        // we store the frequencies of chars for both the strings S and T
        for(i=0;i<=n-1;i++)
            freqS[s[i]-97]++;

        for(i=0;i<=m-1;i++)
            freqT[t[i]-97]++;

        // since length of both s and t are equal, excess chars will be converted to needed chars
        // so total needs must be equal to total excess
        for(i=0;i<=25;i++){
            if(freqS[i]>freqT[i])
                needs+=freqS[i]-freqT[i];
        }

        return needs;
    }
};
