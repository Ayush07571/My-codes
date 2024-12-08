package Patterns;
//INVERTED HALF PYRAMID WITH NUMBERS: (TAKES LESS TIME FOR COMPILATION)



public class pattern7_method2 {
    public static void main(String[] args) {
        int n = 5;
        for(int i = 1; i<=n;i++){
            for(int j=1;j<=(n-i+1);j++){
                System.out.print(j+" ");
            }
            System.out.println();
        }
    }   
}
