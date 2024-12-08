package array;


import java.util.*;
public class array_hw3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of array: ");
        int size = sc.nextInt();
        int[] arr = new int[size];

        for(int i=0;i<size;i++){
            System.out.print("Enter the element at index "+i+" :");
            arr[i] = sc.nextInt();
        }
        int e1 = arr[0];
        boolean check=false;

        for(int i=1;i<arr.length;i++){
            if(arr[i]>e1){
                e1=arr[i];
                check=true;
                continue;
            }
            else{
                check=false;
                break;
            }
        }
        if(check){
            System.out.println("Array is sorted in ascending order");
        }
        else{
            System.out.println("Array is not sorted in ascending order");
        }
        sc.close();
    }
}
