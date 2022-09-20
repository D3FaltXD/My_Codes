#include<sstream>
#include<bits/stdc++.h>
std::string no_space(std::string x)
{
    using namespace std;
    stringstream f(x);
    string hold,output;
    while(f>>hold){
        output+=hold;
    }
    return output;
}
int main(){
    using namespace std;
    cout<<no_space("8 j 8   mBliB8g  imjB8B8  jl  B")<<endl;
}