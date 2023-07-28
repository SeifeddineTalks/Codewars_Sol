#include <iostream>
using namespace std;

bool hero(int bullets, int dragons) {
  return (bullets>=dragons*2)? true : false ;
}

int main (){
    cout << hero(1500, 751);
    return 0;
}