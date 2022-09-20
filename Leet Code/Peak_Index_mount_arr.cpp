/*An array arr a mountain if the following properties hold:

    arr.length >= 3
    There exists some i with 0 < i < arr.length - 1 such that:
        arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
        arr[i] > arr[i + 1] > ... > arr[arr.length - 1]

Given a mountain array arr, return the index i such that arr[0] < arr[1] < ... < arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].

You must solve it in O(log(arr.length)) time complexity.

 

Example 1:

Input: arr = [0,1,0]
Output: 1

Example 2:

Input: arr = [0,2,1,0]
Output: 1

Example 3:

Input: arr = [0,10,5,2]
Output: 1

 

Constraints:

    3 <= arr.length <= 105
    0 <= arr[i] <= 106
    arr is guaranteed to be a mountain array.

*/
#include <bits/stdc++.h>
using namespace std;
    int peakIndexInMountainArray(vector<int>& arr) {
    int start=0;
    int end=arr.size()-1;
    while(start <= end){
        int mid=(start+end)/2;
        cout<<arr[mid]<<endl;
        if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1] ){
            return mid;
        }
        else if(arr[mid]<arr[mid+1] && arr[mid]>arr[mid-1]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;        
    }
    int main(){
        vector<int>hello={3,5,3,2,0};
        cout<<peakIndexInMountainArray(hello)<<endl;
    }

/*class Solution {
public:
  
    int find_pivot(vector<int> v) {
	int s = 0, e = v.size() - 1;
	int mid=(s + e) / 2;
	while (s < e)
	{
		if(v[mid] < v[mid+1])
     			s=mid+1;
    		else
      			e = mid;
    
		mid = (s + e) / 2;
	}
	return s;
    }
    int peakIndexInMountainArray(vector<int>& arr) {
        return find_pivot(arr);
    }
}; */