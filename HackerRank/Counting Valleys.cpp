#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'countingValleys' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER steps
 *  2. STRING path
 */

int countingValleys(int steps, string path) {
    int i,altitude=0,countOfValley=0;
    for(i=0;i<=path.size()-1;i++){
        
        // only condtion for a valley to be found is to check from its ending condition
        // i.e if we are touching alitude level= 0 by going up, then we just travelled through a valley
        if(path[i]=='U'&&altitude==-1)
            countOfValley++;
        if(path[i]=='U')
            altitude++;
        else altitude--;
    }
    return countOfValley;
}
