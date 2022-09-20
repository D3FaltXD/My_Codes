#include <vector>

int positive_sum (const std::vector<int> arr){
  int output = 0;
  for(auto i:arr){
      if(i>0){
          output+=i;
      }
  }
    return output;
}