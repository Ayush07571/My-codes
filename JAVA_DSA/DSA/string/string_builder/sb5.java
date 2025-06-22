public class sb5 {
    public static void main(String[] args) {
        StringBuilder sb = new StringBuilder("Tonny");

        //.delete(starting index, ending index):
        sb.delete(2, 4); //(2,4) => 2 in starting index and 4 is ending index; 4 is not included in the range (i.e. 2 to 3)
        System.out.println(sb);  //Prints: Toy
    }
}
