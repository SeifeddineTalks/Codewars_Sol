#include <iostream>
#include <string>
using namespace std;

string correct(string str){
  for (int i=0; i<str.size(); ++i){
    switch (str[i])
    {
    case '5':str[i]='S';
        break; 
    case '0':str[i]='O';
         break; 
    case '1':str[i]='I';
         break;         
    }
  }
  return str;
}

int main (){
    cout << correct("ERNE5T HEM1NGWAY - F0R WH0M THE BELL T0LL5");
    return 0;
}

