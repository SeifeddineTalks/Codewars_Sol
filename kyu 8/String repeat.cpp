#include <iostream>
#include <string>
using namespace std;

string repeat_str(size_t repeat, const string& str) {
    string res ;
    for (int i=0 ; i<repeat; i++){
         res+=str;
    }
    return res;
}

int main(){
    cout << repeat_str(100,"dala3 ");
}