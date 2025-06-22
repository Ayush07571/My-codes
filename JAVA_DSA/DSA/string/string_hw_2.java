/* Input a string from the user. Create a new string called ‘result’ in which you will replace the letter ‘e’ in the original string with letter ‘i’. 
Example : 
original = “eabcdef’ ; result = “iabcdif”
Original = “xyz” ; result = “xyz”
*/

import java.util.*;
public class string_hw_2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String og = sc.nextLine();

        String result = "";

        for(int i=0;i<og.length();i++){
            if(og.charAt(i)=='e'){
                result+='i';
            }
            else
            {
                result+=og.charAt(i);
            }
        }
        System.out.println("Replaced text: ");
        System.out.println(result);

        sc.close();
    }
}
