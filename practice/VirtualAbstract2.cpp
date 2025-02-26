#include <iostream>
#include <cmath>
using namespace std;

class Shape{
    protected:
    double area,peri;

    public:
    virtual void computeArea()=0;
    virtual void computePerimeter()=0;
    virtual void draw()=0;

    void display(){
        cout<<"Area: "<<area<<", Perimeter: "<<peri<<endl;
    }
};

class Circle : public Shape{
    private:
    double r;

    public:
    Circle(double radius){
        r=radius;
    }

    void computeArea(){
        area=M_PI*r*r;
    }

    void computePerimeter(){
        peri=2*M_PI*r;
    }

    void draw(){
        cout<<"Drawing a circle of radius "<<r<<endl;
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
        double s = (a+b+c)/2;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
    }

    void computePerimeter(){
        peri = a+b+c;
    }

    void draw(){
        cout<<"Drawing a triangle with sides "<<a<<", "<<b<<", "<<c<<endl;
    }
};

class Rectangle : public Shape{
    private:
    double l,w;

    public:


    Rectangle(double x=0,double y=0){
        l=x;
        w=y;
    }

    void computeArea(){
        area = l*w;
    }

    void computePerimeter(){
        peri = 2*(l+w);
    }

    void draw(){
        cout<<"Drawing a rectangle with length "<<l<<" and width "<<w<<endl;
    }
};

class Square : public Rectangle{
    private:
    double s;

    public:
    Square(double x){
        s=x;
    }

    void computeArea(){
        area = s*s;
    }

    void computePerimeter(){
        peri = 4*s;
    }

    void draw(){
        cout<<"Drawing a square with each side: "<<s<<endl;
    }

};

int main(){
    Circle c(25);
    Triangle t(3,6,1);
    Rectangle r(5,6);
    Square s(7);

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

    s.draw();
    s.computeArea();
    s.computePerimeter();
    s.display();
}