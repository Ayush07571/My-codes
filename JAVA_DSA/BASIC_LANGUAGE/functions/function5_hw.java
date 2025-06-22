//To find whether the given number is prime or not:

package functions;
import java.util.*;
public class function5_hw {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int n = sc.nextInt();

        checkPrime(n);
        
        sc.close();
    }

    public static void checkPrime(int n) {
        int count=0;
        for (int i = 2; i < n;i++) {
            if (n % i == 0) {
                count++;
                break;
            }
        }
        if(count==0){
            System.out.println("Prime Number");       
        }else{
            System.out.println("Not a prime number");;
        }
        
    }
}
