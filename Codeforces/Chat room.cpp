#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,ind=0;
    string s,hello="hello";
    
    // we just have to find if string "hello" occurs in given string s as a subsequence
    // this way we can check whether a Given small string/array occurs as a subsequence of a bigger string/array
    cin>>s;
    for(i=0;i<s.size()&&ind<hello.size();i++){
        if(s[i]==hello[ind])
            ind++;
    }
    if(ind==hello.size())
        cout<<"YES";
    else cout<<"NO";
}
