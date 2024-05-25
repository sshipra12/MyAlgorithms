class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        // we try to send two people in one boat by minimizing the pair sums of people
        // to minimize the pair sum of people we try to make pair of current max with current min
        // if the current max cant be paired with curent min(i.e pair weight exceeds limit) , then we send current max alone in one boat
        int left=0,right=people.size()-1,minBoats=0;

        // we sort the people weight array
        sort(people.begin(),people.end());

        while(left<=right){
            // we try to make pair with current max with current min weight persons
            // NOTE: the edge case when left==right, i.e only one person is left and we use one boat
            if(left==right||people[left]+people[right]<=limit){
                minBoats++;
                left++;
                right--;
            }
            // if we cant make pair (i.e. pair sum exceeds limit), we send the current max alone in one boat
            else{
                minBoats++;
                right--;
            }
        }
        return minBoats;
    }
};
