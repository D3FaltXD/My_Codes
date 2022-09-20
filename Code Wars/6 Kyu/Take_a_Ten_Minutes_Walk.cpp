/* You live in the city of Cartesia where all roads are laid out in a perfect grid. You arrived ten minutes too early to an appointment, so you decided to take 
the opportunity to go for a short walk. The city provides its citizens with a Walk Generating App on their phones -- everytime you press the button it sends you an array of one-letter 
strings representing directions to walk (eg. ['n', 's', 'w', 'e']). You always walk only a single block for each letter (direction) and you know it takes you one minute to traverse one city block, 
so create a function that will return true if the walk the app gives you will take you exactly ten minutes (you don't want to be early or late!) and will, of course, 
return you to your starting point. Return false otherwise.

Note: you will always receive a valid array (string in COBOL) containing a random assortment of direction letters ('n', 's', 'e', or 'w' only). It will never give you an empty array (that's not a walk, that's standing still!).

 */
#include<vector>
#include<iostream>
bool isValidWalk(std::vector<char> walk) {
  int x=0;
  int y=0;
  if(walk.size()!=10){
      return false;
  }
  for(auto i:walk){
      switch(i){
        case 'n':
            x++;
            break;
        case 's':
            x--;
            break;
        case 'w':
            y++;
            break;
        case 'e':
            y--;
            break;
      }
  }
    if(x==0 && y==0){
        return true;
    }
    return false;
}
int main(){
    using namespace std;
    std::vector<char> a={'n','s','n','s','n','s','n','s','n','s','n','s'};
    std::cout<<a.size()<<endl;
}