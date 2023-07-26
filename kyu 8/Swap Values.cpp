#include <iostream>
#include <utility>

using namespace std;



pair<int, int> swap_values(pair<int, int> values) {
  int third =values.first;
  values.first = values.second;
  values.second = third;
  return values;
}

