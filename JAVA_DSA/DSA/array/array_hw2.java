package array;


import java.util.*;

public class array_hw2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of array: ");
        int size = sc.nextInt();
        int[] arr = new int[size];

        for(int i=0;i<size;i++){
            System.out.print("Enter the "+(i+1)+"st number: ");
            arr[i] = sc.nextInt();
        }

        int max=Integer.MIN_VALUE;//arr[0]; 
        int min=Integer.MAX_VALUE;//arr[0]; 


        for(int i=0;i<arr.length;i++){
            
            if(arr[i]>max){
                max=arr[i];  
            } 
            if (arr[i]<min) {
                min=arr[i];                
            }
        
        }
        System.out.println("Maximum number in array is: "+max);
        System.out.println("Minimum number in array is: "+min);

        sc.close();
    }
}
