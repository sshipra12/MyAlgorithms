class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        // using binary search on answer algorithm
        int i,j,low,high,mid,n=houses.size(),m=heaters.size();
        bool isHouseCovered;

        // sort both the houses and heaters array
        sort(houses.begin(),houses.end());
        sort(heaters.begin(),heaters.end());

        // using binary search for finding the smallest radius which covers all houses
        // this problem is of type: NNNNNNNYYYYYYY
        low=0;
        high=1e9;  // NOTE: pay attention while chossing low and high values
        while(low<high){
            mid=low+(high-low)/2;

            // check if all houses can be covered with this 'mid' value radius
            isHouseCovered=true;
            j=0;
            for(i=0;i<=n-1&&isHouseCovered;i++){
                // keep moving j pointer until ith house is not in range
                while(j<=m-1&&!(houses[i]>=(heaters[j]-mid)&&houses[i]<=(heaters[j]+mid)))
                    j++;
                
                if(j==m)
                    isHouseCovered=false;
            }

            if(isHouseCovered)
                high=mid;
            else low=mid+1;
        }

        return low;
    }
};
