#include <bits/stdc++.h>

using namespace std;

int main()
{

    int i;
    string s,ans="";
    cin>>s;
    for(i=0;i<=s.size()-1;i++){
        if(s[i]<97)
            s[i]+=32;
        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='y'){
            ans+=".";     // ans+="." +s[i] doesn't work because "." is a string whereas s[i] is a char
            ans+=s[i];
        }
    }
    cout<<ans;

}
