
import java.util.*;
public class calculator_if_else {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the first number: ");
        int num1 = sc.nextInt();
        System.out.print("Enter the second number: ");
        int num2 = sc.nextInt();
        System.out.println("Enter:\n'1' : Addition\n'2' : Subtraction\n'3' : Multiplication\n'4' : division\n'5' : remainder");
        System.out.print("Enter your choice: ");
        int ch = sc.nextInt();

        if(ch==1)
        System.out.println("Sum = "+(num1+num2));
        else if(ch==2)
        System.out.println("Difference = "+(num1-num2));
        else if(ch==3)
        System.out.println("Product = "+(num1*num2));
        else if(ch==4)
        System.out.println("Quotient = "+(num1/num2));
        else if(ch==5)
        System.out.println("Remainder = "+(num1%num2));
        else
        System.out.println("Invalid choice");
    sc.close();
    }
}
