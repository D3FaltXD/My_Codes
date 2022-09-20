/*Create two functions toCamelCase() and toSnakeCase() that each take a single string and convert it into either camelCase or snake_case. If you're not sure what these terms mean, check the Resources tab above.

Examples
toCamelCase("hello_edabit") ➞ "helloEdabit"

toSnakeCase("helloEdabit") ➞ "hello_edabit"

toCamelCase("is_modal_open") ➞ "isModalOpen"

toSnakeCase("getColor") ➞ "get_color"
Notes
Test input will always be appropriately formatted as either camelCase or snake_case, depending on the function being called. */


#include <iostream>
#include <cstring>
using namespace std;
string toSnakeCase(string str) {
    for(int i=0;i<str.length();i++){
        if (isupper(str[i])){
            char lower= tolower(str[i]);
            str = str.substr(0,i)+"_"+lower+ str.substr(i+1);
            
        }
    }
	return str;
}

string toCamelCase(string str) { 
    for(int i=0;i<str.length();i++){
        if (str[i]=='_'){
            char upper= toupper(str[i+1]);
            str = str.substr(0,i)+ upper+ str.substr(i+2);
            
        }
    }
     return str;
	}
int main(){
    cout<<"helloEdabit is changed to :"<<toSnakeCase("helloEdabIt")<<"             "<<endl;
    cout<<"hello_edabit is changed to :"<<toCamelCase("hello_edabit")<<"             "<<endl;
    cout<<"is_modal_open is changed to :"<<toCamelCase("is_modal_open")<<"             "<<endl;
    cout<<"getColor is changed to :"<<toSnakeCase("getColor")<<"             "<<endl;

}