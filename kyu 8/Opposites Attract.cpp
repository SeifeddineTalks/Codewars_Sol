#include <iostream>

using namespace std ;

bool lovefunc(int f1, int f2) {
  return ((f1%2==0&&f2%2!=0)||(f2%2==0&&f1%2!=0))? true : false;
}

int main(){
    cout << lovefunc(5 , 2);
    return 0;
}