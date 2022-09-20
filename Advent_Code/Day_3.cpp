#include <fstream>
#include <iostream>
#include <vector>
using namespace std;
int main ()
{
    ifstream file_reader( "/home/d3falt/C++ files/Advent_Code/Inputs/Input3.txt" );
    string strF="";
    for(int i=0;i<12;i++){ //iterate through 12 positions in the strings
        int zeroC=0; //zero counter
        int oneC=0;  //one counter
        string str; //to access string
        for(int j=0;j<1000;j++){ //iterate through all 12 strings
            file_reader>>str;
            switch(str[i]){
                case '0':
                    zeroC++;
                    break;
                case '1':
                    oneC++;
                    break;
                    }
        }
        cout<<zeroC<<endl;
        cout<<oneC<<endl<<endl;
        if(zeroC>oneC){
            strF+='0';
        }
        else{
            strF+='1';
        }
        
        }
    cout<<"Gamma :"<<strF<<endl;
    cout<<"Decimal Ver:"<<stoi(strF,nullptr,2)<<endl<<endl;
    strF="";
    for(int i=0;i<12;i++){
        int zeroC=0;
        int oneC=0;
        for(int j=0;j<1000;j++){
            string str;
            file_reader>>str;
            switch(str[i]){
                case '0':
                    zeroC++;
                    break;
                case '1':
                    oneC++;
                    break;
                    }
        }
        if(zeroC<oneC){
            strF+='0';
        }
        else{
            strF+='1';
        }
        
        }
    cout<<"epsilon :"<<strF<<endl;
    cout<<"Decimal Ver:"<<stoi(strF,nullptr,2)<<endl<<endl;

    cout<<"Result :"<<432*1615<<endl;
}