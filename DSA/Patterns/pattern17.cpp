/*
   A
  ABA
 ABCBA
ABCDCBA
*/

#include <iostream>
using namespace std;

void pattern17(int n){
    // int ch='A';
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=(n-i);j++) cout<<" ";
    //     for (int j=1;j<=i;j++){
    //         cout<<char(ch);
    //         ch++;
    //     }
    //     ch='A';
    //     for(int j=i;j>1;j--){
    //         ch='A'+(j-2);
    //         cout<<char(ch);
    //     }
    //     cout<<endl;
    // }

    //OR: 
    
    for(int i=0;i<n;i++){
        for(int j=0;j<=n-i-1;j++) cout<<" ";
        char ch='A';
        int breakpoint = (2*i+1)/2;
        for(int j=0;j<=2*i;j++){
            cout<<ch;
            if(j<breakpoint){
                ch++;
            }
            else{
                ch--;
            }
        }
        cout<<endl;
    }
   
}

int main(){
    int n;
    cin>>n;
    pattern17(n);
    return 0;
}