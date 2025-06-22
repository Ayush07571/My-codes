//Example of recursion: (Countdown)

package functions;
import java.util.*;
public class function8_hw {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number to begin countdown : ");
        int n = sc.nextInt();

        countdown(n);

        sc.close();
    }

    public static void countdown(int a) {
        if(a==0){
            System.out.println("Blast off!");
        }
        else{
            System.out.println(a);
            countdown(a-1);
        }
    }
}
