/*
*****
****
***
**
*
*/

#include <iostream>
using namespace std;

void pattern5(){
    for (int i=1;i<=5;i++){
        for(int j=1;j<=(5-(i-1));j++){
            cout<<"*";
        }
        cout<<endl;
    }

    //OR:

    // for (int i = 1; i<=5;i++){
    //     for(int j=5;j>=i;j--){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
}

int main(){
    pattern5();
    return 0;
}