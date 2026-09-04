/*
12345
1234
123
12
1
*/

#include <iostream>
using namespace std;

void pattern6(){
    for (int i=1;i<=5;i++){
        for (int j=1;j<=(5-(i-1));j++){
            cout<<j;
        }
        cout<<endl;
    }

    //OR:
    // for(int i=1;i<=5;i++){
    //     for(int j=5;j>=i;j--){
    //         cout<<(5-j)+1;
    //     }
    //     cout<<endl;
    // }
}

int main(){
    pattern6();
    return 0;
}