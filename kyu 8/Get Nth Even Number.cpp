#include <iostream>
using namespace std ;

int nthEven(int n) {
  int evenNums=0;  
  for (int i=1; i<n;++i){
    evenNums+=2;
  }
  return evenNums; 
}

int main (){
    cout << nthEven(5);
    return 0;
}