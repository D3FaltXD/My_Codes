/* Create a function that returns the string "Burp" with the amount of "r's" determined by the input parameters of the function.

Examples
longBurp(3) ➞ "Burrrp"

longBurp(5) ➞ "Burrrrrp"

longBurp(9) ➞ "Burrrrrrrrrp"   */
#include <iostream>
using namespace std;
string longBurp(int num) {
    string X="Bu";
    for(int i=0;i<num;i++){
        X=X+"r";
    }
    return X+"p";
}

int main(){
    string X=longBurp(20);
    cout<<X;
}