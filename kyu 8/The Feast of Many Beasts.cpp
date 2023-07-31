#include <iostream>
#include <string>
using namespace std;


bool feast(string beast, string dish){
  return (beast.back()==dish.back()&&beast.front()==dish.front())? true : false ;
}

int main(){
    cout << feast("great blue heron", "garlic naan");
    return 0;
}