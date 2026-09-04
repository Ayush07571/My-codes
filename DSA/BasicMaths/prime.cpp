#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    // //BRUTE FORCE APPROACH:
    // if (n<2) return false;
    // for(int i=2;i<n;i++){
    //     if (n%i==0){
    //         return false;
    //     }
    // }
    // return true;

    //OPTIMAL APPROACH:
    if(n<2) return false;

    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(isPrime(n)) cout<<"Prime Number"<<endl;
    else cout<<"Non Prime Number"<<endl;
    
    return 0;
}