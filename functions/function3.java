//To input two numbers and define a function to calculate their product and return it and then finally print the product of two numbers.

package functions;
import java.util.*;

public class function3 {
    public static float product(float a,float b) {
        float product=a*b;
        return product;
    }
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        System.out.print("Enter the first number: ");
        float a=sc.nextFloat();
        System.out.print("Enter the second number: ");
        float b=sc.nextFloat();

        float prod=product(a, b);
        System.out.println("Product= "+prod);
        sc.close();
    }
}