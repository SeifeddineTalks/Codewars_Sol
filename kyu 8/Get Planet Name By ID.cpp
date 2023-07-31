#include <iostream>
#include <string>
#include <vector>


using namespace std;
string get_planet_name(int id)
{
  vector <string> planets = {"Mercury","Venus","Earth","Mars","Jupiter","Saturn","Uranus","Neptune"};   
  return planets.at(id-1);
}

int main(){
    cout << get_planet_name(3);
    return 0;
}
 