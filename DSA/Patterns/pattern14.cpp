/*
A
AB
ABC
ABCD
ABCDE
*/

#include <iostream>
using namespace std;

void pattern14(int n){
    // int ch = 'A';
    // for (int i=1;i<=n;i++){
    //     for (int j=1;j<=i;j++){
    //         cout<<char(ch);
    //         ch++;
    //     }
    //     ch='A';
    //     cout<<endl;
    // }

    for(int i=1;i<=n;i++){
        for(char ch='A'; ch<='A'+(i-1);ch++) cout<<ch;
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    pattern14(n);
    return 0;
}