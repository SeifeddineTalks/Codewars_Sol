#include <iostream>
#include <stdint.h>
using namespace std;

bool zero_fuel(uint32_t distance_to_pump, uint32_t mpg, uint32_t fuel_left)
{
    return ( fuel_left*mpg >= distance_to_pump) ? true : false ;
}

int main (){
    cout << zero_fuel(100,1,100);
    return 0;
}