class employee{
    int empId;
    String name;
    float salary;

    employee(int i,String n,float s){
        empId = i;
        name = n;
        salary = s;
    }

    void displayData(){
        System.out.println("Employee ID: " + empId);
        System.out.println("Name: " + name);
        System.out.println("Salary: " + salary);
    }

    float calculateAnnualSalary(){
        return salary * 12;
    }
}

public class employeemanagement {
    public static void main(String[] args) {
        employee emp1 = new employee(1,"Karan",5000f);
        employee emp2 = new employee(2,"Arjun",7000f);

        emp1.displayData();
        System.out.println("Annual Salary of 1st Employee: "+emp1.calculateAnnualSalary());
        
        emp2.displayData();
        System.out.println("Annual Salary of 2nd Employee: "+emp2.calculateAnnualSalary());
    }
}
