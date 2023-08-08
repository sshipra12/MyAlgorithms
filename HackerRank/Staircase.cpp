/*
 * Complete the 'staircase' function below.
 *
 * The function accepts INTEGER n as parameter.
Q => print this staircase of given size n
   #
  ##
 ###
####
 
 */

void staircase(int n) {
    int i,j;
    // for ith row/line print (n-i) spaces and (i) #
    for(i=1;i<=n;i++){
        for(j=1;j<=(n-i);j++)
          cout<<" ";
        for(j=1;j<=i;j++)
          cout<<'#';
        cout<<endl;    
    }
}
