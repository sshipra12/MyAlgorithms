class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {  // NOTE : problem category is Easy but because of good quality, it has been placed in Medium
        int indG=0,indS=0,childCount=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        while(indG<g.size()&&indS<s.size()){  // TODO : learning and thinking
            if(s[indS]>=g[indG]){
                childCount++;
                indG++;
                indS++;
            }
            else{
                indS++;
            }
        }
        return childCount;
    }
};
