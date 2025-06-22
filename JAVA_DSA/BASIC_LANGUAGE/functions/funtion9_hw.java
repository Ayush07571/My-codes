//factorial of a number using recursion

package functions;
import java.util.*;
public class funtion9_hw {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int n = sc.nextInt();
        if(n<0){
            System.out.println("Factorial does not exist for negative numbers");
        }else{
            int result=factorial(n);
            System.out.println("Factorial= "+result);
        }
        sc.close();
    }

    public static int factorial(int a) {
        if(a==0 || a==1){
            return 1;
        }
        else{
            return a*factorial(a-1);
        }
    }
}
