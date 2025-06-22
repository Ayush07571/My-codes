import java.util.*;
public class string5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter 1st String: ");
        String s1 = sc.nextLine();
        System.out.print("Enter 2nd String: ");
        String s2 = sc.nextLine();

        //str1.compareTo(str2):
        if(s1.compareTo(s2)==0){
            System.out.println("Both Strings are Equal");
        }
        else if(s1.compareTo(s2)<0){
            System.out.println("String 1 is Smaller");
        }
        else {
            System.out.println("String 2 is Smaller");
        }

        sc.close();
    }    
}
