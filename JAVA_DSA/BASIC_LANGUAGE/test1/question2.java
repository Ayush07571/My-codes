//Write a function to print the sum of all odd numbers from 1 to n.

package test1;
import java.util.*;
public class question2 {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        System.out.print("Enter a number: ");
        int n = sc.nextInt();

        CalcOddSum(n);

        sc.close();
    }

    public static void CalcOddSum(int a) {
        int sum=0;
        for(int i=1;i<=a;i++){
            if(i%2!=0){
                sum=sum+i;
            }
        }
        System.out.println("Sum of odd numbers = "+sum);
    }
}
