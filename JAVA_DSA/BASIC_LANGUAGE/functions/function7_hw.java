//To print the table of given number.

package functions;
import java.util.*;
public class function7_hw {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number: ");
        int n = sc.nextInt();

        printTable(n);

        sc.close();
    }

    public static void printTable(int n) {
        for(int i=1;i<=12;i++){
            System.out.println(n + " * " + i + " = " + n * i);
        }
    }
}
