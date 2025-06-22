//Enter 3 numbers from the user & make a function to print their average.

package test1;
import java.util.*;
public class question1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter first number: ");
        int num1 = sc.nextInt();
        System.out.print("Enter second number: ");
        int num2 = sc.nextInt();
        System.out.print("Enter third number: ");
        int num3= sc.nextInt();

        CalcAverage(num1,num2,num3);

        sc.close();
    }

    public static void CalcAverage(int a,int b,int c) {
        int avg=(a+b+c)/3;
        System.out.println("Average of the numbers is: "+avg);
    }
}
