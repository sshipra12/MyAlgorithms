class Solution {
public:
    int firstUniqChar(string s) {
        int i,ans=-1;
        vector<int> freq(26,0);
        for(i=0;i<=s.size()-1;i++){
            freq[s[i]-97]++;      // we use char ASCII value as an index for frequency array
                                  // ASCII of a = 97, a-97=0, b-97=1, c-97=2 and so on
        }

        for(i=0;i<=s.size()-1;i++){
            if(freq[s[i]-97]==1){
                ans=i;
                break;
            }
        }
        return ans;
    }
};
