#include <iostream>
#include <vector>
using namespace std;
int LinearSearch(vector<int> List,int target){
    for(int i=0;i<List.size();i++){
        if(List[i]==target){
            return i;
        }
    }
 return -1;
}
int main(){
    cout<<LinearSearch({1,2,4,3,6,6,7,3,21,},66)<<endl;
}

//Not useful as pretty slow O(n);