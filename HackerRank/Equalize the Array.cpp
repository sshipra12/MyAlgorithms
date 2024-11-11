/*
 * Complete the 'equalizeArray' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.

Q => Given an array of integers, determine the minimum number of elements to delete to leave only elements of equal value.
 */

int equalizeArray(vector<int> arr) {
    
    int i,frequencyarray[101],maxfrequency=0;
    for(i=0;i<101;i++){
        frequencyarray[i]=0;
    }
    
    for(i=0;i<arr.size();i++){
        frequencyarray[arr[i]]=frequencyarray[arr[i]]+1;
    }
    
    for(i=0;i<101;i++){
        if(frequencyarray[i]>maxfrequency){
            maxfrequency=frequencyarray[i];
        }
    }
    
    return arr.size()-maxfrequency;
}
