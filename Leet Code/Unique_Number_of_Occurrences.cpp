/* Given an array of integers arr, return true if the number of occurrences of each value in the array is unique, or false otherwise.

 

Example 1:

Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.

Example 2:

Input: arr = [1,2]
Output: false

Example 3:

Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
Output: true

 

Constraints:

    1 <= arr.length <= 1000
    -1000 <= arr[i] <= 1000

 */

#include<bits/stdc++.h>
#include<vector>
using namespace  std;

class Solution {
public:
     void insertionSort(std::vector<int> &vec)
{
    for (auto it = vec.begin(); it != vec.end(); it++)
    {        
        // Searching the upper bound, i.e., first 
        // element greater than *it from beginning
        auto const insertion_point = 
                std::upper_bound(vec.begin(), it, *it);
          
        // Shifting the unsorted part
        std::rotate(insertion_point, it, it+1);        
    }
}
bool uniqueOccurrences(vector<int>& arr){
        insertionSort(arr);
        vector<int>counts;
         cout<<"sorted array is:"<<endl;
         for(auto i:arr){
            cout<<i<<endl;
        }
        for(int i=0;i<arr.size();i++){
            counts.push_back(count(arr.begin()+i,arr.end(),arr[i]));
            i+=count(arr.begin()+i,arr.end(),arr[i])-1;
        }
        for(auto i:counts){
            cout<<i<<endl;
        }
        for(int j=0;j<counts.size();j++){
            if(count(counts.begin(),counts.end(),counts[j])>=2){
                return false;
            }
        
        }
    return true;

}
};
