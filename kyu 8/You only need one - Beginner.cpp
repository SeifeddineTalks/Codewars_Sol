#include <iostream>
#include <vector>
#include <string>

using namespace std ;
 
bool check(const vector<std::string>& seq, const string& elem) {
    for(int i=0; i<seq.size(); ++i){
        if (seq.at(i)==elem){
            return true;
        }
    }
    return false;
}

int main (){
    cout << check({ "a", "b", "c"},  "b");
    return 0;
}