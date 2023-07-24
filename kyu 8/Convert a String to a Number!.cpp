#include <iostream>
#include <string>
using namespace std ;

int string_to_number(const string& s) {
   return stoi(s);
}

int main (){
    cout << string_to_number("1234");
}