//Print N -> 1 using recursion:
#include <bits/stdc++.h>
using namespace std;

void revCount(int i,int n){
    if(i<1) return;
    cout<<i<<" -> ";
    revCount(i-1,n);
}

int main(){
    int n;
    cout<<"Enter the starting number: ";
    cin>>n;
    revCount(n,n);

    return 0;
} 