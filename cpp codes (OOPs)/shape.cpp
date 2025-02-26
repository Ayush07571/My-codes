//Inheritance:
#include <cmath>
#include <iostream>
using namespace std;

class Shape{
    protected:
    double area,peri;

    public:
    void computeArea(){
        area=0;
    }
    void computePerimeter(){
        peri=0;
    }
    void draw(){
        cout<<"Drawing shape"<<endl;
    }
    void display(){
        cout<<"Area: "<<area<<endl;
        cout<<"Perimeter: "<<peri<<endl;
    }
};

class Circle:public Shape{
    double radius;

    public:
    Circle(double r){
        radius=r;
    }

    void computeArea(){
        area=M_PI*radius*radius;
    }

    void computePerimeter(){
        peri=2*M_PI*radius;
    }

    void draw(){
        cout<<"Drawing circle of radius "<<radius<<endl;
    }

    void getRadius(){
        cout<<"Radius: "<<radius<<endl;
    }
};

int main(){
    Circle c(5);

    c.getRadius();
    c.draw();
    c.computeArea();
    c.computePerimeter();
    c.display();

}