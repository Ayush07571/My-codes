#include <iostream>
using namespace std;

class Complex{
    private:
    double real,imag;

    public:
    void input(){
        cout<<"Enter real and imaginary parts: "<<endl;
        cin>>real>>imag;
    }

    void display(){
        if (imag>=0){
            cout<<real<<"+"<<imag<<"i"<<endl;
        }
        else{
            cout<<real<<imag<<"i"<<endl;
        }
    }

    Complex add(Complex c){
        Complex result;
        result.real = real + c.real;
        result.imag = imag + c.imag;
        return result;
    }

    Complex subtract(Complex c){
        Complex result;
        result.real = real - c.real;
        result.imag = imag - c.imag;
        return result;
    }

    Complex multiply(Complex C){
        Complex result;
        result.real = (real * C.real) - (imag * C.imag);
        result.imag = (real * C.imag) + (imag * C.real);
        return result;
    }
};

int main(){
    Complex c1,c2,result;

    cout<<"Enter first complex number: "<<endl;
    c1.input();

    cout<<"Enter second complex number: "<<endl;
    c2.input();

    result=c1.add(c2);
    cout<<"Addition: ";
    result.display();

    result=c1.subtract(c2);
    cout<<"Subtraaction: ";
    result.display();

    result=c1.multiply(c2);
    cout<<"Multiplication: ";
    result.display();

    return 0;
}