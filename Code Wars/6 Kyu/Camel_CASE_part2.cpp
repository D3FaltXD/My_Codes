/*Complete the method/function so that it converts dash/underscore delimited words into camel casing. The first word within the output should be capitalized only if the original word was capitalized (known as Upper Camel Case, also often referred to as Pascal case).

Examples
"the-stealth-warrior" gets converted to "theStealthWarrior"
"The_Stealth_Warrior" gets converted to "TheStealthWarrior" */
#include <iostream>
#include <string>
std::string to_camel_case(std::string text) {
  using namespace std;
  string output="";
  for(int i=0;i<text.length();i++){
      if(text[i]=='_' || text[i]=='-'){
          output+=toupper(text[i+1]);
          i++;
      }
    else
        output+=text[i];
  }
    return output;
}
int main(){
    using namespace std;
    cout<<to_camel_case("the_stealth_warrior")<<endl;
}
