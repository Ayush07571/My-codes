/*
Problem Statement:Given an integer N, return true it is an Armstrong number otherwise return false.

An Amrstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.
*/

#include <bits/stdc++.h>
using namespace std;

bool armstrong(int N){
    int sum = 0;
    int N_copy = N;
    int dig = to_string(N).length();
    while(N!=0){
        int lastdig = N%10;
        sum+=round(pow(lastdig,dig)); //added round() to avoid precision drop error, for numbers like 153, shows sum =124.99999999 i.e. not equal to 125;
        N/=10;
    }
    if (sum == N_copy) return true;
    return false;
}

int main(){
    int N;
    cout<<"Enter a number: ";
    cin>>N;
    bool isArm = armstrong(N);
    if (isArm) cout<<N<<" is a armstong number"<<endl;
    else cout<<N<<" is NOT a armsttrong number"<<endl;

    return 0;
}