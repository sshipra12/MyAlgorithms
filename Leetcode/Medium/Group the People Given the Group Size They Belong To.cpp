class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        int i,j;
        vector<vector<int>> grps(groupSizes.size()+1);
        vector<vector<int>> ans;

        // for each person use that persons group size as the index
        for(i=0;i<=groupSizes.size()-1;i++){
            if(grps[groupSizes[i]].size()==groupSizes[i]){   // NOTE: if a particular group Fully fills, add it to ans and empty the group and start again
                ans.push_back(grps[groupSizes[i]]);
                grps[groupSizes[i]].clear();
            }    
            grps[groupSizes[i]].push_back(i);
        }

        
        for(i=0;i<=grps.size()-1;i++){
            if(!grps[i].empty())
                ans.push_back(grps[i]);
        }
        
        return ans;
    }
};
