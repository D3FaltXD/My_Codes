/* Jack's teacher gave him a ton of equations for homework. The thing is they are all kind of same so they are boring.

So help him by making a equation solving function that will return the value of x.

Test Cases will be like this:

# INPUT            # RETURN
'x + 1 = 9 - 2'    # 6
'- 10 = x'         # -10
'x - 2 + 3 = 2'    # 1
'- x = - 1'        # 1
All test cases are valid.
Every +, - and numbers will be separated by space.
There will be only one x either on the left or right.
x can have a - mark before it.
returned object will be a integer. */
#include <string>
#include <bits/stdc++.h>
#include<vector>
int solve(const std::string& eq)
{
    using namespace std;
    vector<int>storage;
    int lh=0;
    int sum=0;
    int neg=0;
    int xc=0;
    for(int i=0;i<eq.length();i++){
        if(eq[i]=='-'){
            string s="0";
            while(isdigit(eq[i+2])){
                s+=eq[i+2];
                i++;
            }
            lh-=stoi(s);
            i++;
        }
        else if(isdigit(eq[i])){
            string s="0";
            while(isdigit(eq[i])){
                s+=eq[i];
                i++;
            }
            lh+=stoi(s);
        }
        
         else if(eq[i]=='='){
            sum=lh;
            lh=0;
            if(xc==0){
                neg++;
            }

        }
        else if(eq[i]=='x'){
            if(eq[i-2]=='-'){
                neg++;
            }
            xc++;
        }
    }

    if(neg%2==0){
    return lh-sum;
    }
    return -(lh-sum);
    
}
int main(){
    using namespace std;
    cout<<solve("- x = - 1")<<endl;
}