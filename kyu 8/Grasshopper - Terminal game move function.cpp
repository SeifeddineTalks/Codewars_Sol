#include <iostream>

using namespace std;

int move(int position, int roll) {
  return position+roll*2;
}

int main(){
    cout << move(3,6);
    return 0;
}