package array;


import java.util.*;
public class array_hw1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of array: ");
        int n = sc.nextInt();

        String name[] = new String[n];

        for(int i=0;i<n;i++){
            System.out.print("Enter name: ");
            name[i] = sc.next();
        }

        for(int i=0;i<name.length;i++){
            System.out.println("Name "+(i+1)+": "+name[i]);
        }
        sc.close();
    }
}
