class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int i,spcInd,n=s.size(),m=spaces.size();
        // total size of resultant string will be s.size() + spaces.size()
        string ans="";
        spcInd=0;
        // NOTE: spaces array describes the indices in the original string where spaces will be added
        for(i=0;i<=n-1;i++){
            if(spcInd<=m-1&&i==spaces[spcInd]){
                ans+=" ";
                spcInd++;
            }
            ans+=s[i];
        }
        return ans;
    }
};
