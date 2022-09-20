/* Given a random non-negative number, you have to return the digits of this number within an array in reverse order.

Example:
348597 => [7,9,5,8,4,3]
0 => [0]
*/
#include <bits/stdc++.h>
#include <vector>

std::vector<int> digitize(unsigned long n) 
{        
    using namespace std;
    vector<int>output;
    string x=to_string(n);
    for(int i=x.length();i>=0;i--){
        string y="0";
        y+=x[i];
        output.push_back(stoi(y));
    }
    vector<int>::iterator it;
    it=output.begin();
    output.erase(it);
    return output;
}
int main(){
    using namespace std;
    vector<int> v=digitize(35231);
    for(auto i:v){
        cout<<i<<endl;
    }
}