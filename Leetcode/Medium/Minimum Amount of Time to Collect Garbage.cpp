class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int i,j,k,totalTime=0,travelTime=0;
        int arrGarbage[3]={'M','P','G'};
        for(i=0;i<=3-1;i++){
            travelTime=0;
            for(j=0;j<=garbage.size()-1;j++){
                if(j!=0)
                    travelTime+=travel[j-1];
                for(k=0;k<=garbage[j].size()-1;k++){
                    if(garbage[j][k]==arrGarbage[i]){
                        if(travelTime!=0){
                            totalTime+=travelTime;
                            travelTime=0;
                        }
                        totalTime++;
                    }
                }
            }
        }
        return totalTime;
    }
};
