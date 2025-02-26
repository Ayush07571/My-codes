#include <iostream>
using namespace std;

int main(){
    int x=5;  //Normal Variable
    
    // '&x' (& => and percent operator) gives the address of 'x' and we store it in the pointer 'ptr':
    int *ptr = &x;  //Pointer stores value of address where x is stored

    cout<<"Value of x: "<<x<<endl;  //5
    cout<<"Address of x: "<<&x<<endl;  //0x61ff08
    cout<<"Value stored in pointer: "<<ptr<<endl;  //0x61ff08
    cout<<"Value pointed by pointer: "<<*ptr<<endl;  //5

    return 0;

}