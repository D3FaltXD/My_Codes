/* The President's phone is broken
He is not very happy.

The only letters still working are uppercase E, F, I, R, U, Y.

An angry tweet is sent to the department responsible for presidential phone maintenance.

Kata Task
Decipher the tweet by looking for words with known meanings.

FIRE = "You are fired!"
FURY = "I am furious."
If no known words are found, or unexpected letters are encountered, then it must be a "Fake tweet."

Notes
The tweet reads left-to-right.
Any letters not spelling words FIRE or FURY are just ignored
If multiple of the same words are found in a row then plural rules apply -
FIRE x 1 = "You are fired!"
FIRE x 2 = "You and you are fired!"
FIRE x 3 = "You and you and you are fired!"
etc...
FURY x 1 = "I am furious."
FURY x 2 = "I am really furious."
FURY x 3 = "I am really really furious."
etc...
Examples
ex1. FURYYYFIREYYFIRE = "I am furious. You and you are fired!"
ex2. FIREYYFURYYFURYYFURRYFIRE = "You are fired! I am really furious. You are fired!"
ex3. FYRYFIRUFIRUFURE = "Fake tweet."
 */

#include <string>
#include<bits/stdc++.h>
#include<vector>
std::string fire_and_fury(const std::string& tweet) {
    using namespace std;
    if(tweet.find("FIRE")==-1 && tweet.find("FURY")==-1){ 
        return "Fake tweet.";
    }
    int fi,fu;
    string output=tweet;
    vector<string>storage;
    while(fi!=-1 && fu!=-1){
        fi=output.find("FIRE");
        fu=output.find("FURY");
        if(fi<fu || fu==-1){
            storage.push_back("fi");
            output.erase(output.begin()+fi,output.begin()+fi+4);
           
        }
        else if(fu!=-1) {
            storage.push_back("fu");
            output.erase(output.begin()+fu,output.begin()+fu+4);
        }
    }   
    output="";
    for(auto i:storage){
        cout<<i<<endl;
    }
    for(int i=0;i<storage.size();i++){
        
        if(storage[i]=="fi"){
            {
            output+="You are fired!";
        }
    }
    else{
        
        {
            output+="I am furious.";
        }
    }
}
    return output;
}
int main(){
    using namespace std;
    cout<<fire_and_fury("FURYYYFIREYYFIRE")<<endl;
}
//fi fu fu fu fi
/*f(storage[i+1]=="fu"&& i+1<storage.size()){
                if(storage[i+2]=="fu"&& i+2<storage.size()){
                    i+2;
                    output+="I am really really furious.";
                }
                else{
                    i+1;
                    output+="I am really furious.";
                }
            }
if(storage[i+1]=="fi" && i+1<storage.size()){
                if(storage[i+2]=="fi"&& i+2<storage.size()){
                    i+2;
                    output+="You and you and you are fired!";
                }
                else{
                    i+1;
                    output+="You and you are fired!";
                }
            }
        else */