#include <iostream>
#include <cmath>
using namespace std;

class Shape{
    protected:
    double area,peri;

    public:
    void draw(){
        cout<<"Drawing generic shape"<<endl;
    }

    void computeArea(){
        area=0;
    }

    void computePerimeter(){
        peri=0;
    }

    void display(){
        cout<<"Area: "<<area<<", Perimeter: "<<peri<<endl;
    }
};

class Circle : public Shape{
    private:
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
        cout<<"Drawing a circle of radius "<<radius<<endl;
    }
};

class Triangle : public Shape{
    private:
    double a,b,c;

    public:
    Triangle(double x,double y,double z){
        a=x;
        b=y;
        c=z;
    }

    void computeArea(){
        double s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
    }

    void computePerimeter(){
        peri=a+b+c;
    }

    void draw(){
        cout<<"Drawing a triangle with sides "<<a<<", "<<b<<", "<<c<<endl;
    }
};

class Rectangle : public Shape{
    private:
    double length,breadth;

    public:
    Rectangle(double l, double b){
        length=l;
        breadth=b;
    }

    void draw(){
        cout<<"Drawing a rectangle with length "<<length<<" and breadth "<<breadth<<endl;
    }

    void computeArea(){
        area=length*breadth;
    }

    void computePerimeter(){
        peri=2*(length+breadth);
    }

};

int main(){
    Circle c(5);
    Triangle t(3,4,5);
    Rectangle r(5,6);

    c.draw();
    c.computeArea();
    c.computePerimeter();
    c.display();

    t.draw();
    t.computeArea();
    t.computePerimeter();
    t.display();

    r.draw();
    r.computeArea();
    r.computePerimeter();
    r.display();

    return 0;
}