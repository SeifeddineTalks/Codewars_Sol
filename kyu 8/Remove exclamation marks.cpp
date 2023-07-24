#include <iostream>
#include <string>
using namespace std;

string removeExclamationMarks(string str){
    string empty = "" ;
    for(int i = 0; i<str.size() ; i++){
        if (str[i] == '!'){
        continue;
        }
        empty+=str[i];}
    return empty;
}

