

package Patterns;

public class pattern17 {
    public static void main(String[] args) {
        int n=5;
        for(int i=1;i<=n;i++){
            // //spaces
            // for(int j=1;j<=n-i;j++){
            //     System.out.print(" ");
            // }
            //Numbers
            for(int j=1;j<=i;j++){
                if(i==1||j==1||i==n||j==i)
                System.out.print(j+" ");
                else
                System.out.print("  ");
            }
            System.out.println();
        }
    }
}
