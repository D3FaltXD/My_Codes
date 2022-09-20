/* Given two arrays of strings a1 and a2 return a sorted array r in lexicographical order of the strings of a1 which are substrings of strings of a2.

Example 1:
a1 = ["arp", "live", "strong"]

a2 = ["lively", "alive", "harp", "sharp", "armstrong"]

returns ["arp", "live", "strong"]

Example 2:
a1 = ["tarp", "mice", "bull"]

a2 = ["lively", "alive", "harp", "sharp", "armstrong"]

returns []

Notes:
Arrays are written in "general" notation. See "Your Test Cases" for examples in your language.
In Shell bash a1 and a2 are strings. The return is a string where words are separated by commas.
Beware: r must be without duplicates.
 */
#include <bits/stdc++.h>
#include <string>
class WhichAreIn
{

  public:
    std::vector<std::string> inArray(std::vector<std::string> &array1, std::vector<std::string> &array2){
        using namespace std;
        vector<string>output;
        for(auto i:array1){
        int deft=-1;
          for(auto j:array2){
            if(j.find(i)!=-1){
              deft=j.find(i);
            }
          }
        if(deft!=-1){
          output.push_back(i);
        }
        }
    }
};
