#include <iostream>
using namespace std;

class Complex{
    private:
    double real,imag;

    public:
    Complex():real(0),imag(0){}

    Complex(double r,double i):real(r),imag(i){}

    Complex(const Complex &c){
        real=c.real;
        imag=c.imag;
    }

    void input(){
        cout<<"Enter real and imaginary parts: "<<endl;
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
        Complex result(real+c.real, imag+c.imag);
        return result;
    }

    friend Complex subtract(Complex c1,Complex c2);

    Complex multiply(Complex c);
};

Complex subtract(Complex c1,Complex c2){
    Complex result(c1.real-c2.real, c1.imag-c2.imag);
    return result;
}

Complex Complex::multiply(Complex c){
    Complex result;
    result.real = real*c.real - imag*c.imag;
    result.imag = real*c.imag + imag*c.real;
    return result;
} 


int main(){
    Complex c1(1,1);
    Complex c2(5,6);
    Complex result;

    result=c1.add(c2);
    cout<<"Addition of c1 and c2: ";
    result.display();

    result=subtract(c1,c2);
    cout<<"Subtraction of c1 and c2: ";
    result.display();

    result= c1.multiply(c2);
    cout<<"Multiplication of c1 and c2: ";
    result.display();

    return 0;
}


