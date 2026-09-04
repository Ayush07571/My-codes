#include <iostream>
using namespace std;

int main(){
    char c;
    cout<<"Is your age < 18 (y/n): ";
    cin>>c;
    if (c=='y'){
        cout<<"Not eligible to vote"<<endl;
    }
    else if (c=='n')
    {
        cout<<"Eligible to vote"<<endl;
    }
    else{
        cout<<"Invalid Entry"<<endl;
    }
    return 0;
}