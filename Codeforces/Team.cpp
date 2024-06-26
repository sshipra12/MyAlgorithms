#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,surety,n,problems=0,surePeople=0;
    scanf("%d",&n);
    while(n--){
        
        // for each problem we count how many people out of 3 are sure about it
        surePeople=0;
        for(i=0;i<3;i++){
            scanf("%d",&surety);
            if(surety==1)
                surePeople=surePeople+1;
        }
        if(surePeople>=2)
            problems=problems+1;
    }
    cout<<problems;
}
