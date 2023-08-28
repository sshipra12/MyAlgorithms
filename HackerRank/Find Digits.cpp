#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'findDigits' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER n as parameter.
 */

int findDigits(int n) {
    // get each digit and check if it divides n
    int num=n,digit,divisors=0;
  
    while(num>0){
        digit=num%10;
        if(digit!=0&&n%digit==0)
            divisors++;
        num=num/10;    
    }
    return  divisors;
}
