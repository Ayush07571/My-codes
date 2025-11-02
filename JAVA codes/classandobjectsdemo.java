import java.util.Scanner;
class Rectangle{
    private int length,breadth;  //Data Members

    //Define Member Functions or methods:
    public void getData(){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Length: ");
        length = sc.nextInt();
        System.out.print("Enter Breadth: ");
        breadth = sc.nextInt();
        sc.close();
    }

    public void setData(int l, int b){
        length = l;
        breadth = b;
    }

    public void displayData(){
        System.out.println("Length: " + length);
        System.out.println("Breadth: " + breadth);
    }

    public void areaPeri(){
        int area = length * breadth;
        int peri = 2 * (length + breadth);
        System.out.println("Area: " + area);
        System.out.println("Perimeter: " + peri);
    }

}

public class classandobjectsdemo {
    public static void main(String[] args) {
        Rectangle r1,r2,r3;  //define three references

        r1 = new Rectangle(); //create object for r1
        r2 = new Rectangle(); //create object for r2
        r3 = new Rectangle(); //create object for r3

        r1.setData(10,20);
        r1.displayData();
        r1.areaPeri();


        r2.setData(5,8);
        r2.displayData();
        r2.areaPeri();

        r3.getData();
        r3.displayData();
        r3.areaPeri();


    }
}
