/* Rock Paper Scissors
Let's play! You have to return which player won! In case of a draw return Draw!.

Examples:

rps('scissors','paper') // Player 1 won!
rps('scissors','rock') // Player 2 won!
rps('paper','paper') // Draw! */
#include <string>
#include <unordered_map>
std::string rps(const std::string& p1, const std::string& p2)
{
    using namespace std;
    unordered_map<std::string,int>game;
    game["scissors"]=0;
    game["rock"]=10;
    game["paper"]=-10;
    if(p1=="rock"||p2=="rock"){
        game["paper"]=20;
    }
    if(p1==p2){
        return "Draw!";
    }
    else if(game[p1]>game[p2]){
        return "Player 1 won!";
    }
    else return("Player 2 won!");
}