#include <iostream>
using namespace std;

class Complex{
    public:
        double real,imag;

    void input()
    {
        cout<<"Enter real and imaginery parts: "<<endl;
        cin>>real>>imag;
    }

    void display()
    {
        if (imag>=0){
            cout<<real<<"+"<<imag<<"i"<<endl;
        }
        else{
            cout<<real<<imag<<"i"<<endl;
        }
    }

    Complex add(Complex c)
    {
        Complex result;
        result.real=real  + c.real;
        result.imag = imag + c.imag;
        return result;
    }

    Complex subtract(Complex c)
    {
        Complex result;
        result.real = real - c.real;
        result.imag = imag - c.imag;
        return result;
    }

    Complex multiply(Complex c)
    {
        Complex result;
        result.real = real * c.real - imag * c.imag;
        result.imag = real*c.imag + imag*c.real;
        return result;
    }
};

int main(){
    Complex c1,c2,result;

    cout<<"Enter first Complex number:"<<endl;
    c1.input();
    
    cout<<"Enter second Complex number:"<<endl;
    c2.input();

    cout<<"The complex numbers that you feeded are: "<<endl;
    c1.display();
    c2.display();

    result=c1.add(c2);
    cout<<"Addition: ";
    result.display();

    result=c1.subtract(c2);
    cout<<"Subtraction: ";
    result.display();

    result=c1.multiply(c2);
    cout<<"Multiplication: ";
    result.display();

    return 0;
}