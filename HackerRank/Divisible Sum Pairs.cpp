#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'divisibleSumPairs' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER k
 *  3. INTEGER_ARRAY ar
 */

int divisibleSumPairs(int n, int k, vector<int> ar) {
    int i,j,pairs=0;
    for(i=0;i<ar.size();i++){
        for(j=i+1;j<ar.size();j++){
            if((ar[i]+ar[j])%k==0)     // NOTE : ( (ar[i]+ar[j])%k==0 ) is correct way NOT ( ar[i]+ar[j]%k==0 )
                pairs++;
        }
    }
    return pairs;
}
