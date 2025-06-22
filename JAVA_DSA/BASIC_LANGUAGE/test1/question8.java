//Two numbers are entered by the user, x and n. Write a function to find the value of one number raised to the power of another i.e. x^n

package test1;
import java.util.*;
public class question8 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the base number: ");
        double x = sc.nextDouble();
        System.out.print("Enter the power: ");
        double n = sc.nextDouble();

        CalcPower(x,n);

        sc.close();
    }

    public static void CalcPower(double x,double n) {
        double power = Math.pow(x, n);
        System.out.println("The result is: "+power);
    }
}
