#include <iostream>
#include <string>
using namespace std;

string no_space(const string& x)
{
    string news = "";
    for(int i=0; i<x.size(); i++){
        if(x.at(i)==' '){
            continue;
        }
        else{
            news+=x.at(i);
        }
    }
   return news;
}
int main(){
    cout << no_space("a h m e d ");
    return 0;
}
