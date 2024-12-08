package Patterns;
//inverted half pyramid (rotated by 180 degrees)



public class pattern5 {
    public static void main(String[] args) {
        int n = 4;
        for(int i = 1;i<=n;i++) //no of rows (outer loop)
        {
            //inner loop1(SPACE)
            for(int j=1;j<=(n-i);j++){
               System.out.print("  ");
            }
            //inner loop2(STAR)
            for(int j=1;j<=i;j++){
                System.out.print("* ");
               }
        System.out.println();
        }
    }
}
