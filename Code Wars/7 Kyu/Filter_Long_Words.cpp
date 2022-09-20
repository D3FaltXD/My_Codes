/* Write a function that takes a string and an an integer n as parameters and returns a list of all words that are longer than n.

Example:

* With input "The quick brown fox jumps over the lazy dog", 4
* Return ['quick', 'brown', 'jumps']
 */
#include <vector>
#include <string>
#include <sstream>
std::vector<std::string> filter_long_words(const std::string& sentence, int n) {
  std::vector<std::string>output;
  std::stringstream f(sentence);
  std::string s;
  
  while(f>>s){
      if(s.length() >n){
          output.push_back(s);
      }
  }
    return output;
}