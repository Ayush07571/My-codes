/*
ABCDE
ABCD
ABC
AB
A
*/

#include <iostream>
using namespace std;

void pattern15(int n){
    // int ch='A';
    // for (int i=1;i<=n;i++){
    //     for(int j=1;j<=(n-(i-1));j++){
    //         cout<<char(ch);
    //         ch++;
    //     }
    //     ch='A';
    //     cout<<endl;
    // }

    //OR:
    for(int i=1;i<=n;i++){
        for(char ch='A';ch<='A'+(n-i);ch++){
            cout<<ch;
        }
        cout<<endl;
    }
    
}

int main(){
    int n;
    cin>>n;
    pattern15(n);
    return 0;
}