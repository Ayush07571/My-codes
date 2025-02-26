#include <iostream>
#include "complex.h"
using namespace std;

int main(){
    Complex c1,c2,result;
    c1.real=1;
    c1.imag=2;

    c2.real=2;
    c2.imag=5;

    result=c1.add(c2);
    cout<<result.real<<"+"<<result.imag<<"i"<<endl;
}

