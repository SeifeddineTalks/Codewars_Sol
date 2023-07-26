#include <iostream>
using namespace std;

int makeNegative(int num)
{
  return (num>0) ? num*-1 : num;  
}
int main(){
    cout  << makeNegative(0);
    return 0;
}