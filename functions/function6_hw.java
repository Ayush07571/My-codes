//To check whether the number is even or not

package functions;
import java.util.*;
public class function6_hw {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int n = sc.nextInt();

        checkEven(n);

        sc.close();
    }

    public static void checkEven(int a) {
        if(a%2==0){
            System.out.println(a+" is even");
        } else {
            System.out.println(a+" is odd");
        }
    }
}
