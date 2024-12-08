package Patterns;
//Hollow Butterfly

public class pattern15 {
    public static void main(String[] args) {
        int n = 4;
        //upper half
        for (int i = 1; i <= n; i++) {
            //stars1
            for(int j=1;j<=i;j++){
                if(i==1 || j==1 || j==i)
                System.out.print("* ");
                else
                System.out.print("  ");
            }
            //Space
            for(int j=2*(n-i);j>=1;j--){
                System.out.print("  ");
            }
            //stars2
            for(int j=1;j<=i;j++){
                if(i==1 || j==1 || j==i)
                System.out.print("* ");
                else
                System.out.print("  ");
            }
            System.out.println();
        }
        //lower half
        for (int i = n; i >= 1; i--) {
            //stars1
            for(int j=1;j<=i;j++){
                if(i==1 || j==1 || j==i)
                System.out.print("* ");
                else
                System.out.print("  ");
            }
            //Space
            for(int j=2*(n-i);j>=1;j--){
                System.out.print("  ");
            }
            //stars2
            for(int j=1;j<=i;j++){
                if(i==1 || j==1 || j==i)
                System.out.print("* ");
                else
                System.out.print("  ");
            }
            System.out.println();
        }
    }
}
