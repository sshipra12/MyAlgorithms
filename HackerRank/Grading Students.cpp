#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'gradingStudents' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY grades as parameter.
 */

vector<int> gradingStudents(vector<int> grades) {
    int i;
    for(i=0;i<grades.size();i++){
        if(grades[i]>=38&&grades[i]%5>=3)
            grades[i]=grades[i]+(5-grades[i]%5);
    }
    return grades;
}
