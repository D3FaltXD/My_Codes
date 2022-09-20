/* Task
You will be given an array of numbers. You have to sort the odd numbers in ascending order while leaving the even numbers at their original positions.

Examples
[7, 1]  =>  [1, 7]
[5, 8, 6, 3, 4]  =>  [3, 8, 6, 5, 4]
[9, 8, 7, 6, 5, 4, 3, 2, 1, 0]  =>  [1, 8, 3, 6, 5, 4, 7, 2, 9, 0] */
#include <bits/stdc++.h>
class Kata
{
public:
    std::vector<int>sort(std::vector<int>array){
        using namespace std;
        for(size_t i=0;i<array.size();i++){
            int temp;
            if(array[i]>array[i+1]){
                temp=array[i+1];
                array[i+1]=array[i];
                array[i]=temp;
            }
        }    
        return array;
    }
    std::vector<int> sortArray(std::vector<int> array)
    {
        using namespace std;        
        vector<int>oddn={};
        for(size_t i=0;i<array.size();i++){
            if(array[i]%2!=0){
                oddn.push_back(array[i]);
            }
        }  
        sort(oddn);      
        int counter=0;
        for(size_t j=0;j<array.size();j++){
            if(array[j]%2!=0){
                array[j]=oddn[counter];
                counter++;
            }
        }
        return array;
    }
};
