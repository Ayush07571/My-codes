abstract class Shape{
    abstract void draw();
}

class rectangle extends Shape{
    void draw(){
        System.out.println("Drawing a rectangle");
    }
}

class triangle extends Shape{
    void draw(){
        System.out.println("Drawing a triangle");
    }
}

public class abstractDemo {
    public static void main(String[] args) {
        Shape rect = new rectangle();   //Shape => Reference to shape class for rect variable; object created is of rectangle class. 
        rect.draw();

        Shape tri = new triangle();     //Shape => Reference to shape class for tri variable; object created is of triangle class.  
        tri.draw();
    }
}
