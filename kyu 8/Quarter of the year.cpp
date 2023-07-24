#include <iostream>
using namespace std ;

int quarter_of(int month){
    int quarter = 0 ;
    for (int i =0 ; i<month ; i=i+3 ){
        ++quarter;
    }
    return quarter;
}

int main (){

 cout << quarter_of(1) ;
 return 0;
}