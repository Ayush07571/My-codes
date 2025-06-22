
import java.util.*;
public class greeting_if_else {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter:\n'1' for English.\n'2' for Hinglish.\n'3' for French");
        System.out.print("Enter your choice: ");
        int ch = sc.nextInt();
        if(ch==1) 
        System.out.println("Hello");
        else if (ch==2)
        System.out.println("Namaste");
        else if (ch==3)
        System.out.println("Bonjour");
        else
        System.out.println("Invalid choice");
    sc.close();
    }
}
