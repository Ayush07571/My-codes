//Print 1 -> N linearly using recursion:
#include <bits/stdc++.h>
using namespace std;

void printNum(int i,int n){
    if(i>n){
        return;
    }
    cout<<i<<", ";
    printNum(i+1,n);
}

int main(){
    int n;
    cout<<"Enter the highest limit: ";
    cin>>n;
    printNum(1,n);
    return 0;
}