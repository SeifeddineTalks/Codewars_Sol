
#include <string>
#include <iostream>
#include <algorithm> 
using namespace std ; 

string reverseString (string words )
{
   reverse(words.begin() , words.end() );
   return words ;
}

int main (){
    string word  ;
    cin >> word ;
    cout << reverseString (word) ;
    return 0 ;
}