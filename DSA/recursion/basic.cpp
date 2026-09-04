#include <bits/stdc++.h>
using namespace std;

int cnt=0; //global variable declaration;

void f(){
    if(cnt==4) return; //Base condition 
    cout<<cnt<<endl;
    cnt++;
    f(); //Recursion
}

int main(){
    f();

    return 0;
}