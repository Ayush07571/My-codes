/*
*********
 *******
  *****
   ***
    *
*/

#include <iostream>
using namespace std;

void pattern8(int n){
    // for (int i=1;i<=n;i++){
    //     for(int j=1;j<i;j++) cout<<" ";
    //     for(int j=1;j<=(n-(i-1));j++) cout<<"*";
    //     for(int j=1;j<=(n-i);j++) cout<<"*";
    //     cout<<endl;
    // }

    //OR:
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i-1;j++) cout<<" ";
        for(int j=1;j<=(2*(n-i))+1;j++) cout<<"*";
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    pattern8(n);
    return 0;
}