/*#include <iostream>
using namespace std;

int main(){
    string s;
    cout<<"Enter your full name: ";
    cin>>s;
    cout<<"Hello, "<<s;
    return 0;
}

//INPUT: Enter your full name: Ayush Karan
//OUTPUT: Hello, Ayush
*/

//OR:

/*
#include <iostream>
using namespace std;

int main(){
    string s1,s2;
    cout<<"Enter your full name: ";
    cin>>s1>>s2;
    cout<<"Hello, "<<s1<<" "<<s2;
    return 0;
}

//Input: Enter your full name: Ayush Karan
//Output: Hello, Ayush Karan
*/

//OR (getline):

#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cout<<"Enter your full name: ";
    getline(cin,s);
    cout<<"Hello, "<<s<<endl;
    //Input: Enter your full name: Ayush Raj Karan
    //Output: Hello, Ayush Raj Karan
    cout<<s[4]<<endl;
    cout<<"Length: "<<s.length()<<endl;
    cout<<"Size: "<<s.size()<<endl; //both size and length are used to find the length of string
    s[4] = 'z'; //String is mutable and the characters at any index can be changed (only character can be changed not a whole string)
    cout<<s;
    return 0;
}



