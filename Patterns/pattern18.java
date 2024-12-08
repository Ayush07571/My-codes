package Patterns;

public class pattern18 {
    public static void main(String[] args) {
        int n = 4;
        int c=1;
        for(int i=n;i>=1;i--){
            for(int j=n-i;j>=1;j--){
                System.out.print(" ");
            }
            for(int j=i;j>=1;j--){
                System.out.print(c+" ");
            }
            c++;
            System.out.println();
        }
    }
}
