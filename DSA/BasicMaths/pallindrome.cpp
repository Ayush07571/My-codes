//Given an integer N, return true if it is a palindrome else return false.
//A palindrome is a number that reads the same backward as forward. 
//For example, 121, 1331, and 4554 are palindromes because they remain the same when their digits are reversed.

#include <bits/stdc++.h>
using namespace std;

bool palindrome(int N){
    int rev=0;
    int N_copy= N;
    while(N!=0){
        int lastdig = N%10;
        rev=rev*10+lastdig;
        N/=10;
    }
    if(rev==N_copy) return true;
    return false;
}

int main(){
    int N;
    cout<<"Enter the value: ";
    cin>>N;
    bool isPalin = palindrome(N);
    if(isPalin) cout<<N<<" is a palindrome number."<<endl;
    else cout<<N<<" is not a palindrome number."<<endl;

    return 0;
}