#include <fstream>
#include <iostream>
#include <vector>
using namespace std;
int main ()
{
ifstream file_reader( "/home/d3falt/C++ files/Advent_Code/Inputs/Input1.txt" );
if ( ! file_reader.is_open() )
{
cout << "Could not open file!" << '\n';
}
vector<int> scores;
for ( int i = 0; i < 2000; i++ )
{
int score;
file_reader >> score;
scores.push_back( score );
}
int counter=0;
for(int i=0;i<2000;i++){
    if(scores[i+1]>scores[i]){
        counter++;
    }// part 1
}
cout<<"Part 1: "<<counter<<endl;
counter =0;
vector<int> score2;
for(int j=0;j<2000;j++){
    score2.push_back(scores[j]+scores[j+1]+scores[j+2]);
}
for(int i=0;i<score2.size();i++){
    if(score2[i+1]>score2[i]){
        counter++;
    }

}
cout<<counter<<endl;
}