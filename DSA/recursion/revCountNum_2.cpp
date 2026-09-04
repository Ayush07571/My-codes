//Print N -> 1 using recursion:
#include <bits/stdc++.h>
using namespace std;

void revCountNum(int n){
    if(n<1){
        return;
    }
    cout<<n<<" -> ";
    revCountNum(n-1);
}

int main(){
    int n;
    cout<<"Enter the starting number: ";
    cin>>n;
    revCountNum(n);

    return 0;
}