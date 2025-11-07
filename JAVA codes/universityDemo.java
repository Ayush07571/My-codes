import java.util.Scanner;
abstract class University{
    String subject;

    abstract void subjectChoice(String s);

    void display(){
        System.out.println("Subject chosen: "+subject);

    }
}

class Student extends University{
    void subjectChoice(String s){
        subject = s;
    }   

}

public class universityDemo {
    public static void main(String[] args) {
        University s1 = new Student();
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the subject of your choice: ");
        String s = sc.nextLine();
        s1.subjectChoice(s);
        s1.display();
        sc.close();
    }
}
