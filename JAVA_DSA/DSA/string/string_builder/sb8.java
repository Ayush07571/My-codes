//To reverse a string:
public class sb8 {
    public static void main(String[] args) {
        String str = "Hello";
        StringBuilder sb = new StringBuilder("");
        for(int i = str.length()-1; i>=0; i-- ){
            sb.append(str.charAt(i));
        }

        System.out.println("Reveres String: "+sb);
    }
}
