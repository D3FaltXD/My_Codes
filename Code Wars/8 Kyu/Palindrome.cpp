#include <string>
#include <bits/stdc++.h>
bool isPalindrom (std::string str)
{
  transform(str.begin(), str.end(), str.begin(), ::tolower);
  std::string a=str;
  std::reverse(a.begin(),a.end());
  return str==a?true:false;
  
}
int main(){
    using namespace std;
    cout<<isPalindrom("aaaaavaaaaa")<<endl;
}