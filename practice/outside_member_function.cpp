#include <iostream>
using namespace std;

class Complex{
    private:
    double real,imag;

    public:
    void input();
    void display();
    Complex add(Complex c);
    Complex subtract(Complex c);
    Complex multiply(Complex c);
};

void Complex::input(){
    cout<<"Enter real and imaginary parts: "<<endl;
    cin>>real>>imag;
}

void Complex::display(){
    if (imag>=0){
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
    else{
        cout<<real<<imag<<"i"<<endl;
    }
}

//'::' is used to access the member function of the class and it is called as scope resolution operator.
Complex Complex::add(Complex c){  
    Complex result;
    result.real = real + c.real;
    result.imag = imag + c.imag;
    return result;
}

Complex Complex::subtract(Complex c){
    Complex result;
    result.real = real - c.real;
    result.imag = imag - c.imag;
    return result;
}

Complex Complex::multiply(Complex c){
    Complex result;
    result.real = real*c.real - imag*c.imag;
    result.imag = real*c.imag + imag*c.real;
    return result;
}

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