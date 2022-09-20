/* We want to know the index of the vowels in a given word, for example, there are two vowels in the word super (the second and fourth letters).

So given a string "super", we should return a list of [2, 4].

Some examples:
Mmmm  => []
Super => [2,4]
Apple => [1,5]
YoMama -> [1,2,4,6]
NOTES
Vowels in this context refers to: a e i o u y (including upper case)
This is indexed from [1..n] (not zero indexed!) */
#include <vector>
#include <string>
#include <iostream>
std::vector<int> vowelIndices(const std::string& word)
{
    using namespace std;
    std::vector<int> res;
    int counter = 0;
    for(auto i:word){
        counter++;
        if(isupper(i)){
            i=tolower(i);
        }
        if(i=='a'||i=='e'||i=='o'||i=='u'||i=='i'||i=='y'){
            cout<<i<<endl;
            res.push_back(counter);
        }
    }
    return res;
}
int main(){
    using namespace std;
    vector<int>s=vowelIndices("supercalifragilisticexpialidocious");
    for(auto i:s){
        cout<<i<<endl;
    }
}
/* std::vector<int> vowelIndices(std::string word)
{
  std::vector<int> res; 
  const std::string vowels {"aeiouyAEIOUY"};
  auto found = word.find_first_of(vowels);
  while(found!=std::string::npos)
  {
    ++found;
    res.push_back(found);
    found = word.find_first_of(vowels, found);
  }
  return res;
} */