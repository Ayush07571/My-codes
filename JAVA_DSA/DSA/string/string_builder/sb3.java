public class sb3 {
    public static void main(String[] args) {
        StringBuilder sb = new StringBuilder("Tony");

        //.setCharAt(index,character):
        sb.setCharAt(0, 'P');
        System.out.println(sb); // prints "Pony" instead of Tony

    }
}
