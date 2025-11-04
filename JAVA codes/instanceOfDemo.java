class Animal{
    String species;

    Animal(String s){
        species = s;
    }

    Animal(){
        species = "Unknown";
    }

}

class Dog extends Animal{
    String name;

    Dog(String n){
        name = n;
    }

    Dog(){
        name = "Unnamed";
    }
}


public class instanceOfDemo {
    public static void main(String[] args) {

        Dog d1 = new Dog("Buddy");

        if (d1 instanceof Dog && d1 instanceof Animal) {
            System.out.println("d1 is an instance of both Dog and Animal classes.");
        }
        else if(d1 instanceof Dog){
            System.out.println("d1 is an instance of Dog class only.");
        }
        else if(d1 instanceof Animal){
            System.out.println("d1 is an instance of Animal class only.");
        }
        else{
            System.out.println("d1 is neither an instance of Dog nor Animal class.");
        }
    }
}
