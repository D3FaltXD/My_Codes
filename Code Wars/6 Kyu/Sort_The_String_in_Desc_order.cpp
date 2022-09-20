/* You have to sort the inner content of every word of a string in descending order.

The inner content is the content of a word without first and the last char.

Some examples:

"sort the inner content in descending order"  -->  "srot the inner ctonnet in dsnnieedcg oredr"
"wait for me"        -->  "wiat for me"
"this kata is easy"  -->  "tihs ktaa is esay"
Words are made up of lowercase letters.

The string will never be null and will never be empty. In C/C++ the string is always nul-terminated.

Have fun coding it and please don't forget to vote and rank this kata! :-)

I have also created other katas. Take a look if you enjoyed this kata!
*/
#include <bits/stdc++.h>
std::string sortTheInnerContent (const std::string words, int length) {
  using namespace std;
  string s;
  string output="";
  for(int x=0;x<words.length();x++){
    while(isalpha(words[x])){
        s+=words[x];
        x++;
    }
    for (int i = 1; i < s.length(); ++i) {
        for (int j = 1; j <s.length()  - 2; ++j) {
            if (s[j] <s[j + 1]) {
                char temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
  }
    s+=words[x];
    output+=s;
    s="";
}
    output.erase(output.end()-1);
    return output;
}
int main(){
    using namespace std;
    string a="tihs ktaa is esay";
    cout<<sortTheInnerContent(a,a.length())<<endl;
}