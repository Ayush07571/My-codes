import java.util.*;
public class string6 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter 1st String: ");
        String s1 = sc.nextLine();
        System.out.print("Enter 2nd String: ");
        String s2 = sc.nextLine();

        //str1.equals(str2):
        if(s1.equals(s2)){
            System.out.println("Both Strings are Equal");
        }
        else{
            System.out.println("Both Strings are Not Equal");
        }

        sc.close();
    }
}
