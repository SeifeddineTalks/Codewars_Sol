#include <iostream>
using namespace std;

int getRealFloor(int f) { 
  if (f>0 && f<13){
  return f-1;
  }
  else if(f>13){
  return f-2;
  }
  else{
  return f;
  }
}
int main(){
    cout << getRealFloor(5);
    return 0;
}