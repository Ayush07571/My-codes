#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age>=18){
        cout<<"Eligible to vote"<<endl;
    }
    else if(age>=0){
        cout<<"Not Eligible to vote"<<endl;
    }
    else{
        cout<<"Invalid age"<<endl;
    }
    return 0;
}

//OR:

/* //For single line arguement inside the if-else block we don't need to mention the {...}:
#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age>=18)
        cout<<"Eligible to vote"<<endl;
    else if(age>=0)
        cout<<"Not Eligible to vote"<<endl;
    else
        cout<<"Invalid age"<<endl;
    return 0;
}
*/
