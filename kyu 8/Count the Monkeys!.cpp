#include <iostream>
#include <vector>
using namespace std;

vector<int> MonkeyCount(int n) {
  vector<int> counter(n) ;
  for (int i=0; i<n; i++){
    counter.at(i)=i+1;
  }
  return counter;
}
