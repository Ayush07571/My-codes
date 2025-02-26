#include <iostream>
using namespace std;

class Complex
{
    public:
    double real,imag;

    Complex(double r=0, double i=0):real(r),imag(i){
        cout<<"Constructor called for: "<<real<<"+"<<imag<<"i"<<endl; 
    }

    ~Complex(){
        cout<<"Destructor called for: "<<real<<"+"<<imag<<"i"<<endl;
    }

    void input()
    {
        cout<<"Enter real and imaginary part: "<<endl;
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
        Complex result(real + c.real, imag + c.imag);
        return result;
    }

    Complex subtract(Complex c){
        Complex result(real - c.real, imag- c.imag);
        return result;
    }

    Complex multiply(Complex c){
        Complex result(real * c.real - imag * c.imag, real *c.imag + imag * c.real);
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
    cout<<"Addition: "<<endl;
    result.display();

    result=c1.subtract(c2);
    cout<<"Subtraaction: "<<endl;
    result.display();

    result=c1.multiply(c2);
    cout<<"Multiplication: "<<endl;
    result.display();

    return 0;
}
