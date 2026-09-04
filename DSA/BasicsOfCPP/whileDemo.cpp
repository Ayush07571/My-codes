#include <iostream>
using namespace std;

int main(){
    // int i=0;
    // while(i<=10){
    //     cout<<i<<". Hello"<<endl;
    //     i=i+1;
    // }
    // return 0;
    
    int i=1;
    int sum=0;
    while(i<=50){
        int dig = i%10;
        if(dig==1){
            sum+=i;
            i++;
        }
    }
    cout<<sum;    
    return 0;
}
