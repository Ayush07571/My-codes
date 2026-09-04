/*
Given an integer N return the reverse of the given number.

Note: If a number has trailing zeros, then its reverse will not include them. 
For e.g , reverse of 10400 will be 401 instead of 00401.
*/

#include <bits/stdc++.h>
using namespace std;

int reverseNum(int N){
    int rev=0;
    while(N!=0){
        int lastdig = N%10;
        rev=rev*10+lastdig;
        N/=10;
    }
    return rev;
}

int main(){
    int N;
    cout<<"Value of N: ";
    cin>>N;
    cout<<"Reversed number: "<<reverseNum(N)<<endl;
    return 0;
}