//Given an integer N, return the number of digits in N.

#include <bits/stdc++.h>
using namespace std;

int count(int n){
    // int cnt = 0;
    // if (n==0) return 1;
    // while(n!=0){
    //     cnt++;
    //     n/=10;
    // }
    // return cnt;

    //OR (better):

    if(n==0) return 1;
    int cnt = (int)log10(abs(n))+1;
    return cnt;
}

int main(){
    cout<<"Enter the number: ";
    int num;
    cin>>num;
    cout<<"Number of digits = "<<count(num)<<endl;
}