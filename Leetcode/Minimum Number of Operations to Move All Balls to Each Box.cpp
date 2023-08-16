class Solution {
public:
    vector<int> minOperations(string boxes) {
        //using brute force i.e using O(n^2) time complexity
        TODO: Optimize time complexity
        
        int i,j;
        vector<int> ans(boxes.size(),0);
      
        //for each index we iterate the whole array
        //and move each ball to that index
       //first from its left side to that index and from its right side to that index
      
        for(i=0;i<ans.size();i++){
            for(j=0;j<i;j++){
                if(boxes[j]=='1')
                    ans[i]=ans[i]+(i-j);
            }

            for(j=i;j<boxes.size();j++){
                if(boxes[j]=='1')
                    ans[i]=ans[i]+(j-i);
            }
        }
        return ans;
    }
};
