

import java.util.*;

public class sum_natural_nos {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of natural numbers: ");
        int n = sc.nextInt();
        int sum=0;
        for (int i = 1;i<=n;i++) {
            sum+=i;
    
        }
        System.out.println("sum: "+sum);
    sc.close();
    }
}
