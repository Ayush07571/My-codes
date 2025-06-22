
import java.util.*;
public class greeting_switch {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter:\n'1' for English.\n'2' for Hinglish.\n'3' for French");
        System.out.print("Enter your choice: ");
        int ch = sc.nextInt();

        switch(ch) {
            case 1:
            System.out.println("Hello");
            break;
            case 2:
            System.out.println("Namaste");
            break;
            case 3:
            System.out.println("Bonjour");
            break;
            default:
            System.out.println("Invalid choice");
        }
    sc.close();
    }
}
