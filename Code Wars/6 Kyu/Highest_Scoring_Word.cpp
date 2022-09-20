/* Given a string of words, you need to find the highest scoring word.

Each letter of a word scores points according to its position in the alphabet: a = 1, b = 2, c = 3 etc.

You need to return the highest scoring word as a string.

If two words score the same, return the word that appears earliest in the original string.

All letters will be lowercase and all inputs will be valid. */
#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <math.h>
#include <string>

std::string highestScoringWord(const std::string &str)
{
  std::cout << str << std::endl;

  std::istringstream stm(str);
  std::string token, maxString;
  long maxValue = 0;

  auto GetValue = [](const std::string& s)
  {
    long r = 0;
    for (auto c : s)
      r += int(c) - int('a') + 1;

    return r;
  };

  while (std::getline(stm, token, ' ')) 
  { 
    long actValue = GetValue(token);
    if (actValue > maxValue)
    {
      maxValue = actValue;
      maxString = token;
    }
  }

  return maxString;
}
int main(){
    using namespace std;
    string points=("what time are we climbing up the volcano");
    cout<<highestScoringWord(points)<<endl;
  
}