#include <iostream>
#include <string>

using namespace std;

int getCount(const string& inputStr){
  int num_vowels = 0;
  for(int i=0;i<inputStr.length();++i){
      switch(inputStr[i]){
          case 'a':
            num_vowels++;
           break;
          case 'e':
            num_vowels++;
            break;
          case 'i':
            num_vowels++;
            break;
          case 'o':
            num_vowels++;
            break;
          case 'u':
            num_vowels++;
            break;
      }
  }
  return num_vowels;
}
int main(){
    cout<<getCount("abracadabra")<<endl;
}