class Index {
    protected int count;

    public void index(){
        count = 0;
    }

    public int index(int c){
        count = c;
        return count;
    }

    public void display(){
        System.out.println("Count: " + count);
    }

    public void increment(){
        count++;
    }

}

class Index1 extends Index{
    public void decrement(){
        count--;
    }
}




public class inheritanceDemo {
    public static void main(String[] args) {
        Index1 obj = new Index1();
        obj.index(5);
        obj.display();
        obj.decrement();
        obj.display();
        obj.increment();
        obj.display();
    }
}
