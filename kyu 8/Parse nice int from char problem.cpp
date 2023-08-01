#include <iostream>
#include <string>
using namespace std;

int get_age(const string& she_said) {
    return  (she_said.front()) - 48;   
}

int main(){
    cout << get_age("4 years old");
    return 0;
}