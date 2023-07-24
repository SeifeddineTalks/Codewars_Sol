#include <iostream>
#include <string>
using namespace std;

#include <string>

unsigned int strCount(const string& word, char letter){
  int counter=0;  
  for (int i=0; i<word.size(); ++i){
    if(word.at(i)==letter){
      ++counter;  
    }
  }  
  return counter; 
}

int main(){
    cout << strCount("Hello", 'o');
    return 0;
}