#include <iostream>
#include <vector>

using namespace std;


int arrayPlusArray(std::vector<int> a, std::vector<int> b) {
  int result =0;
  vector<int> c (b.size()+a.size());
  c.insert(c.end(),a.begin(),a.end());
  c.insert(c.end(),b.begin(),b.end());
  for(int i=0; i<c.size(); i++){
   result+=c.at(i);
  }
  return result;  
}

int main(){
    cout <<  arrayPlusArray({1,2,3} , {1,2,3}) ;
    return 0;
}