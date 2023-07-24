#include <iostream>
#include <string>
using namespace std;

string sliceString (string str )
{
  string revok = "";
  for (int i =1; i<str.size()-1; ++i){
        revok+=str.at(i);
  }
  return revok ; 
}

int main(){
    cout << sliceString("translation");
}