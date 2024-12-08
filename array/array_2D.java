package array;
import java.util.*;
public class array_2D {
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
        System.out.println("All elements added Successfully !");
        System.out.println("Want to view the elements (Y/N): ");
        String ch = sc.next().toLowerCase();
        System.out.println();
        System.out.println("Array is:\n");
        if(ch.equals("y")){
            for(int i=0;i<rows;i++){
                for(int j=0;j<cols;j++){
                
                    System.out.print(arr[i][j]+" ");

                }
                System.out.println();
            }
            System.out.println();
        }
        sc.close();

    }
}
