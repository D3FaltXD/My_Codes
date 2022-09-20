/*In this Kata, you will be given a string and your task will be to return a list of ints detailing the count of uppercase letters, lowercase, numbers and special characters, as follows.

Solve("*'&ABCDabcde12345") = [4,5,5,3]. 
--the order is: uppercase letters, lowercase, numbers and special characters.
More examples in the test cases.

Good luck! */
#include <vector>
#include <bits/stdc++.h>
std::vector<int> solve(std::string s){
    using namespace std;
    vector<int>output;
    int uc=0;
    int lc=0;
    int num=0;
    int sc=0;
    for(auto i:s){
        if(isupper(i)){
            uc++;
        }
        else if(islower(i)){
            lc++;
        }
        else if(isdigit(i)){
            num++;
        }
        else{
            sc++;
        }
    }
    output.push_back(uc);
    output.push_back(lc);
    output.push_back(num);
    output.push_back(sc);
    return output;
}
