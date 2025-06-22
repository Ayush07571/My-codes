import java.util.*;
public class string7 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter your string: ");
        String str = sc.nextLine();

        String str1 = str.substring(0,5);
        
        System.out.println(str1);

        sc.close();
    }
}
