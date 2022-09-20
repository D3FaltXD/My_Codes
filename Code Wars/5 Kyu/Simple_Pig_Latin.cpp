/* Move the first letter of each word to the end of it, then add "ay" to the end of the word. Leave punctuation marks untouched.

Examples
pigIt('Pig latin is cool'); // igPay atinlay siay oolcay
pigIt('Hello world !');     // elloHay orldway ! */
#include <iostream>
#include <string>
#include <sstream>
std::string pig_it(std::string str)
{
    using namespace std;
    string output="";
    stringstream ss(str);
    string temp;
    while(ss>>temp){
        if(isalpha(temp[0])){
        temp=temp.substr(1)+temp[0]+"ay";
        output+=temp+" ";
        }
        else 
            output+=temp+" ";
    }
    return output.substr(0,output.length()-1);

}
int main(){
    using namespace std;
    cout<<pig_it("!@#%")<<endl;
}