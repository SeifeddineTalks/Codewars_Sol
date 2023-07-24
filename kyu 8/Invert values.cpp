#include <iostream>
#include <vector>
using namespace std;

vector<int> invert(vector<int> values)
{   
    for (int i=0 ; i<values.size() ; i++){
     values.at(i) *= -1;    
     } 
     return  values;     
}

int main(){
    return 0;
}
