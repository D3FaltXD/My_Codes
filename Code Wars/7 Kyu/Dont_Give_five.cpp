/*This kata is the performance version of Don't give me five by user5036852.

Your mission, should you accept it, is to return the count of all integers in a given range which do not contain the digit 5 (in base 10 representation).
You are given the start and the end of the integer range. The start and the end are both inclusive.

Examples:

1,9 -> 1,2,3,4,6,7,8,9 -> return 8
4,17 -> 4,6,7,8,9,10,11,12,13,14,16,17 -> return 12
The result may contain fives. ;-)
The start will always be smaller than the end. Both numbers can be also negative.

The regions can be very large and there will be a large number of test cases. So brute force solutions will certainly time out!

Good luck, warrior!


#include <bits/stdc++.h>
#include<cmath>
#define ll long long

ll dontGiveMeFive(ll start, ll end)
{
  using namespace std;
  int tnum=(end-start)+1;
  int totfi;
  int endfi;
  int startfi;
  if((end/5)%2==0){
      endfi=(end/10);
  }
    else{
        endfi=((abs(end)/5)+1)/2;
    }
    if((start/5)%2==0){
      startfi=(start/10);
  }
    else{
        startfi=((abs(start)/5)+1)/2;
    }
    cout<<"Endfi :"<<endfi<<" Startfi :"<<startfi<<endl;
    if(endfi>startfi){
    return tnum-(endfi-startfi);
    }
    else{
        return tnum-(endfi+startfi);
    }
}

int main(){
    using namespace std;
    cout<<dontGiveMeFive(1, 3)<<endl;
}

*/

