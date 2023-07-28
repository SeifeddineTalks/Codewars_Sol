#include <iostream>
#include <string>
using namespace std;

#include <string>

string rps(const string& p1, const string& p2)
{
    if (p1==p2){
        return "Draw!";
    }
    else if ((p1=="scissors" && p2=="paper") || (p1=="rock" && p2=="scissors")
             || (p1=="paper" && p2=="rock")){
        return "Player 1 won!" ;
    }
    else {
        return "Player 2 won!";
    }
}

int main (){
    cout << rps("rock", "paper");
    return 0;
}
