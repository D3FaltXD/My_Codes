#include <fstream>
#include <iostream>
#include <vector>
using namespace std;
int main ()
{
    ifstream file_reader( "input2.txt" );
    int FD=0;
    int UP=0;
    int DO=0;
    for ( int i = 0; i < 1000; i++ )
    {
        string dir;
        int coord;
        file_reader >> dir;
        file_reader>>coord;
        
        if(dir=="up"){
            UP+=coord;
        }
        else if(dir=="down"){
            DO+=coord;
        }
        else{
            FD+=coord;
        }

    }
    cout<<FD*(DO-UP)<<endl;

//--------------------------------------------------------Part 2------------------------------------------------------------------------------------
    int FD=0;
    int UP=0;
    int DO=0;
    int aim=0;
    for ( int i = 0; i < 1000; i++ )
    {
        string dir;
        int coord;
        file_reader >> dir;
        file_reader>>coord;
        
        if(dir=="up"){
            UP+=coord;
        }
        else if(dir=="down"){
            DO+=coord;
        }
        else{
            FD+=coord;
            aim+=(DO-UP)*coord;
        }

    }
    cout<<"Part 2 : "<<FD*aim<<endl;

}