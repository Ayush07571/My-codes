#include <iostream>
using namespace std;

class Complex 
{
    public:
    double real,imag;

    //Default Constructor:
    Complex():real(0),imag(0){
        cout<<"Default Constructor Called"<<endl;
    }

    //Parameterized Constructor: 
    Complex (double r,double i):real(r),imag(i){
        cout<<"Parameterized Contructor called"<<endl;
    }

    //Copy Constructor:
    Complex(const Complex &c){
        real=c.real;
        imag=c.imag;
        cout<<"Copy Constructor called"<<endl;
    }

    void display(){
        if (imag>=0){
            cout<<real<<"+"<<imag<<"i"<<endl;
        }
        else{
            cout<<real<<imag<<"i"<<endl;
        }
    }

    void input(){
        cout<<"Enter real and imaginary parts: "<<endl;
        cin>>real>>imag;
    }

    Complex add(Complex c){
        Complex result(real+c.real,imag+c.imag);
        return result;
    }

    Complex subtract(Complex c){
        Complex result(real-c.real,imag-c.imag);
        return result;
    }

    Complex multiply(Complex c){
        Complex result(real*c.real - imag*c.imag, real*c.imag + imag*c.real);
        return result;
    }
};

int main(){
    Complex c1(3,4);    //Parameterized Constructor
    Complex c2 = c1;    //Copy Constructor
    Complex c3(c1);     //Copy Constructor
    Complex c4;         //Default Constructor

    cout<<"C1: ";
    c1.display();
    cout<<"C2: ";
    c2.display();
    cout<<"C3: ";
    c3.display();
    cout<<"C4: ";
    c4.display();

    return 0;
}