#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool is_uppercase(const string &s) { 
  for(int i=0; i<s.size(); i++){
  if (islower(s.at(i))){
    return false;  
  }
  }
  return true;
  }

int main(){
    cout << is_uppercase("AhMED");
    return 0;
}


// lower is false 
