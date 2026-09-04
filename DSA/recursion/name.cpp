#include <bits/stdc++.h>
using namespace std;

void printName(int cnt,int n,string name){
    if(cnt>=n){
        return;
    }
    cout<<name<<endl;
    printName(cnt+1,n,name);
    
}

int main(){
    int n;
    cout<<"Enter the value of N: ";
    cin>>n;
    string name;
    cout<<"Enter your name: ";
    cin>>name;
    printName(0,n,name);
    return 0;
}