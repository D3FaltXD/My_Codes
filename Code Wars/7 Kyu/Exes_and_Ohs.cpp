/* Check to see if a string has the same amount of 'x's and 'o's. The method must return a boolean and be case insensitive. The string can contain any char.

Examples input/output:

XO("ooxx") => true
XO("xooxx") => false
XO("ooxXm") => true
XO("zpzpzpp") => true // when no 'x' and 'o' is present should return true
XO("zzoo") => false */
 #include <iostream>
 #include <string>
 #include <vector>
 using namespace std;
 bool XO(const string& str)
{
  int counterX=0;
  int counterO=0;
  for(int i=0;i<str.length();i++){
      switch (str[i])
      {
      case 'x':
          counterX++;
          break;
      
      case 'X':
        counterX++;
        break;
      case 'o':
        counterO++;
        break;
      
      case 'O':
        counterO++;
        break;
      default:
          break;
      }
  }  
  if(counterO==counterX){
    return true;
  }
  return false;
}

int main(){
    cout<<XO("xooxx")<<endl;
}