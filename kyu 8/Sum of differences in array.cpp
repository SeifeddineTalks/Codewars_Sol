#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int  sumOfDifferences( vector<int> arr){
  int result = 0;
  sort(arr.begin() , arr.end() , greater());   
  if (arr.size()<=1){
    result=0;
  } 
  else {
  for (int i=0; i<arr.size()-1; ++i){
   result+= arr.at(i) - arr.at(i+1);
  } 
  }
   return result;
}

int main(){
  cout << sumOfDifferences({-3,-2,-1});
  return 0;
}