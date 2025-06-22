package array;

import java.util.*;
public class array3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of values you want to enter: ");
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0;i<n;i++){
            System.out.print("Enter the value at index "+i+" : ");
            arr[i] = sc.nextInt();
        }

        System.out.print("Enter the value for which you want to know the index number: ");
        int num = sc.nextInt();
        boolean found=false;
        for(int i=0;i<arr.length;i++){
            if(arr[i]==num){
                System.out.println("Index of "+num+" is: "+i);
                found=true;
                break;
            }
        }
        if(found!=true){
            System.out.println("Number not found in the array");
        }
        sc.close();
    }
}
