#include<bits/stdc++.h>
using namespace std;

void explainPairs(){
    pair<int,int> p = {1,3}; //Used to store couple of values in sigle variable
    cout<<p.first<<" "<<p.second<<endl;
    pair<double,char> p2 = {2,'D'}; //No need of avlues to be of same datatype
    cout<<p2.first<<" "<<p2.second<<endl;
    pair<int,pair<int,string>> p3 = {1,{2,"Ayush"}}; //In order to store three values
    cout<<p3.first<<" "<<p3.second.first<<" "<<p3.second.second<<endl;
    pair<int,string> student[] = {{1,"Ayush"},{2,"Priyanshu"},{3,"Raj"}}; //Array of pair type; {0th index, 1st index, 2nd index}
    cout<<student[1].second; 
}

int main(){
    explainPairs();
    return 0;
}