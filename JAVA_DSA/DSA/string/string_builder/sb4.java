public class sb4 {
    public static void main(String[] args) {
        StringBuilder sb = new StringBuilder("Tony");

        //.insert(index,character):
        sb.insert(0, "S");
        System.out.println(sb); //Prints : STony

        sb.insert(4,'n');
        System.out.println(sb); //Prints : STonny

        sb.insert(6, " Stark");
        System.out.println(sb); //Prints : STonny Stark
    }
}
