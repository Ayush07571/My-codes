/* 

Input a string from the user. Create a new string called ‘result’ in which you will replace the letter ‘e’ in the original string with letter ‘i’. 
Example : 
original = “eabcdef’ ; result = “iabcdif”
Original = “xyz” ; result = “xyz”

*/
import java.util.*;
public class sb_hw_2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the string: ");
        StringBuilder result = new StringBuilder(sc.nextLine());
        for ( int i = 0;  i<result.length(); i++) {
            if (result.charAt(i) == 'e') {
                result.setCharAt(i, 'i');
            } else {
                continue;
            }
        }

        System.out.println("Result String: "+result);

        sc.close();
    }
}
