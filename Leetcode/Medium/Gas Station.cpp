class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        // TODO : this is O(n^2) solution, needs better time complexity
        // brute force solution: we will consider each ith station index as the starting point 
        // and check if we can travel a complete circular path and return to current posn or not

        int i,j,pathIndex,n=gas.size(),carFuel,times,ans=-1;
        bool isCirclePossible;
        // we treat each i as the starting index
        for(i=0;i<=n-1;i++){
            // a complete circular circuit takes 'n' times moving
            pathIndex=i;
            times=n;
            carFuel=0;
            isCirclePossible=true;
            while(times--){
                if(pathIndex>n-1)
                    pathIndex-=n;  // NOTE: since we only make one circular path , we don't need pathIndex = pathIndex%n;
                carFuel+=gas[pathIndex];
                if(carFuel>=cost[pathIndex]){
                    carFuel-=cost[pathIndex];
                    pathIndex++;
                }
                else{
                    isCirclePossible=false;
                    break;
                }
            }

            if(isCirclePossible){
                ans=i;
                break;
            }
        }
        return ans;
    }
};
