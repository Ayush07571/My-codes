package array;
import java.util.*;
public class array_2D_2 {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        System.out.print("Enter the number of rows: ");
        int rows=sc.nextInt();
        System.out.print("Enter the number of columns: ");
        int cols=sc.nextInt();
        int[][] arr = new int[rows][cols];
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                System.out.print("Enter the element at position ["+i+"]["+j+"]: ");
                arr[i][j]=sc.nextInt();
            }
        }

        System.out.print("\n\nEnter the number you want to search for: ");
        int num = sc.nextInt();

        boolean found=false;

        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(arr[i][j]==num){
                    System.out.println("Element found at position ["+i+"]["+j+"]\n");
                    found=true;
                    break;
                }
                
            }
        }
        if(found!=true){
            System.out.println("Element not found in the array\n");
        }
        
        sc.close();
    }
}
