
import java.util.*;
public class calculator_switch {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the first number: ");
        int num1 = sc.nextInt();
        System.out.print("Enter the second number: ");
        int num2 = sc.nextInt();
        System.out.println("Enter:\n'1' : Addition\n'2' : Subtraction\n'3' : Multiplication\n'4' : division\n'5' : remainder");
        System.out.print("Enter your choice: ");
        int ch = sc.nextInt();

        switch(ch) {
            case 1:
            System.out.println("Addition of " + num1 + " and " + num2 + " = " + (num1+num2));
            break;
            case 2:
            System.out.println("Subtraction of " + num1 + " and " + num2 + " = " + (num1-num2));
            break;
            case 3:
            System.out.println("Multiplication of " + num1 + " and " + num2 + " = " + (num1*num2));
            break;
            case 4:
            System.out.println("Quotient of "+num1+" and "+num2+" = "+(num1/num2));
            break;
            case 5:
            System.out.println("Remainder of "+num1+" and "+num2+" = "+(num1%num2));
            break;
            default:
            System.out.println("Invalid choice");
        }
    sc.close();


    }
}
