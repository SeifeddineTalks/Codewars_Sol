#include <iostream>
#include <cctype>
#include <string>

using namespace std ;

string makeUpperCase (const string& input_str)
{
   string outputHigh= ""; 
   for (int i=0; i<input_str.size(); i++){
     outputHigh+= toupper(input_str[i]);
   }
   return outputHigh;
}

int main (){
    cout << makeUpperCase("ahmed");
    return 0;
}