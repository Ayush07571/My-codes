//Write a function that calculates the Greatest Common Divisor of 2 numbers. (BONUS)

package test1;
import java.util.*;
public class question9 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the first number: ");
        int num1 = sc.nextInt();
        System.out.println("Enter the second number: ");
        int num2 = sc.nextInt();

        calcGCD(num1,num2);

        sc.close();
    }

    public static void calcGCD(int a,int b) {
        int gcd=0;
        if(a<b){
            for(int i=1;i<=a;i++){
                if(a%i==0 && b%i==0){
                    gcd=i;
                }
            }
        }
        else{
            for(int i=1;i<=b;i++){
                if(a%i==0 && b%i==0){
                    gcd=i;
                }
            }
        }
        System.out.println("GCD: "+gcd);

    }
}
