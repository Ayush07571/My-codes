/*
    *
   ***
  *****
 *******
*********
*/

#include <iostream>
using namespace std;

void pattern7(){
    // for(int i=1;i<=5;i++){
    //     for(int j=1;j<=(5-i);j++){
    //         cout<<" ";
    //     }
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }
    //     for(int j=1;j<i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    
    //OR:

    for (int i=1;i<=5;i++){
        //space
        for (int j=1;j<=(5-i);j++) cout<<" ";
        //star
        for (int j=1;j<=(2*i)-1;j++) cout<<"*";
    }
}

int main(){
    pattern7();
    return 0;
}