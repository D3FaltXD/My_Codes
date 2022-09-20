/* Write a function, persistence, that takes in a positive parameter num and returns its multiplicative persistence, which is the number of times you must multiply the digits in num until you reach a single digit.

For example (Input --> Output):

39 --> 3 (because 3*9 = 27, 2*7 = 14, 1*4 = 4 and 4 has only one digit)
999 --> 4 (because 9*9*9 = 729, 7*2*9 = 126, 1*2*6 = 12, and finally 1*2 = 2)
4 --> 0 (because 4 is already a one-digit number) */

#include <bits/stdc++.h>
int persistence(long long n){
 using namespace std;
 int counter=0;
 if(to_string(n).length()==1){
     return 0;
 }
int temp;
do{ 
  temp=1;
  int s=n;
  for(int i=0;i<to_string(s).length();i++){
      temp*=n%10;
        n=n/10;
    }
    n=temp;
    counter++;

}while(to_string(temp).length()!=1);

return counter;
}

int main(){
    using namespace std;
    cout<<"Answer is :"<<persistence(25)<<endl;
}
/* int persistence(long long n) {
  long long p = 1;
  if (n < 10) { return 0; } 
  while (n > 0) { p = (n % 10) * p; n = n/10; }
  return persistence(p) + 1;
} */