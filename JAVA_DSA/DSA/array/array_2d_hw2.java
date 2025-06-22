//For a given matrix of N x M, print its transpose.

package array;

import java.util.*;

public class array_2d_hw2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of rows: ");
        int rows = sc.nextInt();
        System.out.print("Enter the number of columns: ");
        int columns = sc.nextInt();

        int arr[][] = new int[rows][columns];

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                System.out.print("Enter element for (" + i + "," + j + "): ");
                arr[i][j] = sc.nextInt();
            }
        }

        System.out.println("\nElements added Successfully! \n");
        System.out.println("Now, printing Transpose of this matrix: ");

        for (int i = 0; i < columns; i++) {
            for (int j = 0; j < rows; j++) {
                System.out.print(arr[j][i] + " ");
            }
            System.out.println();
        }

        sc.close();
    }
}
