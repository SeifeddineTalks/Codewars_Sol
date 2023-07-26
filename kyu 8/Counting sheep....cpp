#include <iostream>
#include <vector>
using namespace std;

int count_sheep(vector<bool> arr)
{
int counter = 0; 
  for (int i=0; i<arr.size(); i++){
  if(arr[i]==true)
    counter ++;
  }
  return counter;
}

int main(){
    cout << count_sheep({ true, true, true, false});
    return 0;
}