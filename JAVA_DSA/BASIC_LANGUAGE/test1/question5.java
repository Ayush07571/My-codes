//Write a function that takes in age as input and returns if that person is eligible to vote or not. A person of age > 18 is eligible to vote

package test1;
import java.util.*;
public class question5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter your age: ");
        int age = sc.nextInt();

        isAdult(age);

        sc.close();
    }

    public static void isAdult(int age) {
        if(age>18){
            System.out.println("You are eligible to vote");
        } else {
            System.out.println("You are not eligible to vote");
        }
    }
}
