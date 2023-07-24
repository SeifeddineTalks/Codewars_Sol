#include <iostream>
using namespace std;

int past(int h, int m, int s) {
    return (h*3600000) + (m*60000) + (s*1000) ;
}

int main(){
    cout<<past(1, 1, 1);
    return 0; 
}