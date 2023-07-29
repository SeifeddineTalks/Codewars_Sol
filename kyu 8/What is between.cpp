#include <iostream>
#include <vector>
using namespace std ;

vector<int> between(int start, int end) {
   vector <int>  nums(end-start+1);
   for (int i=0; i<nums.size() ; i++){
     nums.at(i)=start++; 
   }
    return nums;
} 

