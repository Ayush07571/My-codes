
import java.util.*;
public class marks {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        do {
            System.out.println("TO ENTER MORE DATA: PRESS '1'\nTO EXIT: PRESS '0'");
            System.out.print("Enter your choice: ");
            int res= sc.nextInt();
            if(res==1) {
                System.out.print("ENTER MARKS: ");
                int marks = sc.nextInt();
                if(100>=marks && marks>=90) {
                    System.out.println("This is good");
                } else if (89>=marks && marks>=60) {
                    System.out.println("This is also good");
                } else if (59>=marks && marks>=0) {
                    System.out.println("This is good as well");
                    System.out.println("Because marks doesn't matter but our effort does");
                } else {
                    System.out.println("Invalid Marks");
                }
               
            } else if (res==0) {
                System.out.println("Exiting...");
                break;
            } else {
                System.out.println("Invalid choice");
            }
            
        } while (true);
    sc.close();
    }
}
