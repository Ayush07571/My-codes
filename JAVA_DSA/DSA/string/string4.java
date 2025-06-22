import java.util.*;
public class string4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the string: ");
        String s = sc.nextLine();

        for(int i = 0;i<s.length();i++){
            //str.charAt(index):
            System.out.println(s.charAt(i));
        }

        sc.close();
    }
}
