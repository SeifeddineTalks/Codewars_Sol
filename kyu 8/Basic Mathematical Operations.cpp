#include <iostream>
using namespace std;

int basicOp(char op, int val1, int val2) {
    switch(op){
        case '+':
        return val1+val2;
        case '-':
        return val1-val2;
        case '*':
        return val1*val2;
        case '/':
        return val1/val2;
        default:
        return 0;
    }
}
int main(){
    cout << basicOp('h',5,3);
    return 0;
}