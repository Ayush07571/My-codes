
import java.util.*;
public class equal_or_not {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter first number: ");
        int a = sc.nextInt();
        System.out.print("Enter second number: ");
        int b = sc.nextInt();

        if(a==b)       
            System.out.println("Both numbers are equal");
        else if(a>b)         //IF WE HAVE TO EXECUTE ONLY ONE LINE UNDER IF-ELSE COMMAND THEN CURLY BRACKETS '{ }' ARE NOT IMPORTANT.
            System.out.println("First number is greater");
        else 
            System.out.println("Second number is greater");
        
    sc.close(); 
    }
}
