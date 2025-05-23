class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        // store the count of 5 and 10 $ notes as only these are useful for giving change
        int i,n=bills.size();
        bool canGiveChange=true;

        // create an array to store the count of 5$ and 10 $ notes as only these are useful for giving change
        int noteCountArr[2];
        noteCountArr[0]=0;
        noteCountArr[1]=0;

        // iterate over the bills array from left to right and store the 5$ and 10$ notes along the way
        // and check if we can give change to people from the changes collected earlier
        for(i=0;i<=n-1;i++){
            if(bills[i]==5)
                noteCountArr[0]++;
            else if(bills[i]==10){
                // first check if we can give change of 5 note or not
                if(noteCountArr[0]>=1){
                    // we give 5 note and get a 10 note
                    noteCountArr[0]--;
                    noteCountArr[1]++;
                }
                else{
                    canGiveChange=false;
                    break;
                }
            }
            else{
                // first check if we can give change of a 5 and 10 note or not
                if(noteCountArr[0]>=1&&noteCountArr[1]>=1){
                    noteCountArr[0]--;
                    noteCountArr[1]--;
                }
                // then check if we can give change of three 5 $ notes or not
                else if(noteCountArr[0]>=3){
                    noteCountArr[0]-=3;
                }
                else{
                    canGiveChange=false;
                    break;
                }
            }
        }
        return canGiveChange;
    }
};
