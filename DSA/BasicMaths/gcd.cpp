#include <bits/stdc++.h>
using namespace std;

int gcd(int n1,int n2){

    // //BRUTE FORCE APPROACH:
    // int gcd;
    // for(int i=1;i<=min(n1,n2);i++){
    //     if(n1%i==0 && n2%i==0){
    //        gcd=i; 
    //     }
    // }
    // return gcd;

    // //BETTER OPTION:
    // for(int i=min(n1,n2);i>=1;i--){
    //     if(n1%i==0 && n2%i==0) return i;
    // }

    //OPTIMAL APPROACH (Eucliden algo or approach to find gcd):
    //NOT BEST BUT MY THOUGHT OR APPROACH OF EUCLIDEAN ALGO BUT STILLHIGH TIME COMPLEXITY
    // while(n1!=0){
    //     if(n1>n2){
    //         n1=n1-n2;
    //     }
    //     else{
    //         int c=n1;
    //         n1=n2-n1;
    //         n2=c;
    //     }
    // }
    // return n2;

    //STRIVER'S OPTIMAL APPROACH AND ACTUAL EUCLIDEAN METHOD:
    while(n1!=0 && n2!=0){
        if(n1>n2){
            n1=n1%n2;
        }
        else{
            n2=n2%n1;
        }
    }
    if(n1==0) return n2;
    return n1;
}

int main(){
    int n1,n2;
    cout<<"Enter the numbers: ";
    cin>>n1>>n2;
    cout<<"GCD is: "<<gcd(n1,n2)<<endl;

    return 0;
}