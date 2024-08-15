class Solution {
public:
    int minCostFromIthToNthStair(int stair, vector<int>& cost) {
        // TDOD: Better solution than this, as this gives TLE for large inputs
        // definition of state: minimum cost to reach from ith stair to target(here nth) stair

        // base case when transition fails
        // here, when we reach the target
        if(stair>=cost.size())
            return 0;

        // transition : return min cost to reach from this ith stair to target nth stair
        return cost[stair] + min(minCostFromIthToNthStair(stair+1,cost),minCostFromIthToNthStair(stair+2,cost));
    }

    int minCostClimbingStairs(vector<int>& cost) {
        // defining and understanding the meaning of state of dp is the most important thing
        
        return min(minCostFromIthToNthStair(0,cost),minCostFromIthToNthStair(1,cost));
    }
};
