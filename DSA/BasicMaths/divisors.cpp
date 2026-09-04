//Given an integer N, return all divisors of N.
//A divisor of an integer N is a positive integer that divides N without leaving a remainder. 
//In other words, if N is divisible by another integer without any remainder, then that integer is considered a divisor of N.

#include <bits/stdc++.h>
using namespace std;

vector<int> divisors(int n){
    vector<int> divisors;

    //OPTIMAL APPROACH
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            divisors.push_back(i);
            if(i!=n/i){
                divisors.push_back(n/i);
            }
        }
    }
    sort(divisors.begin(),divisors.end());

    // //BRUTE FORCE APPROACH
    // for(int i=1;i<=n;i++){
    //     if(n%i==0){
    //         divisors.push_back(i);
    //     }
    // }
    return divisors;
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    vector<int> divisor = divisors(n);
    cout<<"divisors: ";
    for(auto i:divisor){
        cout<<i<<", ";
    }

    
}