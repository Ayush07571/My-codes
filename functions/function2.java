//To input two numbers and define a function to calculate their sum and return it and then finally print the sum of two numbers.

package functions;
import java.util.*;
public class function2 {
    public static int calculateSum(int c,int d) {
        int sum = c+d;
        return sum; 
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the First Number: ");
        int a = sc.nextInt();
        System.out.print("Enter the Second Number: ");
        int b = sc.nextInt();
        int sum = calculateSum(a,b);
        System.err.println("Sum = "+ sum);
        sc.close();
    }
}
