/*C*ns*r*d Str*ngs
Someone has attempted to censor my strings by replacing every vowel with a *, l*k* th*s. Luckily, I've been able to find the vowels that were removed.

Given a censored string and a string of the censored vowels, return the original uncensored string.

Example
uncensor("Wh*r* d*d my v*w*ls g*?", "eeioeo") ➞ "Where did my vowels go?"

uncensor("abcd", "") ➞ "abcd"

uncensor("*PP*RC*S*", "UEAE") ➞ "UPPERCASE"
Notes
The vowels are given in the correct order.
The number of vowels will match the number of * characters in the censored string. */

#include <iostream>
#include <string>
using namespace std;

string uncensor(string str,string vowels) {
    int counter = 0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='*'){
            str=str.substr(0,i)+vowels[counter]+str.substr(i+1);
            counter++;
        }
    }
    return str;
}
int main(){
    cout<<uncensor("*PP*RC*S*", "UEAE")<<endl;
}