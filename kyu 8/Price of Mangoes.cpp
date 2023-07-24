#include<iostream> 
using namespace std ;


int mango(int quantity, int price)
{   
        int free = quantity/3 ;
        return (quantity-free)*price ;
}

int main (){
    int nums ;
    int tag ;
    cin >> nums ;
    cin >> tag ;
    cout << mango(nums,tag);
    return 0;
}