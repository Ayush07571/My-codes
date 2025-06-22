import java.util.*;
public class string1 {
    public static void main(String[] args) {
        //Declaration of string
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter your name: ");
        String name = sc.next();
        System.out.println("Enter your full name: ");
        String fname = sc.nextLine();

        System.out.println("First name: "+name);
        System.out.println("Full Name: "+fname);

        sc.close();
    }
}
