#include <iostream>
#include <vector>
using namespace std ;

vector<int> countBy(int x,int n){
    vector<int> results = {x} ;
    for(int i=1; i<n; i++){
     results.push_back(x+results.at(i-1));           
    }
    return results;
}

 