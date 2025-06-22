//To find factorial of a number

package functions;
import java.util.*;
public class function4 {

   
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number: ");
        int n = sc.nextInt();
        if(n>0){
        int fact = CalcFactorial(n);
        System.out.println("Factorial of " + n + " is " + fact);
        }
        else if(n==0){
            System.out.println("Factorial of " + n + " is " + 1.0);
        }
        else{
            System.out.println("Factorial is not defined for negative numbers");
        }
        sc.close();
    }

    public static int CalcFactorial(int a) {
        int fact=1;
        for(int i=a;i>=1;i--){
            fact=fact*i;
        }
        return fact;
        
    }
}
