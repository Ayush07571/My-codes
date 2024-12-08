package functions;
//To take name as Inout from user anddefine a function to print the name.

import java.util.*;
public class function1 {
    public static void printName(String name) {
        System.out.println("Hello! "+name);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter your name: ");
        String name= sc.next();
        printName(name);
    sc.close();
    }
}
