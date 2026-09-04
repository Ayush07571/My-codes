#include <iostream>
using namespace std;

int main(){
    int i=5;
    do{
        cout<<i<<". Hello"<<endl;
        i=i-1;
    }while(i<=5 && i>=0);
    return 0;
}