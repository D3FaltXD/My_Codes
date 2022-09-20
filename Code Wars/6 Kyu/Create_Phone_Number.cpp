/* Write a function that accepts an array of 10 integers (between 0 and 9), that returns a string of those numbers in the form of a phone number.

Example
createPhoneNumber(int[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 0}) // => returns "(123) 456-7890"
The returned format must be correct in order to complete this challenge.
Don't forget the space after the closing parentheses! */
#include <string>
#include <bits/stdc++.h>
std::string createPhoneNumber(const int arr [10]){
  using namespace std;
  string output="(";
  for(int i=0;i<10;i++){
      output+=to_string(arr[i]);
      if(i==2){
          output+=") ";
      }
      else if(i==5){
          output+='-';
      }
  }
    return output;
}
int main(){
    using namespace std;
    int arr[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    cout<<"Hello"+arr[3]<<endl;
}

/* 
PRO MOVE

#include <string>

std::string createPhoneNumber(const int arr [10]){
  char buf[15];
  snprintf(buf, sizeof(buf), "(%d%d%d) %d%d%d-%d%d%d%d%d", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], arr[6], arr[7], arr[8], arr[9]);
  return buf;
}
*/