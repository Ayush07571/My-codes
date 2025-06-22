//Take an array of Strings input from the user & find the cumulative (combined) length of all those strings.

import java.util.*;
public class string_hw_1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        System.out.print("Enter the size of array: ");
        int size = sc.nextInt();
        String[] arr = new String[size];

        for(int i = 0;i<size;i++){
            System.out.print("Enter the string at index "+i+" : ");
            arr[i] = sc.next();
        }

        String str = "";

        for(int i = 0 ; i<arr.length ; i++ ) {
            str = str + arr[i];
        }

        System.out.println("Length of cumulative String: " + str.length());

        sc.close();
    }
}
