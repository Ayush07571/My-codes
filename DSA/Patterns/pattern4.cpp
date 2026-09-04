/*
1
22
333
4444
55555
*/

#include <iostream>
using namespace std;

void pattern4(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}

int main(){
    pattern4();
    return 0;
}