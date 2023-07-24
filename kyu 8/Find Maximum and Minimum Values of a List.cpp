#include <vector>
#include <iostream>

using namespace std;

int max(vector<int> list){
    int bignum = list.at(0);//0 
    for(int i = 0 ; i<list.size() ; i++){
        if (list.at(i)>bignum ){
            bignum = list.at(i);
        }   
    }   
    return bignum; 
}
int min(vector<int> list){
    int smallnum = list.at(0);
    for(int i = 0 ; i<list.size() ; i++){
        if (list.at(i)<smallnum){
            smallnum = list.at(i);
        }  
    }
    return smallnum;  
}
int main (){
    cout <<max({-1,-2,-3,-4,-5});
    cout <<min ({0,2,3,4,5,6});
    return 0;
}