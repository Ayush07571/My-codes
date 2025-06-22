//Take an array of Strings input from the user & find the cumulative (combined) length of all those strings.


import java.util.*;
public class sb_hw_1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter size of array:");
        int n = sc.nextInt();
        sc.nextLine(); //If we don't put this extra nextLine() then arr[i] = sc.nextLine() takes \n of n=nextInt() as first string.
        String arr[] = new String[n];
        StringBuilder sb = new StringBuilder("");
        
        for (int i = 0; i<n; i++){
            System.out.print("Enter string " + (i+1) + ":");
            arr[i] =sc.nextLine();
            sb.append(arr[i]);
        }

        System.out.println("Cumulative length: "+sb.length());

        sc.close();
    }
}
