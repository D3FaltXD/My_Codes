/* Create a function that takes an array and finds the integer which appears an odd number of times.

Examples
findOdd([1, 1, 2, -2, 5, 2, 4, 4, -1, -2, 5]) ➞ -1

findOdd([20, 1, 1, 2, 2, 3, 3, 5, 5, 4, 20, 4, 5]) ➞ 5

findOdd([10]) ➞ 10
Notes
There will always only be one integer that appears an odd number of times. */

#include <iostream>
#include <vector>
using namespace std;

int findOdd(vector<int> arr) {
    int counter=0;
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr.size();j++){
            if(arr[i]==arr[j]){
                counter++;
            }
        }
        if(counter%2!=0){
            return arr[i];
        }
        counter=0;
    }
}

int main(){
    cout<<findOdd({10})<<endl;
}