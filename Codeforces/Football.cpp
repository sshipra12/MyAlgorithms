#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,maxConsecutive=0,consecutive=0;
    string s;
    cin>>s;
    
    for(i=0;i<s.size();i++){
        if(i==0||s[i]==s[i-1])
            consecutive++;
        
        //breaking conditions
        if(i==s.size()-1||s[i]!=s[i-1]){
            if(consecutive>maxConsecutive)
                maxConsecutive=consecutive;
            consecutive=1;
        }
    }
    if(maxConsecutive>=7)
        cout<<"YES";
    else cout<<"NO";
}
