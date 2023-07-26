#include <iostream>
#include <vector>

using namespace std;

double calcAverage(const vector<int>& values){
  double average=0;
  for (int i=0; i<values.size(); i++){
    average+=values.at(i);
  }
  return average/values.size();
}
int main(){
    cout << calcAverage({2,5,6});
    return 0;
}