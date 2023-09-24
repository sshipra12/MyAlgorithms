class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int i;
        string ans=s;
        //creating a copy of given string and then shuffling
        for(i=0;i<indices.size();i++){
            ans[indices[i]]=s[i];
        }
        return ans;

      // TODO : shuffling without creating a copy of the given string i.e in place shuffling
    }
};
