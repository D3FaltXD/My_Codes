/* Kata Task
I have a cat and a dog.

I got them at the same time as kitten/puppy. That was humanYears years ago.

Return their respective ages now as [humanYears,catYears,dogYears]

NOTES:

humanYears >= 1
humanYears are whole numbers only
Cat Years
15 cat years for first year
+9 cat years for second year
+4 cat years for each year after that
Dog Years
15 dog years for first year
+9 dog years for second year
+5 dog years for each year after that
*/
#include <vector>
#include <bits/stdc++.h>

std::vector<int> humanYearsCatYearsDogYears(int humanYears) {
    using namespace std;
    int cat=0;
    int dog=0;
    vector<int>output;
    for(int i=0;i<humanYears;i++){  
        switch (i){
            case 0:
                cat+=15;
                dog+=15;
                break;
            case 1:
                cat+=9;
                dog+=9;
                break;
            default:
                cat+=4;
                dog+=5;
                break;
        }
    }
    output.push_back(humanYears);
    output.push_back(cat);
    output.push_back(dog);
    return output;
}