/*
E
D E
C D E
B C D E
A B C D E
*/

#include <iostream>
using namespace std;

void pattern18(int n){
    //my solution 1:
    // int ch='E';
    // for (int i = 1;i<=n;i++){
    //     for(int j=i;j>=1;j--){
    //         ch=ch-(j-1);
    //         cout<<char(ch);
    //         ch='E';
    //         //OR: 
    //         //cout<<char(ch-(j-1));
    //     }
    //     cout<<endl;
    //}

    //OR:

    // //my solution inspired from striver:
    // for(int i=0;i<n;i++){
    //     for (int j=i;j>=0;j--){
    //         char ch=('A'+(n-1))-j;
    //         cout<<ch;
    //     }
    //     cout<<endl;
    // }

    //OR:
    
    //striver solution:
    for(int i=0;i<n;i++){
        for(char ch=('A'+(n-1))-i;ch<=('A'+(n-1));ch++){
            cout<<ch;
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    pattern18(n);
    return 0;
}