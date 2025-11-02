import java.util.Scanner;
class Number{
    private int i;
    public void setData(int j){
        i = j;
    }

    public void getData(){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter any integer: ");
        i= sc.nextInt();
        sc.close();    
    }

    public Number(){ }   //Zero Argument Constructor

    public Number(int j){    //One Argument Constructor
        i = j;
    }

    public void displayData(){
        System.out.println("The number is: " + i);
    }
}


public class constructorsDemo {
    public static void main(String[] args) {
        Number n1,n2,n3;

        n1= new Number(); //Zero Argument Constructor
        n1.displayData();
        n1.setData(20);
        n1.displayData();

        n2= new Number(); //Zero Argument Constructor
        n2.displayData();
        n2.getData(); 
        n2.displayData();

        n3= new Number(50); //One Argument Constructor
        n3.displayData();
    }
}
