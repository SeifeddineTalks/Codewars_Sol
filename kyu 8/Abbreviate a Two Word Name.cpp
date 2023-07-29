#include <iostream>
#include <cctype>
#include <string>
using namespace std ;

string abbrevName(string name)
{
  char c2;  
  for (int i=0; i<name.size(); ++i){
     if (isspace(name[i])) {
        c2 =name[i+1];
     }   
  } 
  return {char(toupper(name[0])),'.',char(toupper(c2))} ;
}

int main (){
    cout << abbrevName("Patrick Feenan");
    return 0;
}