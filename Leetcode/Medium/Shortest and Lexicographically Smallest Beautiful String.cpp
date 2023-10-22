class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int i,left=-1,right=-1,ones=0,mnsize=100;
        // finding the fist window substring with exactly 'k' ones
        for(i=0;i<=s.size()-1;i++){
            if(s[i]=='1'){
                ones++;
                if(ones==k){
                    right=i;
                    break;
                }
            }
        }
        
        if(right==-1)
            return "";
        
        // vector/array to store the substrings with exactly 'k' ones
        vector<string> bstrings;
        while(right<=s.size()-1){
            if(s[right]=='1'){
                left++;
                while(s[left]!='1'){
                    left++;
                }
                
                string sub=s.substr(left,right-left+1);
                bstrings.push_back(sub);
            }
            
            right++;
        }
        
        for(i=0;i<=bstrings.size()-1;i++){
            if(bstrings[i].size()<mnsize){
                mnsize=bstrings[i].size();
            }
        }
        
        vector<string> mnbstrings;
        
        for(i=0;i<=bstrings.size()-1;i++){
            if(bstrings[i].size()==mnsize)
                mnbstrings.push_back(bstrings[i]);
        }
        
        sort(mnbstrings.begin(),mnbstrings.end());
        
        return mnbstrings[0];
        
    }
};
