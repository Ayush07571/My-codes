/*
A
BB
CCC
DDDD
EEEEE
*/

#include <iostream>
using namespace std;

void pattern16(int n){
    //my solution:
    // int ch='A';
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<char(ch);
    //     }
    //     ch++;
    //     cout<<endl;
    // }

    //OR (striver solution):

    for(int i=0;i<n;i++){
        for(int j = 0;j<=i;j++){
            char ch='A'+i;
            cout<<ch;
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    pattern16(n);
    return 0;
}