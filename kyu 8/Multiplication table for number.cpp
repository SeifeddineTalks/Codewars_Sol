#include <iostream>
#include <string>
using namespace std;

string multi_table(int number)
{   
    string result = "" ;
    for (int i=1; i<=10; ++i){
    if (i<10) {    
    result +=to_string (i) + " * " + to_string(number) + " = " + to_string(number*i) + "\n" ;
    }
     else {
     result +=to_string (i) + " * " + to_string(number) + " = " + to_string(number*i);   
    }
    }
    return result;
}

int main(){
    cout << multi_table(5);
    return 0;
}