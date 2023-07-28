#include <iostream>
#include <string>
using namespace std;

string greet(string name)
{
   return (name=="Johnny") ? "Hello, my love!" : "Hello, " + name + "!";
}

int main(){
    cout << greet("Johnny");
    return 0;
}