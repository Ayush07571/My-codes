import java.util.*;
public class string2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter your First name: ");
        String name1 = sc.next();
        System.out.print("Enter your Last name: ");
        String name2 = sc.next();

        //CONCATENATION:
        String full_name = name1 +" " + name2;
        System.out.println("Your full name is "+full_name);

        sc.close();
    }
}
