#include <bits/stdc++.h>

using namespace std;

int main()
{
    int bacteria=1,i,x;
    scanf("%d",&x);
    while(x>1){
        if(x%2!=0)
            bacteria++;
        x=x/2;
    }
    cout<<bacteria;
}
