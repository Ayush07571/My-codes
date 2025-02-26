#include <iostream>
using namespace std;

class Complex{
    private:
    double real,imag;

    public:
    //friend function can access data members mentioned as private even from outside the class.
    friend Complex addComplex(Complex c1,Complex c2);  

    Complex():real(0),imag(0){}

    Complex (double r,double i):real(r),imag(i){}

    void display(){
        if (imag>=0){
            cout<<real<<" + "<<imag<<"i"<<endl;
        }
        else{
            cout<<real<<imag<<"i"<<endl;
        }
    }
};

Complex addComplex(Complex c1,Complex c2){
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
};

int main(){
    Complex c1(2,3);
    Complex c2(5,6);
    
    Complex result = addComplex(c1,c2);
    cout <<"Addition: ";
    result.display();

    return 0;
}