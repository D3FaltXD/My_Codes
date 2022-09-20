/* Given an array of integers.

Return an array, where the first element is the count of positives numbers and the second element is sum of negative numbers. 0 is neither positive nor negative.

If the input is an empty array or is null, return an empty array.

Example
For input [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -11, -12, -13, -14, -15], you should return [10, -65]. */
#include <vector>
#include<bits/stdc++.h>
std::vector<int> countPositivesSumNegatives(std::vector<int> input)
{
    using namespace std;
    if(input.size()==0){
        return {};
    }
    vector<int> output={0,0};
    for(auto i:input){
        if(i>0){
            ++output[0];
        }
        else{
            output[1]+=i;
            }
    }
    return output;
}
int main(){
    using namespace std;
    vector<int>out=countPositivesSumNegatives({0, 2, 3, 0, 5, 6, 7, 8, 9, 10, -11, -12, -13, -14});
    for(auto i:out){
        cout<<i<<endl;
    }
}