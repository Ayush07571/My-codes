package array;

import java.util.*;
public class array1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of values you want to enter: ");
        int n = sc.nextInt();
        float[] arr = new float[n];
        for(int i=0;i<n;i++){
            System.out.print("Enter the value of array at index "+i+" : ");
            arr[i]= sc.nextFloat();
        }
        for(int i=0;i<arr.length;i++){
            System.out.print((int)arr[i]);
            if(i==arr.length-1){
                break;
            }
            else{
                System.out.print(",");
            }
        sc.close();
        }
    }
}
