//Write a program to enter the numbers till the user wants and at the end it should display the count of positive, negative and zeros entered.

package test1;
import java.util.*;
public class question7 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int positive=0;
        int negative=0;
        int zero=0;

        while(true){
            System.out.print("Enter a number : ");
            int n = sc.nextInt();
            if(n==0){
                zero++;
            } else if(n>0) {
                positive++;
            } else {
                negative++;
            }

            System.out.println("Do you want to add more numbers? (Y/N): ");
            String choice = sc.next();
            String ch=choice.toLowerCase();
            if(ch.equals("y")){
                continue;
            }
            else if(ch.equals("n")){
                break;
            }
            else{
                System.out.println("Invalid choice.");
                System.out.println("Enter again");
                continue;
            }
            }
        

        System.out.println("Zeros: "+zero);
        System.out.println("Positive numbers: "+positive);
        System.out.println("Negative numbers: "+negative);

        sc.close();
    }
}
