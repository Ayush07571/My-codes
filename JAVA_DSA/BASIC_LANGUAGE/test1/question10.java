/*Write a program to print Fibonacci series of n terms where n is input by user :
0 1 1 2 3 5 8 13 21 ..... 
In the Fibonacci series, a number is the sum of the previous 2 numbers that came before it.
(BONUS)
*/

package test1;
import java.util.*;
public class question10 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number: ");
        int n = sc.nextInt();
        

        Fibonacci(n);

        sc.close();
    }

    public static void Fibonacci(int n) {
        int fs=0;
        int fs1 =1;
        //int fs2=0;
        
        for(int i=1;i<=n;i++){
            System.out.print(fs + " ");
            int temp = fs1;
            fs1 = fs1 + temp;
            fs = temp;
            
        }
    }
}
