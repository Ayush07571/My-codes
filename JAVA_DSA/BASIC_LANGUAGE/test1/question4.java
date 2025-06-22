//Write a function that takes in the radius as input and returns the circumference of a circle

package test1;
import java.util.*;
public class question4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the radius of the circle: ");
        double radius = sc.nextDouble();

        calcCircumference(radius);

        sc.close();
    }

    public static void calcCircumference(double r) {
        double pi=Math.PI;
        double circumference = 2*pi*r;
        System.out.println("The circumference of the circle is: " + circumference);
    }
}
