public class sb6 {
    public static void main(String[] args) {
        StringBuilder sb = new StringBuilder("h");

        //to append e,l,l,o and print hello:
        sb.append("e");
        sb.append("l");
        sb.append("l");
        sb.append("o");

        System.out.println(sb); //prints: hello

        //to append ", Ayush" and print "hello, Ayush"
        sb.append(", Ayush");
        System.out.println(sb); //prints: hello, Ayush
    }
}
