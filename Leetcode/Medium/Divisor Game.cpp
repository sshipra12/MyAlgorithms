class Solution {
public:
// subproblem/state definition: given position 'n' is winnable or not
// we will decide whether a position is winnable or not by checking the choices from current position
    bool divisorGame(int n) {
        // TODO: this gives TLE, can optimize with memoization 
        
        // we can check winnable positions irrespective of any player on that position
        // when n reaches 1, it is the end of the game
        
        if(n==1)
            return false;
        
        // transition: check of all choices we can make from here, is there any choice
        // which leads to losing, then this position is winnable for current player
        for(int x=n-1;x>=1;x--){
            if(n%x==0&&!divisorGame(n-x)){
                return true;
            }
        }
        return false;
    }
};
